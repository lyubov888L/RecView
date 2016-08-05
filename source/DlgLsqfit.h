#pragma once


// CDlgLsqfit �_�C�A���O

class CDlgLsqfit : public CDialog
{
friend class CGazoApp;
	DECLARE_DYNAMIC(CDlgLsqfit)

public:
	CDlgLsqfit(CWnd* pParent = NULL);   // �W���R���X�g���N�^
	virtual ~CDlgLsqfit();

	//CString refFilePath;
	//TCHAR* refFileList;
	int nRefFiles;
	int nQryFiles;

// �_�C�A���O �f�[�^
	enum { IDD = IDD_LSQFIT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLsqfitRefset();
	CString m_RefList;
	CString m_RefMsg;
protected:
	void UpdateNfiles();
	bool bStarted;
	void EnableCtrl();
public:
	afx_msg void OnBnClickedLsqfitStart();
	CString m_Result;
	afx_msg void OnBnClickedLsqfitQryset();
	CString m_QryList;
	CString m_QryMsg;
	int m_XLow;
	int m_XHigh;
	int m_YLow;
	int m_YHigh;
	int m_ZLow;
	int m_ZHigh;
	afx_msg void OnBnClickedLsqfitStop();
	afx_msg void OnBnClickedLsqfitQueue();
};
