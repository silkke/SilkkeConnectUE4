// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "IHttpBase.h"
#include "HttpModule.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "CoreMinimal.h"
#include "IPlatformFilePak.h"
#include "AssetRegistryModule.h"
#include "PlatformFilemanager.h"
#include "PakFileHandler.generated.h"

/**
* Possible results from a download request.
*/
UENUM(BlueprintType, Category = "HTTP")
enum class EDownloadResult : uint8
{
	Success,
	DownloadFailed,
	SaveFailed,
	DirectoryCreationFailed
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResult, const EDownloadResult, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnProgress, const int32, BytesSent, const int32, BytesReceived, const int32, ContentLength);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckPakResult, const bool, Result);

/**
 * 
 */
UCLASS(Blueprintable)
class SILKKECONNECTOR_API UPakFileHandler : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, Category = "HTTP")
	FOnCheckPakResult OnCheckPakResult;

	/**
	* Bind to know when the download is complete (even if it fails).
	*/
	UPROPERTY(BlueprintAssignable, Category = "HTTP")
	FOnResult OnResult;

	/**
	* Bind to know when the download is complete (even if it fails).
	*/
	UPROPERTY(BlueprintAssignable, Category = "HTTP")
	FOnProgress OnProgress;

	/**
	* The URL used to start this download.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "HTTP")
	FString FileUrl;

	/**
	* The path set to save the downloaded file.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "HTTP")
	FString FileSavePath;

	/**
	* Instantiates a FileDownloader object, starts downloading and saves it when done.
	*
	* @return The FileDownloader object. Bind to it's OnResult event to know when it's done downloading.
	*/
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Make Downloader"), Category = "HTTP")
	static UPakFileHandler* MakeDownloader();

	/**
	* Starts downloading a file and saves it when done. Bind to the OnResult
	* event to know when the download is done (preferrably, before calling this function).
	*
	* @param Url		The file Url to be downloaded.
	* @param SavePath	The absolute path and file name to save the downloaded file.
	* @return Returns itself.
	*/
	UFUNCTION(BlueprintCallable, Category = "HTTP")
	UPakFileHandler* DownloadFile(const FString& Url, FString SavePath);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
	void MountPakAndStartAssetLoading(const FString& avatarID, const FString& PakFolder, const FString& PakName, const FString& MountPoint, TArray<UObject*> &Classes);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
	static FString GetAbsoluteProjectPath();

	UFUNCTION(BlueprintCallable, Category = "Silkke")
	static bool IsEditor();

	UFUNCTION(BlueprintCallable, Category = "Silkke")
	USkeletalMesh* SetSkeletalMeshSkeleton(USkeletalMesh* skeletalMesh, USkeleton* skeleton);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
	void CheckPakExist(const FString& Url);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
	TArray<FString> GetAllPakFiles(const FString& Directory, const FString& FileExtension);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
	void GetAvatarFilesInFolder(const FString& Directory, const FString& avatarID, USkeletalMesh* &skeletalMesh, UTexture2D* &texture2D);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
	static void DeleteFilesInFolder(const FString& Directory);

private:
	void OnReadyCheckFileExist(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnProgress_Internal(FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived);
};
