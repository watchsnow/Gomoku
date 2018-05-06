//Download by http://www.NewXing.com
// NameDlg.cpp : implementation file
//

#include "stdafx.h"
#include "five.h"
#include "Table.h"
#include "NameDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNameDlg dialog


CNameDlg::CNameDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNameDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNameDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNameDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNameDlg, CDialog)
	//{{AFX_MSG_MAP(CNameDlg)
	ON_EN_UPDATE(IDC_EDIT_NAME, OnUpdateEditName)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNameDlg message handlers

void CNameDlg::OnUpdateEditName() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function to send the EM_SETEVENTMASK message to the control
	// with the ENM_UPDATE flag ORed into the lParam mask.
	
	// TODO: Add your control notification handler code here
	CString str;
    GetDlgItemText( IDC_EDIT_NAME, str );
    GetDlgItem( IDOK )->EnableWindow( !str.IsEmpty() );
}

BOOL CNameDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	CEdit *pEdit = (CEdit *)GetDlgItem( IDC_EDIT_NAME );
    // 读取玩家姓名
    CFiveApp *pApp = (CFiveApp *)AfxGetApp();
    ::GetPrivateProfileString( _T("Options"), _T("Name"), _T("Renjiu"), m_strName, 15, pApp->m_szIni );
    // 设置文本及其它杂项
    pEdit->LimitText( 15 );
    pEdit->SetWindowText( m_strName );
    pEdit->SetSel( 0, -1 );
    pEdit->SetFocus();
	return FALSE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CNameDlg::OnOK() 
{
	// TODO: Add extra validation here
    // 写入玩家姓名
    CFiveApp *pApp = (CFiveApp *)AfxGetApp();
    GetDlgItemText( IDC_EDIT_NAME, m_strName, 10 );
    ::WritePrivateProfileString( _T("Options"), _T("Name"), m_strName, pApp->m_szIni );
    // 设置玩家姓名
    CTable *pTable = (CTable *)GetParent()->GetDlgItem( IDC_TABLE );
    pTable->m_strMe = m_strName;
	CDialog::OnOK();
}
