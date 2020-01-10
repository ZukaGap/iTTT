long __stdcall btn_new_fun(HWND hwnd,UINT message, WPARAM wparam, LPARAM lparam)
{
	switch(message)
	{
	case WM_PAINT:
		{
			
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
	}
	
	return btn_old_fun(hwnd, message, wparam, lparam);
}