
#ifdef SFML_STATIC
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "freetype.lib")
#pragma comment(lib, "jpeg.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")  
#endif // SFML_STATIC


#include <SFML/Graphics.hpp>
#include "mainform.h"
#include <stdlib.h>
#include <windows.h>
#include <iostream>

// BEGIN Windows Subsystem Code.
#ifdef __GNUC__
#define _stdcall  __attribute__((stdcall))
#endif
int main(int argc, char **argv);
int _stdcall WinMain(
	struct HINSTANCE__ *hInstance,
	struct HINSTANCE__ *hPrevInstance,
	char               *lpszCmdLine,
	int                 nCmdShow)
{ return main(__argc, __argv); }
// END Windows Subsystem Code.

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(int argc, char **argv) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	stima1::mainform form;
	Application::Run(%form);

	return 0;
}