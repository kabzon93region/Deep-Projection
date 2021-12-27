#pragma once
#include <string>
#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

public class myBlock
{
public:
	Drawing::Point Location;
	std::string Name;
	bool Enabled;
	bool be = true;
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
