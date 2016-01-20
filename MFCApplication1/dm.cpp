// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "dm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// Cdmsoft properties

/////////////////////////////////////////////////////////////////////////////
// Cdmsoft operations

CString Cdmsoft::Ver()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetPath(LPCTSTR path)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		path);
	return result;
}

CString Cdmsoft::Ocr(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, color, sim);
	return result;
}

long Cdmsoft::FindStr(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim, x, y);
	return result;
}

long Cdmsoft::GetResultCount(LPCTSTR str)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		str);
	return result;
}

long Cdmsoft::GetResultPos(LPCTSTR str, long index, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		str, index, x, y);
	return result;
}

long Cdmsoft::StrStr(LPCTSTR s, LPCTSTR str)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		s, str);
	return result;
}

long Cdmsoft::SendCommand(LPCTSTR cmd)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		cmd);
	return result;
}

long Cdmsoft::UseDict(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}

CString Cdmsoft::GetBasePath()
{
	CString result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetDictPwd(LPCTSTR pwd)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pwd);
	return result;
}

CString Cdmsoft::OcrInFile(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, pic_name, color, sim);
	return result;
}

long Cdmsoft::Capture(long x1, long y1, long x2, long y2, LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, file);
	return result;
}

long Cdmsoft::KeyPress(long vk)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		vk);
	return result;
}

long Cdmsoft::KeyDown(long vk)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		vk);
	return result;
}

long Cdmsoft::KeyUp(long vk)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		vk);
	return result;
}

long Cdmsoft::LeftClick()
{
	long result;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::RightClick()
{
	long result;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::MiddleClick()
{
	long result;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::LeftDoubleClick()
{
	long result;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::LeftDown()
{
	long result;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::LeftUp()
{
	long result;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::RightDown()
{
	long result;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::RightUp()
{
	long result;
	InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::MoveTo(long x, long y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x19, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y);
	return result;
}

long Cdmsoft::MoveR(long rx, long ry)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		rx, ry);
	return result;
}

CString Cdmsoft::GetColor(long x, long y)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x, y);
	return result;
}

CString Cdmsoft::GetColorBGR(long x, long y)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x, y);
	return result;
}

CString Cdmsoft::RGB2BGR(LPCTSTR rgb_color)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		rgb_color);
	return result;
}

CString Cdmsoft::BGR2RGB(LPCTSTR bgr_color)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		bgr_color);
	return result;
}

long Cdmsoft::UnBindWindow()
{
	long result;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::CmpColor(long x, long y, LPCTSTR color, double sim)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
	InvokeHelper(0x20, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y, color, sim);
	return result;
}

long Cdmsoft::ClientToScreen(long hwnd, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x21, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y);
	return result;
}

long Cdmsoft::ScreenToClient(long hwnd, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x22, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y);
	return result;
}

long Cdmsoft::ShowScrMsg(long x1, long y1, long x2, long y2, LPCTSTR msg, LPCTSTR color)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x23, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, msg, color);
	return result;
}

long Cdmsoft::SetMinRowGap(long row_gap)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x24, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		row_gap);
	return result;
}

long Cdmsoft::SetMinColGap(long col_gap)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		col_gap);
	return result;
}

long Cdmsoft::FindColor(long x1, long y1, long x2, long y2, LPCTSTR color, double sim, long dir, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, color, sim, dir, x, y);
	return result;
}

CString Cdmsoft::FindColorEx(long x1, long y1, long x2, long y2, LPCTSTR color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x27, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, color, sim, dir);
	return result;
}

long Cdmsoft::SetWordLineHeight(long line_height)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x28, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		line_height);
	return result;
}

long Cdmsoft::SetWordGap(long word_gap)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		word_gap);
	return result;
}

long Cdmsoft::SetRowGapNoDict(long row_gap)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		row_gap);
	return result;
}

long Cdmsoft::SetColGapNoDict(long col_gap)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		col_gap);
	return result;
}

long Cdmsoft::SetWordLineHeightNoDict(long line_height)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		line_height);
	return result;
}

long Cdmsoft::SetWordGapNoDict(long word_gap)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		word_gap);
	return result;
}

long Cdmsoft::GetWordResultCount(LPCTSTR str)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		str);
	return result;
}

long Cdmsoft::GetWordResultPos(LPCTSTR str, long index, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		str, index, x, y);
	return result;
}

CString Cdmsoft::GetWordResultStr(LPCTSTR str, long index)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		str, index);
	return result;
}

CString Cdmsoft::GetWords(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
	InvokeHelper(0x31, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, color, sim);
	return result;
}

CString Cdmsoft::GetWordsNoDict(long x1, long y1, long x2, long y2, LPCTSTR color)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x32, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, color);
	return result;
}

long Cdmsoft::SetShowErrorMsg(long show)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		show);
	return result;
}

long Cdmsoft::GetClientSize(long hwnd, VARIANT* width, VARIANT* height)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x34, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, width, height);
	return result;
}

long Cdmsoft::MoveWindow(long hwnd, long x, long y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y);
	return result;
}

CString Cdmsoft::GetColorHSV(long x, long y)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x36, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x, y);
	return result;
}

CString Cdmsoft::GetAveRGB(long x1, long y1, long x2, long y2)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x37, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2);
	return result;
}

CString Cdmsoft::GetAveHSV(long x1, long y1, long x2, long y2)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x38, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2);
	return result;
}

long Cdmsoft::GetForegroundWindow()
{
	long result;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::GetForegroundFocus()
{
	long result;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::GetMousePointWindow()
{
	long result;
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::GetPointWindow(long x, long y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x3c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y);
	return result;
}

CString Cdmsoft::EnumWindow(long parent, LPCTSTR title, LPCTSTR class_name, long filter)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x3d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		parent, title, class_name, filter);
	return result;
}

long Cdmsoft::GetWindowState(long hwnd, long flag)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x3e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, flag);
	return result;
}

long Cdmsoft::GetWindow(long hwnd, long flag)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x3f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, flag);
	return result;
}

long Cdmsoft::GetSpecialWindow(long flag)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x40, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		flag);
	return result;
}

long Cdmsoft::SetWindowText(long hwnd, LPCTSTR text)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x41, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, text);
	return result;
}

long Cdmsoft::SetWindowSize(long hwnd, long width, long height)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x42, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, width, height);
	return result;
}

long Cdmsoft::GetWindowRect(long hwnd, VARIANT* x1, VARIANT* y1, VARIANT* x2, VARIANT* y2)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x43, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x1, y1, x2, y2);
	return result;
}

CString Cdmsoft::GetWindowTitle(long hwnd)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x44, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd);
	return result;
}

CString Cdmsoft::GetWindowClass(long hwnd)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x45, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::SetWindowState(long hwnd, long flag)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x46, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, flag);
	return result;
}

long Cdmsoft::CreateFoobarRect(long hwnd, long x, long y, long w, long h)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x47, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y, w, h);
	return result;
}

long Cdmsoft::CreateFoobarRoundRect(long hwnd, long x, long y, long w, long h, long rw, long rh)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x48, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y, w, h, rw, rh);
	return result;
}

long Cdmsoft::CreateFoobarEllipse(long hwnd, long x, long y, long w, long h)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x49, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y, w, h);
	return result;
}

long Cdmsoft::CreateFoobarCustom(long hwnd, long x, long y, LPCTSTR pic, LPCTSTR trans_color, double sim)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0x4a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y, pic, trans_color, sim);
	return result;
}

long Cdmsoft::FoobarFillRect(long hwnd, long x1, long y1, long x2, long y2, LPCTSTR color)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x4b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x1, y1, x2, y2, color);
	return result;
}

long Cdmsoft::FoobarDrawText(long hwnd, long x, long y, long w, long h, LPCTSTR text, LPCTSTR color, long align)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x4c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y, w, h, text, color, align);
	return result;
}

long Cdmsoft::FoobarDrawPic(long hwnd, long x, long y, LPCTSTR pic, LPCTSTR trans_color)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x4d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y, pic, trans_color);
	return result;
}

long Cdmsoft::FoobarUpdate(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::FoobarLock(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::FoobarUnlock(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x50, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::FoobarSetFont(long hwnd, LPCTSTR font_name, long size, long flag)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x51, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, font_name, size, flag);
	return result;
}

long Cdmsoft::FoobarTextRect(long hwnd, long x, long y, long w, long h)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x52, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x, y, w, h);
	return result;
}

long Cdmsoft::FoobarPrintText(long hwnd, LPCTSTR text, LPCTSTR color)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x53, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, text, color);
	return result;
}

long Cdmsoft::FoobarClearText(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x54, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::FoobarTextLineGap(long hwnd, long gap)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x55, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, gap);
	return result;
}

long Cdmsoft::Play(LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x56, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file);
	return result;
}

long Cdmsoft::FaqCapture(long x1, long y1, long x2, long y2, long quality, long delay, long time)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x57, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, quality, delay, time);
	return result;
}

long Cdmsoft::FaqRelease(long handle)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x58, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		handle);
	return result;
}

CString Cdmsoft::FaqSend(LPCTSTR server, long handle, long request_type, long time_out)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x59, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		server, handle, request_type, time_out);
	return result;
}

long Cdmsoft::Beep(long fre, long delay)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x5a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		fre, delay);
	return result;
}

long Cdmsoft::FoobarClose(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::MoveDD(long dx, long dy)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x5c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		dx, dy);
	return result;
}

long Cdmsoft::FaqGetSize(long handle)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		handle);
	return result;
}

long Cdmsoft::LoadPic(LPCTSTR pic_name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x5e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pic_name);
	return result;
}

long Cdmsoft::FreePic(LPCTSTR pic_name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x5f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pic_name);
	return result;
}

long Cdmsoft::GetScreenData(long x1, long y1, long x2, long y2)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x60, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2);
	return result;
}

long Cdmsoft::FreeScreenData(long handle)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x61, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		handle);
	return result;
}

long Cdmsoft::WheelUp()
{
	long result;
	InvokeHelper(0x62, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::WheelDown()
{
	long result;
	InvokeHelper(0x63, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetMouseDelay(LPCTSTR type, long delay)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type, delay);
	return result;
}

long Cdmsoft::SetKeypadDelay(LPCTSTR type, long delay)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type, delay);
	return result;
}

CString Cdmsoft::GetEnv(long index, LPCTSTR name)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x66, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		index, name);
	return result;
}

long Cdmsoft::SetEnv(long index, LPCTSTR name, LPCTSTR value)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x67, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, name, value);
	return result;
}

long Cdmsoft::SendString(long hwnd, LPCTSTR str)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x68, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, str);
	return result;
}

long Cdmsoft::DelEnv(long index, LPCTSTR name)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x69, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, name);
	return result;
}

CString Cdmsoft::GetPath()
{
	CString result;
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetDict(long index, LPCTSTR dict_name)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, dict_name);
	return result;
}

long Cdmsoft::FindPic(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, pic_name, delta_color, sim, dir, x, y);
	return result;
}

CString Cdmsoft::FindPicEx(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x6d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, pic_name, delta_color, sim, dir);
	return result;
}

long Cdmsoft::SetClientSize(long hwnd, long width, long height)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, width, height);
	return result;
}

long Cdmsoft::ReadInt(long hwnd, LPCTSTR addr, long type)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, addr, type);
	return result;
}

float Cdmsoft::ReadFloat(long hwnd, LPCTSTR addr)
{
	float result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		hwnd, addr);
	return result;
}

double Cdmsoft::ReadDouble(long hwnd, LPCTSTR addr)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		hwnd, addr);
	return result;
}

CString Cdmsoft::FindInt(long hwnd, LPCTSTR addr_range, long int_value_min, long int_value_max, long type)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x72, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, int_value_min, int_value_max, type);
	return result;
}

CString Cdmsoft::FindFloat(long hwnd, LPCTSTR addr_range, float float_value_min, float float_value_max)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_R4 VTS_R4;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, float_value_min, float_value_max);
	return result;
}

CString Cdmsoft::FindDouble(long hwnd, LPCTSTR addr_range, double double_value_min, double double_value_max)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_R8 VTS_R8;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, double_value_min, double_value_max);
	return result;
}

CString Cdmsoft::FindString(long hwnd, LPCTSTR addr_range, LPCTSTR string_value, long type)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, string_value, type);
	return result;
}

long Cdmsoft::GetModuleBaseAddr(long hwnd, LPCTSTR module_name)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x76, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, module_name);
	return result;
}

CString Cdmsoft::MoveToEx(long x, long y, long w, long h)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x77, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x, y, w, h);
	return result;
}

CString Cdmsoft::MatchPicName(LPCTSTR pic_name)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x78, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		pic_name);
	return result;
}

long Cdmsoft::AddDict(long index, LPCTSTR dict_info)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x79, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, dict_info);
	return result;
}

long Cdmsoft::EnterCri()
{
	long result;
	InvokeHelper(0x7a, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::LeaveCri()
{
	long result;
	InvokeHelper(0x7b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::WriteInt(long hwnd, LPCTSTR addr, long type, long v)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x7c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, addr, type, v);
	return result;
}

long Cdmsoft::WriteFloat(long hwnd, LPCTSTR addr, float v)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_R4;
	InvokeHelper(0x7d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, addr, v);
	return result;
}

long Cdmsoft::WriteDouble(long hwnd, LPCTSTR addr, double v)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_R8;
	InvokeHelper(0x7e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, addr, v);
	return result;
}

long Cdmsoft::WriteString(long hwnd, LPCTSTR addr, long type, LPCTSTR v)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4 VTS_BSTR;
	InvokeHelper(0x7f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, addr, type, v);
	return result;
}

long Cdmsoft::AsmAdd(LPCTSTR asm_ins)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x80, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		asm_ins);
	return result;
}

long Cdmsoft::AsmClear()
{
	long result;
	InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::AsmCall(long hwnd, long mode)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x82, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, mode);
	return result;
}

long Cdmsoft::FindMultiColor(long x1, long y1, long x2, long y2, LPCTSTR first_color, LPCTSTR offset_color, double sim, long dir, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x83, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, first_color, offset_color, sim, dir, x, y);
	return result;
}

CString Cdmsoft::FindMultiColorEx(long x1, long y1, long x2, long y2, LPCTSTR first_color, LPCTSTR offset_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x84, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, first_color, offset_color, sim, dir);
	return result;
}

CString Cdmsoft::AsmCode(long base_addr)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		base_addr);
	return result;
}

CString Cdmsoft::Assemble(LPCTSTR asm_code, long base_addr, long is_upper)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x86, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		asm_code, base_addr, is_upper);
	return result;
}

long Cdmsoft::SetWindowTransparent(long hwnd, long v)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x87, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, v);
	return result;
}

CString Cdmsoft::ReadData(long hwnd, LPCTSTR addr, long len)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0x88, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr, len);
	return result;
}

long Cdmsoft::WriteData(long hwnd, LPCTSTR addr, LPCTSTR data)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x89, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, addr, data);
	return result;
}

CString Cdmsoft::FindData(long hwnd, LPCTSTR addr_range, LPCTSTR data)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x8a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, data);
	return result;
}

long Cdmsoft::SetPicPwd(LPCTSTR pwd)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pwd);
	return result;
}

long Cdmsoft::Log(LPCTSTR info)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		info);
	return result;
}

CString Cdmsoft::FindStrE(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0x8d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim);
	return result;
}

CString Cdmsoft::FindColorE(long x1, long y1, long x2, long y2, LPCTSTR color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x8e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, color, sim, dir);
	return result;
}

CString Cdmsoft::FindPicE(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x8f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, pic_name, delta_color, sim, dir);
	return result;
}

CString Cdmsoft::FindMultiColorE(long x1, long y1, long x2, long y2, LPCTSTR first_color, LPCTSTR offset_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x90, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, first_color, offset_color, sim, dir);
	return result;
}

long Cdmsoft::SetExactOcr(long exact_ocr)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x91, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		exact_ocr);
	return result;
}

CString Cdmsoft::ReadString(long hwnd, LPCTSTR addr, long type, long len)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x92, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr, type, len);
	return result;
}

long Cdmsoft::FoobarTextPrintDir(long hwnd, long dir)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x93, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, dir);
	return result;
}

CString Cdmsoft::OcrEx(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
	InvokeHelper(0x94, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, color, sim);
	return result;
}

long Cdmsoft::SetDisplayInput(LPCTSTR mode)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x95, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		mode);
	return result;
}

long Cdmsoft::GetTime()
{
	long result;
	InvokeHelper(0x96, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::GetScreenWidth()
{
	long result;
	InvokeHelper(0x97, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::GetScreenHeight()
{
	long result;
	InvokeHelper(0x98, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::BindWindowEx(long hwnd, LPCTSTR display, LPCTSTR mouse, LPCTSTR keypad, LPCTSTR public_desc, long mode)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x99, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, display, mouse, keypad, public_desc, mode);
	return result;
}

CString Cdmsoft::GetDiskSerial()
{
	CString result;
	InvokeHelper(0x9a, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Cdmsoft::Md5(LPCTSTR str)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		str);
	return result;
}

CString Cdmsoft::GetMac()
{
	CString result;
	InvokeHelper(0x9c, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::ActiveInputMethod(long hwnd, LPCTSTR id)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x9d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, id);
	return result;
}

long Cdmsoft::CheckInputMethod(long hwnd, LPCTSTR id)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x9e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, id);
	return result;
}

long Cdmsoft::FindInputMethod(LPCTSTR id)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		id);
	return result;
}

long Cdmsoft::GetCursorPos(VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xa0, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x, y);
	return result;
}

long Cdmsoft::BindWindow(long hwnd, LPCTSTR display, LPCTSTR mouse, LPCTSTR keypad, long mode)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0xa1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, display, mouse, keypad, mode);
	return result;
}

long Cdmsoft::FindWindow(LPCTSTR class_name, LPCTSTR title_name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0xa2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		class_name, title_name);
	return result;
}

long Cdmsoft::GetScreenDepth()
{
	long result;
	InvokeHelper(0xa3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetScreen(long width, long height, long depth)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xa4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		width, height, depth);
	return result;
}

long Cdmsoft::ExitOs(long type)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		type);
	return result;
}

CString Cdmsoft::GetDir(long type)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa6, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		type);
	return result;
}

long Cdmsoft::GetOsType()
{
	long result;
	InvokeHelper(0xa7, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::FindWindowEx(long parent, LPCTSTR class_name, LPCTSTR title_name)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0xa8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		parent, class_name, title_name);
	return result;
}

long Cdmsoft::SetExportDict(long index, LPCTSTR dict_name)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0xa9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, dict_name);
	return result;
}

CString Cdmsoft::GetCursorShape()
{
	CString result;
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::DownCpu(long rate)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xab, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		rate);
	return result;
}

CString Cdmsoft::GetCursorSpot()
{
	CString result;
	InvokeHelper(0xac, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SendString2(long hwnd, LPCTSTR str)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0xad, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, str);
	return result;
}

long Cdmsoft::FaqPost(LPCTSTR server, long handle, long request_type, long time_out)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xae, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		server, handle, request_type, time_out);
	return result;
}

CString Cdmsoft::FaqFetch()
{
	CString result;
	InvokeHelper(0xaf, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Cdmsoft::FetchWord(long x1, long y1, long x2, long y2, LPCTSTR color, LPCTSTR word)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0xb0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, color, word);
	return result;
}

long Cdmsoft::CaptureJpg(long x1, long y1, long x2, long y2, LPCTSTR file, long quality)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0xb1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, file, quality);
	return result;
}

long Cdmsoft::FindStrWithFont(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, LPCTSTR font_name, long font_size, long flag, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_BSTR VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xb2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim, font_name, font_size, flag, x, y);
	return result;
}

CString Cdmsoft::FindStrWithFontE(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, LPCTSTR font_name, long font_size, long flag)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0xb3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim, font_name, font_size, flag);
	return result;
}

CString Cdmsoft::FindStrWithFontEx(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, LPCTSTR font_name, long font_size, long flag)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0xb4, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim, font_name, font_size, flag);
	return result;
}

CString Cdmsoft::GetDictInfo(LPCTSTR str, LPCTSTR font_name, long font_size, long flag)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0xb5, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		str, font_name, font_size, flag);
	return result;
}

long Cdmsoft::SaveDict(long index, LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0xb6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, file);
	return result;
}

long Cdmsoft::GetWindowProcessId(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

CString Cdmsoft::GetWindowProcessPath(long hwnd)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::LockInput(long lock)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		lock);
	return result;
}

CString Cdmsoft::GetPicSize(LPCTSTR pic_name)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xba, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		pic_name);
	return result;
}

long Cdmsoft::GetID()
{
	long result;
	InvokeHelper(0xbb, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::CapturePng(long x1, long y1, long x2, long y2, LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0xbc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, file);
	return result;
}

long Cdmsoft::CaptureGif(long x1, long y1, long x2, long y2, LPCTSTR file, long delay, long time)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0xbd, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, file, delay, time);
	return result;
}

long Cdmsoft::ImageToBmp(LPCTSTR pic_name, LPCTSTR bmp_name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0xbe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pic_name, bmp_name);
	return result;
}

long Cdmsoft::FindStrFast(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xbf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim, x, y);
	return result;
}

CString Cdmsoft::FindStrFastEx(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0xc0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim);
	return result;
}

CString Cdmsoft::FindStrFastE(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0xc1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim);
	return result;
}

long Cdmsoft::EnableDisplayDebug(long enable_debug)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		enable_debug);
	return result;
}

long Cdmsoft::CapturePre(LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file);
	return result;
}

long Cdmsoft::RegEx(LPCTSTR code, LPCTSTR Ver, LPCTSTR ip)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0xc4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		code, Ver, ip);
	return result;
}

CString Cdmsoft::GetMachineCode()
{
	CString result;
	InvokeHelper(0xc5, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetClipboard(LPCTSTR data)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		data);
	return result;
}

CString Cdmsoft::GetClipboard()
{
	CString result;
	InvokeHelper(0xc7, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::GetNowDict()
{
	long result;
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::Is64Bit()
{
	long result;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::GetColorNum(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, color, sim);
	return result;
}

CString Cdmsoft::EnumWindowByProcess(LPCTSTR process_name, LPCTSTR title, LPCTSTR class_name, long filter)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		process_name, title, class_name, filter);
	return result;
}

long Cdmsoft::GetDictCount(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}

long Cdmsoft::GetLastError()
{
	long result;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Cdmsoft::GetNetTime()
{
	CString result;
	InvokeHelper(0xce, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::EnableGetColorByCapture(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::CheckUAC()
{
	long result;
	InvokeHelper(0xd0, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetUAC(long uac)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		uac);
	return result;
}

long Cdmsoft::DisableFontSmooth()
{
	long result;
	InvokeHelper(0xd2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::CheckFontSmooth()
{
	long result;
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetDisplayAcceler(long level)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		level);
	return result;
}

long Cdmsoft::FindWindowByProcess(LPCTSTR process_name, LPCTSTR class_name, LPCTSTR title_name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0xd5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		process_name, class_name, title_name);
	return result;
}

long Cdmsoft::FindWindowByProcessId(long process_id, LPCTSTR class_name, LPCTSTR title_name)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0xd6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		process_id, class_name, title_name);
	return result;
}

CString Cdmsoft::ReadIni(LPCTSTR section, LPCTSTR key, LPCTSTR file)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0xd7, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		section, key, file);
	return result;
}

long Cdmsoft::WriteIni(LPCTSTR section, LPCTSTR key, LPCTSTR v, LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0xd8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		section, key, v, file);
	return result;
}

long Cdmsoft::RunApp(LPCTSTR path, long mode)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0xd9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		path, mode);
	return result;
}

long Cdmsoft::delay(long mis)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xda, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		mis);
	return result;
}

long Cdmsoft::FindWindowSuper(LPCTSTR spec1, long flag1, long type1, LPCTSTR spec2, long flag2, long type2)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0xdb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		spec1, flag1, type1, spec2, flag2, type2);
	return result;
}

CString Cdmsoft::ExcludePos(LPCTSTR all_pos, long type, long x1, long y1, long x2, long y2)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xdc, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		all_pos, type, x1, y1, x2, y2);
	return result;
}

CString Cdmsoft::FindNearestPos(LPCTSTR all_pos, long type, long x, long y)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xdd, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		all_pos, type, x, y);
	return result;
}

CString Cdmsoft::SortPosDistance(LPCTSTR all_pos, long type, long x, long y)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xde, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		all_pos, type, x, y);
	return result;
}

long Cdmsoft::FindPicMem(long x1, long y1, long x2, long y2, LPCTSTR pic_info, LPCTSTR delta_color, double sim, long dir, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xdf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, pic_info, delta_color, sim, dir, x, y);
	return result;
}

CString Cdmsoft::FindPicMemEx(long x1, long y1, long x2, long y2, LPCTSTR pic_info, LPCTSTR delta_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0xe0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, pic_info, delta_color, sim, dir);
	return result;
}

CString Cdmsoft::FindPicMemE(long x1, long y1, long x2, long y2, LPCTSTR pic_info, LPCTSTR delta_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0xe1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, pic_info, delta_color, sim, dir);
	return result;
}

CString Cdmsoft::AppendPicAddr(LPCTSTR pic_info, long addr, long size)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0xe2, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		pic_info, addr, size);
	return result;
}

long Cdmsoft::WriteFile(LPCTSTR file, LPCTSTR content)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0xe3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file, content);
	return result;
}

long Cdmsoft::Stop(long id)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		id);
	return result;
}

long Cdmsoft::SetDictMem(long index, long addr, long size)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xe5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index, addr, size);
	return result;
}

CString Cdmsoft::GetNetTimeSafe()
{
	CString result;
	InvokeHelper(0xe6, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::ForceUnBindWindow(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

CString Cdmsoft::ReadIniPwd(LPCTSTR section, LPCTSTR key, LPCTSTR file, LPCTSTR pwd)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0xe8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		section, key, file, pwd);
	return result;
}

long Cdmsoft::WriteIniPwd(LPCTSTR section, LPCTSTR key, LPCTSTR v, LPCTSTR file, LPCTSTR pwd)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0xe9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		section, key, v, file, pwd);
	return result;
}

long Cdmsoft::DecodeFile(LPCTSTR file, LPCTSTR pwd)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0xea, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file, pwd);
	return result;
}

long Cdmsoft::KeyDownChar(LPCTSTR key_str)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		key_str);
	return result;
}

long Cdmsoft::KeyUpChar(LPCTSTR key_str)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xec, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		key_str);
	return result;
}

long Cdmsoft::KeyPressChar(LPCTSTR key_str)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xed, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		key_str);
	return result;
}

long Cdmsoft::KeyPressStr(LPCTSTR key_str, long delay)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0xee, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		key_str, delay);
	return result;
}

long Cdmsoft::EnableKeypadPatch(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xef, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::EnableKeypadSync(long en, long time_out)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xf0, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en, time_out);
	return result;
}

long Cdmsoft::EnableMouseSync(long en, long time_out)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xf1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en, time_out);
	return result;
}

long Cdmsoft::DmGuard(long en, LPCTSTR type)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0xf2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en, type);
	return result;
}

long Cdmsoft::FaqCaptureFromFile(long x1, long y1, long x2, long y2, LPCTSTR file, long quality)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0xf3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, file, quality);
	return result;
}

CString Cdmsoft::FindIntEx(long hwnd, LPCTSTR addr_range, long int_value_min, long int_value_max, long type, long step, long multi_thread, long mode)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xf4, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, int_value_min, int_value_max, type, step, multi_thread, mode);
	return result;
}

CString Cdmsoft::FindFloatEx(long hwnd, LPCTSTR addr_range, float float_value_min, float float_value_max, long step, long multi_thread, long mode)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_R4 VTS_R4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xf5, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, float_value_min, float_value_max, step, multi_thread, mode);
	return result;
}

CString Cdmsoft::FindDoubleEx(long hwnd, LPCTSTR addr_range, double double_value_min, double double_value_max, long step, long multi_thread, long mode)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_R8 VTS_R8 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xf6, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, double_value_min, double_value_max, step, multi_thread, mode);
	return result;
}

CString Cdmsoft::FindStringEx(long hwnd, LPCTSTR addr_range, LPCTSTR string_value, long type, long step, long multi_thread, long mode)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xf7, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, string_value, type, step, multi_thread, mode);
	return result;
}

CString Cdmsoft::FindDataEx(long hwnd, LPCTSTR addr_range, LPCTSTR data, long step, long multi_thread, long mode)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xf8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		hwnd, addr_range, data, step, multi_thread, mode);
	return result;
}

long Cdmsoft::EnableRealMouse(long en, long mousedelay, long mousestep)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xf9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en, mousedelay, mousestep);
	return result;
}

long Cdmsoft::EnableRealKeypad(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xfa, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::SendStringIme(LPCTSTR str)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xfb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		str);
	return result;
}

long Cdmsoft::FoobarDrawLine(long hwnd, long x1, long y1, long x2, long y2, LPCTSTR color, long style, long width)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0xfc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x1, y1, x2, y2, color, style, width);
	return result;
}

CString Cdmsoft::FindStrEx(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0xfd, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim);
	return result;
}

long Cdmsoft::IsBind(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xfe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::SetDisplayDelay(long t)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xff, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		t);
	return result;
}

long Cdmsoft::GetDmCount()
{
	long result;
	InvokeHelper(0x100, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::DisableScreenSave()
{
	long result;
	InvokeHelper(0x101, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::DisablePowerSave()
{
	long result;
	InvokeHelper(0x102, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long Cdmsoft::SetMemoryHwndAsProcessId(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x103, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::FindShape(long x1, long y1, long x2, long y2, LPCTSTR offset_color, double sim, long dir, VARIANT* x, VARIANT* y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x104, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, offset_color, sim, dir, x, y);
	return result;
}

CString Cdmsoft::FindShapeE(long x1, long y1, long x2, long y2, LPCTSTR offset_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x105, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, offset_color, sim, dir);
	return result;
}

CString Cdmsoft::FindShapeEx(long x1, long y1, long x2, long y2, LPCTSTR offset_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x106, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, offset_color, sim, dir);
	return result;
}

CString Cdmsoft::FindStrS(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, VARIANT* x, VARIANT* y)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x107, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim, x, y);
	return result;
}

CString Cdmsoft::FindStrExS(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0x108, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim);
	return result;
}

CString Cdmsoft::FindStrFastS(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, VARIANT* x, VARIANT* y)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x109, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim, x, y);
	return result;
}

CString Cdmsoft::FindStrFastExS(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
	InvokeHelper(0x10a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, str, color, sim);
	return result;
}

CString Cdmsoft::FindPicS(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir, VARIANT* x, VARIANT* y)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x10b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, pic_name, delta_color, sim, dir, x, y);
	return result;
}

CString Cdmsoft::FindPicExS(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
	InvokeHelper(0x10c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		x1, y1, x2, y2, pic_name, delta_color, sim, dir);
	return result;
}

long Cdmsoft::ClearDict(long index)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x10d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		index);
	return result;
}

CString Cdmsoft::GetMachineCodeNoMac()
{
	CString result;
	InvokeHelper(0x10e, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::GetClientRect(long hwnd, VARIANT* x1, VARIANT* y1, VARIANT* x2, VARIANT* y2)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x10f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, x1, y1, x2, y2);
	return result;
}

long Cdmsoft::EnableFakeActive(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x110, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::GetScreenDataBmp(long x1, long y1, long x2, long y2, VARIANT* data, VARIANT* size)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x111, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, data, size);
	return result;
}

long Cdmsoft::EncodeFile(LPCTSTR file, LPCTSTR pwd)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x112, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file, pwd);
	return result;
}

CString Cdmsoft::GetCursorShapeEx(long type)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x113, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		type);
	return result;
}

long Cdmsoft::FaqCancel()
{
	long result;
	InvokeHelper(0x114, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString Cdmsoft::IntToData(long int_value, long type)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x115, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		int_value, type);
	return result;
}

CString Cdmsoft::FloatToData(float float_value)
{
	CString result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x116, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		float_value);
	return result;
}

CString Cdmsoft::DoubleToData(double double_value)
{
	CString result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x117, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		double_value);
	return result;
}

CString Cdmsoft::StringToData(LPCTSTR string_value, long type)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x118, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		string_value, type);
	return result;
}

long Cdmsoft::SetMemoryFindResultToFile(LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x119, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file);
	return result;
}

long Cdmsoft::EnableBind(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::SetSimMode(long mode)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		mode);
	return result;
}

long Cdmsoft::LockMouseRect(long x1, long y1, long x2, long y2)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x11c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2);
	return result;
}

long Cdmsoft::SendPaste(long hwnd)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd);
	return result;
}

long Cdmsoft::IsDisplayDead(long x1, long y1, long x2, long y2, long t)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x11e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, t);
	return result;
}

long Cdmsoft::GetKeyState(long vk)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		vk);
	return result;
}

long Cdmsoft::CopyFile(LPCTSTR src_file, LPCTSTR dst_file, long over)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x120, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		src_file, dst_file, over);
	return result;
}

long Cdmsoft::IsFileExist(LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x121, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file);
	return result;
}

long Cdmsoft::DeleteFile(LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x122, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file);
	return result;
}

long Cdmsoft::MoveFile(LPCTSTR src_file, LPCTSTR dst_file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x123, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		src_file, dst_file);
	return result;
}

long Cdmsoft::CreateFolder(LPCTSTR folder_name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x124, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		folder_name);
	return result;
}

long Cdmsoft::DeleteFolder(LPCTSTR folder_name)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x125, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		folder_name);
	return result;
}

long Cdmsoft::GetFileLength(LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x126, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		file);
	return result;
}

CString Cdmsoft::ReadFile(LPCTSTR file)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x127, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		file);
	return result;
}

long Cdmsoft::WaitKey(long key_code, long time_out)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x128, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		key_code, time_out);
	return result;
}

long Cdmsoft::DeleteIni(LPCTSTR section, LPCTSTR key, LPCTSTR file)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0x129, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		section, key, file);
	return result;
}

long Cdmsoft::DeleteIniPwd(LPCTSTR section, LPCTSTR key, LPCTSTR file, LPCTSTR pwd)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0x12a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		section, key, file, pwd);
	return result;
}

long Cdmsoft::EnableSpeedDx(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::EnableIme(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::Reg(LPCTSTR code, LPCTSTR Ver)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		code, Ver);
	return result;
}

CString Cdmsoft::SelectFile()
{
	CString result;
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString Cdmsoft::SelectDirectory()
{
	CString result;
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long Cdmsoft::LockDisplay(long lock)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		lock);
	return result;
}

long Cdmsoft::FoobarSetSave(long hwnd, LPCTSTR file, long en, LPCTSTR header)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_I4 VTS_BSTR;
	InvokeHelper(0x131, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		hwnd, file, en, header);
	return result;
}

CString Cdmsoft::EnumWindowSuper(LPCTSTR spec1, long flag1, long type1, LPCTSTR spec2, long flag2, long type2, long sort)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x132, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		spec1, flag1, type1, spec2, flag2, type2, sort);
	return result;
}

long Cdmsoft::DownloadFile(LPCTSTR url, LPCTSTR save_file, long timeout)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x133, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		url, save_file, timeout);
	return result;
}

long Cdmsoft::EnableKeypadMsg(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x134, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::EnableMouseMsg(long en)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x135, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		en);
	return result;
}

long Cdmsoft::RegNoMac(LPCTSTR code, LPCTSTR Ver)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x136, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		code, Ver);
	return result;
}

long Cdmsoft::RegExNoMac(LPCTSTR code, LPCTSTR Ver, LPCTSTR ip)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0x137, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		code, Ver, ip);
	return result;
}

long Cdmsoft::SetEnumWindowDelay(long delay)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x138, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		delay);
	return result;
}

long Cdmsoft::FindMulColor(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
	InvokeHelper(0x139, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		x1, y1, x2, y2, color, sim);
	return result;
}

CString Cdmsoft::GetDict(long index, long font_index)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		index, font_index);
	return result;
}
