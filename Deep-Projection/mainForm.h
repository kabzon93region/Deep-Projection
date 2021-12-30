#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include "ArrayManager.h"


namespace DeepProjection {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// —водка дл€ mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
	System::Windows::Forms::ListBox^  listBox1;
	System::Windows::Forms::Button^  ullipse;
	System::Windows::Forms::Button^  CurBut;
	System::Windows::Forms::FlowLayoutPanel^  menuPanel;
	System::Windows::Forms::Button^  AddButton1;
	System::Windows::Forms::Timer^  timer1;
	System::Windows::Forms::Button^  button1;
	System::Windows::Forms::ContextMenuStrip^  contextMenu;
	System::Windows::Forms::ToolStripMenuItem^  cmiAddButton;
	private: System::Windows::Forms::ContextMenuStrip^  buttonContextMenu;
	private: System::Windows::Forms::Button^  AddElementOk;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  TagTextBox;
	private: System::Windows::Forms::TextBox^  TextTextBox;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  NameTextBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  SaveButton;
	private: System::Windows::Forms::Button^  LoadButton;
	private: System::Windows::Forms::Button^  ClearButton;
	private: System::Windows::Forms::ListBox^  astat;
	private: System::Windows::Forms::ListBox^  bstat;
	private: System::Windows::Forms::Button^  button2;

	public:
	private: System::ComponentModel::IContainer^  components;
	public:




		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->ullipse = (gcnew System::Windows::Forms::Button());
			this->buttonContextMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->CurBut = (gcnew System::Windows::Forms::Button());
			this->menuPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->AddButton1 = (gcnew System::Windows::Forms::Button());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->LoadButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->astat = (gcnew System::Windows::Forms::ListBox());
			this->bstat = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->cmiAddButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddElementOk = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TagTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TextTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuPanel->SuspendLayout();
			this->contextMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"123", L"1233", L"43" });
			this->listBox1->Location = System::Drawing::Point(585, 409);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(308, 134);
			this->listBox1->TabIndex = 1;
			// 
			// ullipse
			// 
			this->ullipse->AllowDrop = true;
			this->ullipse->AutoEllipsis = true;
			this->ullipse->ContextMenuStrip = this->buttonContextMenu;
			this->ullipse->Location = System::Drawing::Point(134, 92);
			this->ullipse->Name = L"ullipse";
			this->ullipse->Size = System::Drawing::Size(70, 30);
			this->ullipse->TabIndex = 2;
			this->ullipse->Text = L"but";
			this->ullipse->UseVisualStyleBackColor = true;
			this->ullipse->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseDown);
			this->ullipse->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseMove);
			this->ullipse->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseUp);
			// 
			// buttonContextMenu
			// 
			this->buttonContextMenu->Name = L"buttonContextMenu";
			this->buttonContextMenu->Size = System::Drawing::Size(61, 4);
			// 
			// CurBut
			// 
			this->CurBut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->CurBut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CurBut->Location = System::Drawing::Point(5000, 500);
			this->CurBut->Name = L"CurBut";
			this->CurBut->Size = System::Drawing::Size(10, 10);
			this->CurBut->TabIndex = 0;
			this->CurBut->UseVisualStyleBackColor = false;
			// 
			// menuPanel
			// 
			this->menuPanel->AutoScroll = true;
			this->menuPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->menuPanel->Controls->Add(this->AddButton1);
			this->menuPanel->Controls->Add(this->SaveButton);
			this->menuPanel->Controls->Add(this->LoadButton);
			this->menuPanel->Controls->Add(this->ClearButton);
			this->menuPanel->Controls->Add(this->astat);
			this->menuPanel->Controls->Add(this->bstat);
			this->menuPanel->Controls->Add(this->button2);
			this->menuPanel->Location = System::Drawing::Point(22, 65);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(84, 495);
			this->menuPanel->TabIndex = 7;
			this->menuPanel->MouseEnter += gcnew System::EventHandler(this, &mainForm::menuPanel_MouseEnter);
			this->menuPanel->MouseLeave += gcnew System::EventHandler(this, &mainForm::menuPanel_MouseLeave);
			// 
			// AddButton1
			// 
			this->AddButton1->Location = System::Drawing::Point(3, 3);
			this->AddButton1->Name = L"AddButton1";
			this->AddButton1->Size = System::Drawing::Size(75, 23);
			this->AddButton1->TabIndex = 0;
			this->AddButton1->Text = L"button1";
			this->AddButton1->UseVisualStyleBackColor = true;
			this->AddButton1->Click += gcnew System::EventHandler(this, &mainForm::AddElementPB_Click);
			this->AddButton1->MouseEnter += gcnew System::EventHandler(this, &mainForm::menuPanel_MouseEnter);
			this->AddButton1->MouseLeave += gcnew System::EventHandler(this, &mainForm::menuPanel_MouseLeave);
			// 
			// SaveButton
			// 
			this->SaveButton->Location = System::Drawing::Point(3, 32);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(75, 23);
			this->SaveButton->TabIndex = 1;
			this->SaveButton->Text = L"Save";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &mainForm::SaveButton_Click);
			// 
			// LoadButton
			// 
			this->LoadButton->Location = System::Drawing::Point(3, 61);
			this->LoadButton->Name = L"LoadButton";
			this->LoadButton->Size = System::Drawing::Size(75, 23);
			this->LoadButton->TabIndex = 2;
			this->LoadButton->Text = L"Load";
			this->LoadButton->UseVisualStyleBackColor = true;
			this->LoadButton->Click += gcnew System::EventHandler(this, &mainForm::LoadButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Location = System::Drawing::Point(3, 90);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(75, 23);
			this->ClearButton->TabIndex = 3;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &mainForm::ClearButton_Click);
			// 
			// astat
			// 
			this->astat->FormattingEnabled = true;
			this->astat->Location = System::Drawing::Point(3, 119);
			this->astat->Name = L"astat";
			this->astat->Size = System::Drawing::Size(75, 56);
			this->astat->TabIndex = 4;
			// 
			// bstat
			// 
			this->bstat->FormattingEnabled = true;
			this->bstat->Location = System::Drawing::Point(3, 181);
			this->bstat->Name = L"bstat";
			this->bstat->Size = System::Drawing::Size(75, 56);
			this->bstat->TabIndex = 5;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 8;
			this->timer1->Tick += gcnew System::EventHandler(this, &mainForm::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10000, 10000);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1, 1);
			this->button1->TabIndex = 8;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// contextMenu
			// 
			this->contextMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cmiAddButton });
			this->contextMenu->Name = L"contextMenuStrip1";
			this->contextMenu->Size = System::Drawing::Size(136, 26);
			this->contextMenu->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &mainForm::contextMenu_Opening);
			this->contextMenu->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &mainForm::contextMenu_ItemClicked);
			// 
			// cmiAddButton
			// 
			this->cmiAddButton->Name = L"cmiAddButton";
			this->cmiAddButton->Size = System::Drawing::Size(135, 22);
			this->cmiAddButton->Text = L"Add Button";
			// 
			// AddElementOk
			// 
			this->AddElementOk->Location = System::Drawing::Point(193, 193);
			this->AddElementOk->Name = L"AddElementOk";
			this->AddElementOk->Size = System::Drawing::Size(75, 23);
			this->AddElementOk->TabIndex = 0;
			this->AddElementOk->Text = L"Ok";
			this->AddElementOk->UseVisualStyleBackColor = true;
			this->AddElementOk->Click += gcnew System::EventHandler(this, &mainForm::AddElementOk_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tag:";
			// 
			// TagTextBox
			// 
			this->TagTextBox->Location = System::Drawing::Point(50, 11);
			this->TagTextBox->Name = L"TagTextBox";
			this->TagTextBox->Size = System::Drawing::Size(218, 20);
			this->TagTextBox->TabIndex = 2;
			// 
			// TextTextBox
			// 
			this->TextTextBox->Location = System::Drawing::Point(50, 86);
			this->TextTextBox->Multiline = true;
			this->TextTextBox->Name = L"TextTextBox";
			this->TextTextBox->Size = System::Drawing::Size(218, 101);
			this->TextTextBox->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Name:";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->NameTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->TextTextBox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->AddElementOk);
			this->panel1->Controls->Add(this->TagTextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(390, 107);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(286, 225);
			this->panel1->TabIndex = 10;
			this->panel1->Visible = false;
			// 
			// NameTextBox
			// 
			this->NameTextBox->Location = System::Drawing::Point(50, 48);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(218, 20);
			this->NameTextBox->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Text:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainForm::button2_Click);
			// 
			// mainForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->ClientSize = System::Drawing::Size(1041, 802);
			this->ContextMenuStrip = this->contextMenu;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ullipse);
			this->Controls->Add(this->menuPanel);
			this->Controls->Add(this->CurBut);
			this->Controls->Add(this->listBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->KeyPreview = true;
			this->Name = L"mainForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"mainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::mainForm_MouseClick);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::mainForm_MouseMove);
			this->menuPanel->ResumeLayout(false);
			this->contextMenu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
		///////////////////////////////////////
public:	

	System::Collections::Generic::List<Button^> ^a = gcnew System::Collections::Generic::List<Button^>();

	Void createButton(String^ name, Point location, String^ text, String^ tag)
	{
		System::Windows::Forms::Button^ qwer = (gcnew System::Windows::Forms::Button());
	
		qwer->Tag = tag;
		qwer->Name = name; // L"button2";
		qwer->Location = location; // Drawing::Point(0, 0);
		qwer->Text = text; // L"button2";

		qwer->AutoEllipsis = true;
		qwer->Size = Drawing::Size(100, 50);
		qwer->UseVisualStyleBackColor = true;
		qwer->ContextMenuStrip = mainForm::buttonContextMenu;
		qwer->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseDown);
		qwer->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseMove);
		qwer->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseUp);
		mainForm::Controls->Add(qwer);

		a->Add(qwer);

	}

	Void contextMenuItemsClick(String^ cmiName, Point cmiLocation)
	{
		DeepProjection::mainForm::listBox1->Items->Add(cmiName + " / " + cmiLocation);



		if (cmiName == "cmiAddButton")
		{
			panel1->Location = cmiLocation;
			panel1->Visible = true;
			panel1->Tag = "AddButton";
		}
	}
	///////////////////////////////////////////////

#pragma endregion
	private: System::Void ButtonClick(System::Object^  sender, System::EventArgs^  e);
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { exit(0); }//////
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e); //////
private: System::Void contextMenu_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e);//////
//******************
private: System::Void ButtonMouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void ButtonMouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void ButtonMouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
//**********************
private: System::Void AddElementPB_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void mainForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void mainForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);

private: System::Void menuPanel_MouseEnter(System::Object^  sender, System::EventArgs^  e) {CurBut->Visible = false;}
private: System::Void menuPanel_MouseLeave(System::Object^  sender, System::EventArgs^  e) {CurBut->Visible = true;}
private: System::Void contextMenu_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e);
private: System::Void AddElementOk_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void SaveButton_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void LoadButton_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void ClearButton_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
};/////////////////////////////////////////////////






}