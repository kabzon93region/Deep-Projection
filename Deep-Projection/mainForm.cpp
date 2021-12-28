#include "Variables.h"


// Required namespaces
using namespace System;
using namespace System::Windows::Forms;





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

System::Void DeepProjection::mainForm::contextMenu_ItemClicked(System::Object ^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs ^ e)
{
	contextMenuItemsClick(e->ClickedItem->Name, cl);
	std::string s = "qweasdzc";
}

Void DeepProjection::mainForm::ButtonMouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	Button^ thisButton = safe_cast<Button^>(sender);
	mdl = mainForm::DesktopLocation;
	ol = thisButton->Location;
	mp = MousePosition;

	ccl.X = (mdl.X + ol.X + 10) - mp.X;
	ccl.Y = (mdl.Y + ol.Y + 33) - mp.Y;

	isDrag = true;

	thisButton = nullptr;
}

Void DeepProjection::mainForm::ButtonMouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	Button^ thisButton = safe_cast<Button^>(sender);
	mdl = mainForm::DesktopLocation;
	mp = MousePosition;

	cl.X = (mp.X - mdl.X - 10) - (ccl.X*-1);
	cl.X = cl.X / 10 * 10;
	cl.Y = (mp.Y - mdl.Y - 33) - (ccl.Y*-1);
	cl.Y = cl.Y / 10 * 10;

	if (isDrag == true)
	{
		thisButton->Location = cl;
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
	mdl = mainForm::DesktopLocation;
	mp = MousePosition;
	   
	cl.X = (mp.X - mdl.X - 10);
	cl.Y = (mp.Y - mdl.Y - 33);

	if (isAddButton == true)
	{
		mainForm::createButton("qwe", cl, "qwer");
		listBox1->Items->Add(CurBut->Location);
		;
	}
	AddButton1->BackColor = Color::Empty;
	isAddButton = false;
}

Void DeepProjection::mainForm::mainForm_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
{
	mdl = mainForm::DesktopLocation;
	mp = MousePosition;

	cl.X = (mp.X - mdl.X - 10) + 1;
	//zxc.X = zxc.X / 10 * 10;
	cl.Y = (mp.Y - mdl.Y - 33) + 1;
	//zxc.Y = zxc.Y / 10 * 10;

	CurBut->Location = cl;

}

System::Void DeepProjection::mainForm::contextMenu_Opening(System::Object ^ sender, System::ComponentModel::CancelEventArgs ^ e)
{
	mdl = mainForm::DesktopLocation;
	mp = MousePosition;

	cl.X = (mp.X - mdl.X - 10);
	cl.Y = (mp.Y - mdl.Y - 33);
}

System::Void DeepProjection::mainForm::button2_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (panel1->Tag == "AddButton")
	{
		mainForm::createButton("qwe", panel1->Location, "qwer");
		panel1->Tag = "";
		panel1->Visible = false;
		panel1->Location = Point(-500, -500);
	}
}










