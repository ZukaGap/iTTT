/*
void Player(HWND hwnd)
{
	if(Clicked)
	{
		if(amount%2==0)
		{
			HBITMAP mybitmap;
			mybitmap = (HBITMAP)LoadImage(NULL, "LOGo\\O_logo.bmp", IMAGE_BITMAP, 80, 80, LR_LOADFROMFILE);

			char str1[2], str2[2], str3[2], str4[2], str5[2], str6[2], str7[2], str8[2], str9[2];
			HWND hwnd_b1 = GetDlgItem(hwnd, 1);
			SendMessage(hwnd_b1, WM_GETTEXT, 2, (LPARAM)str1);
			
			HWND hwnd_b2 = GetDlgItem(hwnd, 2);
			SendMessage(hwnd_b2, WM_GETTEXT, 2, (LPARAM)str2);

			HWND hwnd_b3 = GetDlgItem(hwnd, 3);
			SendMessage(hwnd_b3, WM_GETTEXT, 2, (LPARAM)str3);

			HWND hwnd_b4 = GetDlgItem(hwnd, 4);
			SendMessage(hwnd_b4, WM_GETTEXT, 2, (LPARAM)str4);

			HWND hwnd_b5 = GetDlgItem(hwnd, 5);
			SendMessage(hwnd_b5, WM_GETTEXT, 2, (LPARAM)str5);

			HWND hwnd_b6 = GetDlgItem(hwnd, 6);
			SendMessage(hwnd_b6, WM_GETTEXT, 2, (LPARAM)str6);

			HWND hwnd_b7 = GetDlgItem(hwnd, 7);
			SendMessage(hwnd_b7, WM_GETTEXT, 2, (LPARAM)str7);

			HWND hwnd_b8 = GetDlgItem(hwnd, 8);
			SendMessage(hwnd_b8, WM_GETTEXT, 2, (LPARAM)str8);

			HWND hwnd_b9 = GetDlgItem(hwnd, 9);
			SendMessage(hwnd_b9, WM_GETTEXT, 2, (LPARAM)str9);
			

		
		}
	}
}



		
			if ((str1[0] != 'X' && str1[0] != 'O')||(str2[0] != 'X' && str2[0] != 'O')
				||(str3[0] != 'X' && str3[0] != 'O')||(str4[0] != 'X' && str4[0] != 'O')
				||(str5[0] != 'X' && str5[0] != 'O')||(str6[0] != 'X' && str6[0] != 'O')
				||(str7[0] != 'X' && str7[0] != 'O')||(str8[0] != 'X' && str8[0] != 'O')
				||(str9[0] != 'X' && str9[0] != 'O'))
			{
				if(str1=='X' || str3=='X' || str7=='X' || str9=='X')
				{
					Paint_on_Button(hwnd_b5,amount);
					SendMessage(hwnd_b5, WM_SETTEXT, 1, (LPARAM)"O");
					amount++;
				}


			}
*/