/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/

#include "WuSparkDeskSubsystem.h"
#include "WuSparkDeskWebSocket.h"

UWuSparkDeskSubsystem::UWuSparkDeskSubsystem()
{
	SparkDeskWebSocket = nullptr;
}

void UWuSparkDeskSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UWuSparkDeskSubsystem::Deinitialize()
{
	if (SparkDeskWebSocket) {
		SparkDeskWebSocket->RemoveFromRoot();
		SparkDeskWebSocket = nullptr;
	}
}

void UWuSparkDeskSubsystem::init(FString APPID, FString APISecret, FString APIKey)
{
	appid = APPID;
	apisecret = APISecret;
	apikey = APIKey;
	if (!SparkDeskWebSocket) {
		SparkDeskWebSocket = NewObject<UWuSparkDeskWebSocket>();
		SparkDeskWebSocket->AddToRoot();
	}
	SparkDeskWebSocket->init(this); //初始化Web链接信息
}


void UWuSparkDeskSubsystem::sendMessage(FString message)
{
	if (!SparkDeskWebSocket) {
		UE_LOG(LogClass, Error, TEXT("sendMessage错误：websocketobj对象为空"));
		return;
	}
	SparkDeskWebSocket->sendMessage(message,nullptr);
	
}

FString UWuSparkDeskSubsystem::getAPPID()
{
	return appid;
}

FString UWuSparkDeskSubsystem::getAPISecret()
{
	return apisecret;
}

FString UWuSparkDeskSubsystem::getAPIKey()
{
	return apikey;
}
