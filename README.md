# SparkDeskForUE5
UE5 讯飞星火插件


# 简介
可以让UE5连接讯飞星火的插件。
这是我2023年中旬开发的插件。已经快一年了。

开发的时候，想开发成一个专门用于游戏多角色的插件（按照之前的设想，本来是可以通过组件轻松的添加给各种Actor）。但是开发到能和星火对话，就暂停开发了。

不过放心，这仍是一个功能完整的插件，已经实现了核心功能。因为之前考虑的功能拓展很多，所以代码非常方便扩展。

今天在清理文件的时候，偶然看到了。决定分享出来。

代码中都有注释，可以非常方便的扩展功能。也可以联系作者帮助扩展功能。

# 需求
1.引擎版本：

UE5 5.3

如需其他版本，请按此视频自行编译（注：只支持UE5.0 及以上版本编译）：
https://www.bilibili.com/video/BV1Jk4y157mh


2.需要插件(需要的插件为免费开源的)：

LE Extended Standard Library

可去UE商城搜索插件名称。或直接点击此连接：
https://www.unrealengine.com/marketplace/zh-CN/product/low-entry-extended-standard-library

# 第一次使用
如果第一次打开项目，在未给引擎安装LE Extended Standard Library插件的情况下。会出现如下提示。请点击“否”。并安装插件
![01](https://github.com/1910991875/SparkDeskForUE5/assets/107232487/8c14db5d-0c6d-4081-8dc4-7fcc2af165f3)

打开项目后，打开关卡蓝图，就可以看到示例了。
![02](https://github.com/1910991875/SparkDeskForUE5/assets/107232487/9a0e773f-2663-4e43-80b9-3bf109e2dacb)

注意，一定要填写init函数的APPID,APISecret,APIKey参数。这些参数用于鉴权，请去星火官网申请。参见官方文档：
https://www.xfyun.cn/doc/spark/Web.html

# 介绍各文件的作用
![03](https://github.com/1910991875/SparkDeskForUE5/assets/107232487/f687558f-d48c-4b28-9da2-5e9b805c6301)

WuCrypto：这个包含一些加密的函数

WuMessageInterface：这个是解析消息的接口。可以让其他类继承此接口。然后通过其默认实现来解析消息

WuSparkDeskSubsystem：这是是一个子系统，可以发送消息和接受消息。

WuSparkDeskWebSocket：这个是用于连接讯飞的WebSocket。目前连接失败会在日志中抛出错误，如果需要连接失败执行的代码，可以修改此文件。在相应的UE_LOG位置添加即可



