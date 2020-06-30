// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDownloadResult : uint8;
class UPakUtilitiesBPLibrary;
class USkeletalMesh;
class UTexture2D;
class USkeleton;
class UObject;
#ifdef PAKUTILITIES_PakUtilitiesBPLibrary_generated_h
#error "PakUtilitiesBPLibrary.generated.h already included, missing '#pragma once' in PakUtilitiesBPLibrary.h"
#endif
#define PAKUTILITIES_PakUtilitiesBPLibrary_generated_h

#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_32_DELEGATE \
struct _Script_PakUtilities_eventOnCheckPakResult_Parms \
{ \
	bool Result; \
}; \
static inline void FOnCheckPakResult_DelegateWrapper(const FMulticastScriptDelegate& OnCheckPakResult, bool Result) \
{ \
	_Script_PakUtilities_eventOnCheckPakResult_Parms Parms; \
	Parms.Result=Result ? true : false; \
	OnCheckPakResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_30_DELEGATE \
struct _Script_PakUtilities_eventOnProgress_Parms \
{ \
	int32 BytesSent; \
	int32 BytesReceived; \
	int32 ContentLength; \
}; \
static inline void FOnProgress_DelegateWrapper(const FMulticastScriptDelegate& OnProgress, const int32 BytesSent, const int32 BytesReceived, const int32 ContentLength) \
{ \
	_Script_PakUtilities_eventOnProgress_Parms Parms; \
	Parms.BytesSent=BytesSent; \
	Parms.BytesReceived=BytesReceived; \
	Parms.ContentLength=ContentLength; \
	OnProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_29_DELEGATE \
struct _Script_PakUtilities_eventOnResult_Parms \
{ \
	EDownloadResult Result; \
}; \
static inline void FOnResult_DelegateWrapper(const FMulticastScriptDelegate& OnResult, const EDownloadResult Result) \
{ \
	_Script_PakUtilities_eventOnResult_Parms Parms; \
	Parms.Result=Result; \
	OnResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_SPARSE_DATA
#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownloadFile); \
	DECLARE_FUNCTION(execMakeDownloader); \
	DECLARE_FUNCTION(execDeleteFilesInFolder); \
	DECLARE_FUNCTION(execGetAvatarFilesInFolder); \
	DECLARE_FUNCTION(execGetAllPakFiles); \
	DECLARE_FUNCTION(execSetSkeletalMeshSkeleton); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execGetAbsoluteProjectPath); \
	DECLARE_FUNCTION(execMountPakAndStartAssetLoading);


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownloadFile); \
	DECLARE_FUNCTION(execMakeDownloader); \
	DECLARE_FUNCTION(execDeleteFilesInFolder); \
	DECLARE_FUNCTION(execGetAvatarFilesInFolder); \
	DECLARE_FUNCTION(execGetAllPakFiles); \
	DECLARE_FUNCTION(execSetSkeletalMeshSkeleton); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execGetAbsoluteProjectPath); \
	DECLARE_FUNCTION(execMountPakAndStartAssetLoading);


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPakUtilitiesBPLibrary(); \
	friend struct Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPakUtilitiesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PakUtilities"), NO_API) \
	DECLARE_SERIALIZER(UPakUtilitiesBPLibrary)


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUPakUtilitiesBPLibrary(); \
	friend struct Z_Construct_UClass_UPakUtilitiesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPakUtilitiesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PakUtilities"), NO_API) \
	DECLARE_SERIALIZER(UPakUtilitiesBPLibrary)


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPakUtilitiesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPakUtilitiesBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPakUtilitiesBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPakUtilitiesBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPakUtilitiesBPLibrary(UPakUtilitiesBPLibrary&&); \
	NO_API UPakUtilitiesBPLibrary(const UPakUtilitiesBPLibrary&); \
public:


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPakUtilitiesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPakUtilitiesBPLibrary(UPakUtilitiesBPLibrary&&); \
	NO_API UPakUtilitiesBPLibrary(const UPakUtilitiesBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPakUtilitiesBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPakUtilitiesBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPakUtilitiesBPLibrary)


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_PRIVATE_PROPERTY_OFFSET
#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_52_PROLOG
#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_PRIVATE_PROPERTY_OFFSET \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_SPARSE_DATA \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_RPC_WRAPPERS \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_INCLASS \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_PRIVATE_PROPERTY_OFFSET \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_SPARSE_DATA \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_INCLASS_NO_PURE_DECLS \
	Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PakUtilitiesBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAKUTILITIES_API UClass* StaticClass<class UPakUtilitiesBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugin_Generator_4_5_Plugins_PakUtilities_Source_PakUtilities_Public_PakUtilitiesBPLibrary_h


#define FOREACH_ENUM_EDOWNLOADRESULT(op) \
	op(EDownloadResult::Success) \
	op(EDownloadResult::DownloadFailed) \
	op(EDownloadResult::SaveFailed) \
	op(EDownloadResult::DirectoryCreationFailed) 

enum class EDownloadResult : uint8;
template<> PAKUTILITIES_API UEnum* StaticEnum<EDownloadResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
