/*#include "FV_Mesa_GenerarPedido_1.h" 
#include "frmGerente.h"*/

#include "frmAsistente.h"
#include "frmChef.h"
#include "frmGerenteBuscarProductosMenu.h"
#include "frmComensalPedidoGenerado.h"
#include "frmGerente.h"
#include "frmComensalGenerarPedido.h"
#include "frmComensalAsistenciaSolicitada.h"
#include "frmComensalSolicitarAtencion.h"
#include "frmComensal.h"
#include "frmPrincipal.h"
#include "frmReporte.h"
#include "frmPruebaNuevaInterfaz.h"
#include "frmReporte.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace RAMFoodView;
[STAThread]
void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	frmGerenteGestionarPersonal ventana;
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}