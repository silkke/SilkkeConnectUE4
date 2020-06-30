// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "Interfaces/IHttpBase.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "CoreMinimal.h"
#include "IPlatformFilePak.h"
#include "AssetRegistryModule.h"
#include "HAL/PlatformFilemanager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PakUtilitiesBPLibrary.generated.h"

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


/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UPakUtilitiesBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "Silkke")
		static void MountPakAndStartAssetLoading(const FString& avatarID, const FString& PakFolder, const FString& PakName, const FString& MountPoint, TArray<UObject*>& Classes);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
		static FString GetAbsoluteProjectPath();

	UFUNCTION(BlueprintCallable, Category = "Silkke")
		static bool IsEditor();

	UFUNCTION(BlueprintCallable, Category = "Silkke")
		static USkeletalMesh* SetSkeletalMeshSkeleton(USkeletalMesh* skeletalMesh, USkeleton* skeleton);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
		static TArray<FString> GetAllPakFiles(const FString& Directory, const FString& FileExtension);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
		static void GetAvatarFilesInFolder(const FString& Directory, const FString& avatarID, USkeletalMesh*& skeletalMesh, UTexture2D*& texture2D);

	UFUNCTION(BlueprintCallable, Category = "Silkke")
		static void DeleteFilesInFolder(const FString& Directory);

	UPROPERTY(BlueprintAssignable, Category = "HTTP")
		FOnCheckPakResult OnCheckPakResult;

	UPROPERTY(BlueprintAssignable, Category = "HTTP")
		FOnResult OnResult;

	UPROPERTY(BlueprintAssignable, Category = "HTTP")
		FOnProgress OnProgress;

	UPROPERTY(BlueprintReadOnly, Category = "HTTP")
		FString FileUrl;

	UPROPERTY(BlueprintReadOnly, Category = "HTTP")
		FString FileSavePath;

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Make Downloader"), Category = "HTTP")
		static UPakUtilitiesBPLibrary* MakeDownloader();

	UFUNCTION(BlueprintCallable, Category = "HTTP")
		UPakUtilitiesBPLibrary* DownloadFile(const FString& Url, FString SavePath);

private:
	void OnReadyCheckFileExist(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnProgress_Internal(FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived);
};
