//----------------------------------------------------------------------------
#ifndef formParamH
#define formParamH
//----------------------------------------------------------------------------
#include <vcl\ExtCtrls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Classes.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Windows.hpp>
#include <vcl\System.hpp>
//----------------------------------------------------------------------------
class TfrmParam : public TForm
{
__published:
	TButton *OKBtn;
	TButton *CancelBtn;
	TBevel *Bevel1;
	TMemo *mmoParam;
	TEdit *edtParam;
	TShape *shp1;
	TLabel *lbl1;
private:
public:
	virtual __fastcall TfrmParam(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TfrmParam *frmParam;
//----------------------------------------------------------------------------
#endif    
