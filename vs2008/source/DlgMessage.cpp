// DlgMessage.cpp : �C���v�������e�[�V���� �t�@�C��
//

#include "stdafx.h"
#include "gazo.h"
#include "DlgMessage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgMessage �_�C�A���O


CDlgMessage::CDlgMessage(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgMessage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgMessage)
	m_Msg = _T("");
	//}}AFX_DATA_INIT
	//iFuncMode = CDLGMESSAGE_FUNCMODE_NORMAL;
}


void CDlgMessage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgMessage)
	DDX_Text(pDX, IDC_MSG_TEXT, m_Msg);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgMessage, CDialog)
	//{{AFX_MSG_MAP(CDlgMessage)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ}�b�s���O�p�̃}�N����ǉ��܂��͍폜���܂��B
	//}}AFX_MSG_MAP
	//ON_LBN_SELCHANGE(IDC_LIST1, &CDlgMessage::OnLbnSelchangeList1)
//	ON_WM_CREATE()
//ON_WM_SHOWWINDOW()
//ON_BN_CLICKED(IDC_MSG_CONVBAT, &CDlgMessage::OnBnClickedMsgConvbat)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgMessage ���b�Z�[�W �n���h��

void CDlgMessage::OnLbnSelchangeList1()
{
	// TODO: �����ɃR���g���[���ʒm�n���h�� �R�[�h��ǉ����܂��B
}

//BOOL CDlgMessage::OnInitDialog()
//{
//	CDialog::OnInitDialog();
//
//	if (iFuncMode == CDLGMESSAGE_FUNCMODE_CONVBAT) {
//		GetDlgItem(IDC_MSG_CONVBAT)->EnableWindow(TRUE);
//	} else {
//		GetDlgItem(IDC_MSG_CONVBAT)->EnableWindow(FALSE);
//	}
//
//	return TRUE;  // return TRUE unless you set the focus to a control
//	// ��O : OCX �v���p�e�B �y�[�W�͕K�� FALSE ��Ԃ��܂��B
//}

//void CDlgMessage::OnBnClickedMsgConvbat()
//{
//	m_Msg += "Test1\r\n";
//	UpdateData(FALSE);
//	GetDlgItem(IDC_MSG_TEXT)->InvalidateRect(FALSE);
//	Sleep(1000);
//	m_Msg += "Test2\r\n";
//	UpdateData(FALSE);
//	GetDlgItem(IDC_MSG_TEXT)->InvalidateRect(FALSE);
//	Sleep(1000);
//	//m_Msg += "Test3\r\n";
//	//UpdateData(FALSE);
//	//Sleep(1000);
//	//OnOK();
//}
