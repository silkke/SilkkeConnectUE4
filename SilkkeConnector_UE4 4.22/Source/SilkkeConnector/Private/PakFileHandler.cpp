// Fill out your copyright notice in the Description page of Project Settings.

#include "PakFileHandler.h"

UPakFileHandler* UPakFileHandler::MakeDownloader()
{
	return NewObject<UPakFileHandler>();
}

USkeletalMesh* UPakFileHandler::SetSkeletalMeshSkeleton(USkeletalMesh* skeletalMesh, USkeleton* skeleton)
{
	skeletalMesh->Skeleton = skeleton;
	return skeletalMesh;
}

bool UPakFileHandler::IsEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}

UPakFileHandler* UPakFileHandler::DownloadFile(const FString& Url, FString SavePath)
{
	FileUrl = Url;
	FileSavePath = SavePath;

	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb("GET");
	HttpRequest->SetURL(Url);
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UPakFileHandler::OnReady);
	HttpRequest->OnRequestProgress().BindUObject(this, &UPakFileHandler::OnProgress_Internal);

	// Execute the request
	HttpRequest->ProcessRequest();
	AddToRoot();

	return this;
}

void UPakFileHandler::CheckPakExist(const FString& Url)
{
	FileUrl = Url;
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb("GET");
	HttpRequest->SetURL(Url);
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UPakFileHandler::OnReadyCheckFileExist);

	// Execute the request
	HttpRequest->ProcessRequest();
	AddToRoot();
}

void UPakFileHandler::OnReadyCheckFileExist(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	RemoveFromRoot();
	Request->OnProcessRequestComplete().Unbind();

	if (Response.IsValid() && EHttpResponseCodes::IsOk(Response->GetResponseCode()))
	{
		OnCheckPakResult.Broadcast(true);
	}
	else
	{
		OnCheckPakResult.Broadcast(false);
		//OnResult.Broadcast(EDownloadResult::DownloadFailed);
	}
}

void UPakFileHandler::OnReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	RemoveFromRoot();
	Request->OnProcessRequestComplete().Unbind();

	if (Response.IsValid() && EHttpResponseCodes::IsOk(Response->GetResponseCode()))
	{
		// SAVE FILE
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

		// create save directory if not exist
		FString Path, Filename, Extension;
		FPaths::Split(FPaths::ProjectDir() + FileSavePath, Path, Filename, Extension);

		if (!PlatformFile.DirectoryExists(*Path))
		{
			if (!PlatformFile.CreateDirectoryTree(*Path))
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to create directory..."));
				OnResult.Broadcast(EDownloadResult::DirectoryCreationFailed);
				return;
			}
		}

		// Get path
		FString FullPath = FPaths::ProjectDir() + FileSavePath;

		// open/create the file
		IFileHandle* FileHandle = PlatformFile.OpenWrite(*FullPath);
		if (FileHandle)
		{
			// write the file
			FileHandle->Write(Response->GetContent().GetData(), Response->GetContentLength());
			// Close the file
			delete FileHandle;

			OnResult.Broadcast(EDownloadResult::Success);
		}
		else
		{
			OnResult.Broadcast(EDownloadResult::SaveFailed);
		}
	}
	else
	{
		OnResult.Broadcast(EDownloadResult::DownloadFailed);
	}
}

void UPakFileHandler::OnProgress_Internal(FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived)
{
	FHttpResponsePtr HttpResponse = Request->GetResponse();

	if (HttpResponse.IsValid())
	{
		int32 FullSize = HttpResponse->GetContentLength();
		OnProgress.Broadcast(BytesSent, BytesReceived, FullSize);
	}
}

TArray<FString> UPakFileHandler::GetAllPakFiles(const FString& Directory, const FString& FileExtension)
{
	TArray<FString> FoundedFiles;

	IFileManager& FileManager = IFileManager::Get();
	FileManager.FindFiles(FoundedFiles, *Directory, *FileExtension);

	UE_LOG(LogTemp, Log, TEXT("===== Trying to found files... ====="));
	for (FString file : FoundedFiles)
		UE_LOG(LogTemp, Log, TEXT("===== Path: %s ====="), *file);

	return FoundedFiles;
}

void UPakFileHandler::GetAvatarFilesInFolder(const FString& Directory, const FString& avatarID, USkeletalMesh* &skeletalMesh, UTexture2D* &texture2D)
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(FName("AssetRegistry"));
	IAssetRegistry& assetRegistry = AssetRegistryModule.Get();

	assetRegistry.ScanPathsSynchronous({ Directory }, true);

	UObjectLibrary* library = UObjectLibrary::CreateLibrary(UObject::StaticClass(), false, false);
	library->LoadAssetDataFromPath(*Directory);
	TArray<FAssetData> assetData;
	library->GetAssetDataList(assetData);

	UE_LOG(LogTemp, Log, TEXT("=== Starting assetData search: %s ==="), *Directory);

	for (FAssetData& data : assetData)
	{
		if (data.GetFullName().Contains(avatarID))
		{
			UE_LOG(LogTemp, Log, TEXT("Assets founds -> Class: %s, Name: %s"), *data.GetClass()->GetName(), *data.GetFullName());

			if (data.GetClass() == UTexture2D::StaticClass())
				texture2D = Cast<UTexture2D>(data.GetAsset());
			if (data.GetClass() == USkeletalMesh::StaticClass())
				skeletalMesh = Cast<USkeletalMesh>(data.GetAsset());
		}
	}
}

void UPakFileHandler::DeleteFilesInFolder(const FString& Directory)
{
	TArray<FString> FoundedFiles;

	IFileManager& FileManager = IFileManager::Get();
	FileManager.FindFiles(FoundedFiles, *Directory);

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (FPlatformFileManager::Get().GetPlatformFile().DeleteDirectoryRecursively(*Directory))
	{
		UE_LOG(LogTemp, Log, TEXT("===== Removed file: %s ====="), *Directory);
	}

	return;

	for (FString file : FoundedFiles)
	{
		FString AbsoluteFilePath = Directory + "/" + *file;


		if (FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*AbsoluteFilePath))
		{
			UE_LOG(LogTemp, Log, TEXT("===== Removed file: %s ====="), *AbsoluteFilePath);
		}
		/*
		else if (FPlatformFileManager::Get().GetPlatformFile().DeleteDirectory(*AbsoluteFilePath))
		{
			UE_LOG(LogTemp, Log, TEXT("===== Removed folder: %s ====="), *AbsoluteFilePath);
		}
		*/
		else
		{
			UE_LOG(LogTemp, Log, TEXT("===== Can't remove: %s ====="), *AbsoluteFilePath);
		}
	}
}

FString UPakFileHandler::GetAbsoluteProjectPath()
{
	return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());
}

void UPakFileHandler::MountPakAndStartAssetLoading(const FString& avatarID, const FString & PakFolder, const FString& PakName, const FString& MountPoint, TArray<UObject*> &Classes)
{
	TArray<UObject*> loadedObj;

	UE_LOG(LogTemp, Log, TEXT("============= START LOADING PAK ============="));
	if (!PakFolder.IsEmpty() && !PakName.IsEmpty() && PakName.Right(3).Equals(TEXT("pak"), ESearchCase::IgnoreCase))
	{
		IPlatformFile* PreviousPlatformFile = nullptr;
		FPakPlatformFile *PlatformFile = nullptr;
		if (FString(FPlatformFileManager::Get().GetPlatformFile().GetName()).Equals(FString(TEXT("PakFile"))))
		{
			PlatformFile = static_cast<FPakPlatformFile*>(&FPlatformFileManager::Get().GetPlatformFile());
		}
		else
		{
			PlatformFile = new FPakPlatformFile();

			if (!PlatformFile->Initialize(&FPlatformFileManager::Get().GetPlatformFile(), TEXT("")))
			{
				UE_LOG(LogTemp, Error, TEXT("FPakPlatformFile failed to initialize"));
				return;
			}
			PreviousPlatformFile = &FPlatformFileManager::Get().GetPlatformFile();

			PlatformFile->InitializeNewAsyncIO();

			FPlatformFileManager::Get().SetPlatformFile(*PlatformFile);
		}

		FString FullPakFolder(FPaths::ConvertRelativePathToFull(PakFolder));
		if (!PlatformFile->DirectoryExists(*FullPakFolder))
		{
			UE_LOG(LogTemp, Error, TEXT("Directory not found, trying to create it: %s"), *FullPakFolder);
			PlatformFile->CreateDirectory(*FullPakFolder);
			if (!PlatformFile->DirectoryExists(*FullPakFolder))
			{
				UE_LOG(LogTemp, Error, TEXT("Directory not found and can't be created: %s"), *FullPakFolder);
				return;
			}
		}
		else UE_LOG(LogTemp, Warning, TEXT("Pak folder verified: %s"), *FullPakFolder);


		FString FullPath = FPaths::Combine(PakFolder, PakName);

		FPakFile PakFile(PlatformFile, *FullPath, false);
		if (PakFile.IsValid())
		{
			FString InMountPoint = MountPoint;
			
#if WITH_EDITOR
			FString RelativePath = FPaths::ProjectContentDir() + MountPoint;
			InMountPoint = IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*RelativePath);
#else
			InMountPoint = FPaths::ProjectContentDir() + MountPoint;
#endif

			PakFile.SetMountPoint(*InMountPoint);

			UE_LOG(LogTemp, Log, TEXT("===== FullPath: %s ====="), *FullPath);
			UE_LOG(LogTemp, Log, TEXT("===== PakFile.GetMountPoint(): %s ====="), *PakFile.GetMountPoint());

			if (PlatformFile->Mount(*FullPath, 0, *InMountPoint))
			{
				UE_LOG(LogTemp, Log, TEXT("=== PAK SUCCESSFULLY MOUNTED ==="));

				TArray<FString> Files;
				PakFile.FindFilesAtPath(Files, *InMountPoint, true, false, true);

				UE_LOG(LogTemp, Log, TEXT("Number of files found: %d"), Files.Num());
				if (Files.Num() > 0)
				{
					for (FString file : Files)
						UE_LOG(LogTemp, Log, TEXT("=== Files in mountPoint: %s ==="), *file);

					FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(FName("AssetRegistry"));
					IAssetRegistry& assetRegistry = AssetRegistryModule.Get();

					FString contentRelativeDir(TEXT("/Game/SilkkeConnector/AvatarsPak"));
					assetRegistry.ScanPathsSynchronous({ contentRelativeDir }, true);

					UObjectLibrary* library = UObjectLibrary::CreateLibrary(UObject::StaticClass(), false, false);
					library->LoadAssetDataFromPath(*contentRelativeDir);
					TArray<FAssetData> assetData;
					library->GetAssetDataList(assetData);

					UE_LOG(LogTemp, Log, TEXT("=== Starting assetData search: %s ==="), *contentRelativeDir);

					for (FAssetData& data : assetData)
					{
						if (data.GetFullName().Contains(avatarID))
						{
							UE_LOG(LogTemp, Log, TEXT("MountedCheck AssetDataFound, Class: %s, Name: %s"), *data.GetClass()->GetName(), *data.GetFullName());
							loadedObj.Add(data.GetAsset());
						}
					}

					Classes = loadedObj;
				}

				// return previous platform file manager to the top of the chain, so Unreal doesn't lose it's references
				if (PreviousPlatformFile != nullptr)
					FPlatformFileManager::Get().SetPlatformFile(*PreviousPlatformFile);

				if (PlatformFile->Unmount(*FullPath))
					UE_LOG(LogClass, Log, TEXT("============= Pak unmounted with success '%s' ============="), *FullPath);
			}

			UE_LOG(LogTemp, Log, TEXT("============= END LOADING PAK ============="));
		}
	}
}
