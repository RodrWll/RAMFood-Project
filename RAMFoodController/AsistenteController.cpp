#include "AsistenteController.h"
#include "productosController.h"

using namespace RAMFoodController;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Data::SqlClient;
using namespace System::Data;

AsistenteController::AsistenteController() {
	this->objConexion = gcnew SqlConnection();
}

void AsistenteController::abrirConexion() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server= 200.16.7.140 ;DataBase=a20202021;User Id=a20202021;Password=WbMpwW8j";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void AsistenteController::cerrarConexion() {
	this->objConexion->Close(); /*Cierra la conexion a BD*/
}


List<Plato^>^ AsistenteController::listarPlatosPedidosMesa()
{
	productoController^ objProductoController = gcnew productoController();
	List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//pedidomesa1.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
		int id = Convert::ToInt16(datos[0]);
		Producto^ productoEncontrado = objProductoController->buscarProductoxId(id);
		if(productoEncontrado->GetTipo() == 2){
			int cantidad = Convert::ToInt32(datos[1]);
			Plato^ objPlato = gcnew Plato(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), cantidad, productoEncontrado->GetId());
			listaPlatosEncontrados->Add(objPlato);
		}
	}
	return listaPlatosEncontrados;
}

List<Bebida^>^ AsistenteController::listarBebidasPedidosMesa()
{
	productoController^ objProductoController = gcnew productoController();
	List<Bebida^>^ listabebidasEncontradas = gcnew List<Bebida^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//pedidomesa1.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
		int id = Convert::ToInt16(datos[0]);
		Producto^ productoEncontrado = objProductoController->buscarProductoxId(id);
		if (productoEncontrado->GetTipo() == 1) {
			int cantidad = Convert::ToInt32(datos[1]);
			Bebida^ objBebidas = gcnew Bebida(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), cantidad, productoEncontrado->GetId());
			listabebidasEncontradas->Add(objBebidas);
		}
	}
	return listabebidasEncontradas;
}

//String^ AsistenteController::LeerArchivoEstadoAsistencia(int numeroMesa) {
//	String^ direccion = "asistenciamesa" + Convert::ToString(numeroMesa) + ".txt";
//	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
//	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
//	String^ estado = lineas[0];
//	return estado;
//}

int AsistenteController::BuscarEstadoAsistencia(int numeroMesa) {
	int estadoAsis;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from AsistenciaMesa where mesa=" + numeroMesa;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int estado = safe_cast<int>(objData[1]);
		estadoAsis = estado;
	}
	cerrarConexion();
	return estadoAsis;
}
int AsistenteController::BuscarEstadoCobranza(int numeroMesa) {
	int estadoCob ;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from AsistenciaMesa where mesa=" + numeroMesa;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int estado = safe_cast<int>(objData[2]);
		estadoCob = estado;
	}
	cerrarConexion();
	return estadoCob;
}

//String^ AsistenteController::LeerArchivoEstadoCobranza(int numeroMesa) {
//	String^ direccion = "cobranzamesa" + Convert::ToString(numeroMesa) + ".txt";
//	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
//	String^ estado = lineas[0];
//	return estado;
//}

//void AsistenteController::ModificarEstadoAsistencia(int numeroDeMesaALeer, int estadoAsis) {
//	String^ direccion = "asistenciamesa" + Convert::ToString(numeroDeMesaALeer) + ".txt";
//	array<String^>^ lineasLeidas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
//	String^ separadores = ";";/*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
//	List<String^>^ lineasEscribir = gcnew List<String^>();
//	for each (String ^ linea in lineasLeidas)
//	{
//		array<String^>^ datos = linea->Split(separadores->ToCharArray());
//		int estado = Convert::ToInt32(datos[0]);
//		estado = estadoAsis;
//		if (estadoAsis == 0) {
//			datos[0] = Convert::ToString(1);
//		}
//		else {
//			datos[0] = Convert::ToString(0);
//		}
//		String^ linea = datos[0];
//		lineasEscribir->Add(linea);
//	}
//	File::WriteAllLines("Recursos//AsistenteChef//" + direccion, lineasEscribir);
//};

void AsistenteController::ActualizarEstadoAsistencia(int numeroMesa, int estadoAsis) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update AsistenciaMesa set asistenciaRequerida=" + estadoAsis + " where mesa=" + numeroMesa;
	objSentencia->Connection = objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void AsistenteController::ActualizarEstadoCobranza(int numeroMesa, int estadoCob) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update AsistenciaMesa set cobranzaRequerida=" + estadoCob + " where mesa=" + numeroMesa;
	objSentencia->Connection = objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

//void AsistenteController::ModificarEstadoCobranza(int numeroDeMesaALeer, int estadoCob) {
//	String^ direccion = "cobranzamesa" + Convert::ToString(numeroDeMesaALeer) + ".txt";
//	array<String^>^ lineasLeidas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
//	List<String^>^ lineasEscribir = gcnew List<String^>();
//	for each (String ^ linea in lineasLeidas)
//	{
//		array<String^>^ datos = linea->Split(';');
//		int estado = Convert::ToInt32(datos[0]);
//		estado = estadoCob;
//		if (estadoCob == 0) {
//			datos[0] = Convert::ToString(1);
//		}
//		else {
//			datos[0] = Convert::ToString(0);
//		}
//		String^ linea = datos[0];
//		lineasEscribir->Add(linea);
//	}
//	File::WriteAllLines("Recursos//AsistenteChef//" + direccion, lineasEscribir);
//};

