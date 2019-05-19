///////////////////////////////////////////////////////////////////////////
//  Copyright(c) 2019, All Rights Reserved
//  Created: 2019/05/19
//
/// @file    lua_hash.c
/// @brief   hash算法
/// @author  李绍良
/// @version 0.1
/// @history 修改历史
///  \n 2019/05/19 0.1 创建文件
/// @warning 没有警告
///////////////////////////////////////////////////////////////////////////


#include "luastd.h"
#include "lauxlib.h"
#include "hash/klb_hash_dx.h"


#define LUA_HASH_LEN    32
#define LUA_HASH_BUF    36

static int l_hash_dx(lua_State* L)
{
    size_t len = 0;
    const char* p_str = luaL_checklstring(L, 1, &len);
    uint32_t hash = klb_hash_dx(p_str, len);

    char v[LUA_HASH_BUF] = { 0 };
    snprintf(v, LUA_HASH_LEN, "%u", hash);

    lua_pushstring(L, v);
    return 1;
}

int luaopen_hash(lua_State* L)
{
    static luaL_Reg hash_lib[] =
    {
        { "dx",     l_hash_dx },

        { NULL,     NULL }
    };

    // 创建导出库函数
    luaL_newlib(L, hash_lib);

    return 1;
}
