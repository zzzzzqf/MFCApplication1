#pragma once
#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <TlHelp32.h>
#include <tchar.h>
using namespace std;

# ifndef _TOOLS_H_
# define _TOOLS_H_

extern HWND Q_GetXHandleByProcessName(LPCWSTR procName);

# endif // TOOLS
