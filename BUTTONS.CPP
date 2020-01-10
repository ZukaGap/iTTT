template <class T>
T Buttons(T hwnd_main)
{
	int X, Y, W, H;

	X = 50; Y = 150; W = 80; H = 80;
	DWORD styleB = WS_VISIBLE | WS_CHILD | BS_BITMAP;
	//CreateWindowW(L"button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, X, Y, W, H, hwnd_main, (HMENU)1, 0, 0);
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)1, 0, 0);
	X = 150; Y =150;
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)2, 0, 0);
	X = 250; Y = 150;
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)3, 0, 0);
	X = 50; Y = 250;
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)4, 0, 0);
	X = 150; Y = 250;
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)5, 0, 0);
	X = 250; Y = 250;
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)6, 0, 0);
	X = 50; Y = 350;
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)7, 0, 0);
	X = 150; Y = 350;
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)8, 0, 0);
	X = 250; Y = 350;
	CreateWindow("button", " ", styleB, X, Y, W, H, hwnd_main, (HMENU)9, 0, 0);
//	X = 80; Y = 15; W = 50; H = 50;
//	CreateWindow("static", "",  WS_VISIBLE | WS_CHILD |SS_BITMAP , X, Y, W, H, hwnd_main, (HMENU)10, 0, 0);//| SS_CENTER | WS_BORDER
//	X = 250; Y = 15; W = 50; H = 50;
//	CreateWindow("static", "",  WS_VISIBLE | WS_CHILD |SS_BITMAP , X, Y, W, H, hwnd_main, (HMENU)11, 0, 0);
	X = 160; Y = 80; W = 60; H = 40;
	CreateWindow("edit", "0:0", WS_VISIBLE | WS_CHILD | SS_CENTER | ES_READONLY | WS_BORDER, X, Y, W, H, hwnd_main, (HMENU)12, 0, 0);

	X = 380; Y = 0; W =20; H = 20;
	CreateWindow("button", "X", WS_VISIBLE | WS_CHILD | SS_CENTER | WS_BORDER, X, Y, W, H, hwnd_main, (HMENU)21, 0, 0);
	return 0;
};

