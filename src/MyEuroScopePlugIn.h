﻿// MyEuroScopePlugIn.h: MyEuroScopePlugIn DLL 的主标头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"		// 主符号


// CMyEuroScopePlugInApp
// 有关此类实现的信息，请参阅 MyEuroScopePlugIn.cpp
//

class CMyEuroScopePlugInApp : public CWinApp
{
public:
	CMyEuroScopePlugInApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
