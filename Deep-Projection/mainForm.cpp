#include "mainForm.h"

// Required namespaces
using namespace System;
using namespace System::Windows::Forms;

// Application entry point
[STAThreadAttribute]
int main(array<String^>^ args) {
	// Initial Application Parameters:
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// ChartCPP - name of your project / namespace of your project
	// MyFormMyForm - name of the form to launch
	DeepProjection::mainForm form;
	Application::Run(% form);
}