#pragma once
#include <string>
#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


public ref class tBC
{
	//std::string *tBCtext = new std::string();

public:	static System::Windows::Forms::Button^ crta()
	{
	
		System::Windows::Forms::Button^ qwer = (gcnew System::Windows::Forms::Button());
		

		qwer->AllowDrop = true;
		qwer->AutoEllipsis = true;
		qwer->Location = System::Drawing::Point(0, 0);
		qwer->Name = L"button2";
		qwer->Size = System::Drawing::Size(100, 50);
		qwer->TabIndex = 0;
		qwer->Text = L"button2";
		qwer->UseVisualStyleBackColor = true;
		return qwer;
	
	}
};

