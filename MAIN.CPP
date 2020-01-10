#include "Main_Header.h"


int main()//__stdcall WinMain(HINSTANCE histance, HINSTANCE hprevinstance, LPSTR lpCmdLine, int nCmdShow)
{
	FreeConsole();
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



