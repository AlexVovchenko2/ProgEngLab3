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
      object Exit1: TMenuItem
        Caption = 'Exit'
        OnClick = Exit1Click
      end
    end
    object Solution1: TMenuItem
      Caption = 'Solution'
      GroupIndex = 10
      object Mode1: TMenuItem
        Caption = 'Mode'
        OnClick = Mode1Click
      end
      object Input1: TMenuItem
        Caption = 'Input'
        OnClick = Input1Click
      end
      object Solve1: TMenuItem
        Caption = 'Solve'
        OnClick = Solve1Click
      end
    end
    object Windows1: TMenuItem
      Caption = 'Windows'
      GroupIndex = 20
      object Cascade1: TMenuItem
        Caption = 'Cascade'
        OnClick = Cascade1Click
      end
      object ile1: TMenuItem
        Caption = 'Tile'
        OnClick = ile1Click
      end
      object CloseCurrent1: TMenuItem
        Caption = 'CloseCurrent'
        OnClick = CloseCurrent1Click
      end
      object CloseAll1: TMenuItem
        Caption = 'CloseAll'
        OnClick = CloseAll1Click
      end
      object MinimizeAll1: TMenuItem
        Caption = 'MinimizeAll'
        OnClick = MinimizeAll1Click
      end
      object Next1: TMenuItem
        Caption = 'Next'
        OnClick = Next1Click
      end
      object Previous1: TMenuItem
        Caption = 'Previous'
        OnClick = Previous1Click
      end
    end
    object Help1: TMenuItem
      Caption = 'Help'
      GroupIndex = 30
      object About1: TMenuItem
        Caption = 'About'
        OnClick = About1Click
      end
    end
  end
end
