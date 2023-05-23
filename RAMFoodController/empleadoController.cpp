#include <cstdlib>
#include <ctime>
#include "empleadoController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

UsuarioController::UsuarioController() {
}

//Usuario^ dirección al objeto de tipo Usuario
//List<>^ dirección al objeto de tipo List
//List<Usuario^>^ esto es un puntero a un objeto de tipo Lista que tiene direcciones de objetos de tipo Usuario.


List<Usuario^>^ UsuarioController::leerArchivo()
{
	//Se lee el archivo y se almacena en un arreglo de String
	List< Usuario^ >^ listaUsuariosLeer = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";";
	for each (String ^ lineasUsuarios in lineas)
	{
		array<String^>^ datos = lineasUsuarios->Split(separadores->ToCharArray());
		int Id = Convert::ToInt32(datos[0]);
		int Tipo = Convert::ToInt32(datos[1]);
		String^ NombreUsuario = datos[2];
		String^ ApellidoPat = datos[3];
		String^ ApellidoMat = datos[4];
		String^ Correo = datos[5];
		String^ Contrasenha = datos[6];
		Usuario^ objUsuario = gcnew Usuario(NombreUsuario, ApellidoPat, ApellidoMat, Id, Correo, Contrasenha, Tipo);
		listaUsuariosLeer->Add(objUsuario);
	}
	return listaUsuariosLeer;
}

void UsuarioController::escribirArchivo(List<Usuario^>^ ListaUsuarios)
{
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaUsuarios->Count);
	for (int i = 0; i < ListaUsuarios->Count; i++) {
		Usuario^ objUsuario = ListaUsuarios[i];
		lineasArchivo[i] = objUsuario->GetId() + ";" + objUsuario->GetTipo() + ";" + objUsuario->GetNombreUsuario() + ";" + objUsuario->GetApellidoPat() + ";" + objUsuario->GetApellidoMat() + ";" + objUsuario->GetCorreo() + ";" + objUsuario->GetContrasenha();
	}
	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}

void UsuarioController::AddUsuario(Usuario^ objUsuario)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	listaUsuarios->Add(objUsuario);
	escribirArchivo(listaUsuarios);
}

void UsuarioController::deleteUsuario(int Id)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetId() == Id)
		{
			listaUsuarios->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaUsuarios);
}

void UsuarioController::UpdateUsuario(Usuario^ UsuarioModificar)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetId() == UsuarioModificar->GetId())
		{
			listaUsuarios[i] = UsuarioModificar;
			break;
		}
	}
	escribirArchivo(listaUsuarios);
}

Usuario^ UsuarioController::QueryUsuarioById(int Id)
{
	Usuario^ objUsuario;
	List<Usuario^>^ listaUsuarios = leerArchivo();
	for(int i=0; i<listaUsuarios->Count; i++)
	{
		if(listaUsuarios[i]->GetId() == Id)
		{
			objUsuario = listaUsuarios[i];
			break;
		}
	}
	return objUsuario;
}

List<Usuario^>^ RAMFoodController::UsuarioController::QueryUsuarioByNombre(String^ Nombre)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetNombreUsuario()->Contains(Nombre))
		{
			listaUsuariosEncontrados->Add(listaUsuarios[i]);
		}
	}
	return listaUsuariosEncontrados;
}

List<Usuario^>^ UsuarioController::QueryUsuarioByTipo(int Tipo)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetTipo() == Tipo)
		{
			listaUsuariosEncontrados->Add(listaUsuarios[i]);
		}
	}
	return listaUsuariosEncontrados;
}

List<Usuario^>^ UsuarioController::QuerryUsuarioByNombrexTipo(String^ Nombre, int Tipo)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (Tipo == 0) {
			listaUsuariosEncontrados = QueryUsuarioByNombre(Nombre);
		}
		else
		{
			if (listaUsuarios[i]->GetTipo() == Tipo && listaUsuarios[i]->GetNombreUsuario()->Contains(Nombre))
			{
				listaUsuariosEncontrados->Add(listaUsuarios[i]);
			}
		}	
	}
	return listaUsuariosEncontrados;
	
}
List<int>^ UsuarioController::ListaIdUsuarios(List<Usuario^>^ ListaUsuarios)
{
	List<int>^ listaIdUsuarios = gcnew List<int>();
	for (int i = 0; i < ListaUsuarios->Count; i++)
	{
		listaIdUsuarios->Add(ListaUsuarios[i]->GetId());
	}
	return listaIdUsuarios;
}
int UsuarioController::VerificaExistenciaUsuario(int Id)
{
	int existe = 0;

	List<Usuario^>^ listaUsuarios = leerArchivo();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetId() == Id)
		{
			existe = 1;
			break;
		}
	}
	return existe;
}
List<Usuario^>^ UsuarioController::QueryUsuarioByApellido(String^ Apellido)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetApellidoMat()->Contains(Apellido) || listaUsuarios[i]->GetApellidoPat()->Contains(Apellido) )
		{
			listaUsuariosEncontrados->Add(listaUsuarios[i]);
		}
	}
	return listaUsuariosEncontrados;
}

void UsuarioController::generarCorreo(Usuario^ objUsuario)
{
	String^ apellidoPat = objUsuario->GetApellidoPat();
	String^ apelldioMat = objUsuario->GetApellidoMat();
	apellidoPat = apellidoPat->ToLower();
	apelldioMat = apelldioMat->ToLower();
	String^ correo = apellidoPat + apelldioMat + "@RAMFood.com";
	objUsuario->SetCorreo(correo);
}
void UsuarioController::generarId(Usuario^ objUsuario)
{
	int nextId = 1;
	List<int>^ existingIds = ListaIdUsuarios(leerArchivo());
	existingIds->Sort();
	for (int i = 0; i < existingIds->Count; i++)
	{
		if (existingIds[i] != nextId)
		{
			break;
		}
		nextId++;
	}
	objUsuario->SetId(nextId);
}
void UsuarioController::generarContrasenha(Usuario^ objUsuario)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int cifra1 = std::rand() % 9 + 1;  // Generar una cifra entre 1 y 9
	int cifra2 = std::rand() % 10;
	int cifra3 = std::rand() % 10;
	int cifra4 = std::rand() % 10;
	int cifra5 = std::rand() % 10;
	int cifra6 = std::rand() % 10;
	int cifra7 = std::rand() % 10;
	int cifra8 = std::rand() % 10;
	int contrasenha = cifra1 * 10000000 + cifra2 * 1000000 + cifra3 * 100000 + cifra4 * 10000 + cifra5 * 1000 + cifra6 * 100 + cifra7 * 10 + cifra8;
	objUsuario->SetContrasenha(Convert::ToString(contrasenha));
}