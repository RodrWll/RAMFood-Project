#include "LogueoController.h"
#include "empleadoController.h"

using namespace RAMFoodController;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Collections;
using namespace RAMFoodModel;

LogueoController::LogueoController() {

}

List<array<String^>^>^ LogueoController::leerArchivo()
{
    //Se lee el archivo y se almacena en un arreglo de String
    
    List<array<String^>^>^ listaCredencialesLeer = gcnew List<array<String^>^>();
    array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
    String^ separadores = ";";
    for each (String ^ listaCredencialesLeer in lineas)
    {
        array<String^>^ datos = listaCredencialesLeer->Split(separadores->ToCharArray());
        int Id = Convert::ToInt32(datos[0]);
        int Tipo = Convert::ToInt32(datos[1]);
        String^ Correo = datos[5];
        String^ Contrasenha = datos[6];
        array<String^>^ credenciales = gcnew array<String^>(4);
        credenciales [0] = Id.ToString();
        credenciales [1] = Tipo.ToString();
        credenciales [2] = Correo;
        credenciales [3] = Contrasenha;

       // listaCredencialesLeer->Add(credenciales);
    }
    return listaCredencialesLeer;
}


void LogueoController::AgregarUsuario(String^ CorreoUsuario, String^ Contrasenha) {
    // Agregar el nuevo usuario a la lista de usuarios
//    Logueo^ LogueoUsuario = gcnew Logueo(CorreoUsuario,Contrasenha);
  //  Logueos->Add(LogueoUsuario);

    // Guardar el nuevo usuario en el archivo de texto
   // StreamWriter^ writer = gcnew StreamWriter("Usuarios.txt", true);
    //writer->WriteLine(CorreoUsuario + ";" + Contrasenha);
    //writer->Close();
}

bool LogueoController::VerificarCredenciales(String^ CorreoUsuario, String^ Contrasenha) {
    // Leer el archivo de texto y verificar las credenciales
    StreamReader^ reader = gcnew StreamReader("Usuarios.txt");
    String^ linea;
    while ((linea = reader->ReadLine()) != nullptr) {
        array<String^>^ partes = linea->Split(';');
        if (partes->Length == 7 && partes[5] == CorreoUsuario && partes[6] == Contrasenha) {
            reader->Close();
            return true; // Las credenciales son válidas
        }
    }
    reader->Close();
    return false; // Las credenciales son inválidas
}
