object MainForm: TMainForm
  Left = 194
  Top = 111
  Caption = 'MDI Application'
  ClientHeight = 380
  ClientWidth = 500
  Color = clAppWorkSpace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clBlack
  Font.Height = -11
  Font.Name = 'Default'
  Font.Style = []
  FormStyle = fsMDIForm
  Menu = MainMenu1
  Position = poDefault
  TextHeight = 13
  object MainMenu1: TMainMenu
    Left = 96
    Top = 72
    object File1: TMenuItem
      Caption = 'File'
    end
    object Solution1: TMenuItem
      Caption = 'Solution'
      object Mode1: TMenuItem
        Caption = 'Mode'
        OnClick = Mode1Click
      end
      object Compute1: TMenuItem
        Caption = 'Compute'
        OnClick = Compute1Click
      end
    end
    object Windows1: TMenuItem
      Caption = 'Windows'
    end
    object Help1: TMenuItem
      Caption = 'Help'
      object About1: TMenuItem
        Caption = 'About'
        OnClick = About1Click
      end
    end
  end
end
