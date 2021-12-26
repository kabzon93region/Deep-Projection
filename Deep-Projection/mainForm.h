#pragma once

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
	public: System::Windows::Forms::Button^  button1;
	protected:

	protected:
	private: System::Windows::Forms::ListBox^  listBox1;
	public: System::Windows::Forms::Button^  ullipse;
	private: System::Windows::Forms::Timer^  timer1;
	public:
	private: System::ComponentModel::IContainer^  components;
	private:



	private:

	private:








	public:
	private:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->ullipse = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->AutoEllipsis = true;
			this->button1->Location = System::Drawing::Point(59, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"123", L"1233", L"43" });
			this->listBox1->Location = System::Drawing::Point(234, 48);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(308, 134);
			this->listBox1->TabIndex = 1;
			// 
			// ullipse
			// 
			this->ullipse->AllowDrop = true;
			this->ullipse->AutoEllipsis = true;
			this->ullipse->Location = System::Drawing::Point(142, 250);
			this->ullipse->Name = L"ullipse";
			this->ullipse->Size = System::Drawing::Size(75, 23);
			this->ullipse->TabIndex = 2;
			this->ullipse->Text = L"but";
			this->ullipse->UseVisualStyleBackColor = true;
			this->ullipse->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ullipse_MouseDown);
			this->ullipse->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ullipse_MouseMove);
			this->ullipse->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::ullipse_MouseUp);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &mainForm::timer1_Tick);
			// 
			// mainForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 479);
			this->Controls->Add(this->ullipse);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);


//

private: System::Void ullipse_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void ullipse_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void ullipse_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
};//
}
