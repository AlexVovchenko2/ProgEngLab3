//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "About.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------

__fastcall TMainForm::TMainForm(TComponent *Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::CreateMDIChild(String Name)
{
	TMDIChild *Child;

	//--- create a new MDI child window ----
	Child = new TMDIChild(Application);
	Child->Caption = Name;
	if (FileExists (Name))
		Child->Memo1->Lines->LoadFromFile(Name);
}
//---------------------------------------------------------------------------



void __fastcall TMainForm::About1Click(TObject *Sender)
{
	AboutBox = new TAboutBox(this);
	//AboutBox->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Mode1Click(TObject *Sender)
{
	OKRightDlg = new TOKRightDlg(this);
	 //OKRightDlg->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Input1Click(TObject *Sender)
{
    DataInput = new TDataInput(this);
	//DataInput->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Solve1Click(TObject *Sender)
{
    FormAnswer = new TFormAnswer(this);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Exit1Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Cascade1Click(TObject *Sender)
{
    Cascade();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ile1Click(TObject *Sender)
{
    Tile();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::CloseCurrent1Click(TObject *Sender)
{
    if (ActiveMDIChild != NULL) { ActiveMDIChild->Close(); }
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::CloseAll1Click(TObject *Sender)
{
    for (int i = MDIChildCount-1; i >= 0; i--) { MDIChildren[i]->Close(); }
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::MinimizeAll1Click(TObject *Sender)
{
    for (int i = MDIChildCount-1; i>= 0;i--) { MDIChildren[i]->WindowState=wsMinimized; }
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Next1Click(TObject *Sender)
{
    Next();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Previous1Click(TObject *Sender)
{
    Previous();
}
//---------------------------------------------------------------------------

