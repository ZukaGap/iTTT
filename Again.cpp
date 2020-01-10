void Again(HWND hwnd,char *str)
{
	str[0] = 0;

	HWND hwnd_b1 = GetDlgItem(hwnd, 1);
	SendMessage(hwnd_b1, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b1);

	HWND hwnd_b2 = GetDlgItem(hwnd, 2);
	SendMessage(hwnd_b2, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b2);

	HWND hwnd_b3 = GetDlgItem(hwnd, 3);
	SendMessage(hwnd_b3, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b3);

	HWND hwnd_b4 = GetDlgItem(hwnd, 4);
	SendMessage(hwnd_b4, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b4);

	HWND hwnd_b5 = GetDlgItem(hwnd, 5);
	SendMessage(hwnd_b5, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b5);

	HWND hwnd_b6 = GetDlgItem(hwnd, 6);
	SendMessage(hwnd_b6, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b6);

	HWND hwnd_b7 = GetDlgItem(hwnd, 7);
	SendMessage(hwnd_b7, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b7);

	HWND hwnd_b8 = GetDlgItem(hwnd, 8);
	SendMessage(hwnd_b8, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b8);

	HWND hwnd_b9 = GetDlgItem(hwnd, 9);
	SendMessage(hwnd_b9, WM_SETTEXT, 0, 0);
	Again_Paint(hwnd_b9);

	amount = 1;
}