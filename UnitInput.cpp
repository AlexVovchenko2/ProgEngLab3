//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitInput.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDataInput *DataInput;
//---------------------------------------------------------------------------
__fastcall TDataInput::TDataInput(TComponent* Owner)
	: TForm(Owner)
{
	StringGrid->Hide();
}
//---------------------------------------------------------------------------

//
void __fastcall TDataInput::ButtonClick(TObject *Sender)
{
	int n,m;
	AnsiString s1, s2;
	s1 = EditRows->Text;
	s2 = EditColumns->Text;
	n = StrToInt(s1);
	m = StrToInt(s2);
	StringGrid->RowCount = n;
	StringGrid->ColCount = m;
	if (n > 0 && m > 0){
		//MainForm->createVect();
		StringGrid->Canvas->Brush->Color = clYellow;
		StringGrid->Show();
	}
}
//---------------------------------------------------------------------------
void __fastcall TDataInput::ButtonInputClick(TObject *Sender)
{

	MainForm->n = DataInput->StringGrid->RowCount;
	MainForm->m = DataInput->StringGrid->ColCount;
	MainForm->createVect();
	for (int i = 0; i < MainForm->m; i++) {
		for (int j = 0; j < MainForm->n; j++) {
			MainForm->matrix[j][i] = (DataInput->StringGrid->Cells[i][j] != "") ?
				StrToFloat(DataInput->StringGrid->Cells[i][j]) : 0;
		}
	}

	DataInput->Close();
}
//---------------------------------------------------------------------------
/*void __fastcall TDataInput::StringGridDrawCell(TObject *Sender, System::LongInt ACol,
          System::LongInt ARow, TRect &Rect, TGridDrawState State)
{
    if(ACol == 2 && ARow == 2) // определ€ем конкретную €чейку
    {
		StringGrid->Canvas->Brush->Color = clRed;
		StringGrid->Canvas->FillRect(Rect);
	}
} */
//---------------------------------------------------------------------------

void __fastcall TDataInput::FormClose(TObject *Sender, TCloseAction &Action)
{
    Action = caFree;
}
//---------------------------------------------------------------------------

