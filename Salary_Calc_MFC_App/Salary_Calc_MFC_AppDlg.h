
// Salary_Calc_MFC_AppDlg.h : header file
//

#pragma once


// CSalaryCalcMFCAppDlg dialog
class CSalaryCalcMFCAppDlg : public CDialogEx
{
// Construction
public:
	CSalaryCalcMFCAppDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SALARY_CALC_MFC_APP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString v_edit_brut_s;
	CString v_edit_net_salary;
};
