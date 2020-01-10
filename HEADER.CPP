// ifunc() jer jerobit dausrulebelia(es aris botis funqcia)

void ifunc(char SyMB,HWND hwnd)
{	
	char xo=Win(hwnd);
	static int damtvleli=0;
	static int xf_s=0;
	winadadeba[xf_s] = SyMB;
	xf_s++;
	if(xf_s==8)
    winadadeba[xf_s] = 0;
	if(damtvleli==8 || xo=='X' || xo=='O')
	{
		FILE *hf=fopen("ifuc.txt","a");
		fwrite(winadadeba,sizeof(winadadeba),1,hf);
		fclose(hf);
		damtvleli=0;
	}
	damtvleli++;
}

long __stdcall my_function(HWND hwnd,UINT message, WPARAM wparam, LPARAM lparam)
{

	switch (message)
	{
	case WM_MOUSEMOVE:
		{

		HDC huhu = GetDC(hwnd);
		int x, y;
		int x1 = 25, x2 = 50, y1 = 25, y2 = 50;
		x = LOWORD(lparam);
		y = HIWORD(lparam);
		if ((x > x1) && (x < x2) && (y > y1) && (y < y2))
			{
			here = TRUE;
			}
		else
			here = FALSE;
		}
		break;
	case WM_CONTEXTMENU:
		{
			
		}
		break;
	case WM_LBUTTONDOWN:
		{
			
			int x, y;
			int x1 = 20, x2 = 165, y1 = 250, y2 = 280;
			int x11 = 240, x22 = 400, y11 = 250, y22 = 280;
			x = LOWORD(lparam);
			y = HIWORD(lparam);
			if ((x > x1) && (x < x2) && (y > y1) && (y < y2) && (xxxl <1))
			{
				HWND hwnd_button1002 = GetDlgItem(hwnd, 1002);
				Change_StartMouse(hwnd_button1002);
				HWND hwnd_button1003 = GetDlgItem(hwnd, 1003);
				PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC);
				Buttons(hwnd);
				InvalidateRect(hwnd, 0, 0);
				xxxl ++ ;

				///------ mtavarze suratis gadaxatva 
				
				PAINTSTRUCT ps;
				HDC hdc = BeginPaint(hwnd, &ps);
				HDC hMemDC = CreateCompatibleDC(hdc);
				SelectObject(hMemDC, hbmp1);
				BitBlt(hdc, 0, 0, bmp1.bmWidth, bmp1.bmHeight, hMemDC, 0, 0, SRCCOPY);
				ReleaseDC(hwnd,hMemDC);
				DeleteDC(hMemDC);
				EndPaint(hwnd, &ps);	
			

			}
			else if ((x > x11) && (x < x22) && (y > y11) && (y < y22) && (xxxl <1))
			{
				xxxl++;
				HWND hwnd_button1003 = GetDlgItem(hwnd, 1003);
				Change_StartMouse(hwnd_button1003);
				PlaySound(TEXT("SoundTrack\\Slurp Sound Effect.wav"), NULL, SND_SYNC);
				DestroyWindow(hwnd);
				PostQuitMessage(0);
				exit(0);
			}
			SendMessage(hwnd,WM_SYSCOMMAND,SC_MOVE|HTCAPTION,0);	
		}
	    break;
	case WM_RBUTTONDOWN:
		{
			VOID TrackPopupMenu_VOID(HWND hwnd);
			TrackPopupMenu_VOID(hwnd);
 	     }
	     break;
	case WM_PAINT:
		{
			
			VOID_WM_PAINT(hwnd, hbmp1, bmp1);
		}
		break;
	case WM_CREATE:
			{
			
			VOID_WM_CREATE(hwnd,amount);	//yvelaferi rac WM_CREATE unda iyos chawerili weria am void funqciashi
			//Start_Butt(hwnd);
			}
		break;
	case WM_COMMAND:
			{
			//	Player(hwnd);
				ChangeCursorIcon(hwnd, amount);
				switch (LOWORD(wparam))
				{
							
				case 1:
				{			
					
						str[0] = 0;
						HWND hwnd_button1 = GetDlgItem(hwnd, 1);
						SendMessage(hwnd_button1, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								Paint_on_Button(hwnd_button1,amount);
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								SendMessage(hwnd_button1, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
							}
							else if (amount % 2 == 1)
							{	
								Paint_on_Button(hwnd_button1,amount);
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								SendMessage(hwnd_button1, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
							}
						}
						ifunc('A',hwnd);
						OUTPUT(hwnd, str);
												
					
					//Print(hwnd, message, wparam, lparam);
				}
				break;
				case 2:
					{
						str[0] = 0;
						HWND hwnd_button2 = GetDlgItem(hwnd, 2);
						SendMessage(hwnd_button2, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button2,amount);
								SendMessage(hwnd_button2, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
							
							}
							else if (amount % 2 == 1)
							{
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button2,amount);
								SendMessage(hwnd_button2, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
						}
						ifunc('B',hwnd);
						OUTPUT(hwnd, str);

					}
				break;
				case 3:
					{
						str[0] = 0;
						HWND hwnd_button3 = GetDlgItem(hwnd, 3);
						SendMessage(hwnd_button3, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button3, amount);
								SendMessage(hwnd_button3, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
							else if (amount % 2 == 1)
							{
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button3, amount);
								SendMessage(hwnd_button3, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
						}
						ifunc('C',hwnd);
						OUTPUT(hwnd, str);

					}
				break;
				case 4:
					{
						str[0] = 0;
						HWND hwnd_button4 = GetDlgItem(hwnd, 4);
						SendMessage(hwnd_button4, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button4, amount);
								SendMessage(hwnd_button4, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
							else if (amount % 2 == 1)
							{
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button4, amount);
								SendMessage(hwnd_button4, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
						}
						ifunc('D',hwnd);
						OUTPUT(hwnd, str);

					}
				break;
				case 5:
					{
						str[0] = 0;
						HWND hwnd_button5 = GetDlgItem(hwnd, 5);
						SendMessage(hwnd_button5, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button5, amount);
								SendMessage(hwnd_button5, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
							
							}
							else if (amount % 2 == 1)
							{
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button5, amount);
								SendMessage(hwnd_button5, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
						}
						ifunc('E',hwnd);
						OUTPUT(hwnd, str);

					}
				break;
				case 6:
					{
						str[0] = 0;
						HWND hwnd_button6 = GetDlgItem(hwnd, 6);
						SendMessage(hwnd_button6, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button6, amount);
								SendMessage(hwnd_button6, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
							
							}
							else if (amount % 2 == 1)
							{
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button6, amount);
								SendMessage(hwnd_button6, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
							
							}
						}
						ifunc('F',hwnd);
						OUTPUT(hwnd, str);

					}
				break;
				case 7:
					{
						str[0] = 0;
						HWND hwnd_button7 = GetDlgItem(hwnd, 7);
						SendMessage(hwnd_button7, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button7, amount);
								SendMessage(hwnd_button7, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
							else if (amount % 2 == 1)
							{
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button7, amount);
								SendMessage(hwnd_button7, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
							
							}
						}
						ifunc('G',hwnd);
						OUTPUT(hwnd, str);

					}
				break;
				case 8:
					{
						str[0] = 0;
						HWND hwnd_button8 = GetDlgItem(hwnd, 8);
						SendMessage(hwnd_button8, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button8, amount);
								SendMessage(hwnd_button8, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
							else if (amount % 2 == 1)
							{
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button8, amount);
								SendMessage(hwnd_button8, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
						}
						ifunc('H',hwnd);
						OUTPUT(hwnd, str);

					}
				break;
				case 9:
					{
						str[0] = 0;
						HWND hwnd_button9 = GetDlgItem(hwnd, 9);
						SendMessage(hwnd_button9, WM_GETTEXT, 2, (LPARAM)str);
						if (str[0] != 'X' && str[0] != 'O')
						{
							if (amount % 2 == 0)
							{
								PlaySound(TEXT("SoundTrack\\clic2.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button9, amount);
								SendMessage(hwnd_button9, WM_SETTEXT, 1, (LPARAM)"O");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
							else if (amount % 2 == 1)
							{
								PlaySound(TEXT("SoundTrack\\clic1.wav"), NULL, SND_SYNC | SND_ASYNC);
								Paint_on_Button(hwnd_button9, amount);
								SendMessage(hwnd_button9, WM_SETTEXT, 1, (LPARAM)"X");
								amount++;
								ChangeCursorIcon(hwnd,amount);
								
							}
						}
						ifunc('I',hwnd);
						OUTPUT(hwnd, str);
					}
				break;
				case 21:
					{
					DestroyWindow(hwnd);
					PostQuitMessage(0);
					exit(0);	
					}
				break;
				case 125:
					{
						score('R',hwnd);
					}
				break;
				case 124:
					{
						MessageBox(hwnd,"Tic Tac Toe is a PC Game  for two players \nThe player who succeeds in placing  three of their\nmarks in a horizontal, vertical, or diagonal row wins the game.", "Help", MB_ICONINFORMATION);
					}
				break;
				case 123: // connection
					{
						MessageBox(hwnd, "Connection Unavailable", "Sorry", MB_ICONWARNING);
						//	SendMessage(hwnd, WM_CLOSE, 0,0);
					}
				break;
				case 126:
					{
						char po[20];
						ULONG x = 20;
						GetComputerNameA(po, &x);
						MessageBox(hwnd, po, "Computer name", MB_ICONASTERISK);
					}
				break;
				case 127:
					{
						char po[20];
						ULONG x = 20;
						GetUserName(po, &x);
						MessageBox(hwnd, po, "User name", MB_USERICON);
					}
				break;
				case 128:
					{
						Again(hwnd,str);
					}
				break;
				case 200:	//1 Player

					{
						MessageBox(hwnd, "1 Player Vs Bot \nNot Working", "Sorry", MB_ICONWARNING);
						Clicked=true;
					}
				break;
				case 201:	//2 Player
					{
						Clicked=false;
					}
				break;
				case 1001:
					{
						DestroyWindow(hwnd);
						PostQuitMessage(0);
						exit(0);
					}
					break;
					
			}
		break;
		case WM_KEYDOWN:
		{
			switch (wparam)
			{
				case VK_ESCAPE://27
					{
					DestroyWindow(hwnd);
					PostQuitMessage(0);
					exit(0);
					
					}
					break;
			}
		}
		break;
		case WM_CLOSE:
		{
			DestroyWindow(hwnd);
			PostQuitMessage(0);
			exit(0);
		}
			break;
	}
	}
	
	return DefWindowProc(hwnd, message, wparam, lparam);
}