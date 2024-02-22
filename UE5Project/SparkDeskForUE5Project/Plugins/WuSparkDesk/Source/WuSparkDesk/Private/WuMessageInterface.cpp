/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/

#include "WuMessageInterface.h"
#include "JsonObjectWrapper.h" //JsonBlueprintFunctionLibrary.h包含了此头文件
#include "Dom/JsonObject.h"

WuMessageInterface::WuMessageInterface()
{
	ReceivedMessageNum = 0;
	UE_LOG(LogClass, Log, TEXT("WuMessageInterface构造"));
}

WuMessageInterface::~WuMessageInterface()
{
	UE_LOG(LogClass,Log,TEXT("WuMessageInterface析构"));
}

void WuMessageInterface::ReceivedMessage(const FString& MessageString, const int32& MessageNumber)
{
	AddMessageToMap( MessageString,  MessageNumber);

#if 0
	//如果想要解析消息，请参考以下代码
	FString NewMessageString = ParsingMessages(MessageString);
#endif // 0

}

void WuMessageInterface::MessageReceptionCompleted(const int32& MessageNumber)
{
#if 0
	//如果想获取消息，请参考如下代码
	FString MessageString = getReceivedMessageForIndex(MessageNumber);
	UE_LOG(LogClass, Log, TEXT("第%d次对话完成：%s"), MessageNumber, *MessageString);
#endif // 0

}

int32 WuMessageInterface::getmessage()
{
	return ReceivedMessageNum++;
}

FString WuMessageInterface::getReceivedMessageForIndex(int index)
{
	FString* oldmessagePtr = (ReceivedMessageMap.Find(index));
	FString oldMessage;
	if (oldmessagePtr) {
		oldMessage = *oldmessagePtr;
	}

	return oldMessage;
}

void WuMessageInterface::AddMessageToMap(const FString& MessageString, const int32& MessageNumber)
{
	//如果这次对话，之前有消息，就拼接到一起
	FString* oldmessagePtr = (ReceivedMessageMap.Find(MessageNumber));
	FString oldMessage;
	if (oldmessagePtr) {
		oldMessage = *oldmessagePtr;
	}

	FString NewMessageString = ParsingMessages(MessageString);
	FString newMessageRef = oldMessage+ NewMessageString;
	ReceivedMessageMap.Add(MessageNumber, newMessageRef);
}

FString WuMessageInterface::ParsingMessages(const FString& MessageString)
{
	FString newMessageStr;
	if (MessageString.IsEmpty()) {
		return newMessageStr;
	}

	FJsonObjectWrapper ParsingMessagesJson;
	ParsingMessagesJson.JsonObjectFromString(MessageString);
	TSharedPtr<FJsonObject> payloadJson = ParsingMessagesJson.JsonObject->GetObjectField(TEXT("payload"));
	TSharedPtr<FJsonObject> choicesJson = payloadJson->GetObjectField(TEXT("choices"));
	TArray<TSharedPtr<FJsonValue>> textJsons = choicesJson->GetArrayField(TEXT("text"));
	for (auto textJson : textJsons) {
		TSharedPtr<FJsonObject> TextJsonObject = textJson->AsObject();
		newMessageStr = TextJsonObject->GetStringField(TEXT("content"));
	}
	return newMessageStr;
}
