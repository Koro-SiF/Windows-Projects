#include "MainFrame.h"

IMPLEMENT_DYNAMIC(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
    ON_WM_LBUTTONDOWN()
    ON_WM_LBUTTONUP()
    ON_WM_CLOSE()
END_MESSAGE_MAP()


CMainFrame::CMainFrame()
{
	Create(NULL, _T("Generic Sample Application"));
}

CMainFrame::~CMainFrame()
{
}

void CMainFrame::OnLButtonDown(UINT nFlags, CPoint point)
{
    m_startPoint = point;
    CFrameWnd::OnLButtonDown(nFlags, point);
}

void CMainFrame::OnLButtonUp(UINT nFlags, CPoint point)
{
    m_endPoint = point;

    CString coordinates;

    if((m_startPoint.x == m_endPoint.x) && (m_startPoint.y == m_endPoint.y))
        coordinates.Format(L"Mouse click at (%d, %d)", m_startPoint.x, m_startPoint.y);
    else
        coordinates.Format(L"Mouse dragged from (%d, %d) to (%d, %d)", m_startPoint.x, m_startPoint.y, m_endPoint.x, m_endPoint.y);

    AfxMessageBox(coordinates, MB_OK | MB_ICONINFORMATION);

    CFrameWnd::OnLButtonUp(nFlags, point);
}

void CMainFrame::OnClose()
{
    if (MessageBox(_T("Are you sure you want to close the window?"), _T("Confirmation"), MB_YESNO | MB_ICONQUESTION) == IDYES)
    {
        CFrameWnd::OnClose();
    }
}
