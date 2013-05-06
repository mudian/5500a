object frmMain: TfrmMain
  Left = 0
  Top = 0
  Caption = 'frmMain'
  ClientHeight = 418
  ClientWidth = 584
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  inline frmcnct1: TfrmConnect
    Left = 0
    Top = 0
    Width = 584
    Height = 34
    Align = alTop
    TabOrder = 0
    ExplicitLeft = 51
    ExplicitTop = 40
    inherited pnl1: TPanel
      Width = 584
      inherited btnConnect: TSpeedButton
        Left = 503
      end
    end
  end
  object pnl1: TPanel
    Left = 0
    Top = 34
    Width = 584
    Height = 24
    Align = alTop
    TabOrder = 1
    object cbbCtrl: TComboBox
      Left = 1
      Top = 1
      Width = 145
      Height = 21
      Align = alLeft
      Style = csDropDownList
      ImeName = 'Microsoft Office IME 2007'
      ItemHeight = 13
      ItemIndex = 0
      TabOrder = 0
      Text = '-'
      OnChange = cbbCtrlChange
      Items.Strings = (
        '-'
        'Commands'
        'Msg Send'
        'Test Mode')
    end
  end
  object lstCtrl: TListBox
    Left = 25
    Top = 94
    Width = 121
    Height = 97
    ImeName = 'Microsoft Office IME 2007'
    ItemHeight = 13
    TabOrder = 2
    OnDblClick = lstCtrlDblClick
  end
  object MainMenu: TMainMenu
    Left = 40
    Top = 304
    object F1: TMenuItem
      Caption = 'Files'
      object Open1: TMenuItem
        Caption = 'Open'
      end
      object Save1: TMenuItem
        Caption = 'Save'
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Close1: TMenuItem
        Caption = 'Close'
      end
    end
    object View1: TMenuItem
      Caption = 'View'
      object ools1: TMenuItem
        Caption = 'Tools'
        object Connect1: TMenuItem
          Caption = 'Connect'
        end
        object Setting1: TMenuItem
          Caption = 'Setting'
        end
      end
      object Page1: TMenuItem
        Caption = 'Page'
      end
    end
    object Run1: TMenuItem
      Caption = 'Run'
      object Run2: TMenuItem
        Caption = 'Run'
      end
    end
    object Windows1: TMenuItem
      Caption = 'Windows'
      object Maximum1: TMenuItem
        Caption = 'Maximum'
      end
      object Minimum1: TMenuItem
        Caption = 'Minimum'
      end
    end
    object Help1: TMenuItem
      Caption = 'Help'
      object Helpprogram1: TMenuItem
        Caption = 'Help Program'
      end
      object HelpFluke5500A1: TMenuItem
        Caption = 'Help Fluke5500A'
      end
    end
  end
end
