#pragma once
#include "mainForm.h"



using namespace System;
using namespace System::Windows::Forms;

void StrToStd(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

public class myBlock
{
public:
	Drawing::Point location;
	std::string name;
	std::string tag;
	std::string text;
	bool Enabled;
	bool be = true;

	String^ getTag() { String^ Tag = gcnew System::String(tag.c_str()); return Tag; }
	String^ getName() { String^ Name = gcnew System::String(name.c_str()); return Name; }
	String^ getText() { String^ Text = gcnew System::String(text.c_str()); return Text; }
	Drawing::Point getLocation() { return location; }

	void setTag(String^ Tag) { StrToStd(Tag, tag); }
	void setName(String^ Name) { StrToStd(Name, name); }
	void setText(String^ Text) { StrToStd(Text, text); }
	void setLocation(Drawing::Point Location) { location = Location; }
};

static int length(myBlock *ar[])
{
	bool lengthsearshing = true;
	int lengthiteral = 0;
	myBlock *lengths = *ar;

	while (lengthsearshing)
	{
		if (lengths[lengthiteral].be == true)
		{
			lengthiteral++;
		}
		else
		{
			lengthsearshing = false;
		}
	}

	return lengthiteral;
}
