// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  从 Windows 头文件中排除极少使用的信息
// Windows 头文件:
#include <windows.h>

// C 运行时头文件
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <objbase.h>
#include <zmouse.h>
#include <exdisp.h>
#include <comdef.h>
#include <vector>
#include <sstream>
// TODO: 在此处引用程序需要的其他头文件
#ifndef _USE_DUILIB_
#define _USE_DUILIB_
#endif

#define  _CONSOLE
#define _VSOUTPUT
//#include <lua.hpp>
//#include "DuiLib\UIlib.h"
//using namespace DuiLib;
// #ifdef _DEBUG
// #   ifdef _UNICODE
// #       pragma comment(lib, "DuiLib_ud.lib")
// #   else
// #       pragma comment(lib, "DuiLib_d.lib")
// #   endif
// #else
// #   ifdef _UNICODE
// #       pragma comment(lib, "..\\Lib\\DuiLib_u.lib")
// #   else
// #       pragma comment(lib, "..\\Lib\\DuiLib.lib")
// #   endif
// #endif
#include "LuaDuiLib\LuaDuiLib.h"
using namespace DuiLib;
#ifdef _DEBUG
#   ifdef _UNICODE
#       pragma comment(lib, "LuaDuiLib_ud.lib")
#   else
#       pragma comment(lib, "LuaDuiLib_d.lib")
#   endif
#else
#   ifdef _UNICODE
#       pragma comment(lib, "..\\Lib\\DuiLib_u.lib")
#   else
#       pragma comment(lib, "..\\Lib\\DuiLib.lib")
#   endif
#endif