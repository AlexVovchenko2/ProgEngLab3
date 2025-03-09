object DataInput: TDataInput
  Left = 0
  Top = 0
  Caption = 'DataInput'
  ClientHeight = 320
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  FormStyle = fsMDIChild
  Visible = True
  OnClose = FormClose
  TextHeight = 15
  object LabelRow: TLabel
    Left = 48
    Top = 35
    Width = 58
    Height = 15
    Caption = 'Enter rows:'
  end
  object LabelCol: TLabel
    Left = 48
    Top = 77
    Width = 79
    Height = 15
    Caption = 'Enter columns:'
  end
  object Button: TButton
    Left = 48
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Confirm'
    TabOrder = 0
    OnClick = ButtonClick
  end
  object EditRows: TEdit
    Left = 136
    Top = 32
    Width = 121
    Height = 23
    TabOrder = 1
    Text = 'EditRows'
  end
  object EditColumns: TEdit
    Left = 133
    Top = 74
    Width = 121
    Height = 23
    TabOrder = 2
    Text = 'EditColumns'
  end
  object StringGrid: TStringGrid
    Left = 224
    Top = 152
    Width = 320
    Height = 120
    FixedCols = 0
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 3
  end
  object ButtonInput: TButton
    Left = 143
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Enter'
    TabOrder = 4
    OnClick = ButtonInputClick
  end
end
