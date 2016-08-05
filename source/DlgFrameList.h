#pragma once
#include "afxcmn.h"

class CGazoDoc;

// CDlgFrameList �_�C�A���O

class CDlgFrameList : public CDialog
{
	DECLARE_DYNAMIC(CDlgFrameList)

public:
	CDlgFrameList(CWnd* pParent = NULL);   // �W���R���X�g���N�^
	virtual ~CDlgFrameList();

// �_�C�A���O �f�[�^
	enum { IDD = IDD_FRAMELIST };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
private:
public:
	CTreeCtrl m_treeFrames;
	CGazoDoc* pd;
	virtual BOOL OnInitDialog();
protected:
	virtual void OnOK();
};
