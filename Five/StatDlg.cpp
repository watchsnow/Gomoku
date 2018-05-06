//Download by http://www.NewXing.com
// StatDlg.cpp : implementation file
//

#include "stdafx.h"
#include "five.h"
#include "StatDlg.h"
#include "Table.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStatDlg dialog


CStatDlg::CStatDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CStatDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStatDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CStatDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStatDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CStatDlg, CDialog)
	//{{AFX_MSG_MAP(CStatDlg)
	ON_BN_CLICKED(IDC_BTN_RESET, OnBtnReset)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStatDlg message handlers

BOOL CStatDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
    // 读取姓名
    CTable *pTable = (CTable *)GetParent()->GetDlgItem( IDC_TABLE );
    SetDlgItemText( IDC_ST_NAME, pTable->m_strMe );
    ShowStat();
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CStatDlg::OnOK() 
{
	// TODO: Add extra validation here
    CFiveApp *pApp = (CFiveApp *)AfxGetApp();
    // 写入战绩统计
    TCHAR str[10];
    wsprintf( str, _T("%d"), pApp->m_nWin );
    ::WritePrivateProfileString( _T("Stats"), _T("Win"), str, pApp->m_szIni );
    wsprintf( str, _T("%d"), pApp->m_nDraw );
    ::WritePrivateProfileString( _T("Stats"), _T("Draw"), str, pApp->m_szIni );
    wsprintf( str, _T("%d"), pApp->m_nLost );
    ::WritePrivateProfileString( _T("Stats"), _T("Lost"), str, pApp->m_szIni );
	CDialog::OnOK();
}

void CStatDlg::OnBtnReset() 
{
	// TODO: Add your control notification handler code here
    CFiveApp *pApp = (CFiveApp *)AfxGetApp();
    pApp->m_nWin = 0;
    pApp->m_nDraw = 0;
    pApp->m_nLost = 0;
    ShowStat();
}

void CStatDlg::ShowStat()
{
    CFiveApp *pApp = (CFiveApp *)AfxGetApp();
    CString str;
    str.Format( _T("%d"), pApp->m_nWin );
    SetDlgItemText( IDC_ST_WIN, str );
    str.Format( _T("%d"), pApp->m_nDraw );
    SetDlgItemText( IDC_ST_DRAW, str );
    str.Format( _T("%d"), pApp->m_nLost );
    SetDlgItemText( IDC_ST_LOST, str );
    // 计算胜率
    if ( 0 == pApp->m_nWin )
    {
        str = _T("胜率：0%");
    }
    else
    {
        str.Format( _T("胜率：%d%%"), pApp->m_nWin * 100 / ( pApp->m_nWin + pApp->m_nDraw + pApp->m_nLost ) );
    }
    SetDlgItemText( IDC_ST_PERCENT, str );
}
