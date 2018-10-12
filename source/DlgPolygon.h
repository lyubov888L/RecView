#pragma once
#include "afxwin.h"

class CGazoView;

// CDlgPolygon �_�C�A���O

class CDlgPolygon : public CDialog
{
	DECLARE_DYNAMIC(CDlgPolygon)

public:
	CDlgPolygon(CWnd* pParent = NULL);   // �W���R���X�g���N�^
	virtual ~CDlgPolygon();
	void SetView(CGazoView* pView);
	void UpdateCurrentPolygon();
	void MakePolygonList();
	CString sPolygonList;

// �_�C�A���O �f�[�^
	enum { IDD = IDD_POLYGON };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	CGazoView* pv;

	DECLARE_MESSAGE_MAP()
public:

	CString m_sPolygonCurrent;
	afx_msg void OnBnClickedPolygonAdd();
	CListBox m_lbPolygonList;
	afx_msg void OnBnClickedPolygonDelete();
	virtual BOOL OnInitDialog();
protected:
	virtual void OnCancel();
	virtual void OnOK();
};
