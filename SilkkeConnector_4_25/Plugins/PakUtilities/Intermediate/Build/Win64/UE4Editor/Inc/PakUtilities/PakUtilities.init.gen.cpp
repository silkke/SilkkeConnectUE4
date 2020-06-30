// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePakUtilities_init() {}
	PAKUTILITIES_API UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature();
	PAKUTILITIES_API UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature();
	PAKUTILITIES_API UFunction* Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PakUtilities()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PakUtilities_OnResult__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PakUtilities_OnProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PakUtilities_OnCheckPakResult__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/PakUtilities",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0ADF595A,
				0x647F0841,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
