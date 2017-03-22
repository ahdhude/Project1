#include "MyForm.h"





using namespace System;
using namespace std;
using namespace System::Windows::Forms;
using namespace Project1::Windows;














[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(%form);









}