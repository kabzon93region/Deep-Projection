#pragma once
#include <iostream>



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

	protected:

	protected:



	public:


















	private: System::Windows::Forms::ListBox^  listBox1;
	public: System::Windows::Forms::Button^  ullipse;
	private: System::Windows::Forms::Button^  CurBut;
	private: System::Windows::Forms::FlowLayoutPanel^  menuPanel;

	private: System::Windows::Forms::Button^  AddButton1;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;

	private: System::ComponentModel::IContainer^  components;

	private:
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
			this->CurBut = (gcnew System::Windows::Forms::Button());
			this->menuPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->AddButton1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuPanel->SuspendLayout();
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
			this->menuPanel->Controls->Add(this->AddButton1);
			this->menuPanel->Location = System::Drawing::Point(22, 65);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(84, 100);
			this->menuPanel->TabIndex = 7;
			// 
			// AddButton1
			// 
			this->AddButton1->Location = System::Drawing::Point(3, 3);
			this->AddButton1->Name = L"AddButton1";
			this->AddButton1->Size = System::Drawing::Size(75, 23);
			this->AddButton1->TabIndex = 0;
			this->AddButton1->Text = L"button1";
			this->AddButton1->UseVisualStyleBackColor = true;
			this->AddButton1->Click += gcnew System::EventHandler(this, &mainForm::AddButton1_Click);
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
			// mainForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(20, 20);
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->ClientSize = System::Drawing::Size(820, 581);
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
			this->ResumeLayout(false);

		}

public:	Void createButton(String^ name, Point location, String^ text)
{
	System::Windows::Forms::Button^ qwer = (gcnew System::Windows::Forms::Button());

	qwer->Name = name; // L"button2";
	qwer->Location = location; // Drawing::Point(0, 0);
	qwer->Text = text; // L"button2";

	qwer->AutoEllipsis = true;
	qwer->Size = Drawing::Size(100, 50);
	qwer->UseVisualStyleBackColor = true;
	qwer->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseDown);
	qwer->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseMove);
	qwer->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ButtonMouseUp);
	this->Controls->Add(qwer);
}


#pragma endregion
	private: System::Void ButtonClick(System::Object^  sender, System::EventArgs^  e);
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { exit(0); }//////
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) { menuPanel->Location = Point(0, 0); }//////
//******************
private: System::Void ButtonMouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void ButtonMouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void ButtonMouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
//**********************
private: System::Void AddButton1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void mainForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void mainForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);

};/////////////////////////////////////////////////






}
