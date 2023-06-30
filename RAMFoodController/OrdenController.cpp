#include "OrdenController.h"
#include "productosController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;
using namespace System::Data::SqlClient;
using namespace System::Data;


OrdenController::OrdenController() {
    this->objConexion = gcnew SqlConnection();
   
}
//
// Metodos para abrir la conección con la base de datos
void OrdenController::abrirConexion() {
    /*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
    if (this->objConexion->State != ConnectionState::Open) {
        this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20202021;User Id=a20202021;Password=WbMpwW8j";
        this->objConexion->Open(); /*Apertura de la conexion a BD*/
    }
    
}
void OrdenController::cerrarConexion() {
    if (this->objConexion->State != ConnectionState::Closed) {
        this->objConexion->Close();
    }
    
}
// Method for searching an order by ID

List<ProductoPedido^>^ OrdenController::ReadOrderDetailsFromFile(String^ filePath, int orderId) {
    abrirConexion();
    List<ProductoPedido^>^ orderDetails = gcnew List<ProductoPedido^>();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "select * from DetallePedido where idPedido=" + orderId;
    SqlDataReader^ objData = objSentencia->ExecuteReader();

    List<int>^ listaIds = gcnew List<int>();
    try {
        while (objData->Read()) {
            int id = safe_cast<int>(objData[0]);            
            int productoId = safe_cast<int>(objData[2]);
            int cantidadPedida = safe_cast<int>(objData[3]);
            int estado = safe_cast<int>(objData[4]);
            listaIds->Add(productoId);
            productoController^ objProductoController = gcnew productoController();
            Producto^ objProducto = nullptr;
            ProductoPedido^ product = gcnew ProductoPedido(id, objProducto, cantidadPedida, estado);
            orderDetails->Add(product);
        }
        cerrarConexion();
        for (int i = 0; i < listaIds->Count; i++) {      
            productoController^ objProductoController = gcnew productoController();
            Producto^ objProducto = objProductoController->buscarProductoxId(listaIds[i]);
            orderDetails[i]->SetProducto(objProducto);
        }        
        
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }    
    return orderDetails;
}

List<OrdenMesa^>^ OrdenController::ReadOrdersFromFile(String^ filePath) {
    List<OrdenMesa^>^ orders = gcnew List<OrdenMesa^>();
    abrirConexion();    
    /*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a indicar la sentencia que voy a ejecutar*/
    objSentencia->CommandText = "select * from PedidoGeneralMesa where estado=1";
    /*Aqui ejecuto la sentencia en la Base de Datos*/
    /*Para Select siempre sera ExecuteReader*/
    /*Para select siempre va a devolver un SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    try {
        while (objData->Read()) {
            int orderId = safe_cast<int>(objData[0]);
            int mesa = safe_cast<int>(objData[1]);
            int estado = safe_cast<int>(objData[2]);
            DateTime fechaFormateDate = safe_cast<DateTime>(objData[4]);     
            String^ fechaString = fechaFormateDate.ToString("dd/MM/yyyy");
            List<ProductoPedido^>^ orderDetails = nullptr;
            OrdenMesa^ order = gcnew OrdenMesa(orderId, mesa, estado, orderDetails, fechaString);
            orders->Add(order);        
        }
        cerrarConexion();
        for (int i = 0; i < orders->Count; i++) {
            int orderId = orders[i]->GetId();
            List<ProductoPedido^>^ orderDetails = ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", orderId);
            orders[i]->SetListaProductosPedidos(orderDetails);
        }
    }    
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }   
    return orders;
}

List<OrdenMesa^>^ OrdenController::ReadAllOrdersFromFile(String^ filePath) {   

    List<OrdenMesa^>^ orders = gcnew List<OrdenMesa^>();    
    /*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a indicar la sentencia que voy a ejecutar*/
    objSentencia->CommandText = "select * from PedidoGeneralMesa";
    /*Aqui ejecuto la sentencia en la Base de Datos*/
    /*Para Select siempre sera ExecuteReader*/
    /*Para select siempre va a devolver un SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    try {
        while (objData->Read()) {
            int orderId = safe_cast<int>(objData[0]);
            int mesa = safe_cast<int>(objData[1]);
            int estado = safe_cast<int>(objData[2]);
            String^ fecha = safe_cast<String^>(objData[3]);           
            List<ProductoPedido^>^ orderDetails = ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", orderId);
            OrdenMesa^ order = gcnew OrdenMesa(orderId, mesa, estado, orderDetails, fecha);
            orders->Add(order);            

        }
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }
    cerrarConexion();
    return orders;
}


void OrdenController::actualizarEstado(int idPedido, int idProductoPedido, int estado) {

    abrirConexion();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "UPDATE DetallePedido SET estado = @estado WHERE idPedido = @idPedido AND id = @idProductoPedido";

    // Set parameter values
    objSentencia->Parameters->AddWithValue("@estado", estado);
    objSentencia->Parameters->AddWithValue("@idPedido", idPedido);
    objSentencia->Parameters->AddWithValue("@idProductoPedido", idProductoPedido);

    // Execute the update query
    objSentencia->ExecuteNonQuery();
    cerrarConexion();

    /*
    List<OrdenMesa^>^ orders = gcnew List<OrdenMesa^>();
    orders = ReadAllOrdersFromFile("NewComensal//pedidoMesaGeneral.txt");  
    List<String^>^ lineasEscribir = gcnew List<String^>();
   
    for (int i = 0; i < orders->Count; i++) {
        List<ProductoPedido^>^ ListOfOrderDetails = ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", orders[i]->GetId());
        for (int j = 0; j < ListOfOrderDetails->Count;j++) {
            ProductoPedido^ objProductoPedido = ListOfOrderDetails[j];
            if (objProductoPedido->GetId() == idProductoPedido && orders[i]->GetId()== idPedido) {
                objProductoPedido->SetEstado(estado);
                ListOfOrderDetails[j] = objProductoPedido;
            }
            String^ lineas = {
            Convert::ToString(orders[i]->GetId()) + ";" + Convert::ToString(ListOfOrderDetails[j]->GetId()) + ";" + Convert::ToString(ListOfOrderDetails[j]->GetObjProducto()->GetId()) + ";" +
            Convert::ToString(ListOfOrderDetails[j]->GetCantidadPedida()) + ";" + Convert::ToString(ListOfOrderDetails[j]->GetEstado()) };
            lineasEscribir->Add(lineas);
        }        
    }
    File::WriteAllLines("NewComensal//DetallePedidoMesaGeneral.txt", lineasEscribir);
    */
}

ProductoPedido^ OrdenController::buscarProductoPedidoxId(int idPedido, int idProductoPedido) {
    List<ProductoPedido^>^ listaProductosPedidos = gcnew List<ProductoPedido^>();
    listaProductosPedidos = ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", idPedido);
    List<String^>^ lineasEscribir = gcnew List<String^>();
    ProductoPedido^ objProductoPedidoEncontrado = gcnew ProductoPedido();
    for (int i = 0; i < listaProductosPedidos->Count; i++) {
            ProductoPedido^ objProductoPedido = listaProductosPedidos[i];
            if (listaProductosPedidos[i]->GetId() == idProductoPedido) {
                objProductoPedidoEncontrado = listaProductosPedidos[i];
            }            
    }
    return objProductoPedidoEncontrado;
}

//
List<ProductoPedido^>^ OrdenController::buscarListaPlatosPedidos(String^ filePath,String^ usuario) {
    OrdenController^ objOrdenController = gcnew OrdenController();
    List<OrdenMesa^>^ listaOrdenes = objOrdenController->ReadOrdersFromFile("NewComensal//pedidoMesaGeneral.txt");
    List<ProductoPedido^>^ listaProductosEncontrados;
    List<ProductoPedido^>^ listaPlatosPedidos = gcnew List<ProductoPedido^>();
    for (int i = 0; i < listaOrdenes->Count; i++) {
        listaProductosEncontrados = listaOrdenes[i]->GetListaProductosPedidos();
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];
            if (usuario == "chef") {
                if ((objProductoPedido->GetObjProducto()->GetTipo()) == 2 && (objProductoPedido->GetEstado() == 0)) {
                    listaPlatosPedidos->Add(objProductoPedido);
                }
            }
            else {
                if ((objProductoPedido->GetObjProducto()->GetTipo()) == 2) {
                    listaPlatosPedidos->Add(objProductoPedido);
                }
            }
            
        }
    }
    return listaPlatosPedidos;
}
List<ProductoPedido^>^ OrdenController::buscarListaBebidasPedidos(String^ filePath, String^ usuario) {
    OrdenController^ objOrdenController = gcnew OrdenController();
    List<OrdenMesa^>^ listaOrdenes = objOrdenController->ReadOrdersFromFile("NewComensal//pedidoMesaGeneral.txt");
    List<ProductoPedido^>^ listaProductosEncontrados;   
    List<ProductoPedido^>^ listaBebidasPedidos = gcnew List<ProductoPedido^>();
    for (int i = 0; i < listaOrdenes->Count; i++) {
        listaProductosEncontrados = listaOrdenes[i]->GetListaProductosPedidos();
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];
            if (usuario == "chef") {
                if ((objProductoPedido->GetObjProducto()->GetTipo() == 1)  && (objProductoPedido->GetEstado() == 0)) {
                    listaBebidasPedidos->Add(objProductoPedido);                     
                }
            }
            else if (usuario == "asistente") {
                if (objProductoPedido->GetObjProducto()->GetTipo() == 1) {
                    
                }
            }            
        }
    }
    return listaBebidasPedidos;
}

List<String^>^ OrdenController::buscarListaIdsBebidas(String^ filePath) {
    OrdenController^ objOrdenController = gcnew OrdenController();
    List<OrdenMesa^>^ listaOrdenes = objOrdenController->ReadOrdersFromFile("NewComensal//pedidoMesaGeneral.txt");
    List<String^>^ listaIdsEncontrados = gcnew List<String^>;
    List<ProductoPedido^>^ listaProductosEncontrados;
    List<String^>^ listaIdsBebidasPedidos = gcnew List<String^>();
    for (int i = 0; i < listaOrdenes->Count; i++) {
        listaIdsEncontrados = objOrdenController->ReadOrderIds("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        listaProductosEncontrados = listaOrdenes[i]->GetListaProductosPedidos();
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];
            if ((objProductoPedido->GetObjProducto()->GetTipo()) == 1 && (objProductoPedido->GetEstado() == 0)) {
                listaIdsBebidasPedidos->Add(listaIdsEncontrados[j]);
            }
        }
    }

    /*
    OrdenController^ objOrdenController = gcnew OrdenController();
    List<OrdenMesa^>^ listaOrdenes = objOrdenController->ReadOrdersFromFile("NewComensal//pedidoMesaGeneral.txt");
    List<String^>^ listaIdsEncontrados = gcnew List<String^>;
    List<ProductoPedido^>^ listaProductosEncontrados;
    List<String^>^ listaIdsBebidasPedidos = gcnew List<String^>();
    for (int i = 0; i < listaOrdenes->Count; i++) {
        listaIdsEncontrados = objOrdenController->ReadOrderIds("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId()); 
        listaProductosEncontrados = objOrdenController->ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];         
            if ((objProductoPedido->GetObjProducto()->GetTipo()) == 1 && (objProductoPedido->GetEstado() == 0)) {
                listaIdsBebidasPedidos->Add(listaIdsEncontrados[j]);
            }            
        }
    }
    */
    return listaIdsBebidasPedidos;
}
List<String^>^ OrdenController::buscarListaIdsPlatos(String^ filePath) {
    OrdenController^ objOrdenController = gcnew OrdenController();
    List<OrdenMesa^>^ listaOrdenes = objOrdenController->ReadOrdersFromFile("NewComensal//pedidoMesaGeneral.txt");
    List<String^>^ listaIdsEncontrados = gcnew List<String^>;
    List<ProductoPedido^>^ listaProductosEncontrados;
    List<String^>^ listaIdsPlatosPedidos = gcnew List<String^>();
    for (int i = 0; i < listaOrdenes->Count; i++) {
        listaIdsEncontrados = objOrdenController->ReadOrderIds("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        listaProductosEncontrados = listaOrdenes[i]->GetListaProductosPedidos();
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];
            if ((objProductoPedido->GetObjProducto()->GetTipo()) == 2 && (objProductoPedido->GetEstado() == 0)) {
                listaIdsPlatosPedidos->Add(listaIdsEncontrados[j]);
            }
        }
    }

    /*
    OrdenController^ objOrdenController = gcnew OrdenController();
    List<OrdenMesa^>^ listaOrdenes = objOrdenController->ReadOrdersFromFile("NewComensal//pedidoMesaGeneral.txt");
    List<String^>^ listaIdsEncontrados = gcnew List<String^>;
    List<ProductoPedido^>^ listaProductosEncontrados;
    List<String^>^ listaIdsPlatosPedidos = gcnew List<String^>();
    for (int i = 0; i < listaOrdenes->Count; i++) {
        listaIdsEncontrados = objOrdenController->ReadOrderIds("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        listaProductosEncontrados = objOrdenController->ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];
            if ((objProductoPedido->GetObjProducto()->GetTipo()) == 2 && (objProductoPedido->GetEstado() == 0)) {
                listaIdsPlatosPedidos->Add(listaIdsEncontrados[j]);
            }
        }
    }
    */
    return listaIdsPlatosPedidos;
}

List<String^>^ OrdenController::ReadOrderIds(String^ filePath, int orderId) {
    List<String^>^ orderIds = gcnew List<String^>();
    abrirConexion();
    /*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a indicar la sentencia que voy a ejecutar*/
    objSentencia->CommandText = "select * from DetallePedido where idPedido=" + orderId;
    /*Aqui ejecuto la sentencia en la Base de Datos*/
    /*Para Select siempre sera ExecuteReader*/
    /*Para select siempre va a devolver un SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    try {        
        while (objData->Read()) {                        
            int id = safe_cast<int>(objData[1]);
            orderIds->Add(Convert::ToString(id));
        }
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }
    cerrarConexion();
    return orderIds;
}


Producto^ OrdenController:: buscarObjProducto(int idPedido, int idProductoPedido) {
    Producto^ objProducto = gcnew Producto();
    List<ProductoPedido^>^ listaProductosPedidos= ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", idPedido);
    for (int i = 0; i < listaProductosPedidos->Count; i++) {
        ProductoPedido^ objProductoPedido = listaProductosPedidos[i];
        if (objProductoPedido->GetId() == idProductoPedido) {
            objProducto = objProductoPedido->GetObjProducto();
            break;
        }
    }
    return objProducto;
}

OrdenMesa^ OrdenController::ReadOrderDetailsxNroMesa(int mesa) {
    OrdenMesa^ order = gcnew OrdenMesa();
    abrirConexion();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "select * from PedidoGeneralMesa where estado=1 and numeroMesa="+mesa;
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    try {
        while (objData->Read()) {
            int orderId = safe_cast<int>(objData[0]);
            int mesa = safe_cast<int>(objData[1]);
            int estado = safe_cast<int>(objData[2]);
            DateTime fechaFormateDate = safe_cast<DateTime>(objData[4]);
            String^ fechaString = fechaFormateDate.ToString("dd/MM/yyyy");
            List<ProductoPedido^>^ orderDetails = nullptr;
            OrdenMesa^ order2 = gcnew OrdenMesa(orderId, mesa, estado, orderDetails, fechaString);
            order = order2;
        }
        cerrarConexion();
        for (int i = 0; i < 1; i++) {
            int orderId = order->GetId();
            List<ProductoPedido^>^ orderDetails = ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", orderId);
            order->SetListaProductosPedidos(orderDetails);
        }
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }
    return order;
}

String^ OrdenController::ReadEstadoDelProductoPedido(int estado) {
    String^ estadoString;
    if (estado == 0) {
        estadoString = "En espera";
    }
    else if (estado == 1) {
        estadoString = "En preparación";
    }
    else if (estado == 2) {
        estadoString = "Listo para entregar";
    }
    else if (estado == 3) {
        estadoString = "Entregado";
    }
    return estadoString;
}

String^ OrdenController::ReadTipoDeProductoPedido(int tipo) {
    String^ estadoString;
    if (tipo == 1) {
        estadoString = "Bebida";
    }    
    else if (tipo == 2) {
        estadoString = "Plato";
    }
    return estadoString;
}
