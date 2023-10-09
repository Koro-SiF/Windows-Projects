#include "MyApp.h"
#include "MainFrame.h"

CMyApp::CMyApp()
{
	
}

CMyApp theApp;

BOOL CMyApp::InitInstance()
{
	CWinApp::InitInstance();

	CMainFrame* pFrame = new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;

	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();

	return TRUE;
}


