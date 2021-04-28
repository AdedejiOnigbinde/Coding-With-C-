#include <windows.h>

LRESULT CALLBACK LandOfRaw(HWND,UINT,WPARAM,LPARAM);

int WINAPI WinMain(HINSTANCE hInst,HINSTANCE hPrevInst,LPSTR args,int nCmdshow)
{
	WNDCLASSW wc =(0);
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.hCursor = LoadCursor(NULL,IDC_ARROW);
	wc.hInstance = hInst;
	wc.lpszClassName = L"myWindowApp";
	wc.lpfnWndProc = LandOfRaw;
	
	if(!RegisterClassW(&wc))
	  return -1; 
	  
	CreateWindowW(L"myWindowApp",L"WindowsDeji",WS_OVERLAPPEDWINDOW |WS_VISIBLE,200,200,1000,750,
	NULL,NULL,NULL,NULL);
	
	while(GetMessage(&msg,NULL,NULL,NULL))
	{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			
	}
	
	MSG msg = (0);
	
	return 0;
}

LRESULT CALLBACK LandOfRaw(HWND hWnd,UINT msg,WPARAM wp,LPARAM lp)
{
	switch(msg)
	{ 
	 case WM_DESTROY
	 PostQuitMessage(0); 
	 break;
	 default:;
	  return DefWindowProcW(hWnd,msg,wp,lp);
	}
}
