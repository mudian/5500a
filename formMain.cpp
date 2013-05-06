//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "formMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "formConnect"
#pragma resource "*.dfm"
TfrmMain *frmMain;
TCmd_ID Cmd_ID;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::cbbCtrlChange(TObject *Sender)
{
	switch(cbbCtrl->ItemIndex)
	{
		case 0:        
			Cmd_ID.Num = 0;
			lstCtrl->Items->Clear();
			break;
		case 1:
			Cmd_ID.Num = 1;
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command>");
			lstCtrl->Items->Add("Error Mode Commands");
			lstCtrl->Items->Add("External Connection Commands");
			lstCtrl->Items->Add("Common Commands");
			lstCtrl->Items->Add("Outputt Commands");
			lstCtrl->Items->Add("RS-232 Host Port Commands");
			lstCtrl->Items->Add("Oscilloscope Commands");
			lstCtrl->Items->Add("Setup and Utility Commands");
			break;
		case 2:
			Cmd_ID.Num = 2;
			lstCtrl->Items->Clear();
			break;
		case 3:
			Cmd_ID.Num = 3;
			lstCtrl->Items->Clear();
			break;
	}

}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::lstCtrlDblClick(TObject *Sender)
{ 
	String Cmd;
	// Cmd_ID.Num 에 선택된 상태의 넘버를 부여함.
	if(lstCtrl->ItemIndex)
	{
		if(Cmd_ID.Num/10)
		{
			Cmd_ID.Num = Cmd_ID.Num * 100 + lstCtrl->ItemIndex;
		}
		else
		{
			Cmd_ID.Num = Cmd_ID.Num * 10 + lstCtrl->ItemIndex;
		}
	}
	else
	{
		Cmd_ID.Num = Cmd_ID.Num/10;
	}

	//부여된 Cmd_ID.Num 에 맞는 명령을 수행

	switch(Cmd_ID.Num)
	{
		// 다시 초기화 처음 설정 탭을 눌렀을 때로
		case 0:
			lstCtrl->Items->Clear();
			cbbCtrl->ItemIndex = 0;
			break;
		case 1:
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command>");
			lstCtrl->Items->Add("Error Mode Commands");
			lstCtrl->Items->Add("External Connection Commands");
			lstCtrl->Items->Add("Common Commands");
			lstCtrl->Items->Add("Outputt Commands");
			lstCtrl->Items->Add("RS-232 Host Port Commands");
			lstCtrl->Items->Add("Oscilloscope Commands");
			lstCtrl->Items->Add("Setup and Utility Commands");
			break;
		case 2:
			lstCtrl->Items->Clear();
			break;
		case 3:
			lstCtrl->Items->Clear();
			break;
		// Commands 탭 선택시
		case 11:
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command> Error Mode Commands>");
			lstCtrl->Items->Add("Edit");
			lstCtrl->Items->Add("Edit?");
			lstCtrl->Items->Add("ERR_UNIT");
			lstCtrl->Items->Add("ERR_UNIT?");
			lstCtrl->Items->Add("INCR");
			lstCtrl->Items->Add("MULT");
			lstCtrl->Items->Add("NEWREF");
			lstCtrl->Items->Add("OLDREF");
			lstCtrl->Items->Add("OUT_ERR?");
			lstCtrl->Items->Add("REFOUT?");
			break;
		case 12:
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command> External Connection Commands>");
			lstCtrl->Items->Add("CUR_POST");
			lstCtrl->Items->Add("CUR_POST?");
			lstCtrl->Items->Add("EARTH");
			lstCtrl->Items->Add("EARTH?");
			lstCtrl->Items->Add("LOWS?");
			lstCtrl->Items->Add("LOWS");
			lstCtrl->Items->Add("RTD_TYPE");
			lstCtrl->Items->Add("RTD_TYPE?");
			lstCtrl->Items->Add("TC_REF");
			lstCtrl->Items->Add("TC_REF?");
			lstCtrl->Items->Add("TC_TYPE");
			lstCtrl->Items->Add("TC_TYPE?");
			lstCtrl->Items->Add("TSENS_TYPE");
			lstCtrl->Items->Add("TSENS_TYPE?");
			break;
		case 13:
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command> Common Commands>");
			lstCtrl->Items->Add("*CLS");
			lstCtrl->Items->Add("*ESE");
			lstCtrl->Items->Add("*ESE?");
			lstCtrl->Items->Add("*ESR?");
			lstCtrl->Items->Add("*IDN?");
			lstCtrl->Items->Add("*OPC");
			lstCtrl->Items->Add("*OPC?");
			lstCtrl->Items->Add("*OPT");
			lstCtrl->Items->Add("*PUD");
			lstCtrl->Items->Add("*PUD?");
			lstCtrl->Items->Add("*RST");
			lstCtrl->Items->Add("*SRE");
			lstCtrl->Items->Add("*SRE?");
			lstCtrl->Items->Add("*STB?");
			lstCtrl->Items->Add("*TRG");
			lstCtrl->Items->Add("*TST?");
			lstCtrl->Items->Add("*WAI");
			break;
		case 14:
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command> Output Commands>");
			lstCtrl->Items->Add("BOOST");
			lstCtrl->Items->Add("BOOST?");
			lstCtrl->Items->Add("CFREQ?");
			lstCtrl->Items->Add("DC_OFFSET");
			lstCtrl->Items->Add("DC_OFFSET?");
			lstCtrl->Items->Add("DPF");
			lstCtrl->Items->Add("DPF?");
			lstCtrl->Items->Add("DUTY");
			lstCtrl->Items->Add("DUTY?");
			lstCtrl->Items->Add("FUNC?");
			lstCtrl->Items->Add("HARMONIC");
			lstCtrl->Items->Add("HARMONIC?");
			lstCtrl->Items->Add("OPER");
			lstCtrl->Items->Add("OPER?");
			lstCtrl->Items->Add("OUT");
			lstCtrl->Items->Add("OUT?");
			lstCtrl->Items->Add("PHASE");
			lstCtrl->Items->Add("PHASE?");
			lstCtrl->Items->Add("POWER?");
			lstCtrl->Items->Add("RANGE?");
			lstCtrl->Items->Add("RANGELCK");
			lstCtrl->Items->Add("RANGELCK?");
			lstCtrl->Items->Add("STBY");
			lstCtrl->Items->Add("WAVE");
			lstCtrl->Items->Add("WAVE?");
			lstCtrl->Items->Add("ZCOMP");
			lstCtrl->Items->Add("ZCOMP?");
			break;   
		case 15:
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command> RS-232 Host Port Commands>");
			lstCtrl->Items->Add("LOCAL");
			lstCtrl->Items->Add("LOCKOUT");
			lstCtrl->Items->Add("REMOTE");
			lstCtrl->Items->Add("SPLSTR");
			lstCtrl->Items->Add("SPLSTR?");
			lstCtrl->Items->Add("SRQSTR");
			lstCtrl->Items->Add("SRQSTR?");
			lstCtrl->Items->Add("^P");
			lstCtrl->Items->Add("^C");
			lstCtrl->Items->Add("^T");
			break;   
		case 16:
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command> Oscilloscope Commands>");
			lstCtrl->Items->Add("OUT_IMP");
			lstCtrl->Items->Add("OUT_IMP?");
			lstCtrl->Items->Add("SCOPE");
			lstCtrl->Items->Add("SCOPE?");
			lstCtrl->Items->Add("TRIG");
			lstCtrl->Items->Add("TRIG?");
			break;   
		case 17:
			lstCtrl->Items->Clear();
			lstCtrl->Items->Add("Command> Setup and Utility Commands>");
			lstCtrl->Items->Add("FORMAT");
			lstCtrl->Items->Add("LIMIT");
			lstCtrl->Items->Add("LIMIT?");
			lstCtrl->Items->Add("ONTIME?");
			lstCtrl->Items->Add("PR_RPT");
			lstCtrl->Items->Add("RTD_TYPE_D");
			lstCtrl->Items->Add("RTD_TYPE_D?");
			lstCtrl->Items->Add("SP_SET");
			lstCtrl->Items->Add("SP_SET?");
			lstCtrl->Items->Add("SRC_PREF");
			lstCtrl->Items->Add("SRC_PREF?");
			lstCtrl->Items->Add("TC_TYPE_D");
			lstCtrl->Items->Add("TC_TYPE_D?");
			lstCtrl->Items->Add("TEMP_STD");
			lstCtrl->Items->Add("TEMP_STD?");
			break;

		// 명령어 파라미터 값 받기
		// Error Mode Commands
		case 1101:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters:");
			frmParam->mmoParam->Lines->Add("PRI (edit the value in single output functions and the primary output value in dual output functions)");
			frmParam->mmoParam->Lines->Add("SEC (edit the secondary value in dual output functions)");
			frmParam->mmoParam->Lines->Add("FREQ (edit the frequency value in single ac output functions)");
			frmParam->mmoParam->Lines->Add("OFF (edit is off, which is the same as using the NEWREF command)");
			frmParam->mmoParam->Lines->Add("Example : EDIT FREQ");
            if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "EDIT " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1102:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses: ");
			frmParam->mmoParam->Lines->Add("PRI (edit the value in single output functions and the primary output value in dual output functions)");
			frmParam->mmoParam->Lines->Add("SEC (edit the secondary value in dual output functions)");
			frmParam->mmoParam->Lines->Add("FREQ (edit the frequency value in single ac output functions)");
			frmParam->mmoParam->Lines->Add("OFF (edit is off, which is the same as using the NEWREF command)");
			frmParam->mmoParam->Lines->Add("Example : EDIT? returns OFF");
            if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "EDIT? " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1103:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters:");
			frmParam->mmoParam->Lines->Add("GT1000 UUT error is displayed in % above 1000 ppm, ppm below");
			frmParam->mmoParam->Lines->Add("GT100 UUT error is displayed in % above 100 ppm, ppm below");
			frmParam->mmoParam->Lines->Add("GT10 UUT error is displayed in % above 10 ppm, ppm below");
			frmParam->mmoParam->Lines->Add("PPM UUT error is displayed in ppm always");
			frmParam->mmoParam->Lines->Add("PCT UUT error is displayed in % always");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "ERR_UNIT " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1104:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses:");
			frmParam->mmoParam->Lines->Add("GT1000 UUT error is displayed in % above 1000 ppm, ppm below");
			frmParam->mmoParam->Lines->Add("GT100 UUT error is displayed in % above 100 ppm, ppm below");
			frmParam->mmoParam->Lines->Add("GT10 UUT error is displayed in % above 10 ppm, ppm below");
			frmParam->mmoParam->Lines->Add("PPM UUT error is displayed in ppm always");
			frmParam->mmoParam->Lines->Add("PCT UUT error is displayed in % always");
            if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "ERR_UNIT? " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1105:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters: ");
			frmParam->mmoParam->Lines->Add("<+ value> (increment value) (optional unit matching edit field)");
			frmParam->mmoParam->Lines->Add("<- value> (decrement value)");
			frmParam->mmoParam->Lines->Add("Example: INCR +.00001 mV");
            if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "INCR " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1106:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter:");
			frmParam->mmoParam->Lines->Add("<value> (multiplier expressed as a floating point number)");
			frmParam->mmoParam->Lines->Add("Example : MULT 2.5");
            if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "MULT " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1107:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter:");
			frmParam->mmoParam->Lines->Add("(None)");
			frmParam->mmoParam->Lines->Add("Example : NEWREF");
            if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "NEWREF " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1108:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter:");
			frmParam->mmoParam->Lines->Add("(None)");
			frmParam->mmoParam->Lines->Add("Example : OLDREF");
            if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "OLDREF " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1109:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response: <value of error>,<units>");
			frmParam->mmoParam->Lines->Add("Example: OUT_ERR? returns -1.00000E+01,PCT");
            if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "OUT_ERR? " + frmParam->edtParam->Text;
            	ShowMessage(Cmd);
			}
			else
			{
            	Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1110:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response: 		<reference value>");
			frmParam->mmoParam->Lines->Add("Example: 		REFOUT? returns 0E+00");
			frmParam->mmoParam->Lines->Add("				Return 0 when the output is not being edited.");
			frmParam->mmoParam->Lines->Add("Example: 		REFOUT? returns 2.500000E-01");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "REFOUT? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
//      External Connection Commands
		case 1201:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters:	AUX (selects the 5500A Calibrator AUX terminals)");
			frmParam->mmoParam->Lines->Add("  		BOOST (selects the 5725A Amplifier terminals)");
			frmParam->mmoParam->Lines->Add("Example:   	CUR_POST AUX");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "CUR_POST " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1202:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses:	AUX (5500A Calibrator AUX terminals are selected)");
			frmParam->mmoParam->Lines->Add("	 	BOOST (5725A Amplifier BOOST terminals are selected)");
			frmParam->mmoParam->Lines->Add("Example: 	CUR_POST? returns AUX");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "CUR_POST? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1203:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters:	OPEN (disconnect front panel LO terminal from chassis ground)");
			frmParam->mmoParam->Lines->Add("	 	TIED (connect front panel LO terminal to chassis ground)");
			frmParam->mmoParam->Lines->Add("Example: 	EARTH TIED");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "EARTH " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1204:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses:	OPEN (front panel LO terminal disconnected from chassis ground)");
			frmParam->mmoParam->Lines->Add("	 	TIED (front panel LO terminal connected to chassis ground)");
			frmParam->mmoParam->Lines->Add("Example:  	EARTH? returns OPEN");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "EARTH? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1205:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response:	OPEN (disconnected NORMAL LO and AUX LO terminals)");
			frmParam->mmoParam->Lines->Add("		TIED (connected NORMAL LO and AUX LO terminals)");
			frmParam->mmoParam->Lines->Add("Example: 	LOWS? returns OPEN");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "LOWS? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1206:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter:	OPEN (disconnect NORMAL LO and AUX LO terminals)");
			frmParam->mmoParam->Lines->Add("		TIED (connect NORMAL LO and AUX LO terminals)");
			frmParam->mmoParam->Lines->Add("Example:  	LOWS TIED");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "LOWS " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1207:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters:	PT385 (100-ohm RTD, curve a=0.00385 ohms/ohm/°C)");
			frmParam->mmoParam->Lines->Add("	 	PT3926 (100-ohm RTD, curve a=0.003926 ohms/ohm/°C)");
			frmParam->mmoParam->Lines->Add("		NI120 (120-ohm RTD, empirical curve)");
			frmParam->mmoParam->Lines->Add("Example:   	RTD_TYPE PT3926");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "RTD_TYPE " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1208:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses:	PT385 (100-ohm RTD, curve a=0.00385 ohms/ohm/°C)");
			frmParam->mmoParam->Lines->Add("	  	PT3926 (100-ohm RTD, curve a=0.003926 ohms/ohm/°C)");
			frmParam->mmoParam->Lines->Add("	  	NI120 (120-ohm RTD, empirical Curve)");
			frmParam->mmoParam->Lines->Add("Example:  	RTD_TYPE? returns PT3926");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "RTD_TYPE? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1209:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters:	INT");
			frmParam->mmoParam->Lines->Add("	 	EXT, <value of external reference> CEL (or FAR)");
			frmParam->mmoParam->Lines->Add("Example:   	TC_REF EXT, 25.6 CEL");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "TC_REF " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1210:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses:	INT, <value of reference temperature>, CEL (or FAR)");
			frmParam->mmoParam->Lines->Add(" 		EXT, <value of reference temperature>, CEL (or FAR)");
			frmParam->mmoParam->Lines->Add("Example: 	TC_REF? returns INT,2.988E+01,CEL");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "TC_REF? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1211:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters:	B/C/E/J/K(default)/N/R/S/T (?-type thermocouple)");
			frmParam->mmoParam->Lines->Add("		X (10 mV/°C linear output)");
			frmParam->mmoParam->Lines->Add("Example: 		TC_TYPE J");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "TC_TYPE " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1212:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses: 	B/C/E/J/K(default)/N/R/S/T (?-type thermocouple)");
			frmParam->mmoParam->Lines->Add("	 	X (10 mV/°C linear output)");
			frmParam->mmoParam->Lines->Add("Example: 		TC_TYPE? returns K");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "TC_TYPE? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1213:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameters:	TC (Thermocouple)");
			frmParam->mmoParam->Lines->Add("		RTD (Resistance Temperature Detector)");
			frmParam->mmoParam->Lines->Add("Example:   	TSENS_TYPE RTD");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "TSENS_TYPE " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1214:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses: 	TC (Thermocouple)");
			frmParam->mmoParam->Lines->Add("   		RTD (Resistance Temperature Detector)");
			frmParam->mmoParam->Lines->Add("Example: 	TSENS_TYPE? returns TC");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "TSENS_TYPE? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
//      Common Commands
		case 1301:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter:	(None)");
			frmParam->mmoParam->Lines->Add("Example:  	*CLS");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*CLS " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1302:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter:	<value> (decimal equivalent of the ESE byte, 0 to 255)");
			frmParam->mmoParam->Lines->Add("Example:  	*ESE 140");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*ESE " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1303:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response:	<value> (decimal equivalent of the ESE byte, 0 to 255)");
			frmParam->mmoParam->Lines->Add("Example: 	*ESE? returns 133");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*ESE? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1304:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response:	<value> (decimal equivalent of the ESR byte, 0 to 255)");
			frmParam->mmoParam->Lines->Add("Example:	*ESR? returns 189");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*ESR? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1305:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response:	<manufacturer>, <model>, <serial number>,");
			frmParam->mmoParam->Lines->Add("		<main firmware>+ <encoder firmware>+ <inguard firmware>+ <5725A CPU> (* if not attached)");
			frmParam->mmoParam->Lines->Add("Example: 	*IDN? returns FLUKE,5500A,5248000,1.2+1.0+1.0+*");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*IDN? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1306:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter:	(None)");
			frmParam->mmoParam->Lines->Add("Example:  	*OPC");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*OPC " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1307:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response:	1 (all operations are complete)");
			frmParam->mmoParam->Lines->Add("Example: 	*OPC? returns 1");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*OPC? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1308:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses:	<option string>,<option string>,... (options list, separated by commas)");
			frmParam->mmoParam->Lines->Add("		0 (no options are installed)");
			frmParam->mmoParam->Lines->Add("Example:  	*OPT? returns 5725A, 5500A-SC");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*OPT? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1309:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter:	#2<nn><nn characters string> (definite length)");
			frmParam->mmoParam->Lines->Add("		#0<character string> (indefinite length)");
			frmParam->mmoParam->Lines->Add("		“<character string>“ (character string)");
			frmParam->mmoParam->Lines->Add("Example: 	*PUD #0CAL LAB NUMBER 1");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*PUD " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1310:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response:	#2nn<nn characters>");
			frmParam->mmoParam->Lines->Add("Example: 	*PUD? returns #216CAL LAB NUMBER 1");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*PUD? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1311:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response:	(None)");
			frmParam->mmoParam->Lines->Add("Example: 	*RST");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*RST " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1312:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Parameter: 		<value> (the decimal equivalent of the SRE byte, 0 to 191)");
			frmParam->mmoParam->Lines->Add("Example: 		*SRE 56");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*SRE " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1313:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response: 		<value> (the decimal equivalent of the SRE byte, 0 to 191)");
			frmParam->mmoParam->Lines->Add("Example: 		*SRE? returns 56");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*SRE? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1314:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response: 		<value> (the decimal equivalent of the STB byte, 0 to 255)");
			frmParam->mmoParam->Lines->Add("Example: 		*STB? returns 72");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*STB? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1315:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Responses: 		<measurement value>, CEL (value is in Celsius)");
			frmParam->mmoParam->Lines->Add("		<measurement value>, FAR (value is in Fahrenheit)");
			frmParam->mmoParam->Lines->Add("		0.00E+00,OVER (value is over or under capability)");
			frmParam->mmoParam->Lines->Add("		0.00E+00,OPENTC (open thermocouple)");
			frmParam->mmoParam->Lines->Add("		0.00E+00,NONE (wrong mode or no measurement)");
			frmParam->mmoParam->Lines->Add("Example: 		*TRG returns +2.500E+01,CEL");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*TRG " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1316:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Response: 		0 (pass self test)");
			frmParam->mmoParam->Lines->Add("		1 (fail self test)");
			frmParam->mmoParam->Lines->Add("Example: 		*TST? returns 1");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*TST? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1317:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("Example: 		*WAI");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "*WAI " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
//      Output Commands
		case 1401:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "BOOST " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1402:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "BOOST? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1403:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "CFREQ? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1404:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "DC_OFFSET " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1405:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "DC_OFFSET? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1406:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "DPF " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1407:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "DPF? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1408:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "DUTY " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1409:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "DUTY? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1410:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "FUNC? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1411:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "HARMONIC " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1412:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "HARMONIC? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1413:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "OPER " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1414:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "OPER? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1415:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "OUT " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1416:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "OUT? " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
		case 1417:
			frmParam = new TfrmParam(this);
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			frmParam->mmoParam->Lines->Add("");
			if(frmParam->ShowModal() == mrOk)
			{
				lstCtrl->Items->Clear();
				cbbCtrl->ItemIndex = 0;
				Cmd_ID.Num = 0;
				Cmd = "PHASE " + frmParam->edtParam->Text;
				ShowMessage(Cmd);
			}
			else
			{
				Cmd_ID.Num = Cmd_ID.Num/100;
			}
			break;
	}

}
//---------------------------------------------------------------------------
