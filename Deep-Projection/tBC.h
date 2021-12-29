#pragma once
#include "mainForm.h"



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

std::string path = "1.txt";
std::ifstream fin;
std::ofstream fout;



bool isDrag = false;
bool isAddButton = false;

//*location
Drawing::Point mdl, mp, ol, cl, ccl;
//*location


////////////////
void StrToStd(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
////////////////

////////////////////////////////////
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
////////////////////////////////////
myBlock *blocks = new myBlock[0];
////////////////////////////////////

////////////////
static int myBlockLength(myBlock *a[])
{
	bool lengthsearshing = true;
	int lengthiteral = 0;
	myBlock *lengths = *a;

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
////////////////

////////////////
void myBlockUp(myBlock *a[])
{
	myBlock *amitemp;

	int size_a_current = myBlockLength(a);

	int *myBlockUpi = new int;
	*myBlockUpi = 0;
	myBlock *c = *a;
	myBlock *b = new myBlock[size_a_current + 1];

	if (size_a_current <= 0)
	{

	}
	else
	{
		while (*myBlockUpi < size_a_current)
		{
			b[*myBlockUpi] = c[*myBlockUpi];
			*myBlockUpi = *myBlockUpi + 1;
		}
	}
	amitemp = *a;

	*a = b;

	b = amitemp;

	delete[] b;
	b = nullptr;

	delete myBlockUpi;
	myBlockUpi = nullptr;
}
////////////////

////////////////
void myBlockDown(myBlock *a[])
{
	myBlock *amstemp;
	int size_a_new = myBlockLength(a) - 1;
	int *myBlockDowni = new int;
	*myBlockDowni = 0;
	myBlock *c = *a;
	myBlock *b = new myBlock[size_a_new];
	if (size_a_new <= 0)
	{

	}
	else
	{
		while (*myBlockDowni < (size_a_new))
		{


			b[*myBlockDowni] = c[*myBlockDowni];
			*myBlockDowni = *myBlockDowni + 1;
		}
	}

	amstemp = *a;

	*a = b;

	b = amstemp;

	delete[] b;
	b = nullptr;

	delete myBlockDowni;
	myBlockDowni = nullptr;

}
////////////////

////////////////
bool saveBlocks()
{
	bool success = false;

	fout.open(path, std::ofstream::app);

	if (!fout.is_open())
	{
		
	}
	else
	{
		int it = myBlockLength(&blocks);
		for (int i = 0; i < it; i++)
		{
			fout.write((char*)&blocks[i], sizeof(myBlock));
		}

		success = true;
		
	}
	fout.close();

	
	return success;
}
////////////////

////////////////
bool loadBlocks()
{
	bool success = false;

	fin.open(path);
	blocks[0].setText("ошибка открытия файла");
	if (!fin.is_open())
	{
		myBlockUp(&blocks);
		blocks[0].setText("ошибка открытия файла");
	}
	else
	{
		int i = myBlockLength(&blocks)-1;
		myBlockUp(&blocks);
		while (fin.read((char*)&blocks[i], sizeof(myBlock)))
		{
			myBlockUp(&blocks);
			blocks[0].setText("ошибка открытия файла");
			i++;
		}
			
		success = true;

	}
	fin.close();

	return success;
}
////////////////