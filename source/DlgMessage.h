#if !defined(AFX_DLGMESSAGE_H__0796B2D1_B700_4B38_A7F2_973027D16FF9__INCLUDED_)
#define AFX_DLGMESSAGE_H__0796B2D1_B700_4B38_A7F2_973027D16FF9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//#define CDLGMESSAGE_FUNCMODE_NORMAL 0
//#define CDLGMESSAGE_FUNCMODE_CONVBAT 1

// DlgMessage.h : �w�b�_�[ �t�@�C��
//

/////////////////////////////////////////////////////////////////////////////
// CDlgMessage �_�C�A���O

class CDlgMessage : public CDialog
{
// �R���X�g���N�V����
public:
	CDlgMessage(CWnd* pParent = NULL);   // �W���̃R���X�g���N�^

// �_�C�A���O �f�[�^
	//{{AFX_DATA(CDlgMessage)
	enum { IDD = IDD_MESSAGE };
	CString	m_Msg;
	//}}AFX_DATA

public:
	//int iFuncMode;
// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CDlgMessage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
protected:

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
	//{{AFX_MSG(CDlgMessage)
		// ����: ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ����܂��B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
//	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
//	virtual BOOL OnInitDialog();
//	afx_msg void OnBnClickedMsgConvbat();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_DLGMESSAGE_H__0796B2D1_B700_4B38_A7F2_973027D16FF9__INCLUDED_)
