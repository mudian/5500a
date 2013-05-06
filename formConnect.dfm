object frmConnect: TfrmConnect
  Left = 0
  Top = 0
  Width = 555
  Height = 34
  Align = alTop
  TabOrder = 0
  ExplicitWidth = 559
  object pnl1: TPanel
    Left = 0
    Top = 0
    Width = 555
    Height = 34
    Align = alClient
    BorderWidth = 5
    TabOrder = 0
    object lbl1: TLabel
      Left = 6
      Top = 6
      Width = 51
      Height = 19
      Align = alLeft
      Caption = #53685#49888' '#49444#51221
      Layout = tlCenter
      ExplicitHeight = 13
    end
    object btnConnect: TSpeedButton
      Left = 474
      Top = 6
      Width = 75
      Height = 19
      Align = alRight
      Caption = 'Disconnect'
      ExplicitLeft = 571
      ExplicitHeight = 21
    end
    object cbbPort: TComboBox
      Left = 57
      Top = 6
      Width = 72
      Height = 21
      Align = alLeft
      Style = csDropDownList
      ImeName = 'Microsoft Office IME 2007'
      ItemHeight = 13
      ItemIndex = 3
      TabOrder = 0
      Text = 'COM4'
      Items.Strings = (
        'COM1'
        'COM2'
        'COM3'
        'COM4'
        'COM5'
        'COM6'
        'COM7'
        'COM9')
    end
    object cbbbps: TComboBox
      Left = 129
      Top = 6
      Width = 96
      Height = 21
      Align = alLeft
      Style = csDropDownList
      ImeName = 'Microsoft Office IME 2007'
      ItemHeight = 13
      ItemIndex = 5
      TabOrder = 1
      Text = '9600'
      Items.Strings = (
        '300'
        '600'
        '1200'
        '2400'
        '4800'
        '9600')
    end
  end
end
