//----------------------------------------------------------------------------
#ifndef MainH
#define MainH
//----------------------------------------------------------------------------
#include "ChildWin.h"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ActnMenus.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.FormTabsBar.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <Vcl.VirtualImageList.hpp>

#include "OKCANCL2.h"
#include "UnitInput.h"
#include "UnitAnswer.h"
//----------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *Solution1;
	TMenuItem *Windows1;
	TMenuItem *Help1;
	TMenuItem *About1;
	TMenuItem *Mode1;
	TMenuItem *Input1;
	TMenuItem *Solve1;
	TMenuItem *Exit1;
	TMenuItem *Cascade1;
	TMenuItem *ile1;
	TMenuItem *CloseCurrent1;
	TMenuItem *CloseAll1;
	TMenuItem *MinimizeAll1;
	TMenuItem *Next1;
	TMenuItem *Previous1;
	void __fastcall About1Click(TObject *Sender);
	void __fastcall Mode1Click(TObject *Sender);
	void __fastcall Input1Click(TObject *Sender);
	void __fastcall Solve1Click(TObject *Sender);
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall Cascade1Click(TObject *Sender);
	void __fastcall ile1Click(TObject *Sender);
	void __fastcall CloseCurrent1Click(TObject *Sender);
	void __fastcall CloseAll1Click(TObject *Sender);
	void __fastcall MinimizeAll1Click(TObject *Sender);
	void __fastcall Next1Click(TObject *Sender);
	void __fastcall Previous1Click(TObject *Sender);
	
private:
	void __fastcall CreateMDIChild(const String Name);
public:
	virtual __fastcall TMainForm(TComponent *Owner);

	bool mode = false;

	int n = 0; int m = 0;
	std::vector<std::vector<float>> matrix;

	void createVect(){
		std::vector<float> temp;
		for (int i = 0; i < this->n; i++) {
			for (int j = 0; j < this->m; j++)
				temp.push_back(0.0);
			this->matrix.push_back(temp);
			temp.clear();
		}
	}
};
//----------------------------------------------------------------------------
extern TMainForm *MainForm;
extern TMDIChild *__fastcall MDIChildCreate(void);
//----------------------------------------------------------------------------
#endif    
