
// Salary_Calc_MFC_App.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CSalaryCalcMFCAppApp:
// See Salary_Calc_MFC_App.cpp for the implementation of this class
//

class CSalaryCalcMFCAppApp : public CWinApp
{
public:
	CSalaryCalcMFCAppApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSalaryCalcMFCAppApp theApp;
