#pragma once

#include "resource.h"
#include "CApp.h"
#include <vector>
#include <algorithm>
#include <objidl.h>
#include <gdiplus.h>
#pragma comment (lib,"Gdiplus.lib")
using namespace Gdiplus;
using namespace std;
//Windows Aero theme
#pragma comment(linker,"\"/manifestdependency:type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")




// Global Variables:

HWND main, searchBox,hwnd;
NOTIFYICONDATA nid = {};
HHOOK hHook;
int k = 0, state = 0;
std::vector<CApp*> app;
std::vector<CApp*> currentSearch;
std::vector<CApp*> usedapp;


LRESULT CALLBACK KeyHookProc(int nCode, WPARAM wParam, LPARAM lParam);
void LoadNIcon(HWND hwnd);
void LoadFile(WCHAR* path);
void LoadSearchBox();
void Excute();
void ClearItem();
void SortData();
void LoadData();
void SaveData();
int CountUsedApp();
void UsedAppData();
HFONT getDefaultFont(int size);

//Bảng màu
Color listColor[10] = { 
Color(255,0,0,255),
Color(255, 0, 0),
Color(0, 255, 0),
Color(1, 255, 213),
Color(0, 0, 255),
Color(231, 76, 60),
Color(146, 1, 255),
Color(128, 0, 128),
Color(95, 95, 95),
Color(255, 153, 0)
};