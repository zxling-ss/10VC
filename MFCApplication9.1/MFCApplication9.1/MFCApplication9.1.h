
// MFCApplication9.1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCApplication91App: 
// �йش����ʵ�֣������ MFCApplication9.1.cpp
//

class CMFCApplication91App : public CWinApp
{
public:
	CMFCApplication91App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication91App theApp;