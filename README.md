# klua
LUA集成开发环境，开箱即用。


## 目标
* 搭建通用lua集成开发环境。
* 支持芯片：x86, x86_64, ARM等
* 必须可裁剪


## 集成规则
* 必须MIT、BSD协议。


## 感谢
* 主解析器：Lua 5.3.5(http://www.lua.org/)
* json解析器：Lua CJSON(https://www.kyne.com.au/~mark/software/lua-cjson.php)


## 为什么叫klua
* 好吧，从'a-z'挑了几个顺手，但冲突小的，就'k'了。


## 有python等，为什么做klua项目
* python确实简单易用强大。但GIL全局锁的存在导致实际项目中必须考虑多进程机制问题，lua则可完美实践单进程多线程方案！
* lua官方提供的库功能短小精悍，但使用时往往花费大量的时间去寻找扩展库和熟悉用法，本项目则集成这些库方便使用。
