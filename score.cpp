#define sprintf_s sprintf

void score(char symb, HWND hwnd)

{
	char str[6]="";
	if(symb=='X')
	{
		SCOREX++;
		HWND hwnd_X=GetDlgItem(hwnd,12);
		sprintf_s(str,"%d:%d",SCOREX,SCOREO);
		SendMessage(hwnd_X,WM_SETTEXT,6,(LPARAM)str);
	}
	else if(symb=='O')
	{
		SCOREO++;
		HWND hwnd_O=GetDlgItem(hwnd,12);
		sprintf_s(str,"%d:%d",SCOREX,SCOREO);
		SendMessage(hwnd_O,WM_SETTEXT,6,(LPARAM)str);
	}	
	else if (symb == 'R')
	{
		SCOREX = 0;
		SCOREO = 0;
		HWND hwnd_R = GetDlgItem(hwnd, 12);
		sprintf_s(str, "%d:%d", SCOREX, SCOREO);
		SendMessage(hwnd_R, WM_SETTEXT, 6, (LPARAM)str);

	}
}
