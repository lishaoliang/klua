#include "klua_cfg.h"
#include "luastd.h"
#include "app.h"


#if LUA_MATH3D
#include "libmath.c"
#endif

#if LUA_BGFX
#include "luabgfx.c"
#endif

#if LUA_T_KLB
#include "lua_t_klb.h"
#endif


static void pre_loadlib(lua_State* L, const char* p_name, lua_CFunction func)
{
    // ‘§º”‘ÿ¿©’πæ≤Ã¨ø‚
    luaL_getsubtable(L, LUA_REGISTRYINDEX, "_PRELOAD");

    lua_pushcfunction(L, func);
    lua_setfield(L, -2, p_name);

    lua_pop(L, 1);  // remove _PRELOAD table
}

int app_openlibs_ex(lua_State *L)
{
#if LUA_HASH
    pre_loadlib(L, "hash", luaopen_hash);
#endif

#if LUA_BGFX
    pre_loadlib(L, "bgfx", luaopen_bgfx);
#endif

#if LUA_MATH3D
    pre_loadlib(L, "math3d", luaopen_math3d);
#endif

#if LUA_T_KLB
    pre_loadlib(L, "t_klb", luaopen_t_klb);
#endif

    return 0;
}

//////////////////////////////////////////////////////////////////////////

#ifndef __W_LUA__

#if defined(_MSC_VER) && !defined(NDEBUG)
#include "vld.h"
#endif

int main(int argc, char **argv)
{
    int ret = lua_main(argc, argv);

    return ret;
}
#endif
