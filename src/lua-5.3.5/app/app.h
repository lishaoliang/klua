///////////////////////////////////////////////////////////////////////////
//  Copyright(c) 2018-2025, All Rights Reserved
//  Created: 2019/05/11
//
/// @file    app.h
/// @brief   文件简要描述
/// @version 0.1
/// @history 修改历史
///  \n 2019/05/11 0.1 创建文件
/// @warning 没有警告
///////////////////////////////////////////////////////////////////////////
#ifndef __APP_H__
#define __APP_H__

#include "lua.h"

int lua_main(int argc, char **argv);    // lua.c
//int luac_main(int argc, char* argv[]);  // luac.c


int app_openlibs_ex(lua_State *L);      // 打开扩展库


#endif // __APP_H__
//end
