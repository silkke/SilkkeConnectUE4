// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PakUtilities/Public/PakUtilitiesBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePakUtilitiesBPLibrary() {}
// Cross Module References
	PAKUTILITIES_API UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PakUtilities();
	PAKUTILITIES_API UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature();
	PAKUTILITIES_API UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature();
	PAKUTILITIES_API UEnum* Z_Construct_UEnum_PakUtilities_EDownloadResult();
	PAKUTILITIES_API UClass* Z_Construct_UClass_UPakUtilitiesBPLibrary_NoRegister();
	PAKUTILITIES_API UClass* Z_Construct_UClass_UPakUtilitiesBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics
	{
		struct _Script_PakUtilities_eventOnCheckPakResult_Parms
		{
			bool Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((_Script_PakUtilities_eventOnCheckPakResult_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_PakUtilities_eventOnCheckPakResult_Parms), &Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PakUtilities, nullptr, "OnCheckPakResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_PakUtilities_eventOnCheckPakResult_Parms), Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics
	{
		struct _Script_PakUtilities_eventOnProgress_Parms
		{
			int32 BytesSent;
			int32 BytesReceived;
			int32 ContentLength;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesSent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PakUtilities_eventOnProgress_Parms, ContentLength), METADATA_PARAMS(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PakUtilities_eventOnProgress_Parms, BytesReceived), METADATA_PARAMS(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PakUtilities_eventOnProgress_Parms, BytesSent), METADATA_PARAMS(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_ContentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::NewProp_BytesSent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PakUtilities, nullptr, "OnProgress__DelegateSignature", nullptr, nullptr, sizeof(_Script_PakUtilities_eventOnProgress_Parms), Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics
	{
		struct _Script_PakUtilities_eventOnResult_Parms
		{
			EDownloadResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PakUtilities_eventOnResult_Parms, Result), Z_Construct_UEnum_PakUtilities_EDownloadResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PakUtilities, nullptr, "OnResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_PakUtilities_eventOnResult_Parms), Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EDownloadResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PakUtilities_EDownloadResult, Z_Construct_UPackage__Script_PakUtilities(), TEXT("EDownloadResult"));
		}
		return Singleton;
	}
	template<> PAKUTILITIES_API UEnum* StaticEnum<EDownloadResult>()
	{
		return EDownloadResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDownloadResult(EDownloadResult_StaticEnum, TEXT("/Script/PakUtilities"), TEXT("EDownloadResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PakUtilities_EDownloadResult_Hash() { return 4153549471U; }
	UEnum* Z_Construct_UEnum_PakUtilities_EDownloadResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PakUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDownloadResult"), 0, Get_Z_Construct_UEnum_PakUtilities_EDownloadResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDownloadResult::Success", (int64)EDownloadResult::Success },
				{ "EDownloadResult::DownloadFailed", (int64)EDownloadResult::DownloadFailed },
				{ "EDownloadResult::SaveFailed", (int64)EDownloadResult::SaveFailed },
				{ "EDownloadResult::DirectoryCreationFailed", (int64)EDownloadResult::DirectoryCreationFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "HTTP" },
				{ "Comment", "/**\n* Possible results from a download request.\n*/" },
				{ "DirectoryCreationFailed.Name", "EDownloadResult::DirectoryCreationFailed" },
				{ "DownloadFailed.Name", "EDownloadResult::DownloadFailed" },
				{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
				{ "SaveFailed.Name", "EDownloadResult::SaveFailed" },
				{ "Success.Name", "EDownloadResult::Success" },
				{ "ToolTip", "Possible results from a download request." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PakUtilities,
				nullptr,
				"EDownloadResult",
				"EDownloadResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execDownloadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPakUtilitiesBPLibrary**)Z_Param__Result=P_THIS->DownloadFile(Z_Param_Url,Z_Param_SavePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execMakeDownloader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPakUtilitiesBPLibrary**)Z_Param__Result=UPakUtilitiesBPLibrary::MakeDownloader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execDeleteFilesInFolder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPakUtilitiesBPLibrary::DeleteFilesInFolder(Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execGetAvatarFilesInFolder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_GET_PROPERTY(FStrProperty,Z_Param_avatarID);
		P_GET_OBJECT_REF(USkeletalMesh,Z_Param_Out_skeletalMesh);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPakUtilitiesBPLibrary::GetAvatarFilesInFolder(Z_Param_Directory,Z_Param_avatarID,Z_Param_Out_skeletalMesh,Z_Param_Out_texture2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execGetAllPakFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UPakUtilitiesBPLibrary::GetAllPakFiles(Z_Param_Directory,Z_Param_FileExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execSetSkeletalMeshSkeleton)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_OBJECT(USkeleton,Z_Param_skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UPakUtilitiesBPLibrary::SetSkeletalMeshSkeleton(Z_Param_skeletalMesh,Z_Param_skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPakUtilitiesBPLibrary::IsEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execGetAbsoluteProjectPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPakUtilitiesBPLibrary::GetAbsoluteProjectPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakUtilitiesBPLibrary::execMountPakAndStartAssetLoading)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_avatarID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PakFolder);
		P_GET_PROPERTY(FStrProperty,Z_Param_PakName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MountPoint);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Classes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPakUtilitiesBPLibrary::MountPakAndStartAssetLoading(Z_Param_avatarID,Z_Param_PakFolder,Z_Param_PakName,Z_Param_MountPoint,Z_Param_Out_Classes);
		P_NATIVE_END;
	}
	void UPakUtilitiesBPLibrary::StaticRegisterNativesUPakUtilitiesBPLibrary()
	{
		UClass* Class = UPakUtilitiesBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteFilesInFolder", &UPakUtilitiesBPLibrary::execDeleteFilesInFolder },
			{ "DownloadFile", &UPakUtilitiesBPLibrary::execDownloadFile },
			{ "GetAbsoluteProjectPath", &UPakUtilitiesBPLibrary::execGetAbsoluteProjectPath },
			{ "GetAllPakFiles", &UPakUtilitiesBPLibrary::execGetAllPakFiles },
			{ "GetAvatarFilesInFolder", &UPakUtilitiesBPLibrary::execGetAvatarFilesInFolder },
			{ "IsEditor", &UPakUtilitiesBPLibrary::execIsEditor },
			{ "MakeDownloader", &UPakUtilitiesBPLibrary::execMakeDownloader },
			{ "MountPakAndStartAssetLoading", &UPakUtilitiesBPLibrary::execMountPakAndStartAssetLoading },
			{ "SetSkeletalMeshSkeleton", &UPakUtilitiesBPLibrary::execSetSkeletalMeshSkeleton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics
	{
		struct PakUtilitiesBPLibrary_eventDeleteFilesInFolder_Parms
		{
			FString Directory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventDeleteFilesInFolder_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::NewProp_Directory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::NewProp_Directory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Silkke" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "DeleteFilesInFolder", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventDeleteFilesInFolder_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics
	{
		struct PakUtilitiesBPLibrary_eventDownloadFile_Parms
		{
			FString Url;
			FString SavePath;
			UPakUtilitiesBPLibrary* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventDownloadFile_Parms, ReturnValue), Z_Construct_UClass_UPakUtilitiesBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventDownloadFile_Parms, SavePath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventDownloadFile_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_SavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "DownloadFile", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventDownloadFile_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics
	{
		struct PakUtilitiesBPLibrary_eventGetAbsoluteProjectPath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventGetAbsoluteProjectPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Silkke" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "GetAbsoluteProjectPath", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventGetAbsoluteProjectPath_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics
	{
		struct PakUtilitiesBPLibrary_eventGetAllPakFiles_Parms
		{
			FString Directory;
			FString FileExtension;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventGetAllPakFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_FileExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventGetAllPakFiles_Parms, FileExtension), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_FileExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_FileExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventGetAllPakFiles_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_Directory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_FileExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::NewProp_Directory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Silkke" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "GetAllPakFiles", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventGetAllPakFiles_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics
	{
		struct PakUtilitiesBPLibrary_eventGetAvatarFilesInFolder_Parms
		{
			FString Directory;
			FString avatarID;
			USkeletalMesh* skeletalMesh;
			UTexture2D* texture2D;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture2D;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_avatarID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_texture2D = { "texture2D", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventGetAvatarFilesInFolder_Parms, texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventGetAvatarFilesInFolder_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_avatarID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_avatarID = { "avatarID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventGetAvatarFilesInFolder_Parms, avatarID), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_avatarID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_avatarID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventGetAvatarFilesInFolder_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_Directory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_texture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_skeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_avatarID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::NewProp_Directory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Silkke" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "GetAvatarFilesInFolder", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventGetAvatarFilesInFolder_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics
	{
		struct PakUtilitiesBPLibrary_eventIsEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakUtilitiesBPLibrary_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PakUtilitiesBPLibrary_eventIsEditor_Parms), &Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Silkke" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "IsEditor", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventIsEditor_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics
	{
		struct PakUtilitiesBPLibrary_eventMakeDownloader_Parms
		{
			UPakUtilitiesBPLibrary* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventMakeDownloader_Parms, ReturnValue), Z_Construct_UClass_UPakUtilitiesBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP" },
		{ "DisplayName", "Make Downloader" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "MakeDownloader", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventMakeDownloader_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics
	{
		struct PakUtilitiesBPLibrary_eventMountPakAndStartAssetLoading_Parms
		{
			FString avatarID;
			FString PakFolder;
			FString PakName;
			FString MountPoint;
			TArray<UObject*> Classes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Classes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Classes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MountPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatarID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_avatarID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventMountPakAndStartAssetLoading_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_MountPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventMountPakAndStartAssetLoading_Parms, MountPoint), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_MountPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_MountPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakName = { "PakName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventMountPakAndStartAssetLoading_Parms, PakName), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakFolder = { "PakFolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventMountPakAndStartAssetLoading_Parms, PakFolder), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_avatarID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_avatarID = { "avatarID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventMountPakAndStartAssetLoading_Parms, avatarID), METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_avatarID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_avatarID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_Classes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_Classes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_MountPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_PakFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::NewProp_avatarID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Silkke" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "MountPakAndStartAssetLoading", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventMountPakAndStartAssetLoading_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics
	{
		struct PakUtilitiesBPLibrary_eventSetSkeletalMeshSkeleton_Parms
		{
			USkeletalMesh* skeletalMesh;
			USkeleton* skeleton;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeleton;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventSetSkeletalMeshSkeleton_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventSetSkeletalMeshSkeleton_Parms, skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PakUtilitiesBPLibrary_eventSetSkeletalMeshSkeleton_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::NewProp_skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::NewProp_skeletalMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Silkke" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakUtilitiesBPLibrary, nullptr, "SetSkeletalMeshSkeleton", nullptr, nullptr, sizeof(PakUtilitiesBPLibrary_eventSetSkeletalMeshSkeleton_Parms), Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPakUtilitiesBPLibrary_NoRegister()
	{
		return UPakUtilitiesBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileSavePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCheckPakResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckPakResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PakUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_DeleteFilesInFolder, "DeleteFilesInFolder" }, // 2363191334
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_DownloadFile, "DownloadFile" }, // 2070279378
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAbsoluteProjectPath, "GetAbsoluteProjectPath" }, // 993016371
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAllPakFiles, "GetAllPakFiles" }, // 3898797376
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_GetAvatarFilesInFolder, "GetAvatarFilesInFolder" }, // 377680465
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_IsEditor, "IsEditor" }, // 4159458092
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_MakeDownloader, "MakeDownloader" }, // 3955422603
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_MountPakAndStartAssetLoading, "MountPakAndStartAssetLoading" }, // 4061611949
		{ &Z_Construct_UFunction_UPakUtilitiesBPLibrary_SetSkeletalMeshSkeleton, "SetSkeletalMeshSkeleton" }, // 1592458536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "PakUtilitiesBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileSavePath_MetaData[] = {
		{ "Category", "HTTP" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileSavePath = { "FileSavePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPakUtilitiesBPLibrary, FileSavePath), METADATA_PARAMS(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileSavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileSavePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileUrl_MetaData[] = {
		{ "Category", "HTTP" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileUrl = { "FileUrl", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPakUtilitiesBPLibrary, FileUrl), METADATA_PARAMS(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnProgress_MetaData[] = {
		{ "Category", "HTTP" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPakUtilitiesBPLibrary, OnProgress), Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnResult_MetaData[] = {
		{ "Category", "HTTP" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnResult = { "OnResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPakUtilitiesBPLibrary, OnResult), Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnCheckPakResult_MetaData[] = {
		{ "Category", "HTTP" },
		{ "ModuleRelativePath", "Public/PakUtilitiesBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnCheckPakResult = { "OnCheckPakResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPakUtilitiesBPLibrary, OnCheckPakResult), Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnCheckPakResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnCheckPakResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileSavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_FileUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::NewProp_OnCheckPakResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPakUtilitiesBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::ClassParams = {
		&UPakUtilitiesBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPakUtilitiesBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPakUtilitiesBPLibrary, 2630969397);
	template<> PAKUTILITIES_API UClass* StaticClass<UPakUtilitiesBPLibrary>()
	{
		return UPakUtilitiesBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPakUtilitiesBPLibrary(Z_Construct_UClass_UPakUtilitiesBPLibrary, &UPakUtilitiesBPLibrary::StaticClass, TEXT("/Script/PakUtilities"), TEXT("UPakUtilitiesBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPakUtilitiesBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
