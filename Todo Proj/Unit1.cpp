//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
	String todotext=TodoEdit->Text;

	if(todotext!="")
	{
	TodoListBox->Items->Add(todotext);

		TodoEdit->Text="";
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TodoListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
  		int index=Item->Index;
	   TodoListBox->Items->Delete(index);

}
//---------------------------------------------------------------------------
