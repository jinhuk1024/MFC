#pragma once
#include "afxdialogex.h"
#include "EmpEventHandler.h"
#include "EmpManager.h"

// UpdateEmp 대화 상자

class UpdateEmp : public CDialogEx,
	public AddEmployeeEventHandler,
	public RemoveEmployeeEventHandler
{
	DECLARE_DYNAMIC(UpdateEmp)

public:
	UpdateEmp(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~UpdateEmp();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_UPDATEEMP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl updatelist;
	CStatic pic_img;
	CString dept;
	CString posit;
	CString phone;
	CString ext;
	CString address;
	CString image;


	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonUpdatepic();
	afx_msg void OnBnClickedButtonUpdateempok();
	afx_msg void OnBnClickedButtonUpdateempcancel();
	afx_msg void OnLvnItemchangedListUpdateemp(NMHDR* pNMHDR, LRESULT* pResult);

	virtual void AddedEmployee(Employee* employee);
	virtual void RemovedEmployee(CString num);
};
