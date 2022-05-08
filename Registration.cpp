#include "Registration.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace WinFormsCpp;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WinFormsCpp::Registration form1;
	Application::Run(% form1);
	return 0;
}
