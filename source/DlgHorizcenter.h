#pragma once


// CDlgHorizcenter �_�C�A���O

class CDlgHorizcenter : public CDialog
{
	DECLARE_DYNAMIC(CDlgHorizcenter)

public:
	CDlgHorizcenter(CWnd* pParent = NULL);   // �W���R���X�g���N�^
	virtual ~CDlgHorizcenter();
	void SetDoc(CGazoDoc* pDoc);

// �_�C�A���O �f�[�^
	enum { IDD = IDD_HORIZCENTER };

protected:
	CGazoDoc* pd;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedHorizcenGetlist();

	int mBack;
	CString mOutpath;
private:
	CString mList;
public:
	afx_msg void OnBnClickedHorizcenSave();
	int mAvg;
	int mRelative;
};
