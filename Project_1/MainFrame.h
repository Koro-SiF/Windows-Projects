#pragma once

#include<afxwin.h>


class CMainFrame : public CFrameWnd
{

public:
	CMainFrame();
	CPoint m_startPoint;
	CPoint m_endPoint;

protected:
	DECLARE_DYNAMIC(CMainFrame)

public:
	virtual ~CMainFrame();

protected:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnClose();

	DECLARE_MESSAGE_MAP()
};


