#include "empleadoController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

UsuarioController::UsuarioController() {
	//ListaUsuarios = gcnew List<Usuario^>();
}

//Usuario^ dirección al objeto de tipo Usuario
//List<>^ dirección al objeto de tipo List
//List<Usuario^>^ esto es un puntero a un objeto de tipo Lista que tiene direcciones de objetos de tipo Usuario.

List<Usuario^>^ UsuarioController::ObtenerInfoUsuario()
{
	throw gcnew System::NotImplementedException();
}

void RAMFoodController::UsuarioController::escribirArchivo(List<Usuario^>^ ListaUsuarios)
{
	List< String^ >^ listaUsuariosEscribir = gcnew List<String^>();
	for (int i = 0; i < ListaUsuarios->Count; i++) {
		Usuario^ objUsuario = gcnew Usuario();
		objUsuario = ListaUsuarios[i];
		String ^ datos = objUsuario->GetId() + ";" + objUsuario->GetTipo() + ";" + objUsuario->GetNombreUsuario() + ";" + objUsuario->GetCorreo() + ";" + objUsuario->GetContrasenha();
		listaUsuariosEscribir->Add(datos);
	}
	File::WriteAllLines("Usuarios.txt", listaUsuariosEscribir);
}
void RAMFoodController::UsuarioController :: leerArchivo()
{
}


void RAMFoodController::UsuarioController::AddUsuario(Usuario^)
{
	throw gcnew System::NotImplementedException();
}

void RAMFoodController::UsuarioController::registrarUsuario(Usuario^)
{
	throw gcnew System::NotImplementedException();
}

void RAMFoodController::UsuarioController::deleteUsuario(int Id)
{
	throw gcnew System::NotImplementedException();
}

void RAMFoodController::UsuarioController::UpdateUsuario(Usuario^)
{
	throw gcnew System::NotImplementedException();
}

Usuario^ RAMFoodController::UsuarioController::QueryUsuarioById(int Id)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

List<Usuario^>^ RAMFoodController::UsuarioController::BuscarUsuarioPorNombre(String^ Nombre)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

Usuario^ RAMFoodController::UsuarioController::QueryUsuarioByNombre(String^ Nombre)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

void RAMFoodController::UsuarioController::generarContrasenha(Usuario^)
{
	throw gcnew System::NotImplementedException();
}

void RAMFoodController::UsuarioController::generarCorreo(Usuario^)
{
	throw gcnew System::NotImplementedException();
}
