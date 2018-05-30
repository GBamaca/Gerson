#include "Forma1.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute] void Main(array < String ^> ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OrdenadordedatosPILASyCOLAS::Forma1 form; //MyForm la cambias por el nombre de la forma dependiendo el tuyo igual a FinalPrueva1 le pones el nombre de tu proyecto
	Application::Run(% form);
}
