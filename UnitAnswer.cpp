//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitAnswer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormAnswer *FormAnswer;
//---------------------------------------------------------------------------
__fastcall TFormAnswer::TFormAnswer(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

int task1(std::vector<std::vector<float>> matrix, int n, int m);
int task2(std::vector<std::vector<float>> matrix, int n, int m);

void __fastcall TFormAnswer::ButtonAnswerClick(TObject *Sender)
{
	FormAnswer->LabelComment->Caption = "Mode: " + (AnsiString)MainForm->mode;
	int ans = -2;
	if (MainForm->mode) {
		ans = task2(MainForm->matrix, MainForm->n, MainForm->m);
		LabelAnswer->Caption = "Zero elems in even cols: " + (AnsiString)ans;
	}   else {
		ans = task1(MainForm->matrix, MainForm->n, MainForm->m);
		LabelAnswer->Caption = "Zero string index: " + (AnsiString)ans;
	}
	//LabelAnswer->Caption = ans;
}
//---------------------------------------------------------------------------
void __fastcall TFormAnswer::ButtonCloseClick(TObject *Sender)
{
	LabelAnswer->Caption = "...";
    LabelAnswer->Caption = "...";
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormAnswer::FormClose(TObject *Sender, TCloseAction &Action)
{
    Action = caFree;
}
//---------------------------------------------------------------------------

