#pragma once
#include "afxcmn.h"

//#define DLGFRAMELIST_NUM_REF_FRAMES 30

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
	DWORD m_dwSelectedFrame;
public:
	CTreeCtrl m_treeFrames;
	CGazoDoc* pd;
	CString m_sFramesToExclude;
	int* m_piRevList;
	__int64 m_lHDF5DataSize[3];
	virtual BOOL OnInitDialog();
protected:
	virtual void OnOK();
public:
	afx_msg void OnNMClickFramelistTree(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMSetfocusFramelistTree(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTvnSelchangedFramelistTree(NMHDR *pNMHDR, LRESULT *pResult);
};
