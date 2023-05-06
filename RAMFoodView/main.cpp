/*#include "FV_Mesa_GenerarPedido_1.h" 
#include "frmGerente.h"*/

#include "frmAsistente.h"
#include "frmChef.h"
#include "frmGerenteGestionarProductos.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace RAMFoodView;

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//FV_Mesa_GenerarPedido_1 ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/
	frmGerenteGestionarProductos ventana;
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}