#include "UsuarioController.h"

using namespace RAMFoodController;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace RAMFoodModel;

UsuarioController::UsuarioController() {

}

void UsuarioController::AgregarUsuario(String^ NombreUsuario, String^ Contrasenha) {
    // Agregar el nuevo usuario a la lista de usuarios
    Usuario^ nuevoUsuario = gcnew Usuario(NombreUsuario, Contrasenha);
    usuarios->Add(nuevoUsuario);

    // Guardar el nuevo usuario en el archivo de texto
    StreamWriter^ writer = gcnew StreamWriter("Usuarios.txt", true);
    writer->WriteLine(NombreUsuario + ";" + Contrasenha);
    writer->Close();
}

bool UsuarioController::VerificarCredenciales(String^ NombreUsuario, String^ Contrasenha) {
    // Leer el archivo de texto y verificar las credenciales
    StreamReader^ reader = gcnew StreamReader("Usuarios.txt");
    String^ linea;
    while ((linea = reader->ReadLine()) != nullptr) {
        array<String^>^ partes = linea->Split(';');
        if (partes->Length == 2 && partes[0] == NombreUsuario && partes[1] == Contrasenha) {
            reader->Close();
            return true; // Las credenciales son válidas
        }
    }
    reader->Close();
    return false; // Las credenciales son inválidas
}

