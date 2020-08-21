#include "Globals.h"

LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
	// this is the main message handler of the system
	PAINTSTRUCT		ps;		// used in WM_PAINT
	HDC				hdc;	// handle to a device context

	switch (msg)
	{
	case WM_CREATE:
	{
		// do initialization stuff here
		return(0); // return success
	} break;

	case WM_PAINT:
	{
		hdc = BeginPaint(hwnd, &ps);	// simply validate the window 
		EndPaint(hwnd, &ps); // end painting
		return(0); // return success
	} break;

	case WM_DESTROY:
	{
		PostQuitMessage(0); // kill the application, this sends a WM_QUIT message
		return(0); // return success
	} break;

	default:break;

	} // end switch

	return (DefWindowProc(hwnd, msg, wparam, lparam)); // process any messages that we didn't take care of 

} // end WinProc

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hprevinstance, LPSTR lpcmdline, int ncmdshow)
{

	WNDCLASSEX winclass; // this will hold the class we create
	HWND	   hwnd;	 // generic window handle
	MSG		   msg;		 // generic message

	// first fill in the window class stucture
	winclass.cbSize = sizeof(WNDCLASSEX);
	winclass.style = CS_DBLCLKS | CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
	winclass.lpfnWndProc = WindowProc;
	winclass.cbClsExtra = 0;
	winclass.cbWndExtra = 0;
	winclass.hInstance = hinstance;
	winclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	winclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	winclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	winclass.lpszMenuName = NULL;
	winclass.lpszClassName = WINDOW_CLASS_NAME;
	winclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	// register the window class
	if (!RegisterClassEx(&winclass))
		return(0);

	// create the window
	if (!(hwnd = CreateWindowEx(
		NULL, // extended style
		WINDOW_CLASS_NAME,   // class
		"Tetris by Simon Browne", // title
		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		0, 0,	  // initial x,y

		WINDOW_WIDTH, // initial width

		WINDOW_HEIGHT,// initial height

		NULL,	  // handle to parent 
		NULL,	  // handle to menu
		hinstance,// instance of this application
		NULL)))	// extra creation parms
		return(0);


	//main_window_handle = hwnd; // save main window handle
	GameHandle = hwnd;

	//Initialise function called to start the game.
	Initialise();

	// enter main event loop, but this time we use PeekMessage()
	// instead of GetMessage() to retrieve messages
	while (TRUE)
	{
		// test if there is a message in queue, if so get it
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			// test if this is a quit
			if (msg.message == WM_QUIT)
				break;

			// translate any accelerator keys
			TranslateMessage(&msg);

			// send the message to the window proc
			DispatchMessage(&msg);
		} // end if		 

	   //Main game loop.
		Main_Loop();

	} // end while

	// return to Windows like this
	return(msg.wParam);

} // End WinMain

