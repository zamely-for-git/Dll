
// MyDllTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMyDllTestApp:
// �йش����ʵ�֣������ MyDllTest.cpp
//

class CMyDllTestApp : public CWinApp
{
public:
	CMyDllTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMyDllTestApp theApp;