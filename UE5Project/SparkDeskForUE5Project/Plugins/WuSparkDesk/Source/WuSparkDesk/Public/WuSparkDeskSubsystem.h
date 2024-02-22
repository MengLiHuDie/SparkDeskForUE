/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WuSparkDeskSubsystem.generated.h"

class UWuSparkDeskWebSocket;

/*
收到消息后触发
注意，因为是流式传输，所以服务器回复的时候，会分很多段回复。这个是每回复一次，调用一次
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReceivedMessageDelegate, FString, MessageString, int32, MessageNumber);
/*
消息接受完成后触发
注意，是流失传输完成后触发。返回的MessageString，是所有服务器流式传输的加起来的结果
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMessageReceptionCompletedDelegate, FString, MessageString, int32, MessageNumber);

/**
 * 
 */
UCLASS()
class WUSPARKDESK_API UWuSparkDeskSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:

	UWuSparkDeskSubsystem();
	/** Implement this for initialization of instances of the system */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Implement this for deinitialization of instances of the system */
	virtual void Deinitialize()override;
	/*
	初始化信息，用于鉴权
	*/
	UFUNCTION(BlueprintCallable)
		void init(FString APPID,FString APISecret, FString APIKey);
	/*
	发送消息
	这是让系统直接发送消息。不区分角色，所以收到消息后，将会直接调用系统的消息事件
	如果不是使用此函数发送的消息，将会区分角色。那么就不会触发系统的消息事件

	PS:
	ReceivedMessageEvent:收到消息后触发。注意，因为是流式传输，所以服务器回复的时候，会分很多段回复。这个是每回复一次，调用一次
	MessageReceptionCompletedEvent:消息接受完成后触发。注意，是流失传输完成后触发。返回的MessageString，是所有服务器流式传输的加起来的结果
	*/
	UFUNCTION(BlueprintCallable)
		void sendMessage(FString message);

	UPROPERTY(BlueprintAssignable)
		FReceivedMessageDelegate ReceivedMessageEvent;
	UPROPERTY(BlueprintAssignable)
		FMessageReceptionCompletedDelegate MessageReceptionCompletedEvent;

	FString getAPPID();
	FString getAPISecret();
	FString getAPIKey();
private:
	FString appid, apisecret, apikey;
	UWuSparkDeskWebSocket* SparkDeskWebSocket; //用于链接的对象
};
