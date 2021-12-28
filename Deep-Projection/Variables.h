#pragma once
#include "tBC.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


myBlock *blocks = new myBlock[3];

bool isDrag = false;
bool isAddButton = false;
//*location
Drawing::Point mdl, mp, ol, cl, ccl;
//*location