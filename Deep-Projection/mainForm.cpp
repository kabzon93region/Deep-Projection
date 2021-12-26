#include "mainForm.h"
#include "tBC.h"
//#include <stdio.h>
//#include <iostream>

//using namespace std;
// Required namespaces
using namespace System;
using namespace System::Windows::Forms;
bool isDrag = false;
System::Drawing::Point qwe, rty, asd, zxc,fgh;
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


Void DeepProjection::mainForm::button1_Click(Object ^ sender, EventArgs ^ e)
{
	listBox1->Items->Add(button1->Location.ToString() + " / " + button1->MousePosition.ToString() + " / " + mainForm::Location.ToString());
	//button1->Location = button1->MousePosition; // MousePosition.X - button1->Location.X - mainForm::Location.X;
	button1->Location.X.Equals(3);
	listBox1->Items->Add(e->ToString());
	
	mainForm::Controls->Add(tBC::crta());



	return Void();
}

Void DeepProjection::mainForm::ullipse_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	isDrag = true;
	qwe = mainForm::DesktopLocation;
	rty = ullipse->Location;
	asd = MousePosition;

	fgh.X = (qwe.X + rty.X + 10) - asd.X;

	fgh.Y = (qwe.Y + rty.Y + 33) - asd.Y;
}

Void DeepProjection::mainForm::ullipse_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	isDrag = false;
	timer1->Enabled = false;
}

Void DeepProjection::mainForm::ullipse_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	if (timer1->Enabled == false)
	{
		timer1->Enabled = true;
	}
}

Void DeepProjection::mainForm::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	qwe = mainForm::DesktopLocation;
	rty = ullipse->Location;
	asd = MousePosition;

	zxc.X = (asd.X - qwe.X - 10) -(fgh.X*-1);
	zxc.Y = (asd.Y - qwe.Y - 33) -(fgh.Y*-1);
	

	if (isDrag == true)
	{
		ullipse->Location = zxc;
	}
	else
	{
		listBox1->Items->Clear();
		listBox1->Items->Add(rty + "|" + asd + "|" + zxc + "|" + fgh);
	}
}



