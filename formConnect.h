//---------------------------------------------------------------------------

#ifndef formConnectH
#define formConnectH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmConnect : public TFrame
{
__published:	// IDE-managed Components
	TPanel *pnl1;
	TLabel *lbl1;
	TSpeedButton *btnConnect;
	TComboBox *cbbPort;
	TComboBox *cbbbps;
private:	// User declarations
public:		// User declarations
	__fastcall TfrmConnect(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmConnect *frmConnect;
//---------------------------------------------------------------------------
#endif
