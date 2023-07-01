#include "LogueoController.h"
#include "empleadoController.h"

using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

LogueoController::LogueoController() {
    this->objConexion = gcnew SqlConnection();
}

void LogueoController::abrirConexion()
{
    //Verificar si la conexion ya está abierta
    if (this->objConexion->State == System::Data::ConnectionState::Open)
    {
        return;
    }

    this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20202021;User Id=a20202021;Password=WbMpwW8j";
    this->objConexion->Open();
}
void LogueoController::cerrarConexion()
{
    //verificar si la conexion ya está cerrada
    if (this->objConexion->State == System::Data::ConnectionState::Closed)
    {
        return;
    }
    this->objConexion->Close();

}

List<array<String^>^>^ LogueoController::leerUsuarios()
{
    //Se lee el archivo y se almacena en un arreglo de String
    
    List<array<String^>^>^ listaCredencialesLeer = gcnew List<array<String^>^>();
    /*array<String^>^ lineas = File::ReadAllLines("Recursos\\Usuarios\\Usuarios.txt");
    String^ separadores = ";";
    for each (String ^ lineasUsuarios in lineas)
    {
        array<String^>^ datos = lineasUsuarios->Split(separadores->ToCharArray());
        int Id = Convert::ToInt32(datos[0]);
        int Rol = Convert::ToInt32(datos[1]);
        int Status = Convert::ToInt32(datos[2]);
        String^ Correo = datos[5];
        String^ Contrasenha = datos[6];
        array<String^>^ credenciales = gcnew array<String^>(5);
        credenciales [0] = Id.ToString();
        credenciales [1] = Rol.ToString();
        credenciales [2] = Status.ToString();
        credenciales [3] = Correo;
        credenciales [4] = Contrasenha;
        listaCredencialesLeer->Add(credenciales);
    }*/
    abrirConexion();
    SqlCommand^ objComando = gcnew SqlCommand();
    objComando->Connection = this->objConexion;
    objComando->CommandText = "SELECT * FROM Usuarios";
    SqlDataReader^ objData = objComando->ExecuteReader();
    while (objData->Read())
    {
		array<String^>^ credenciales = gcnew array<String^>(5);
		credenciales[0] = objData[0]->ToString();//id
		credenciales[1] = objData[1]->ToString();//rol
		credenciales[2] = objData[2]->ToString();//status
		credenciales[3] = objData[5]->ToString();//correo
		credenciales[4] = objData[6]->ToString();//contrasenha
		listaCredencialesLeer->Add(credenciales);
	}
    cerrarConexion();
    return listaCredencialesLeer;
}

bool LogueoController::VerificarCredenciales(String^ CorreoUsuario, String^ Contrasenha) {
    List<array<String^>^>^ listaCredenciales = leerUsuarios();
    for each (array<String^> ^ credenciales in listaCredenciales)
    {
        if (credenciales[3]->Equals(CorreoUsuario) && credenciales[4]->Equals(Contrasenha))
        {
            return true; // Las credenciales son válidas
        }
    }
    return false; // Las credenciales son inválidas
}
Usuario^ LogueoController::ObtenerUsuario(String^ CorreoUsuario, String^ Contrasenha) {
    List<array<String^>^>^ listaCredenciales = leerUsuarios();
    Usuario^ objUsuario = gcnew Usuario();
    for each (array<String^> ^ credenciales in listaCredenciales)
	{
		if (credenciales[3]->Equals(CorreoUsuario) && credenciales[4]->Equals(Contrasenha))
		{
            int id = Convert::ToInt32(credenciales[0]);
			empleadoController^ controladorUsuario = gcnew empleadoController();
            objUsuario = controladorUsuario->QueryUsuarioById(id);
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
            break;
		}
	}
    return objUsuario;
}
