#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

void main(array<String^>^ �rgs)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyForm forma;
	Application::Run(% forma);
}