#pragma once


// CDlgHistoOpt �_�C�A���O

class CDlgHistoOpt : public CDialog
{
	DECLARE_DYNAMIC(CDlgHistoOpt)

public:
	CDlgHistoOpt(CWnd* pParent = NULL);   // �W���R���X�g���N�^
	virtual ~CDlgHistoOpt();

// �_�C�A���O �f�[�^
	enum { IDD = IDD_HISTO_OPT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
public:
	CString m_Prefix;
	int m_TrimAvrg;
	BOOL m_16bit;
	int m_RemoveDepth;
	double m_RemoveLAC;
};
