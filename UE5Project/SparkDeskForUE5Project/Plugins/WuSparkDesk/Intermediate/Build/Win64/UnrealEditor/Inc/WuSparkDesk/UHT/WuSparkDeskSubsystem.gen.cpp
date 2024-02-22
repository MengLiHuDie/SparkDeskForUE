// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WuSparkDesk/Public/WuSparkDeskSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWuSparkDeskSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_WuSparkDesk();
	WUSPARKDESK_API UClass* Z_Construct_UClass_UWuSparkDeskSubsystem();
	WUSPARKDESK_API UClass* Z_Construct_UClass_UWuSparkDeskSubsystem_NoRegister();
	WUSPARKDESK_API UFunction* Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature();
	WUSPARKDESK_API UFunction* Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics
	{
		struct _Script_WuSparkDesk_eventReceivedMessageDelegate_Parms
		{
			FString MessageString;
			int32 MessageNumber;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuSparkDesk_eventReceivedMessageDelegate_Parms, MessageString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::NewProp_MessageNumber = { "MessageNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuSparkDesk_eventReceivedMessageDelegate_Parms, MessageNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::NewProp_MessageString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::NewProp_MessageNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe6\x94\xb6\xe5\x88\xb0\xe6\xb6\x88\xe6\x81\xaf\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe6\x98\xaf\xe6\xb5\x81\xe5\xbc\x8f\xe4\xbc\xa0\xe8\xbe\x93\xef\xbc\x8c\xe6\x89\x80\xe4\xbb\xa5\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x9b\x9e\xe5\xa4\x8d\xe7\x9a\x84\xe6\x97\xb6\xe5\x80\x99\xef\xbc\x8c\xe4\xbc\x9a\xe5\x88\x86\xe5\xbe\x88\xe5\xa4\x9a\xe6\xae\xb5\xe5\x9b\x9e\xe5\xa4\x8d\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe6\x98\xaf\xe6\xaf\x8f\xe5\x9b\x9e\xe5\xa4\x8d\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe4\xb8\x80\xe6\xac\xa1\n*/" },
#endif
		{ "ModuleRelativePath", "Public/WuSparkDeskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xb6\xe5\x88\xb0\xe6\xb6\x88\xe6\x81\xaf\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe6\x98\xaf\xe6\xb5\x81\xe5\xbc\x8f\xe4\xbc\xa0\xe8\xbe\x93\xef\xbc\x8c\xe6\x89\x80\xe4\xbb\xa5\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x9b\x9e\xe5\xa4\x8d\xe7\x9a\x84\xe6\x97\xb6\xe5\x80\x99\xef\xbc\x8c\xe4\xbc\x9a\xe5\x88\x86\xe5\xbe\x88\xe5\xa4\x9a\xe6\xae\xb5\xe5\x9b\x9e\xe5\xa4\x8d\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe6\x98\xaf\xe6\xaf\x8f\xe5\x9b\x9e\xe5\xa4\x8d\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe4\xb8\x80\xe6\xac\xa1" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuSparkDesk, nullptr, "ReceivedMessageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::_Script_WuSparkDesk_eventReceivedMessageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::_Script_WuSparkDesk_eventReceivedMessageDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FReceivedMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceivedMessageDelegate, const FString& MessageString, int32 MessageNumber)
{
	struct _Script_WuSparkDesk_eventReceivedMessageDelegate_Parms
	{
		FString MessageString;
		int32 MessageNumber;
	};
	_Script_WuSparkDesk_eventReceivedMessageDelegate_Parms Parms;
	Parms.MessageString=MessageString;
	Parms.MessageNumber=MessageNumber;
	ReceivedMessageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics
	{
		struct _Script_WuSparkDesk_eventMessageReceptionCompletedDelegate_Parms
		{
			FString MessageString;
			int32 MessageNumber;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuSparkDesk_eventMessageReceptionCompletedDelegate_Parms, MessageString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::NewProp_MessageNumber = { "MessageNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuSparkDesk_eventMessageReceptionCompletedDelegate_Parms, MessageNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::NewProp_MessageString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::NewProp_MessageNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe6\xb6\x88\xe6\x81\xaf\xe6\x8e\xa5\xe5\x8f\x97\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe6\x98\xaf\xe6\xb5\x81\xe5\xa4\xb1\xe4\xbc\xa0\xe8\xbe\x93\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xe3\x80\x82\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84MessageString\xef\xbc\x8c\xe6\x98\xaf\xe6\x89\x80\xe6\x9c\x89\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\xb5\x81\xe5\xbc\x8f\xe4\xbc\xa0\xe8\xbe\x93\xe7\x9a\x84\xe5\x8a\xa0\xe8\xb5\xb7\xe6\x9d\xa5\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x9c\n*/" },
#endif
		{ "ModuleRelativePath", "Public/WuSparkDeskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb6\x88\xe6\x81\xaf\xe6\x8e\xa5\xe5\x8f\x97\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe6\x98\xaf\xe6\xb5\x81\xe5\xa4\xb1\xe4\xbc\xa0\xe8\xbe\x93\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xe3\x80\x82\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84MessageString\xef\xbc\x8c\xe6\x98\xaf\xe6\x89\x80\xe6\x9c\x89\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\xb5\x81\xe5\xbc\x8f\xe4\xbc\xa0\xe8\xbe\x93\xe7\x9a\x84\xe5\x8a\xa0\xe8\xb5\xb7\xe6\x9d\xa5\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x9c" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuSparkDesk, nullptr, "MessageReceptionCompletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::_Script_WuSparkDesk_eventMessageReceptionCompletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::_Script_WuSparkDesk_eventMessageReceptionCompletedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMessageReceptionCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MessageReceptionCompletedDelegate, const FString& MessageString, int32 MessageNumber)
{
	struct _Script_WuSparkDesk_eventMessageReceptionCompletedDelegate_Parms
	{
		FString MessageString;
		int32 MessageNumber;
	};
	_Script_WuSparkDesk_eventMessageReceptionCompletedDelegate_Parms Parms;
	Parms.MessageString=MessageString;
	Parms.MessageNumber=MessageNumber;
	MessageReceptionCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UWuSparkDeskSubsystem::execsendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->sendMessage(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWuSparkDeskSubsystem::execinit)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_APPID);
		P_GET_PROPERTY(FStrProperty,Z_Param_APISecret);
		P_GET_PROPERTY(FStrProperty,Z_Param_APIKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->init(Z_Param_APPID,Z_Param_APISecret,Z_Param_APIKey);
		P_NATIVE_END;
	}
	void UWuSparkDeskSubsystem::StaticRegisterNativesUWuSparkDeskSubsystem()
	{
		UClass* Class = UWuSparkDeskSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "init", &UWuSparkDeskSubsystem::execinit },
			{ "sendMessage", &UWuSparkDeskSubsystem::execsendMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics
	{
		struct WuSparkDeskSubsystem_eventinit_Parms
		{
			FString APPID;
			FString APISecret;
			FString APIKey;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_APPID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_APISecret;
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::NewProp_APPID = { "APPID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WuSparkDeskSubsystem_eventinit_Parms, APPID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::NewProp_APISecret = { "APISecret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WuSparkDeskSubsystem_eventinit_Parms, APISecret), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WuSparkDeskSubsystem_eventinit_Parms, APIKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::NewProp_APPID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::NewProp_APISecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::NewProp_APIKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe9\x89\xb4\xe6\x9d\x83\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/WuSparkDeskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe9\x89\xb4\xe6\x9d\x83" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWuSparkDeskSubsystem, nullptr, "init", nullptr, nullptr, Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::WuSparkDeskSubsystem_eventinit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::WuSparkDeskSubsystem_eventinit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWuSparkDeskSubsystem_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWuSparkDeskSubsystem_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics
	{
		struct WuSparkDeskSubsystem_eventsendMessage_Parms
		{
			FString message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WuSparkDeskSubsystem_eventsendMessage_Parms, message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xe5\x8f\x91\xe9\x80\x81\xe6\xb6\x88\xe6\x81\xaf\n\x09\xe8\xbf\x99\xe6\x98\xaf\xe8\xae\xa9\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9b\xb4\xe6\x8e\xa5\xe5\x8f\x91\xe9\x80\x81\xe6\xb6\x88\xe6\x81\xaf\xe3\x80\x82\xe4\xb8\x8d\xe5\x8c\xba\xe5\x88\x86\xe8\xa7\x92\xe8\x89\xb2\xef\xbc\x8c\xe6\x89\x80\xe4\xbb\xa5\xe6\x94\xb6\xe5\x88\xb0\xe6\xb6\x88\xe6\x81\xaf\xe5\x90\x8e\xef\xbc\x8c\xe5\xb0\x86\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb0\x83\xe7\x94\xa8\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe6\xb6\x88\xe6\x81\xaf\xe4\xba\x8b\xe4\xbb\xb6\n\x09\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe6\x98\xaf\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x91\xe9\x80\x81\xe7\x9a\x84\xe6\xb6\x88\xe6\x81\xaf\xef\xbc\x8c\xe5\xb0\x86\xe4\xbc\x9a\xe5\x8c\xba\xe5\x88\x86\xe8\xa7\x92\xe8\x89\xb2\xe3\x80\x82\xe9\x82\xa3\xe4\xb9\x88\xe5\xb0\xb1\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xa7\xa6\xe5\x8f\x91\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe6\xb6\x88\xe6\x81\xaf\xe4\xba\x8b\xe4\xbb\xb6\n\n\x09PS:\n\x09ReceivedMessageEvent:\xe6\x94\xb6\xe5\x88\xb0\xe6\xb6\x88\xe6\x81\xaf\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xe3\x80\x82\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe6\x98\xaf\xe6\xb5\x81\xe5\xbc\x8f\xe4\xbc\xa0\xe8\xbe\x93\xef\xbc\x8c\xe6\x89\x80\xe4\xbb\xa5\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x9b\x9e\xe5\xa4\x8d\xe7\x9a\x84\xe6\x97\xb6\xe5\x80\x99\xef\xbc\x8c\xe4\xbc\x9a\xe5\x88\x86\xe5\xbe\x88\xe5\xa4\x9a\xe6\xae\xb5\xe5\x9b\x9e\xe5\xa4\x8d\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe6\x98\xaf\xe6\xaf\x8f\xe5\x9b\x9e\xe5\xa4\x8d\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe4\xb8\x80\xe6\xac\xa1\n\x09MessageReceptionCompletedEvent:\xe6\xb6\x88\xe6\x81\xaf\xe6\x8e\xa5\xe5\x8f\x97\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xe3\x80\x82\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe6\x98\xaf\xe6\xb5\x81\xe5\xa4\xb1\xe4\xbc\xa0\xe8\xbe\x93\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xe3\x80\x82\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84MessageString\xef\xbc\x8c\xe6\x98\xaf\xe6\x89\x80\xe6\x9c\x89\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\xb5\x81\xe5\xbc\x8f\xe4\xbc\xa0\xe8\xbe\x93\xe7\x9a\x84\xe5\x8a\xa0\xe8\xb5\xb7\xe6\x9d\xa5\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x9c\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/WuSparkDeskSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe6\xb6\x88\xe6\x81\xaf\n\xe8\xbf\x99\xe6\x98\xaf\xe8\xae\xa9\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9b\xb4\xe6\x8e\xa5\xe5\x8f\x91\xe9\x80\x81\xe6\xb6\x88\xe6\x81\xaf\xe3\x80\x82\xe4\xb8\x8d\xe5\x8c\xba\xe5\x88\x86\xe8\xa7\x92\xe8\x89\xb2\xef\xbc\x8c\xe6\x89\x80\xe4\xbb\xa5\xe6\x94\xb6\xe5\x88\xb0\xe6\xb6\x88\xe6\x81\xaf\xe5\x90\x8e\xef\xbc\x8c\xe5\xb0\x86\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb0\x83\xe7\x94\xa8\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe6\xb6\x88\xe6\x81\xaf\xe4\xba\x8b\xe4\xbb\xb6\n\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe6\x98\xaf\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x91\xe9\x80\x81\xe7\x9a\x84\xe6\xb6\x88\xe6\x81\xaf\xef\xbc\x8c\xe5\xb0\x86\xe4\xbc\x9a\xe5\x8c\xba\xe5\x88\x86\xe8\xa7\x92\xe8\x89\xb2\xe3\x80\x82\xe9\x82\xa3\xe4\xb9\x88\xe5\xb0\xb1\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xa7\xa6\xe5\x8f\x91\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe6\xb6\x88\xe6\x81\xaf\xe4\xba\x8b\xe4\xbb\xb6\n\nPS:\nReceivedMessageEvent:\xe6\x94\xb6\xe5\x88\xb0\xe6\xb6\x88\xe6\x81\xaf\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xe3\x80\x82\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe6\x98\xaf\xe6\xb5\x81\xe5\xbc\x8f\xe4\xbc\xa0\xe8\xbe\x93\xef\xbc\x8c\xe6\x89\x80\xe4\xbb\xa5\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x9b\x9e\xe5\xa4\x8d\xe7\x9a\x84\xe6\x97\xb6\xe5\x80\x99\xef\xbc\x8c\xe4\xbc\x9a\xe5\x88\x86\xe5\xbe\x88\xe5\xa4\x9a\xe6\xae\xb5\xe5\x9b\x9e\xe5\xa4\x8d\xe3\x80\x82\xe8\xbf\x99\xe4\xb8\xaa\xe6\x98\xaf\xe6\xaf\x8f\xe5\x9b\x9e\xe5\xa4\x8d\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe4\xb8\x80\xe6\xac\xa1\nMessageReceptionCompletedEvent:\xe6\xb6\x88\xe6\x81\xaf\xe6\x8e\xa5\xe5\x8f\x97\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xe3\x80\x82\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe6\x98\xaf\xe6\xb5\x81\xe5\xa4\xb1\xe4\xbc\xa0\xe8\xbe\x93\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xe3\x80\x82\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84MessageString\xef\xbc\x8c\xe6\x98\xaf\xe6\x89\x80\xe6\x9c\x89\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\xb5\x81\xe5\xbc\x8f\xe4\xbc\xa0\xe8\xbe\x93\xe7\x9a\x84\xe5\x8a\xa0\xe8\xb5\xb7\xe6\x9d\xa5\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x9c" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWuSparkDeskSubsystem, nullptr, "sendMessage", nullptr, nullptr, Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::WuSparkDeskSubsystem_eventsendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::WuSparkDeskSubsystem_eventsendMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWuSparkDeskSubsystem);
	UClass* Z_Construct_UClass_UWuSparkDeskSubsystem_NoRegister()
	{
		return UWuSparkDeskSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWuSparkDeskSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceivedMessageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReceivedMessageEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageReceptionCompletedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageReceptionCompletedEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WuSparkDesk,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWuSparkDeskSubsystem_init, "init" }, // 1399384744
		{ &Z_Construct_UFunction_UWuSparkDeskSubsystem_sendMessage, "sendMessage" }, // 1785371109
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WuSparkDeskSubsystem.h" },
		{ "ModuleRelativePath", "Public/WuSparkDeskSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_ReceivedMessageEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/WuSparkDeskSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_ReceivedMessageEvent = { "ReceivedMessageEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWuSparkDeskSubsystem, ReceivedMessageEvent), Z_Construct_UDelegateFunction_WuSparkDesk_ReceivedMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_ReceivedMessageEvent_MetaData), Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_ReceivedMessageEvent_MetaData) }; // 1606055267
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_MessageReceptionCompletedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/WuSparkDeskSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_MessageReceptionCompletedEvent = { "MessageReceptionCompletedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWuSparkDeskSubsystem, MessageReceptionCompletedEvent), Z_Construct_UDelegateFunction_WuSparkDesk_MessageReceptionCompletedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_MessageReceptionCompletedEvent_MetaData), Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_MessageReceptionCompletedEvent_MetaData) }; // 82521471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_ReceivedMessageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::NewProp_MessageReceptionCompletedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWuSparkDeskSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::ClassParams = {
		&UWuSparkDeskSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWuSparkDeskSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWuSparkDeskSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWuSparkDeskSubsystem.OuterSingleton, Z_Construct_UClass_UWuSparkDeskSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWuSparkDeskSubsystem.OuterSingleton;
	}
	template<> WUSPARKDESK_API UClass* StaticClass<UWuSparkDeskSubsystem>()
	{
		return UWuSparkDeskSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWuSparkDeskSubsystem);
	UWuSparkDeskSubsystem::~UWuSparkDeskSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SparkDeskForUE5Project_Plugins_WuSparkDesk_Source_WuSparkDesk_Public_WuSparkDeskSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SparkDeskForUE5Project_Plugins_WuSparkDesk_Source_WuSparkDesk_Public_WuSparkDeskSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWuSparkDeskSubsystem, UWuSparkDeskSubsystem::StaticClass, TEXT("UWuSparkDeskSubsystem"), &Z_Registration_Info_UClass_UWuSparkDeskSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWuSparkDeskSubsystem), 3816480558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SparkDeskForUE5Project_Plugins_WuSparkDesk_Source_WuSparkDesk_Public_WuSparkDeskSubsystem_h_2165876673(TEXT("/Script/WuSparkDesk"),
		Z_CompiledInDeferFile_FID_SparkDeskForUE5Project_Plugins_WuSparkDesk_Source_WuSparkDesk_Public_WuSparkDeskSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SparkDeskForUE5Project_Plugins_WuSparkDesk_Source_WuSparkDesk_Public_WuSparkDeskSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
