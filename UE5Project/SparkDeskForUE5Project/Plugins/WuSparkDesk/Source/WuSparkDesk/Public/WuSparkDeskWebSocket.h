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
#include "UObject/NoExportTypes.h"
#include "IWebSocket.h"

#include "WuMessageInterface.h"

#include "WuSparkDeskWebSocket.generated.h"


class UWuSparkDeskSubsystem;
//class WuMessageInterface;
/**
 * 
 */
UCLASS()
class WUSPARKDESK_API UWuSparkDeskWebSocket : public UObject , public WuMessageInterface
{
	GENERATED_BODY()

	UWuSparkDeskWebSocket();
	~UWuSparkDeskWebSocket();
	
public:
	//初始化必须的东西，在构造函数后。必须使用这个初始化数据
	void init(UWuSparkDeskSubsystem* SparkDeskSubsystem);
	//发送消息
	void sendMessage(FString message, WuMessageInterface* MessageInterface);


	//收到回复调用的收到消息的函数
	virtual void ReceivedMessage(const FString& MessageString, const int32& MessageNumber) override;
	//回复完成调用的函数
	virtual void MessageReceptionCompleted(const int32& MessageNumber);

private:
	//获取URL。将会包含鉴权信息
	FString getURL();
	//创建ws链接，并链接
	TSharedRef<IWebSocket> createWebSocket();
	void OnClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
	void OnConnected();
	void OnConnectionError(const FString& Error);
	void OnMessage(const FString& MessageString);


	UWuSparkDeskSubsystem* sparkDeskSubsystem;
};
