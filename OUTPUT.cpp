void OUTPUT(HWND hwnd,char *str)
{
char Win(HWND hwnd);
	char xr = Win(hwnd);
	if (xr == 'X')
	{
		PlaySound(TEXT("SoundTrack\\winnersound.wav"), NULL, SND_SYNC | SND_ASYNC);
		if (MessageBox(hwnd, "Winner X\n Do U Want Play Again ?", "Congratulations", MB_YESNO) == IDYES)
		{
			Again(hwnd, str);
			score('X',hwnd);
		}
		else
		{
			DestroyWindow(hwnd);
			PostQuitMessage(0);
			exit(0);
		}
	}
	else if (xr == 'O')
	{
		PlaySound(TEXT("SoundTrack\\winnersound.wav"), NULL, SND_SYNC | SND_ASYNC);
		if (MessageBox(hwnd, "Winner O\n Do U Want Play Again ?", "Congratulations", MB_YESNO) == IDYES)
		{
			Again(hwnd, str);
			score('O', hwnd);
		}
		else 
		{
			DestroyWindow(hwnd);
			PostQuitMessage(0);
			exit(0);
		}
	}
	else if (amount == 10 && xr == '*')
	{
		PlaySound(TEXT("SoundTrack\\Drawsound.wav"), NULL, SND_SYNC | SND_ASYNC);
		if (MessageBox(hwnd, "Draw\n Do U Want Play Again ?", "Congratulations", MB_YESNO) == IDYES)
		{
			Again(hwnd, str);
		}
		else
		{
			DestroyWindow(hwnd);
			PostQuitMessage(0);
			exit(0);
		}
	}
}
