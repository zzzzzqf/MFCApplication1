
// MFCApplication1Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"
#include "Tchar.h"
#include "dm.h"
#include "tools.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


Cdmsoft dm;

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication1Dlg 对话框



CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCApplication1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication1Dlg::OnBnClickedButton4)
	ON_EN_CHANGE(IDC_OUT, &CMFCApplication1Dlg::OnEnChangeOut)
END_MESSAGE_MAP()


// CMFCApplication1Dlg 消息处理程序

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	CoInitialize(NULL);//初始化线程com库
	dm.CreateDispatch(_T("dm.dmsoft"));

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCApplication1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

BOOL CMFCApplication1Dlg::RegistryDll(CString& szDllPath)
{

	LRESULT(CALLBACK* lpDllEntryPoint)();
	HINSTANCE hLib = LoadLibrary(szDllPath);
	if (hLib < (HINSTANCE)HINSTANCE_ERROR)
	{
		return FALSE;
	}
	(FARPROC&)lpDllEntryPoint = GetProcAddress(hLib, "DllRegisterServer");
	BOOL bRet = FALSE;
	if (lpDllEntryPoint != NULL)
	{
		HRESULT hr = (*lpDllEntryPoint)();
		bRet = SUCCEEDED(hr);
		if (FAILED(hr))
		{
			AfxMessageBox(_T("注册失败"));
		}
	}
	FreeLibrary(hLib);
	return bRet;
}

void CMFCApplication1Dlg::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CString strFilePath;
	TCHAR strBuff[256];
	GetCurrentDirectory(256, strBuff);
	strFilePath.Format(_T("%s\\dm.dll"), strBuff);
	AfxMessageBox(strFilePath);
	RegistryDll(strFilePath);
}


void CMFCApplication1Dlg::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码


	CString strPath = dm.GetBasePath();//获取注册到系统中的dm.dll的路径

	

	AfxMessageBox(dm.Ver());
}


void CMFCApplication1Dlg::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码
	//dm.Capture(0,0,200,200,_T("screen.bmp"));
	long hwnd = dm.FindWindowByProcess(_T("notepad.exe"), _T(""), _T("记事本"));
	if (hwnd == 0)
	{
		AfxMessageBox(_T("bind failed"));
		return ;
	}
	dm.SetWindowTextW(hwnd, _T("hello"));
	//long hwnd = dm.GetMousePointWindow();
	long dm_ret = dm.BindWindow(hwnd, _T("gdi"), _T("normal"), _T("normal"), 0);
	//dm.Capture(0, 0, 200, 200, _T("screen3.bmp"));
	//dm.MoveTo(100, 100);
	//for (int i = 0; i < 5;i++)
		dm.KeyPress(49);
	dm.UnBindWindow();
	//AfxMessageBox(_T("over"));

}


void CMFCApplication1Dlg::OnBnClickedButton4()
{
	
	// TODO:  在此添加控件通知处理程序代码
	TCHAR name[255] = _T("notepad.exe");
	HWND hwnd = Q_GetXHandleByProcessName(name);
	dm.SetWindowTextW((long)hwnd, _T("hello"));
	//SetWindowTextA(hwnd, "hello");
	TRACE(dm.Ver());
	TRACE("\r\n");
	long dm_ret = dm.BindWindow((long)hwnd, _T("gdi"), _T("windows"), _T("windows"), 0);
	//dm.Capture(0, 0, 200, 300, _T("123.bmp"));
	//long res = dm.KeyPressChar(_T("a"));
//	dm.MoveTo(300,400);
//	dm.LeftClick();
//	RECT rc;
	VARIANT x1, y1, x2, y2;
	dm.GetWindowRect((long)hwnd, &x1, &y1, &x2, &y2);
	//GetWindowRect(hwnd, &rc);
	long res = dm.KeyPressChar(_T("a"));
	CString str = VariantToCString(x1) + " " + VariantToCString(y1) + " " + VariantToCString(x2) + " " + VariantToCString(y2);
	SetDlgItemText(IDC_EDIT1, str);
	//TRACE(res + "\r\n");

}


void CMFCApplication1Dlg::OnEnChangeOut()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


CString CMFCApplication1Dlg::VariantToCString(VARIANT var)
{
	CString strValue;
	_variant_t var_t;
	_bstr_t bst_t;
	time_t cur_time;
	CTime time_value;
	COleCurrency var_currency;
	switch (var.vt)
	{
	case VT_EMPTY:
		strValue = _T("");
		break;
	case VT_UI1:
		strValue.Format(_T("%d"), var.bVal);
		break;
	case VT_I2:
		strValue.Format(_T("%d"), var.iVal);
		break;
	case VT_I4:
		strValue.Format(_T("%d"), var.lVal);
		break;
	case VT_R4:
		strValue.Format(_T("%f"), var.fltVal);
		break;
	case VT_R8:
		strValue.Format(_T("%f"), var.dblVal);
		break;
	case VT_CY:
		var_currency = var;
		strValue = var_currency.Format(0);
		break;
	case VT_BSTR:
		var_t = var;
		bst_t = var_t;
		strValue.Format(_T("%s"), (const char*)bst_t);
		break;
	case VT_NULL:
		strValue = _T("");
		break;
	case VT_DATE:
		cur_time = (long)var.date;
		time_value = cur_time;
		strValue = time_value.Format("%A,%B%d,%Y");
		break;
	case VT_BOOL:
		strValue.Format(_T("%d"), var.boolVal);
		break;
	default:
		strValue = _T("");
		break;
	}
	return strValue;
}
