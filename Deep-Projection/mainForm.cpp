#include "mainForm.h"
#include "tBC.h"


// Required namespaces
using namespace System;
using namespace System::Windows::Forms;


myBlock *blocks = new myBlock[3];

bool isDrag = false;
bool isAddButton = false;
Drawing::Point qwe, rty, asd, zxc,fgh;



// Application entry point
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::DragAction();
	System::Runtime::InteropServices::ComVisibleAttribute(true);
	DeepProjection::mainForm form;
	Application::Run(% form);
}

/*************************************/

Void DeepProjection::mainForm::ButtonMouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	Button^ thisButton = safe_cast<Button^>(sender);
	qwe = mainForm::DesktopLocation;
	rty = thisButton->Location;
	asd = MousePosition;

	fgh.X = (qwe.X + rty.X + 10) - asd.X;
	fgh.Y = (qwe.Y + rty.Y + 33) - asd.Y;

	isDrag = true;

	thisButton = nullptr;
}

Void DeepProjection::mainForm::ButtonMouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	Button^ thisButton = safe_cast<Button^>(sender);
	qwe = mainForm::DesktopLocation;
	rty = thisButton->Location;
	asd = MousePosition;

	zxc.X = (asd.X - qwe.X - 10) - (fgh.X*-1);
	zxc.X = zxc.X / 10 * 10;
	zxc.Y = (asd.Y - qwe.Y - 33) - (fgh.Y*-1);
	zxc.Y = zxc.Y / 10 * 10;

	if (isDrag == true)
	{
		thisButton->Location = zxc;
	}



	thisButton = nullptr;
}

Void DeepProjection::mainForm::ButtonMouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	isDrag = false;
}

/*************************************/


Void DeepProjection::mainForm::ButtonClick(Object ^ sender, EventArgs ^ e)
{
	Button^ thisButton = safe_cast<Button^>(sender);
	listBox1->Items->Add(thisButton->Location.ToString() + " / " + thisButton->MousePosition.ToString() + " / " + mainForm::Location.ToString());
	//button1->Location = button1->MousePosition; // MousePosition.X - button1->Location.X - mainForm::Location.X;
	listBox1->Items->Add(e->ToString());
	Button^ thisBox = safe_cast<Button^>(sender);
	listBox1->Items->Add(thisBox->Text);
	//mainForm::Controls->Add(tBC::crta());
	mainForm::createButton("qwe", Point(1, 1), "qwer");


	listBox1->Items->Add(length(&blocks));

}

Void DeepProjection::mainForm::AddButton1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (isAddButton == true)
	{
		AddButton1->BackColor = Color::Empty;
		isAddButton = false;
	}
	else
	{
		isAddButton = true;
		AddButton1->BackColor = Drawing::Color::Green;
	}

}

Void DeepProjection::mainForm::mainForm_MouseClick(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
{
	qwe = mainForm::DesktopLocation;
	asd = MousePosition;
	   
	zxc.X = (asd.X - qwe.X - 10);
	zxc.Y = (asd.Y - qwe.Y - 33);

	if (isAddButton == true)
	{
		mainForm::createButton("qwe", zxc, "qwer");
		listBox1->Items->Add(CurBut->Location);
		;
	}
	AddButton1->BackColor = Color::Empty;
	isAddButton = false;
}

Void DeepProjection::mainForm::mainForm_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
{
	qwe = mainForm::DesktopLocation;
	rty = CurBut->Location;
	asd = MousePosition;

	zxc.X = (asd.X - qwe.X - 10) + 1;
	//zxc.X = zxc.X / 10 * 10;
	zxc.Y = (asd.Y - qwe.Y - 33) + 1;
	//zxc.Y = zxc.Y / 10 * 10;

	CurBut->Location = zxc;

}










