#include <cstdlib>
#include <ctime>
#include "empleadoController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

empleadoController::empleadoController() {
}

//Usuario^ dirección al objeto de tipo Usuario
//List<>^ dirección al objeto de tipo List
//List<Usuario^>^ esto es un puntero a un objeto de tipo Lista que tiene direcciones de objetos de tipo Usuario.


List<Usuario^>^ empleadoController::leerArchivo()
{
	//Se lee el archivo y se almacena en un arreglo de String
	List< Usuario^ >^ listaUsuariosLeer = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";";
	List<array<String^>^>^ listaDatos = gcnew List<array<String^>^>();
	

	for each (String ^ lineasUsuarios in lineas)
	{
		array<String^>^ datos = lineasUsuarios->Split(separadores->ToCharArray());
		int Id = Convert::ToInt32(datos[0]);
		int Rol = Convert::ToInt32(datos[1]);
		int Status = Convert::ToInt32(datos[2]);
		String^ FechaContrato = datos[3];
		String^ FechaDesactivacion = datos[4];
		String^ Correo = datos[5];
		String^ Contrasenha = datos[6];
		String^ Nombre = datos[7];
		String^ ApellidoPat = datos[8];
		String^ ApellidoMat = datos[9];
		Usuario^ objUsuario = gcnew Usuario(Id, Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha);
		switch (Rol)
		{
		case 1:
			objUsuario = gcnew Gerente(Id, Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha, Nombre, ApellidoPat, ApellidoMat);
			break;
		case 2:
			objUsuario = gcnew Asistente(Id, Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha, Nombre, ApellidoPat, ApellidoMat);
			break;
		case 3:
			objUsuario = gcnew Chef(Id, Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha, Nombre, ApellidoPat, ApellidoMat);
			break;
		default:
			objUsuario = gcnew Usuario(Id, Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha);
			break;
		}
		listaUsuariosLeer->Add(objUsuario);
	}
	return listaUsuariosLeer;
}

void empleadoController::escribirArchivo(List<Usuario^>^ ListaUsuarios)
{
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaUsuarios->Count);
	for (int i = 0; i < ListaUsuarios->Count; i++) {
		Usuario^ objUsuario = ListaUsuarios[i];

		if(Gerente^ objGerente = dynamic_cast<Gerente^>(objUsuario))
		{
			lineasArchivo[i] = objGerente->GetId() + ";" + objGerente->GetRol() + ";" + objGerente->GetStatus() + ";" + objGerente->GetFechaContrato() + ";" + objGerente->GetFechaDesactivacion() + ";" + objGerente->GetCorreo() + ";" + objGerente->GetContrasenha() + ";" + objGerente->GetNombre() + ";" + objGerente->GetApellidoPat() + ";" + objGerente->GetApellidoMat();
		}
		else if (Asistente^ objAsistente = dynamic_cast<Asistente^>(objUsuario)) {
			lineasArchivo[i] = objAsistente->GetId() + ";" + objAsistente->GetRol() + ";" + objAsistente->GetStatus() + ";" + objAsistente->GetFechaContrato() + ";" + objAsistente->GetFechaDesactivacion() + ";" + objAsistente->GetCorreo() + ";" + objAsistente->GetContrasenha() + ";" + objAsistente->GetNombre() + ";" + objAsistente->GetApellidoPat() + ";" + objAsistente->GetApellidoMat();
		}
		else if (Chef^ objChef = dynamic_cast<Chef^>(objUsuario)) {
			lineasArchivo[i] = objChef->GetId() + ";" + objChef->GetRol() + ";" + objChef->GetStatus() + ";" + objChef->GetFechaContrato() + ";" + objChef->GetFechaDesactivacion() + ";" + objChef->GetCorreo() + ";" + objChef->GetContrasenha() + ";" + objChef->GetNombre() + ";" + objChef->GetApellidoPat() + ";" + objChef->GetApellidoMat();
		}
	}
	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}

void empleadoController::AddUsuario(Usuario^ objUsuario)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	
	Gerente^ objGerente;
	Asistente^ objAsistente;
	Chef^ objChef;
	switch (objUsuario->GetRol())
	{
	case 1:
		objGerente = dynamic_cast<Gerente^>(objUsuario);
		listaUsuarios->Add(objGerente);
		break;
	case 2:
		objAsistente = dynamic_cast<Asistente^>(objUsuario);
		listaUsuarios->Add(objAsistente);
		break;
	case 3:
		objChef = dynamic_cast<Chef^>(objUsuario);
		listaUsuarios->Add(objChef);
		break;
	default:
		break;
	}
	escribirArchivo(listaUsuarios);
}

void empleadoController::deleteUsuario(int Id)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetId() == Id)
		{
			listaUsuarios[i]->SetStatus(0);
			listaUsuarios[i]->SetFechaDesactivacion(DateTime::Now.ToString("dd/MM/yyyy"));
			break;
		}
	}
	escribirArchivo(listaUsuarios);
}

void empleadoController::UpdateUsuario(Usuario^ UsuarioModificar)
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

Usuario^ empleadoController::QueryUsuarioById(int Id)
{
	Usuario^ objUsuario;
	List<Usuario^>^ listaUsuarios = leerArchivo();
	for(int i=0; i<listaUsuarios->Count; i++)
	{
		if(listaUsuarios[i]->GetId() == Id)
		{
			objUsuario = listaUsuarios[i];
			//devuelvo un objChef , objAsistente u objGerente dependiendo del rol
			switch (objUsuario->GetRol())
			{
			case 1:
				objUsuario = dynamic_cast<Gerente^>(objUsuario);
				break;
			case 2:
				objUsuario = dynamic_cast<Asistente^>(objUsuario);
				break;
			case 3:
				objUsuario = dynamic_cast<Chef^>(objUsuario);
				break;
			default:
				break;
			}
		}
	}
	return objUsuario;
}

List<Usuario^>^ empleadoController::QueryUsuarioByNombre(String^ Nombre)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		Usuario^ usuario = listaUsuarios[i];
		// Verificar si el usuario es un Gerente y el nombre coincide
		Gerente^ gerente = dynamic_cast<Gerente^>(usuario);
		if (gerente != nullptr && gerente->GetNombre()->Contains(Nombre))
		{
			listaUsuariosEncontrados->Add(usuario);
			continue; // Pasar a la siguiente iteración del ciclo
		}

		// Verificar si el usuario es un Asistente y el nombre coincide
		Asistente^ asistente = dynamic_cast<Asistente^>(usuario);
		if (asistente != nullptr && asistente->GetNombre()->Contains(Nombre))
		{
			listaUsuariosEncontrados->Add(usuario);
			continue; // Pasar a la siguiente iteración del ciclo
		}

		// Verificar si el usuario es un Chef y el nombre coincide
		Chef^ chef = dynamic_cast<Chef^>(usuario);
		if (chef != nullptr && chef->GetNombre()->Contains(Nombre))
		{
			listaUsuariosEncontrados->Add(usuario);
		}
	}
	return listaUsuariosEncontrados;
}

List<Usuario^>^ empleadoController::QueryUsuarioByTipo(int Rol)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetRol() == Rol)
		{
			listaUsuariosEncontrados->Add(listaUsuarios[i]);
		}
	}
	return listaUsuariosEncontrados;
}

List<Usuario^>^ empleadoController::QuerryUsuarioByNombrexRol(String^ Nombre, int Rol)
{
	List<Usuario^>^ listaUsuarios = leerArchivo();
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		Usuario^ usuario = listaUsuarios[i];

		// Verificar si el usuario cumple con el criterio de búsqueda por nombre
		bool cumpleNombre = false;
		String^ nombreCompleto = "";

		Gerente^ gerente = dynamic_cast<Gerente^>(usuario);
		if (gerente != nullptr)
		{
			nombreCompleto = gerente->GetNombre() + " " + gerente->GetApellidoPat() + " " + gerente->GetApellidoMat();
		}
		else
		{
			Asistente^ asistente = dynamic_cast<Asistente^>(usuario);
			if (asistente != nullptr)
			{
				nombreCompleto = asistente->GetNombre() + " " + asistente->GetApellidoPat() + " " + asistente->GetApellidoMat();
			}
			else
			{
				Chef^ chef = dynamic_cast<Chef^>(usuario);
				if (chef != nullptr)
				{
					nombreCompleto = chef->GetNombre() + " " + chef->GetApellidoPat() + " " + chef->GetApellidoMat();
				}
			}
		}

		if (Rol == 0)
		{
			// Búsqueda solo por nombre
			if (nombreCompleto->ToLower()->Contains(Nombre->ToLower()))
			{
				cumpleNombre = true;
			}
		}
		else
		{
			// Búsqueda por nombre y rol
			if (nombreCompleto->Contains(Nombre) && usuario->GetRol() == Rol)
			{
				cumpleNombre = true;
			}
		}

		// Agregar el usuario a la lista de usuarios encontrados si cumple con los criterios
		if (cumpleNombre)
		{
			listaUsuariosEncontrados->Add(usuario);
		}
	}

	return listaUsuariosEncontrados;
	
}
List<int>^ empleadoController::ListaIdUsuarios(List<Usuario^>^ ListaUsuarios)
{
	List<int>^ listaIdUsuarios = gcnew List<int>();
	for (int i = 0; i < ListaUsuarios->Count; i++)
	{
		listaIdUsuarios->Add(ListaUsuarios[i]->GetId());
	}
	return listaIdUsuarios;
}
int empleadoController::VerificaExistenciaUsuario(int Id)
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
List<Usuario^>^ empleadoController::QueryUsuarioByApellido(String^ Apellido)
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

String^ empleadoController::generarCorreo(String^ apellido1, String^ apellido2)
{	
	return apellido1->ToLower() + apellido2->ToLower() + "@RAMFood.com";
}
void empleadoController::generarId(Usuario^ objUsuario)
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
void empleadoController::generarContrasenha(Usuario^ objUsuario)
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