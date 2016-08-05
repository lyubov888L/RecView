// DlgGeneral.cpp : �����t�@�C��
//

#include "stdafx.h"
#include "gazo.h"
#include "DlgGeneral.h"


// CDlgGeneral �_�C�A���O

IMPLEMENT_DYNAMIC(CDlgGeneral, CDialog)

CDlgGeneral::CDlgGeneral(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgGeneral::IDD, pParent)
	, m_sCaption1(_T(""))
	, m_sInput1(_T(""))
	, m_sCaption2(_T(""))
	, m_sInput2(_T(""))
	, m_sCaption3(_T(""))
	, m_sInput3(_T(""))
{
	m_sTitle = _T("");
}

CDlgGeneral::~CDlgGeneral()
{
}

void CDlgGeneral::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_CAPTION1, m_sCaption1);
	DDX_Text(pDX, IDC_INPUT1, m_sInput1);
	DDX_Text(pDX, IDC_CAPTION2, m_sCaption2);
	DDX_Text(pDX, IDC_INPUT2, m_sInput2);
	DDX_Text(pDX, IDC_CAPTION3, m_sCaption3);
	DDX_Text(pDX, IDC_INPUT3, m_sInput3);
}


BEGIN_MESSAGE_MAP(CDlgGeneral, CDialog)
END_MESSAGE_MAP()


// CDlgGeneral ���b�Z�[�W �n���h��

BOOL CDlgGeneral::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �����ɏ�������ǉ����Ă�������
	if (!m_sTitle.IsEmpty()) SetWindowText(m_sTitle);
	if (m_sCaption3.IsEmpty()) GetDlgItem(IDC_INPUT3)->EnableWindow(FALSE);


	return TRUE;  // return TRUE unless you set the focus to a control
	// ��O : OCX �v���p�e�B �y�[�W�͕K�� FALSE ��Ԃ��܂��B
}
