
// UsingLibDll.h : UsingLibDll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingLibDllApp:
// �йش����ʵ�֣������ UsingLibDll.cpp
//

class CUsingLibDllApp : public CWinApp
{
public:
	CUsingLibDllApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingLibDllApp theApp;
