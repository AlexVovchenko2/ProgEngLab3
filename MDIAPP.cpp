//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------
USEFORM("about.cpp", AboutBox);
USEFORM("CHILDWIN.CPP", MDIChild);
USEFORM("MAIN.CPP", MainForm);
USEFORM("OKCANCL2.cpp", OKRightDlg);
USEFORM("UnitInput.cpp", DataInput);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	Application->Initialize();
    Application->MainFormOnTaskBar = true;
	Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->Run();
	return 0;
}
//---------------------------------------------------------------------
