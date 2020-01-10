void ChangeCursorIcon(HWND hwnd, int amount);

void Play_SoundED()
{
	PlaySound(TEXT("SoundTrack\\Schubert - Serenade.wav"), NULL, SND_ASYNC);
}


void VOID_WM_CREATE(HWND hwnd,int amount)
{

HICON hIcon, hIconSm;
hbmp1 = (HBITMAP)LoadImage(NULL, "EIFFEL_M.bmp", IMAGE_BITMAP,400, 500, LR_LOADFROMFILE);// mainistvis 1 suratis atvirtva
hbmp2 = (HBITMAP)LoadImage(NULL, "EIFfel.bmp", IMAGE_BITMAP,400, 500, LR_LOADFROMFILE);// mainistvis 2 suratis atvirtva
GetObject(hbmp1, sizeof(BITMAP), &bmp1);
GetObject(hbmp2, sizeof(BITMAP), &bmp2);


//***--- 32x32 icon 
hIcon = (HICON)LoadImage(NULL, "icon.ico", IMAGE_ICON, 32, 32, LR_LOADFROMFILE);
SendMessage(hwnd, WM_SETICON, ICON_BIG, (LPARAM)hIcon);

//---///***--- mtavari fanjris icon
hIconSm = (HICON)LoadImage(NULL, "NoNmain.ico", IMAGE_ICON, 16, 16, LR_LOADFROMFILE);
SendMessage(hwnd, WM_SETICON, ICON_SMALL, (LPARAM)hIconSm);

ChangeCursorIcon(hwnd, amount);

DWORD thrded_id = NULL;
CreateThread(NULL, NULL, (PTHREAD_START_ROUTINE)Play_SoundED, (void *)NULL, NULL, &thrded_id);

}


VOID TrackPopupMenu_VOID(HWND hwnd)
{
	POINT pt;
	HMENU hMenuPopup = CreatePopupMenu();
	HMENU PlayerMenu = CreateMenu();
	//AppendMenu(hmenu, MF_POPUP, (UINT_PTR)hmenu_popup_file, "&Menu");
	AppendMenu(hMenuPopup, MF_STRING, 128, "&New Game");
	AppendMenu(hMenuPopup, MF_STRING, 125, "&Reset Score");
	AppendMenu(hMenuPopup, MF_STRING, 123, "&Connection");
	//***
	AppendMenu(hMenuPopup, MF_STRING, 124, "&Help");
	AppendMenu(hMenuPopup, MF_POPUP, (UINT_PTR)PlayerMenu, "&Player");
	AppendMenu(PlayerMenu, MF_STRING, 200, "&1 Player");
	AppendMenu(PlayerMenu, MF_STRING, 201, "&2 Player");
	//***	
	AppendMenu(hMenuPopup, MF_SEPARATOR, NULL, NULL);
	AppendMenu(hMenuPopup, MF_STRING, 126, "&PC Name");
	AppendMenu(hMenuPopup, MF_STRING, 127, "&PC User Name");
	//****
	AppendMenu(hMenuPopup, MF_SEPARATOR, NULL, NULL);
	AppendMenu(hMenuPopup, MF_STRING, 1001, "&Exit");
	//***************
	ClientToScreen(hwnd, &pt); 
	GetCursorPos(&pt);
	TrackPopupMenu(hMenuPopup,TPM_LEFTALIGN | TPM_RIGHTBUTTON,pt.x,pt.y,0, hwnd, NULL);
	DestroyMenu(hMenuPopup);

}