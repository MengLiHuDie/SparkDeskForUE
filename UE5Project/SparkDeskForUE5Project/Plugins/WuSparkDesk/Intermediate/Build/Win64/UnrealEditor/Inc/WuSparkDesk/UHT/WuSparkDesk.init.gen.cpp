// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWuSparkDesk_init() {}
	WUSPARKDESK_API UFunction* Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature();
	WUSPARKDESK_API UFunction* Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WuSparkDesk;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WuSparkDesk()
	{
		if (!Z_Registration_Info_UPackage__Script_WuSparkDesk.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WuSparkDesk",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9081929B,
				0x80225E7A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WuSparkDesk.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WuSparkDesk.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WuSparkDesk(Z_Construct_UPackage__Script_WuSparkDesk, TEXT("/Script/WuSparkDesk"), Z_Registration_Info_UPackage__Script_WuSparkDesk, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9081929B, 0x80225E7A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
