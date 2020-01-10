void ChangeCursorIcon(HWND hwnd, int amount)
{
HWND hwnd_b1 = GetDlgItem(hwnd, 1);
HWND hwnd_b2 = GetDlgItem(hwnd, 2);
HWND hwnd_b3 = GetDlgItem(hwnd, 3);
HWND hwnd_b4 = GetDlgItem(hwnd, 4);
HWND hwnd_b5 = GetDlgItem(hwnd, 5);
HWND hwnd_b6 = GetDlgItem(hwnd, 6);
HWND hwnd_b7 = GetDlgItem(hwnd, 7);
HWND hwnd_b8 = GetDlgItem(hwnd, 8);
HWND hwnd_b9 = GetDlgItem(hwnd, 9);


HCURSOR hCursorM = LoadCursorFromFile("Cursor\\cur919.ani");
HCURSOR hCursorX = LoadCursorFromFile("Cursor\\X.cur");
HCURSOR hCursorO = LoadCursorFromFile("Cursor\\O.cur");
SetCursor(hCursorO);
SetCursor(hCursorX);
SetCursor(hCursorM);

SetClassLong(hwnd, GCL_HCURSOR, (DWORD)hCursorM);
//SetClassLong(hwnd_b1, GCL_HCURSOR, (DWORD)hCursorX);
if (amount % 2 != 0)
{
	SetClassLong(hwnd_b1, GCL_HCURSOR, (DWORD)hCursorX);
	SetClassLong(hwnd_b2, GCL_HCURSOR, (DWORD)hCursorX);
	SetClassLong(hwnd_b3, GCL_HCURSOR, (DWORD)hCursorX);
	SetClassLong(hwnd_b4, GCL_HCURSOR, (DWORD)hCursorX);
	SetClassLong(hwnd_b5, GCL_HCURSOR, (DWORD)hCursorX);
	SetClassLong(hwnd_b6, GCL_HCURSOR, (DWORD)hCursorX);
	SetClassLong(hwnd_b7, GCL_HCURSOR, (DWORD)hCursorX);
	SetClassLong(hwnd_b8, GCL_HCURSOR, (DWORD)hCursorX);
	SetClassLong(hwnd_b9, GCL_HCURSOR, (DWORD)hCursorX);
}
else
{
	SetClassLong(hwnd_b1, GCL_HCURSOR, (DWORD)hCursorO);
	SetClassLong(hwnd_b2, GCL_HCURSOR, (DWORD)hCursorO);
	SetClassLong(hwnd_b3, GCL_HCURSOR, (DWORD)hCursorO);
	SetClassLong(hwnd_b4, GCL_HCURSOR, (DWORD)hCursorO);
	SetClassLong(hwnd_b5, GCL_HCURSOR, (DWORD)hCursorO);
	SetClassLong(hwnd_b6, GCL_HCURSOR, (DWORD)hCursorO);
	SetClassLong(hwnd_b7, GCL_HCURSOR, (DWORD)hCursorO);
	SetClassLong(hwnd_b8, GCL_HCURSOR, (DWORD)hCursorO);
	SetClassLong(hwnd_b9, GCL_HCURSOR, (DWORD)hCursorO);
}

}

void Paint_on_Button(HWND hwnd,int amount)
{	
	HBITMAP mybitmap, mybut;
	
	mybut = (HBITMAP)LoadImage(NULL, "LOGo\\X_logo.bmp", IMAGE_BITMAP, 80, 80, LR_LOADFROMFILE);
	mybitmap = (HBITMAP)LoadImage(NULL, "LOGo\\O_logo.bmp", IMAGE_BITMAP, 80, 80, LR_LOADFROMFILE);
	
	if (amount % 2 != 0)
	{
		SendMessage(hwnd, (UINT)BM_SETIMAGE, (WPARAM)IMAGE_BITMAP, (LPARAM)mybut);
	}
	else
	{
		SendMessage(hwnd, (UINT)BM_SETIMAGE, (WPARAM)IMAGE_BITMAP, (LPARAM)mybitmap);
	}
}

void VOID_WM_PAINT(HWND hwnd, HBITMAP hbmp, BITMAP bmp) //mainze suartis daxatva
{
//	InvalidateRect(hwnd, 0, 0); suratis gadaxatva

	PAINTSTRUCT ps;
	HDC hdc = BeginPaint(hwnd, &ps);
	HDC hMemDC = CreateCompatibleDC(hdc);
	SelectObject(hMemDC, hbmp);
	BitBlt(hdc, 0, 0, bmp.bmWidth, bmp.bmHeight, hMemDC, 0, 0, SRCCOPY);
	ReleaseDC(hwnd,hMemDC);
	DeleteDC(hMemDC);
	EndPaint(hwnd, &ps);

	char p1[8] = "dawyeba";
	char p2[9] = "gamorTva";

	HDC huhu = GetDC(hwnd);
	AddFontResource("Fonts\\geo-eklesia.ttf");
	LOGFONT logfonts_geo = { 30,20,0,0,FW_NORMAL,FALSE,FALSE,FALSE,DEFAULT_CHARSET,0,0,0,0,"geo-eklesia" };
	HFONT hfont = CreateFontIndirect(&logfonts_geo);
	SelectObject(huhu, hfont);
	SetTextColor(huhu, RGB(255, 0, 0));
	SetBkMode(huhu,TRANSPARENT);	// gamchvirvale background
//	SetBkColor(huhu,RGB(250,0,0));	// background color
 	TextOut(huhu,20,250,p1,sizeof(p1));	// text print on screen
	TextOut(huhu, 240, 250, p2, sizeof(p2));
	/////////////////**********
	

	//********//////************/**/**/**/**//
	
	static HBITMAP hmb_1,hmb_2;
	hmb_1 = (HBITMAP)LoadImage(NULL, "LOGo\\X_logo.bmp", IMAGE_BITMAP,50, 50, LR_LOADFROMFILE);// mainistvis suratis atvirtva
	GetObject(hbmp, sizeof(BITMAP), &bmp);

	hmb_2 = (HBITMAP)LoadImage(NULL, "LOGo\\O_logo.bmp", IMAGE_BITMAP,50, 50, LR_LOADFROMFILE);// mainistvis suratis atvirtva
	GetObject(hbmp, sizeof(BITMAP), &bmp);
	HWND static_1=GetDlgItem(hwnd,10);
	SendMessage(static_1, STM_SETIMAGE, (WPARAM)IMAGE_BITMAP, (LPARAM)hmb_1);
	HWND static_2=GetDlgItem(hwnd,11);
	SendMessage(static_2, STM_SETIMAGE, (WPARAM)IMAGE_BITMAP, (LPARAM)hmb_2);
	
}


void Again_Paint(HWND hwnd)
{
	HBITMAP mybut;
	
	mybut = (HBITMAP)LoadImage(NULL, "LOGo\\Again.bmp", IMAGE_BITMAP, 80, 80, LR_LOADFROMFILE);
	
	SendMessage(hwnd, (UINT)BM_SETIMAGE, (WPARAM)IMAGE_BITMAP, (LPARAM)mybut);

}


void Change_StartMouse(HWND hwnd)
{
	HCURSOR hCursorM = LoadCursorFromFile("Cursor\\cur919.ani");
	SetCursor(hCursorM);
	SetClassLong(hwnd, GCL_HCURSOR, (DWORD)hCursorM);
}