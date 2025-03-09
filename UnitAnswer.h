//---------------------------------------------------------------------------

#ifndef UnitAnswerH
#define UnitAnswerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

#include "UnitInput.h"
#include "UnitTask.h"
#include "OKCANCL2.h"
#include "MAIN.h"
//---------------------------------------------------------------------------
class TFormAnswer : public TForm
{
__published:	// IDE-managed Components
	TLabel *LabelAnswer;
	TButton *ButtonAnswer;
	TButton *ButtonClose;
	TLabel *LabelComment;
	void __fastcall ButtonAnswerClick(TObject *Sender);
	void __fastcall ButtonCloseClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFormAnswer(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormAnswer *FormAnswer;
//---------------------------------------------------------------------------
#endif
