/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/


#include "WuSparkDeskWebSocket.h"
#include "WuSparkDeskSubsystem.h"
#include "WuCrypto.h"

#include "Classes/LowEntryExtendedStandardLibrary.h"
//#include "Misc/Base64.h"
#include "GenericPlatform/GenericPlatformHttp.h"
#include "JsonObjectWrapper.h" //JsonBlueprintFunctionLibrary.h包含了此头文件
#include "Dom/JsonObject.h"
#include "WebSocketsModule.h"

#define USETestDate 0 //是否使用测试文本

UWuSparkDeskWebSocket::UWuSparkDeskWebSocket()
{
	UE_LOG(LogClass, Log, TEXT("UWuSparkDeskWebSocket构造"));
	sparkDeskSubsystem = nullptr;
	//websocketobj = nullptr;
}

UWuSparkDeskWebSocket::~UWuSparkDeskWebSocket()
{
	UE_LOG(LogClass, Log, TEXT("UWuSparkDeskWebSocket析构造"));
}

void UWuSparkDeskWebSocket::init(UWuSparkDeskSubsystem* SparkDeskSubsystem)
{
	sparkDeskSubsystem = SparkDeskSubsystem;
}

FString UWuSparkDeskWebSocket::getURL()
{
	if (!sparkDeskSubsystem) {
		UE_LOG(LogClass, Error, TEXT("sendMessage错误：sparkDeskSubsystem对象为空"));
		return TEXT("");
	}
	//APISecret和 APIKey
#if USETestDate
	FString APISecret = TEXT("MjlmNzkzNmZkMDQ2OTc0ZDdmNGE2ZTZi");
	FString APIKey = TEXT("addd2272b6d8b7c8abdd79531420ca3b");
#else
	FString APISecret = sparkDeskSubsystem->getAPISecret();
	FString APIKey = sparkDeskSubsystem->getAPIKey();
#endif // USETestDate
	//APISecret转换成UTF8的字节数组
	TArray<uint8> APISecretArr = ULowEntryExtendedStandardLibrary::StringToBytesUtf8(APISecret);

	//============要加密的信息=============
	FString temphost = TEXT("spark-api.xf-yun.com");
	FString host = TEXT("host: ")+ temphost;//ccc1

	//获取时间字符串
	FDateTime dt = FDateTime::UtcNow();

	
#if USETestDate
	FString tempdatestr = TEXT("Fri, 05 May 2023 10:43:39 GMT");
	FString datestr = TEXT("date: ") + tempdatestr;
#else
	FString tempdatestr = dt.ToHttpDate().Replace(TEXT("GMT"), TEXT("UTC"));
	FString datestr = TEXT("date: ") + tempdatestr;
#endif // USETestDate
	FString pathstr = TEXT("GET /v1.1/chat HTTP/1.1");

	//---------组合字符串并计算加密-----------
	//FString版本
	
	FString temp = host+ TEXT("\n") + datestr+ TEXT("\n") + pathstr;
	TArray<uint8> tempArr = ULowEntryExtendedStandardLibrary::StringToBytesUtf8(temp);
	/*
	FString ceshi;
	WuCrypto::HMACString(temp,key, ceshi);
	TArray<uint8> ceshiarr = ULowEntryExtendedStandardLibrary::StringToBytesUtf8(ceshi);
	FString signature = ULowEntryExtendedStandardLibrary::BytesToBase64(ceshiarr);
	*/
	TArray<uint8> tempshaarr = ULowEntryExtendedStandardLibrary::HMAC(tempArr, APISecretArr);
	FString signature = ULowEntryExtendedStandardLibrary::BytesToBase64(tempshaarr);
	/*
	//std版本
	std::string hoststd = TCHAR_TO_UTF8(*host);
	std::string datestrstd = TCHAR_TO_UTF8(*datestr);
	std::string pathstrstd = TCHAR_TO_UTF8(*pathstr);
	std::string tempstd = hoststd + "\n" + datestrstd + "\n" + pathstrstd;
	TArray<uint8> tempArrstd = WuCrypto::StringToByte(tempstd);
	TArray<uint8> tempshaarrstd = ULowEntryExtendedStandardLibrary::HMAC(tempArrstd, keyArr);
	FString signaturestd = ULowEntryExtendedStandardLibrary::BytesToBase64(tempshaarrstd);
*/

	//FString authorization_origin = FString::Printf(TEXT("api_key='%s', algorithm='hmac-sha256', headers='host date request-line', signature='%s'"), *APIKey, *signature);
	FString authorization_origin = FString::Printf(TEXT("api_key=\"%s\", algorithm=\"hmac-sha256\", headers=\"host date request-line\", signature=\"%s\""), *APIKey, *signature);
	/*
	std::string authorization_originstd = TCHAR_TO_UTF8(*authorization_origin);
	TArray<uint8> authorization_originArr = WuCrypto::StringToByte(authorization_originstd);
	FString authorization = ULowEntryExtendedStandardLibrary::BytesToBase64(authorization_originArr);
	*/
	TArray<uint8> authorization_originArr = ULowEntryExtendedStandardLibrary::StringToBytesUtf8(authorization_origin);
	FString authorization = ULowEntryExtendedStandardLibrary::BytesToBase64(authorization_originArr);
	
	UE_LOG(LogClass, Log, TEXT("authorization为：%s"), *authorization);

	//FString authorization = FBase64::Encode(authorization_origin); //这段和上面的两行代码效果是一样的。加密出来的结果一样

	/*
	FJsonObjectWrapper vjson;
	vjson.JsonObject->SetStringField(TEXT("authorization"), authorization);
	vjson.JsonObject->SetStringField(TEXT("date"), datestr);
	vjson.JsonObject->SetStringField(TEXT("host"), TEXT("aichat.xf-yun.com"));
	FString v;
	vjson.JsonObjectToString(v);
	FString vurl = FGenericPlatformHttp::UrlEncode(v);
	*/

	TMap<FString, FString> v;
	v.Add(TEXT("authorization"), authorization);
	v.Add(TEXT("date"), tempdatestr);
	v.Add(TEXT("host"), temphost);
	FString vstr;
	for (auto v1: v) {
		if (vstr.Len() == 0) {
			vstr += FString::Printf(TEXT("%s=%s"), *FGenericPlatformHttp::UrlEncode(v1.Key), *FGenericPlatformHttp::UrlEncode(v1.Value));
		}
		else {
			vstr += FString::Printf(TEXT("&%s=%s"), *FGenericPlatformHttp::UrlEncode(v1.Key), *FGenericPlatformHttp::UrlEncode(v1.Value));
		}
	}
	FString vstr2 = vstr.Replace(TEXT("%20"), TEXT("+"));

	//FString vurl = FGenericPlatformHttp::UrlEncode(vstr);
	//FString url = TEXT("wss://aichat.xf-yun.com/v1/chat?") + vstr2;
	FString url = TEXT("wss://spark-api.xf-yun.com/v1.1/chat?") + vstr2;
	
	//FString test11 = FGenericPlatformHttp::UrlDecode(TEXT("authorization=YXBpX2tleT0iYWRkZDIyNzJiNmQ4YjdjOGFiZGQ3OTUzMTQyMGNhM2IiLCBhbGdvcml0aG09ImhtYWMtc2hhMjU2IiwgaGVhZGVycz0iaG9zdCBkYXRlIHJlcXVlc3QtbGluZSIsIHNpZ25hdHVyZT0iejVnSGR1M3B4VlY0QURNeWs0Njd3T1dEUTlxNkJRelIzbmZNVGpjL0RhUT0i&date=Fri%2C+05+May+2023+10%3A43%3A39+GMT&host=spark-api.xf-yun.com"));
	//UE_LOG(LogClass, Log, TEXT("V是3：%s"), *test11);
	UE_LOG(LogClass, Log, TEXT("url是：%s"), *url);



	return url;
}

TSharedRef<IWebSocket> UWuSparkDeskWebSocket::createWebSocket()
{

	//WebSocket模块，必须这样检查一次，否则打包后，使用WebScoket时。就会导致程序崩溃
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets")) { //如果WebScoket模块未加载
		FModuleManager::Get().LoadModule("WebSockets");//加载WebSocket模块
	}
	
	TSharedRef<IWebSocket> websocketobj = FWebSocketsModule::Get().CreateWebSocket(getURL());
	websocketobj->OnClosed().AddUObject(this, &UWuSparkDeskWebSocket::OnClosed);
	websocketobj->OnConnected().AddUObject(this, &UWuSparkDeskWebSocket::OnConnected);
	websocketobj->OnConnectionError().AddUObject(this, &UWuSparkDeskWebSocket::OnConnectionError);
	websocketobj->OnMessage().AddUObject(this, &UWuSparkDeskWebSocket::OnMessage);
#if !USETestDate
	//websocketobj->Connect();
#endif // USETestDate
	return websocketobj;
}

void UWuSparkDeskWebSocket::sendMessage(FString message , WuMessageInterface* MessageInterface)
{
	if (!sparkDeskSubsystem) {
		UE_LOG(LogClass, Error, TEXT("sendMessage错误：sparkDeskSubsystem对象为空"));
		return;
	}
	float temperature = 0.1f; //核采样阈值。用于决定结果随机性，取值越高随机性越强即相同的问题得到的不同答案的可能性越高
	int32 max_tokens = 1024; //模型回答的tokens的最大长度

	
	FJsonObjectWrapper sendmessageJson; //将要发出去的消息

	//============"header"字段==============
	TSharedPtr<FJsonObject> headerJson = MakeShared<FJsonObject>();
	headerJson->SetStringField(TEXT("app_id"), sparkDeskSubsystem->getAPPID());
	headerJson->SetStringField(TEXT("uid"), TEXT("12345"));
	sendmessageJson.JsonObject->SetObjectField(TEXT("header"), headerJson);

	// ========="parameter"字段==============
	TSharedPtr<FJsonObject> parameterJson = MakeShared<FJsonObject>();
	TSharedPtr<FJsonObject> chatJson = MakeShared<FJsonObject>();
	chatJson->SetStringField(TEXT("domain"), TEXT("general"));
	chatJson->SetNumberField(TEXT("temperature"), temperature);
	chatJson->SetNumberField(TEXT("max_tokens"), max_tokens);
	parameterJson->SetObjectField(TEXT("chat"), chatJson);
	sendmessageJson.JsonObject->SetObjectField(TEXT("parameter"), parameterJson);
	
	//=========== "payload"字段===============
	TSharedPtr<FJsonObject> payloadJson = MakeShared<FJsonObject>(); //这是创建json对象的第一种方法
	TSharedPtr<FJsonObject> messageJson = MakeShared<FJsonObject>();
	TArray<TSharedPtr<FJsonValue>> textJsonArr; //text数组

	TSharedPtr<FJsonObject> textJson = MakeShareable(new FJsonObject()); //这是创建json对象的第二种方法
	textJson->SetStringField(TEXT("role"), TEXT("user"));
	textJson->SetStringField(TEXT("content"), message);
	textJsonArr.Add(MakeShareable(new FJsonValueObject(textJson))); //吧元素添加到数组
	
	messageJson->SetArrayField(TEXT("text"), textJsonArr);
	payloadJson->SetObjectField(TEXT("message"), messageJson);
	sendmessageJson.JsonObject->SetObjectField(TEXT("payload"), payloadJson);

	//===================获取Json字符串============
	FString sendmessageStr;
	sendmessageJson.JsonObjectToString(sendmessageStr);

#if USETestDate
	UE_LOG(LogClass, Log, TEXT("将要发送的消息：%s"), *sendmessageStr);
#else
	TSharedPtr<IWebSocket> websocketobj = createWebSocket(); //创建WebSocket对象
	if (!websocketobj) {
		UE_LOG(LogClass, Error, TEXT("sendMessage错误：websocketobj对象为空"));
		return;
	}
	websocketobj->OnConnected().AddLambda([sendmessageStr,websocketobj]() {
		websocketobj->Send(sendmessageStr); //链接成功后发送消息
		});

	if (!MessageInterface) {
		MessageInterface = this;
	}
	
	int32 MessageNumber = MessageInterface->getmessage();
	websocketobj->OnMessage().AddLambda([this,MessageNumber,websocketobj, MessageInterface](const FString& MessageString) {
		MessageInterface->ReceivedMessage(MessageString,  MessageNumber);

		});

	websocketobj->OnClosed().AddLambda([this, MessageNumber, MessageInterface](int32 StatusCode, const FString& Reason, bool bWasClean) {
		MessageInterface->MessageReceptionCompleted(MessageNumber);
		});
	websocketobj->Connect();
#endif // USETestDate

}

void UWuSparkDeskWebSocket::OnClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogClass, Log, TEXT("与星火模型的链接关闭,code:%d；消息：%s"), StatusCode, *Reason);
}

void UWuSparkDeskWebSocket::OnConnected()
{
	UE_LOG(LogClass, Log, TEXT("链接星火模型成功"));
}

void UWuSparkDeskWebSocket::OnConnectionError(const FString& Error)
{
	UE_LOG(LogClass, Error, TEXT("链接星火模型错误%s"), *Error);
}

void UWuSparkDeskWebSocket::OnMessage(const FString& MessageString)
{
	//UE_LOG(LogClass, Log, TEXT("受到星火模型信息%s"), *MessageString);
}

void UWuSparkDeskWebSocket::ReceivedMessage(const FString& MessageString, const int32& MessageNumber)
{
	WuMessageInterface::ReceivedMessage(MessageString, MessageNumber);
	FString newMessageString = ParsingMessages(MessageString);
	if (sparkDeskSubsystem) {
		sparkDeskSubsystem->ReceivedMessageEvent.Broadcast(newMessageString, MessageNumber);
	}

	UE_LOG(LogClass, Log, TEXT("第%d次对话的回复：%s"), MessageNumber,*MessageString);
}

void UWuSparkDeskWebSocket::MessageReceptionCompleted(const int32& MessageNumber)
{
	FString MessageString = getReceivedMessageForIndex(MessageNumber);

	if (sparkDeskSubsystem) {
		sparkDeskSubsystem->MessageReceptionCompletedEvent.Broadcast(MessageString, MessageNumber);
	}

	UE_LOG(LogClass, Log, TEXT("第%d次对话完成：%s"), MessageNumber, *MessageString);
}





