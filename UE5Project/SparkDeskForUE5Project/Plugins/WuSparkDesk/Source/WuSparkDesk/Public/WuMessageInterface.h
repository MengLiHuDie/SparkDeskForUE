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

/**
 * 
 */
class WUSPARKDESK_API WuMessageInterface
{
public:
	WuMessageInterface();
	~WuMessageInterface();

	/*
	收到消息时调用，一次询问可能有多条消息，因为是流式传输。所以会多次调用此函数。
	注意，子类需要重写的话，请一定要调用父项函数。否则会出问题。
	可打开 WuMessageInterface的实现，查看示例
	*/
	virtual void ReceivedMessage(const FString& MessageString, const int32& MessageNumber);
	/*
	消息接受完成，关闭连接时调用
	可打开 WuMessageInterface的实现，查看示例
	*/
	virtual void MessageReceptionCompleted(const int32& MessageNumber);

	//获取当前发送的第几条消息，并让其自增1
	int32 getmessage();
	/*
	获取第几次回复的消息，注意，如果想要获取第一次对话，回复的消息，那么输入0
	如果没找到消息，返回空字符串
	*/
	FString getReceivedMessageForIndex(int index);

	/*
	解析消息,把服务器返回的JSON字符串解析成消息
	*/
	FString ParsingMessages(const FString& MessageString); 
private:
	void AddMessageToMap(const FString& MessageString, const int32& MessageNumber); //把消息添加进map中
	int32 ReceivedMessageNum;//累计发送的是第几条消息
	TMap<int,FString> ReceivedMessageMap; //记录消息的map
};
