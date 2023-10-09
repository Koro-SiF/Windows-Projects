#pragma once

#include<afxwin.h>

class CMyApp : public CWinApp
{
public:
	CMyApp();

public:
	virtual BOOL InitInstance();

};

extern CMyApp theApp;