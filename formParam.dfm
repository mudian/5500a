object frmParam: TfrmParam
  Left = 227
  Top = 108
  BorderStyle = bsDialog
  Caption = 'Dialog'
  ClientHeight = 179
  ClientWidth = 384
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 0
    Top = 0
    Width = 384
    Height = 179
    Align = alClient
    Shape = bsFrame
    ExplicitLeft = 16
  end
  object shp1: TShape
    Left = 6
    Top = 10
    Width = 36
    Height = 22
  end
  object lbl1: TLabel
    Left = 8
    Top = 15
    Width = 34
    Height = 13
    Caption = #51077#47141' : '
  end
  object OKBtn: TButton
    Left = 300
    Top = 8
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    ModalResult = 1
    TabOrder = 0
  end
  object CancelBtn: TButton
    Left = 300
    Top = 38
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 1
  end
  object mmoParam: TMemo
    Left = 1
    Top = 45
    Width = 293
    Height = 134
    Align = alCustom
    ImeName = 'Microsoft Office IME 2007'
    Lines.Strings = (
      '')
    ReadOnly = True
    ScrollBars = ssBoth
    TabOrder = 2
  end
  object edtParam: TEdit
    Left = 48
    Top = 10
    Width = 246
    Height = 22
    ImeName = 'Microsoft Office IME 2007'
    TabOrder = 3
  end
end
