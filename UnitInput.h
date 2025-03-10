//---------------------------------------------------------------------------

#ifndef UnitInputH
#define UnitInputH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "UnitTask.h"
#include "UnitAnswer.h"
#include "MAIN.h"
//---------------------------------------------------------------------------
class TDataInput : public TForm
{
__published:	// IDE-managed Components
	TLabel *LabelRow;
	TButton *Button;
	TEdit *EditRows;
	TLabel *LabelCol;
	TEdit *EditColumns;
	TStringGrid *StringGrid;
	TButton *ButtonInput;
	void __fastcall ButtonClick(TObject *Sender);
	void __fastcall ButtonInputClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	//void __fastcall StringGridDrawCell(TObject *Sender, System::LongInt ACol, System::LongInt ARow,
    //      TRect &Rect, TGridDrawState State);
private:	// User declarations
public:		// User declarations
	__fastcall TDataInput(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataInput *DataInput;
//---------------------------------------------------------------------------
#endif
