#include "MainWindowForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


//[STAThread]
int main ( array<String^>^ args )
{
	Application::EnableVisualStyles ( );
	Application::SetCompatibleTextRenderingDefault ( false );

	ImageRecognition::MainWindowForm form;
	Application::Run ( %form );
}

ImageRecognition::MainWindowForm::MainWindowForm ( void )
{
	InitializeComponent ( );
	handler = new Handler ( );
	show ( handler->getImages ( ), handler->getObjects ( ) );
}

ImageRecognition::MainWindowForm::~MainWindowForm ( )
{
	std::cout << "Destructor executed" << std::endl;
	if (components)
		delete components;
	
	delete handler;
	handler = nullptr;
}
