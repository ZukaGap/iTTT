// iTTT.cpp : Defines the entry point for the application.
/*
	iTTT.cpp is main Code file
	
	  This Program Make Zurab Gaprindashvili
	  16/04/2019
		if something not working dont worry because This application is beta

	This Program Write in
	Microsoft Visual C++
	Copyright 
	
*/

#include "stdafx.h"

#include <windows.h>
//#include <Winuser.h>
//#include <Winbase.h>
#include<MMSystem.h>
#include <stdio.h>
#include <string>
#pragma comment (lib,"winmm.lib")
using namespace std;


//#include "Main_Header.h"
char str[2] = "";
static int amount = 1;
static HBITMAP hbmp1,hbmp2;
static BITMAP bmp1,bmp2;
static int SCOREX=0;
static int SCOREO=0;
bool Clicked=false;
bool here = false;
char winadadeba[10];
int xxxl = 0;


#include "Buttons.cpp"
#include "Paint.cpp"
#include "Again.cpp"
#include "score.cpp"
//#include "bfunc.cpp"

#include "OUTPUT.cpp"
#include "Win.cpp"
//#include "ifunc.cpp"
#include "WM_CREATE_F.cpp"
#include "Header.cpp"




int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
	WNDCLASS wc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = CreateSolidBrush(RGB(232, 116, 100));
	wc.hCursor = 0;
	wc.hIcon = 0;
	wc.hInstance = 0;
	wc.lpfnWndProc = my_function;
	wc.lpszClassName = "777";
	wc.lpszMenuName = 0;
	wc.style = 0;

	int reg = RegisterClass(&wc);
	if (!reg)
	{
		MessageBox(0, "RegisterClass Error Calculator", 0, 0);
		reg = GetLastError();
		return 0;
	} 
		

	int X, Y, W, H;
	X = 200; Y = 100; W = 400; H = 500;
	DWORD style = WS_CLIPCHILDREN |WS_CLIPSIBLINGS| WS_VISIBLE | WS_OVERLAPPED | BS_BITMAP |WS_POPUP| WS_MINIMIZEBOX | WS_SYSMENU;
	HWND hwnd_main = CreateWindow(wc.lpszClassName, "Tic Tac Toe", style, X, Y, W, H, 0, 0, 0, 0);
//	Buttons(hwnd_main);
	
	
	MSG msg;
	while (1)
	{
		GetMessage(&msg, 0, 0, 0);
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

}

