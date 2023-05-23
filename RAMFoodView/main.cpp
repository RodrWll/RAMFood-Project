/*#include "FV_Mesa_GenerarPedido_1.h" 
#include "frmGerente.h"*/

#include "frmAsistente.h"
#include "frmChef.h"
#include "frmGerenteGestionarProductos.h"
#include "frmComensalPedidoGenerado.h"
#include "frmGerente.h"
#include "frmComensalGenerarPedido.h"
#include "frmComensalAsistenciaSolicitada.h"
#include "frmComensalSolicitarAtencion.h"
#include "frmComensal.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace RAMFoodView;

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//FV_Mesa_GenerarPedido_1 ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/
	//frmComensal ventana;
	frmChef ventana;
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}