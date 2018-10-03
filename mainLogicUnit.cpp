//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mainLogicUnit.h"
#include <IAPO2_ARM_READER.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        _di_IAPO2_ARM_READER reader = GetIAPO2_ARM_READER();
        if (valid(series->Text.c_str()) && valid(number->Text.c_str())) {
        int result = reader->PassportIsBad(series->Text, number->Text);
                if (result) {
                        rsltLabel->Color = clGreen;
                        rsltLabel->Caption = "Passport is good";
                } else {
                        rsltLabel->Color = clRed;
                        rsltLabel->Caption = "Passport is bad";
                }
        } else {
                rsltLabel->Color = clRed;
                rsltLabel->Caption =
                          "Passport must contains digits or ' ' or '-' only";
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        series->Text = "";
        number->Text = "";
        rsltLabel->Caption = "result is unknown";
}
//---------------------------------------------------------------------------
bool TForm1::valid(const char* str)
{
        const int len = strlen(str);
        if (!len) {
                return false;
        }
        for (int i = 0; i < len; i++) {
                char c = str[i];
                if ((!isdigit(c)) && (c != ' ') && (c != '-')) {
                        return false;
                }
        }
        return true;
}
//---------------------------------------------------------------------------
