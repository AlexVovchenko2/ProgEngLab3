object FormAnswer: TFormAnswer
  Left = 0
  Top = 0
  Caption = 'FormAnswer'
  ClientHeight = 441
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
  object LabelAnswer: TLabel
    Left = 248
    Top = 76
    Width = 9
    Height = 15
    Caption = '...'
  end
  object LabelComment: TLabel
    Left = 112
    Top = 32
    Width = 9
    Height = 15
    Caption = '...'
  end
  object ButtonAnswer: TButton
    Left = 56
    Top = 72
    Width = 75
    Height = 25
    Caption = 'Get answer'
    TabOrder = 0
    OnClick = ButtonAnswerClick
  end
  object ButtonClose: TButton
    Left = 56
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 1
    OnClick = ButtonCloseClick
  end
end
