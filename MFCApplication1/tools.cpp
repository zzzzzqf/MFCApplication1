
#include "stdafx.h"
#include "tools.h"
#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <TlHelp32.h>
#include <tchar.h>


struct Qing_Pid
{
	HWND hwnd;
	DWORD pid;
	Qing_Pid()
	{
		hwnd = NULL;
		pid = NULL;
	}
};


BOOL CALLBACK Q_EnumWindowsProc(HWND hwnd, LPARAM lParam)
{
	Qing_Pid* Qpid = (Qing_Pid*)lParam;
	if (hwnd)
	{
		DWORD pid = 0;
		//����̵߳�ID dwProcessId�Ǹý������̵߳�ID
		DWORD dwProcessId = GetWindowThreadProcessId(hwnd, &pid);
		if (Qpid->pid == pid)
		{
			Qpid->hwnd = hwnd;
			return false;
		}
	}
	return true;
}

HWND Q_GetXHandleByProcessName(LPCWSTR procName)
{
	//���ݽ��������ҵ�����ID
	//DWORD iProcID = 0;
	Qing_Pid* Qpid = new Qing_Pid;
	//	int i = 0;
	PROCESSENTRY32 pEntry = { sizeof(PROCESSENTRY32) };

	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, 0);
	if (hSnapshot != INVALID_HANDLE_VALUE)
	{
		if (Process32First(hSnapshot, &pEntry))
		{
			while (Process32Next(hSnapshot, &pEntry))
			{
				if (lstrcmpi(procName, pEntry.szExeFile) == 0)
				{
					Qpid->pid = pEntry.th32ProcessID;
					//wcout << "   Pid: " << pEntry.th32ProcessID << " , Pid name " << pEntry.szExeFile << " , thread num is " << pEntry.cntThreads << endl;
					CloseHandle(hSnapshot);
					break;
				}
			}
		}
	}

	//���ݽ���ID������ô��ھ��������
	if (Qpid->pid)
	{
		EnumWindows(Q_EnumWindowsProc, (LPARAM)Qpid);
		return Qpid->hwnd;
	}
	else
		cout << "no this process name" << endl;
	return NULL;

}

