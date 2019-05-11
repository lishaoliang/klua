#ifndef __KLUA_CFG_H__
#define __KLUA_CFG_H__


/// @brief lua模块配置
#define LUA_COMPAT_5_1
#define LUA_COMPAT_5_2
#define LUA_32BITS


#if !defined(_WIN32)
#define LUA_USE_POSIX
#define LUA_USE_DLOPEN
#endif


/// @brief "cjson"模块
#define LUA_CJSON               1

/// @brief "lfs"模块
#define LUA_LFS                 1

/// @brief "lpeg"模块
#define LUA_LPEG                1


#endif // __KLUA_CFG_H__
//end
