#include <cstdlib>
#include <ctime>
#include "empleadoController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

empleadoController::empleadoController() {
	this->objConexion = gcnew SqlConnection();
}

void empleadoController::abrirConexion()
{
	//Verificar si la conexion ya está abierta
	if (this->objConexion->State == System::Data::ConnectionState::Open)
	{
		return;
	}

	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20202021;User Id=a20202021;Password=WbMpwW8j";
	this->objConexion->Open();
}

void empleadoController::cerrarConexion()
{
	//verificar si la conexion ya está cerrada
	if (this->objConexion->State == System::Data::ConnectionState::Closed)
	{
		return;
	}
	this->objConexion->Close();
	
}

//Usuario^ dirección al objeto de tipo Usuario
//List<>^ dirección al objeto de tipo List
//List<Usuario^>^ esto es un puntero a un objeto de tipo Lista que tiene direcciones de objetos de tipo Usuario.


List<Usuario^>^ empleadoController::ListarUsuarios()
{
	//Se lee el archivo y se almacena en un arreglo de String
	List< Usuario^ >^ listaUsuariosLeer = gcnew List<Usuario^>();
	//ahora con base de datos
	List< Usuario^ >^ listaUsuarios = gcnew List<Usuario^>();
	this->abrirConexion();
	SqlCommand^ objComando = gcnew SqlCommand();
	objComando->Connection = this->objConexion;
	objComando->CommandText = "SELECT * FROM Usuarios";
	SqlDataReader^ objData = objComando->ExecuteReader();
	while (objData->Read())
	{
	int Id = safe_cast<int>(objData[0]);
		int Rol = safe_cast<int>(objData[1]);
		int Status = safe_cast<int>(objData[2]);
		//Convert::ToDateTime(objGerente->GetFechaContrato()).ToString("dd/MM/yyyy")
		//Obtenemos la fecha de contrato en formato string "dd/MM/yyyy"
		//El formato en que est'a en base de datos es yyyy-MM-dd
		String^ FechaContrato = Convert::ToString(Convert::ToDateTime(objData[3]));
		//Si aun no se ha despedido al usuario, la fecha de desactivacion es nula
		String^ FechaDesactivacion;
		if (objData[4] == System::DBNull::Value)
		{
			FechaDesactivacion = nullptr;
		}
		else
		{
			String^ FechaDesactivacion = Convert::ToString(Convert::ToDateTime(objData[4]));

		}
		String^ Correo = safe_cast<String^>(objData[5]);
		String^ Contrasenha = safe_cast<String^>(objData[6]);
		String^ Nombre = safe_cast<String^>(objData[7]);
		String^ ApellidoPat = safe_cast<String^>(objData[8]);
		String^ ApellidoMat = safe_cast<String^>(objData[9]);
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
		listaUsuarios->Add(objUsuario);
	}
	this->cerrarConexion();
	return listaUsuarios;
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
	File::WriteAllLines("Recursos\\Usuarios\\Usuarios.txt", lineasArchivo);
}

void empleadoController::AddUsuario(Usuario^ objUsuario)
{
	//List<Usuario^>^ listaUsuarios = ListarUsuarios();
	
	Gerente^ objGerente;
	Asistente^ objAsistente;
	Chef^ objChef;
	//Usando base de datos, la informacion se guardara en una tabla llamada Usuarios,se guarda el Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha, Nombre, ApellidoPat, ApellidoMat
	/*int Rol = 0;
	int Status = 0;
	String^ FechaContrato = nullptr;
	String^ FechaDesactivacion = nullptr;
	String^ Correo = nullptr;
	String^ Contrasenha = nullptr;
	String^ Nombre = nullptr;
	String^ ApellidoPat = nullptr;
	String^ ApellidoMat = nullptr;*/
	abrirConexion();
	//Se inserta en la tabla Usuarios
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;


	switch (objUsuario->GetRol())
	{
	case 1:
		objGerente = dynamic_cast<Gerente^>(objUsuario);
		//listaUsuarios->Add(objGerente);
		
		
		objSentencia->CommandText = "INSERT INTO Usuarios VALUES(" + objGerente->GetRol() + "," + objGerente->GetStatus() + ",'" + objGerente->GetFechaContrato() + "',NULL,'" + objGerente->GetCorreo() + "','" + objGerente->GetContrasenha() + "','" + objGerente->GetNombre() + "','" + objGerente->GetApellidoPat() + "','" + objGerente->GetApellidoMat() + "')";
		objSentencia->ExecuteNonQuery();

		

		break;
	case 2:
		objAsistente = dynamic_cast<Asistente^>(objUsuario);
		//listaUsuarios->Add(objAsistente);

		objSentencia->CommandText = "INSERT INTO Usuarios VALUES(" + objAsistente->GetRol() + "," + objAsistente->GetStatus() + ",'" + objAsistente->GetFechaContrato() + "','" + objAsistente->GetFechaDesactivacion() + "','" + objAsistente->GetCorreo() + "','" + objAsistente->GetContrasenha() + "','" + objAsistente->GetNombre() + "','" + objAsistente->GetApellidoPat() + "','" + objAsistente->GetApellidoMat() + "')";
		objSentencia->ExecuteNonQuery();
		break;
	case 3:
		objChef = dynamic_cast<Chef^>(objUsuario);
		//listaUsuarios->Add(objChef);
		objSentencia->CommandText = "INSERT INTO Usuarios VALUES(" + objChef->GetRol() + "," + objChef->GetStatus() + ",'" + objChef->GetFechaContrato() + "','" + objChef->GetFechaDesactivacion() + "','" + objChef->GetCorreo() + "','" + objChef->GetContrasenha() + "','" + objChef->GetNombre() + "','" + objChef->GetApellidoPat() + "','" + objChef->GetApellidoMat() + "')";
		objSentencia->ExecuteNonQuery();

		break;
	default:
		break;
	}
	cerrarConexion();

	//escribirArchivo(listaUsuarios);
}

void empleadoController::deleteUsuario(int Id)
{
	List<Usuario^>^ listaUsuarios = ListarUsuarios();
	abrirConexion();
	//Se actualiza en la tabla Usuarios
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetId() == Id)
		{
			listaUsuarios[i]->SetStatus(0);
			listaUsuarios[i]->SetFechaDesactivacion(DateTime::Now.ToString("dd/MM/yyyy"));
			objSentencia->CommandText = "UPDATE Usuarios SET Status = " + listaUsuarios[i]->GetStatus() + ", FechaDesactivacion = '" + listaUsuarios[i]->GetFechaDesactivacion() + "' WHERE Id = " + listaUsuarios[i]->GetId();
			objSentencia->ExecuteNonQuery();


			break;
		}
	}
	cerrarConexion();
	escribirArchivo(listaUsuarios);
}

void empleadoController::UpdateUsuario(Usuario^ UsuarioModificar)
{
	Gerente^ objGerente;
	Asistente^ objAsistente;
	Chef^ objChef;
	List<Usuario^>^ listaUsuarios = ListarUsuarios();
	/*for (int i = 0; i < listaUsuarios->Count; i++)
	{
		if (listaUsuarios[i]->GetId() == UsuarioModificar->GetId())
		{
			listaUsuarios[i] = UsuarioModificar;
			break;
		}
	}
	escribirArchivo(listaUsuarios);*/
	

	abrirConexion();
	//Se actualiza en la tabla Usuarios
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	//se modifican todos los campos de la tabla Usuarios
	switch (UsuarioModificar->GetRol())
	{
		case 1:
			objGerente = dynamic_cast<Gerente^>(UsuarioModificar);
			if (objGerente->GetFechaDesactivacion()== nullptr)// no ha sido despedido 
			{
				objSentencia-> CommandText = "UPDATE Usuarios SET Rol = " + objGerente->GetRol() + 
							", Status = " + objGerente->GetStatus() + 
							", FechaContrato = '" + Convert::ToDateTime(objGerente->GetFechaContrato()).ToString("dd/MM/yyyy")+
							"', FechaDesactivacion = NULL" +
							", Correo = '" + objGerente->GetCorreo() + 
							//"', Contrasenha = '" + objGerente->GetContrasenha() + 
							"', Nombre = '" + objGerente->GetNombre() + 
							"', ApellidoPat = '" + objGerente->GetApellidoPat() + 
							"', ApellidoMat = '" + objGerente->GetApellidoMat() + 
							"' WHERE Id = " + objGerente->GetId();
			}	else {
				objSentencia->CommandText = "UPDATE Usuarios SET Rol = " + objGerente->GetRol() +
					", Status = " + objGerente->GetStatus() +
					", FechaContrato = '" + Convert::ToDateTime(objGerente->GetFechaContrato()).ToString("dd/MM/yyyy")+
					//"', Correo = '" + objGerente->GetCorreo() +
					//"', Contrasenha = '" + objGerente->GetContrasenha() +
					//"', Nombre = '" + objGerente->GetNombre() +
					//"', ApellidoPat = '" + objGerente->GetApellidoPat() +
					//"', ApellidoMat = '" + objGerente->GetApellidoMat() +
					"' WHERE Id = " + objGerente->GetId();
			}
			objSentencia->ExecuteNonQuery();
		break;
		case 2:
			objAsistente = dynamic_cast<Asistente^>(UsuarioModificar);
			if (objAsistente->GetFechaDesactivacion() == nullptr)
			{
				objSentencia->CommandText = "UPDATE Usuarios SET Rol = " + objAsistente->GetRol() +
					", Status = " + objAsistente->GetStatus() +
					", FechaContrato = '" + Convert::ToDateTime(objAsistente->GetFechaContrato()).ToString("dd/MM/yyyy") +
					"', FechaDesactivacion = NULL" +
					", Correo = '" + objAsistente->GetCorreo() +
					"', Contrasenha = '" + objAsistente->GetContrasenha() +
					"', Nombre = '" + objAsistente->GetNombre() +
					"', ApellidoPat = '" + objAsistente->GetApellidoPat() +
					"', ApellidoMat = '" + objAsistente->GetApellidoMat() +
					"' WHERE Id = " + objAsistente->GetId();
			}
			else {
				objSentencia->CommandText = "UPDATE Usuarios SET Rol = " + objAsistente->GetRol() +
					", Status = " + objAsistente->GetStatus() +
					", FechaContrato = '" + Convert::ToDateTime(objAsistente->GetFechaContrato()).ToString("dd/MM/yyyy") +
					"', Correo = '" + objAsistente->GetCorreo() +
					"', Contrasenha = '" + objAsistente->GetContrasenha() +
					"', Nombre = '" + objAsistente->GetNombre() +
					"', ApellidoPat = '" + objAsistente->GetApellidoPat() +
					"', ApellidoMat = '" + objAsistente->GetApellidoMat() +
					"' WHERE Id = " + objAsistente->GetId();
			}
			objSentencia->ExecuteNonQuery();
			break;
		case 3:
			objChef = dynamic_cast<Chef^>(UsuarioModificar);
			if (objChef->GetFechaDesactivacion() == nullptr)
			{
				objSentencia->CommandText = "UPDATE Usuarios SET Rol = " + objChef->GetRol() +
					", Status = " + objChef->GetStatus() +
					", FechaContrato = '" + Convert::ToDateTime(objChef->GetFechaContrato()).ToString("dd/MM/yyyy") +
					"', FechaDesactivacion = NULL" +
					", Correo = '" + objChef->GetCorreo() +
					"', Contrasenha = '" + objChef->GetContrasenha() +
					"', Nombre = '" + objChef->GetNombre() +
					"', ApellidoPat = '" + objChef->GetApellidoPat() +
					"', ApellidoMat = '" + objChef->GetApellidoMat() +
					"' WHERE Id = " + objChef->GetId();
			}
			else {
				objSentencia->CommandText = "UPDATE Usuarios SET Rol = " + objChef->GetRol() +
					", Status = " + objChef->GetStatus() +
					", FechaContrato = '" + Convert::ToDateTime(objChef->GetFechaContrato()).ToString("dd/MM/yyyy") +
					"', Correo = '" + objChef->GetCorreo() +
					"', Contrasenha = '" + objChef->GetContrasenha() +
					"', Nombre = '" + objChef->GetNombre() +
					"', ApellidoPat = '" + objChef->GetApellidoPat() +
					"', ApellidoMat = '" + objChef->GetApellidoMat() +
					"' WHERE Id = " + objChef->GetId();
			}
			objSentencia->ExecuteNonQuery();
			break;
			default:
				break;
	}
	cerrarConexion();

}

Usuario^ empleadoController::QueryUsuarioById(int Id)
{
	Usuario^ objUsuario;
	List<Usuario^>^ listaUsuarios = ListarUsuarios();
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
	List<Usuario^>^ listaUsuarios = ListarUsuarios();
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
	List<Usuario^>^ listaUsuarios = ListarUsuarios();
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
	List<Usuario^>^ listaUsuarios = ListarUsuarios();
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

	List<Usuario^>^ listaUsuarios = ListarUsuarios();
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
String^ empleadoController::generarCorreo(String^ apellido1, String^ apellido2)
{	
	return apellido1->ToLower() + apellido2->ToLower() + "@RAMFood.com";
}
void empleadoController::generarId(Usuario^ objUsuario)
{
	int nextId = 1;
	List<int>^ existingIds = ListaIdUsuarios(ListarUsuarios());
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