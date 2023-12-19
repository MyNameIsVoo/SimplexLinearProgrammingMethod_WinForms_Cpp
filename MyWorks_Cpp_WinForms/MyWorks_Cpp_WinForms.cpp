#include "pch.h"
#include "SimplexLinearProgrammingMethod.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyWorksCppWinForms::SimplexLinearProgrammingMethod form;
	Application::Run(% form);
}