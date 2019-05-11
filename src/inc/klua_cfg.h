#ifndef __KLUA_CFG_H__
#define __KLUA_CFG_H__


#define LUA_COMPAT_5_1
#define LUA_COMPAT_5_2
#define LUA_32BITS


#if !defined(_WIN32)
#define LUA_USE_POSIX
#define LUA_USE_DLOPEN
#endif


#endif // __KLUA_CFG_H__
//end
