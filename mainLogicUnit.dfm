object Form1: TForm1
  Left = 360
  Top = 238
  Width = 838
  Height = 540
  Caption = 'Main'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object rsltLabel: TLabel
    Left = 88
    Top = 192
    Width = 39
    Height = 13
    Caption = 'rsltLabel'
  end
  object seriesLabel: TLabel
    Left = 16
    Top = 128
    Width = 29
    Height = 13
    Caption = 'Series'
  end
  object numberLabel: TLabel
    Left = 16
    Top = 160
    Width = 37
    Height = 13
    Caption = 'Number'
  end
  object Button1: TButton
    Left = 88
    Top = 88
    Width = 121
    Height = 25
    Caption = 'Check passport'
    TabOrder = 0
    OnClick = Button1Click
  end
  object series: TEdit
    Left = 88
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'series'
  end
  object number: TEdit
    Left = 88
    Top = 160
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'number'
  end
end
