char Win(HWND hwnd)
{
	char A[2], B[2], C[2], D[2], E[2], F[2], G[2], H[2], I[2];
	HWND hwnd_b1 = GetDlgItem(hwnd, 1);
	SendMessage(hwnd_b1, WM_GETTEXT, 2, (LPARAM)A);//1
	
	HWND hwnd_b2 = GetDlgItem(hwnd, 2);
	SendMessage(hwnd_b2, WM_GETTEXT, 2, (LPARAM)B);//2

	HWND hwnd_b3 = GetDlgItem(hwnd, 3);
	SendMessage(hwnd_b3, WM_GETTEXT, 2, (LPARAM)C);//3

	HWND hwnd_b4 = GetDlgItem(hwnd, 4);
	SendMessage(hwnd_b4, WM_GETTEXT, 2, (LPARAM)D);//4

	HWND hwnd_b5 = GetDlgItem(hwnd, 5);
	SendMessage(hwnd_b5, WM_GETTEXT, 2, (LPARAM)E);//5

	HWND hwnd_b6 = GetDlgItem(hwnd, 6);
	SendMessage(hwnd_b6, WM_GETTEXT, 2, (LPARAM)F);//6

	HWND hwnd_b7 = GetDlgItem(hwnd, 7);
	SendMessage(hwnd_b7, WM_GETTEXT, 2, (LPARAM)G);//7

	HWND hwnd_b8 = GetDlgItem(hwnd, 8);
	SendMessage(hwnd_b8, WM_GETTEXT, 2, (LPARAM)H);//8

	HWND hwnd_b9 = GetDlgItem(hwnd, 9);
	SendMessage(hwnd_b9, WM_GETTEXT, 2, (LPARAM)I);//9
	//-----
	
	if ((A[0] =='X' && B[0] == 'X' && C[0]=='X') || (A[0] == 'O' && B[0] == 'O' && C[0] == 'O'))
		return A[0];
	else if ((D[0] =='X' && E[0] =='X' && F[0]=='X') || (D[0] == 'O' && E[0] == 'O' && F[0] == 'O'))
		return D[0];
	else if ((G[0] =='X' && H[0] == 'X' && I[0]=='X') || (G[0] == 'O' && H[0] == 'O' && I[0] == 'O'))
		return G[0];
	else if ((A[0] == 'X' && D[0] == 'X' && G[0]=='X') || (A[0] == 'O' && D[0] == 'O' && G[0] == 'O'))
		return A[0];
	else if ((B[0] == 'X' && E[0] == 'X' && H[0]=='X') || (B[0] == 'O' && E[0] == 'O' && H[0] == 'O'))
		return B[0];
	else if ((C[0] == 'X' && F[0] == 'X' && I[0]=='X') || (C[0] == 'O' && F[0] == 'O' && I[0] == 'O'))
		return C[0];
	else if ((A[0] == 'X' && E[0] == 'X' && I[0]=='X') || (A[0] == 'O' && E[0] == 'O' && I[0] == 'O'))
		return A[0];
	else if ((C[0] == 'X' && E[0] == 'X' && G[0]=='X') || (C[0] == 'O' && E[0] == 'O' && G[0] == 'O'))
		return C[0];
	
	return '*';
}
