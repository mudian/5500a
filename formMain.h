//---------------------------------------------------------------------------

#ifndef formMainH
#define formMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "formConnect.h"
#include "formParam.h"
#include <ExtCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
	TfrmConnect *frmcnct1;
	TPanel *pnl1;
	TMainMenu *MainMenu;
	TMenuItem *F1;
	TMenuItem *Open1;
	TMenuItem *Save1;
	TMenuItem *N1;
	TMenuItem *Close1;
	TMenuItem *View1;
	TMenuItem *ools1;
	TMenuItem *Page1;
	TMenuItem *Run1;
	TMenuItem *Windows1;
	TMenuItem *Help1;
	TMenuItem *Run2;
	TMenuItem *Maximum1;
	TMenuItem *Minimum1;
	TMenuItem *Helpprogram1;
	TMenuItem *HelpFluke5500A1;
	TMenuItem *Connect1;
	TMenuItem *Setting1;
	TComboBox *cbbCtrl;
	TListBox *lstCtrl;
	void __fastcall cbbCtrlChange(TObject *Sender);
	void __fastcall lstCtrlDblClick(TObject *Sender);
private:	// User declarations
//	TCmd_ID Cmd_ID;
public:		// User declarations
	__fastcall TfrmMain(TComponent* Owner);
};

typedef struct
{
	int Num;
}TCmd_ID;

//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
