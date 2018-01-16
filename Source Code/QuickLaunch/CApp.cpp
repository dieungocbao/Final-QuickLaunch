#include "stdafx.h"
#include "CApp.h"


CApp::CApp()
{
}

CApp::CApp(WCHAR* m_name, WCHAR* m_path, int m_seq)
{
	wcscpy_s(Name, MAX_PATH, m_name);
	wcscpy_s(path, MAX_PATH, m_path);
	seq = m_seq;
}


WCHAR* CApp::GetName()
{
	return Name;
}
WCHAR* CApp::GetPath()
{
	return path;
}
int CApp::GetSeq()
{
	return seq;
}
void CApp::SetSeq(int m_seq)
{
	seq = m_seq;
}
void CApp::IncreaseSeq()
{
	seq++;
}
void CApp::Execute()
{
	//set info to execute
	SHELLEXECUTEINFO info = { 0 };
	info.cbSize = sizeof(SHELLEXECUTEINFO);
	info.fMask = 0;
	info.hwnd = GetDesktopWindow();
	info.lpVerb = NULL;
	info.lpFile = path;
	info.lpParameters = _T("");
	info.nShow = SW_SHOW;
	info.lpDirectory = NULL;
	info.hInstApp = NULL;

	ShellExecuteEx(&info);
}



CApp::~CApp()
{
}
