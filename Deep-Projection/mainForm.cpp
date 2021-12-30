#include "Variables.h"



// Required namespaces
using namespace System;
using namespace System::Windows::Forms;


// Application entry point
[STAThreadAttribute]
void main(cli::array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::DragAction();
	System::Runtime::InteropServices::ComVisibleAttribute(true);
	DeepProjection::mainForm form;
	Application::Run(% form);

	setlocale(LC_ALL, "ru");
}

/*************************************/

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
	mainForm::createButton("qwe", Point(1, 1), "qwer", "qwe");


	listBox1->Items->Add(myBlockLength(&blocks));

}

Void DeepProjection::mainForm::AddElementPB_Click(System::Object ^ sender, System::EventArgs ^ e)
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
		mainForm::createButton("qwe", cl, "qwer","qwe");
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

Void DeepProjection::mainForm::contextMenu_Opening(System::Object ^ sender, System::ComponentModel::CancelEventArgs ^ e)
{
	mdl = mainForm::DesktopLocation;
	mp = MousePosition;

	cl.X = (mp.X - mdl.X - 10);
	cl.Y = (mp.Y - mdl.Y - 33);
}

Void DeepProjection::mainForm::timer1_Tick(System::Object ^ sender, System::EventArgs ^ e)
{
	menuPanel->Location = Point(0, 0);
	astat->Items->Clear();
	astat->Items->Add(a->Count);

	bstat->Items->Clear();
	bstat->Items->Add(myBlockLength(&blocks));
}

Void DeepProjection::mainForm::contextMenu_ItemClicked(System::Object ^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs ^ e)
{
	contextMenuItemsClick(e->ClickedItem->Name, cl);

}

Void DeepProjection::mainForm::AddElementOk_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	int length = myBlockLength(&blocks);

	listBox1->Items->Add(length);//

	myBlockUp(&blocks);

	length = myBlockLength(&blocks);

	listBox1->Items->Add(length);//

	blocks[length - 1].Enabled = true;
	blocks[length - 1].setLocation(panel1->Location);
	blocks[length - 1].setName(NameTextBox->Text);
	blocks[length - 1].setTag(TagTextBox->Text);
	blocks[length - 1].setText(TextTextBox->Text);

	mainForm::createButton(NameTextBox->Text, panel1->Location, TextTextBox->Text, TagTextBox->Text);

	int fi = 0;
	for (int i = 0; i < a->Count; i++)
	{
		if (a[i]->Tag == TagTextBox->Text)
		{
			fi = i;
			i = a->Count + 1;
		}

	}

	listBox1->Items->Add(a[fi]->Tag);





	panel1->Tag = "";
	panel1->Visible = false;
	panel1->Location = Point(-500, -500);


	/*if (panel1->Tag == "AddButton")
	{
		mainForm::createButton("qwe", panel1->Location, "qwer");
		panel1->Tag = "";
		panel1->Visible = false;
		panel1->Location = Point(-500, -500);
	}*/

}

Void DeepProjection::mainForm::SaveButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	int length = a->Count;
	int i, ii;
		for (i = 0; i < (a->Count); i++)
		{
			for (ii = 0; ii < (myBlockLength(&blocks)); ii++)
			{
				if (a[i]->Tag == blocks[ii].getTag())
				{
					blocks[ii].setLocation(a[i]->Location);
				}
			}
		}
		if (i>>ii)
		{
			while (i-ii !=0)
			{
				myBlockUp(&blocks);
				blocks[ii].Enabled = true;
				blocks[ii].setLocation(a[ii]->Location);
				blocks[ii].setName(a[ii]->Name);
				blocks[ii].setTag(a[ii]->Tag->ToString());
				blocks[ii].setText(a[ii]->Text);
				ii++;
			}
		}

	///

	length = myBlockLength(&blocks);

	if (a->Count == length)
	{
		bool success = false;

		fout.open(path, std::ofstream::app);

		if (!fout.is_open())
		{
			listBox1->Items->Add("Don't save file");
		}
		else
		{
			int it = myBlockLength(&blocks);
			for (int i = 0; i < it; i++)
			{
				fout.write((char*)&blocks[i], sizeof(myBlock));
			}

			fout2.open(path2);
			if (!fout2.is_open())
			{

			}
			else
			{
				fout2.write((char*)&it, sizeof(int));
			}
			fout2.close();
			success = true;

		}
		fout.close();

		if (success)
		{
			listBox1->Items->Add("Save success");
		}
	}
}

Void DeepProjection::mainForm::LoadButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	int length = 0;
	bool success = false;

	fin.open(path);

	if (!fin.is_open())
	{
		listBox1->Items->Add("Don't load file");
	}
	else
	{
		fin.app;
		myBlock blocks2;
		myBlockUp(&blocks);
		int il = myBlockLength(&blocks) - 1;
		int it=0;
		fin2.open(path2);
		if (fin2.is_open())
		{

		}
		else
		{
			fin2.read((char*)&it, sizeof(int));
		}
		fin2.close();

		for (int i = il; i < it; i++)
		{
			fin.read((char*)&blocks2, sizeof(myBlock));
			blocks[i].setLocation(blocks2.getLocation());
			blocks[i].setName(blocks2.getName());
			blocks[i].setTag(blocks2.getTag());
			blocks[i].setText(blocks2.getText());
			myBlockUp(&blocks);
		}


		/*while (fin.read((char*)&blocks2, sizeof(myBlock)))
		{
			blocks[i].setLocation(blocks2.getLocation());
			blocks[i].setName(blocks2.getName());
			blocks[i].setTag(blocks2.getTag());
			blocks[i].setText(blocks2.getText());
			myBlockUp(&blocks);
			i++;
		}*/

		success = true;

	}
	fin.close();

	if (success)
	{
		length = myBlockLength(&blocks);

		listBox1->Items->Add("Load success");

		for (int i = length-1 ; i < length; i++)
		{
			createButton(blocks[i].getName(), blocks[i].getLocation(), blocks[i].getText(), blocks[i].getTag());
		}
	}
}

Void DeepProjection::mainForm::ClearButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (a->Count >> 0 || myBlockLength(&blocks) >> 0)
	{
		for (int i = a->Count - 1; i >= 0; i--)
		{
			mainForm::Controls->Remove(a[i]);
			myBlockDown(&blocks);
		}
	}


}

System::Void DeepProjection::mainForm::button2_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	myBlockUp(&blocks);
}










