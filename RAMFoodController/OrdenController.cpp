#include "OrdenController.h"
#include "productosController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

OrdenController::OrdenController() {

}

// Method for searching an order by ID

List<ProductoPedido^>^ OrdenController::ReadOrderDetailsFromFile(String^ filePath, int orderId) {
    List<ProductoPedido^>^ orderDetails = gcnew List<ProductoPedido^>();
    try {
        StreamReader^ reader = gcnew StreamReader(filePath);
        String^ line;
        while ((line = reader->ReadLine()) != nullptr) {
            array<String^>^ data = line->Split(';');

            int orderID = Int32::Parse(data[0]);

            if (orderID == orderId) {
                int id = Int32::Parse(data[1]);
                int productoId = Int32::Parse(data[2]);
                int cantidadPedida = Int32::Parse(data[3]);                
                int estado = Int32::Parse(data[4]);               
                productoController^ objProductoController = gcnew productoController();
                Producto^ objProducto = objProductoController->buscarProductoxId(productoId);
                ProductoPedido^ product = gcnew ProductoPedido(id, objProducto, cantidadPedida, estado);
                orderDetails->Add(product);
            }
        }

        reader->Close();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }

    return orderDetails;
}

List<OrdenMesa^>^ OrdenController::ReadOrdersFromFile(String^ filePath) {
    List<OrdenMesa^>^ orders = gcnew List<OrdenMesa^>();

    try {
        StreamReader^ reader = gcnew StreamReader(filePath);

        String^ line;
        while ((line = reader->ReadLine()) != nullptr) {
            array<String^>^ data = line->Split(';');

            int orderId = Int32::Parse(data[0]);
            int mesa = Int32::Parse(data[1]);
            int estado = Int32::Parse(data[2]);
            String^ fecha = data[3];       
            if (estado == 1) {
                List<ProductoPedido^>^ orderDetails = ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", orderId);
                OrdenMesa^ order = gcnew OrdenMesa(orderId, mesa, estado, orderDetails, fecha);
                orders->Add(order);
            }
           
        }
        reader->Close();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }

    return orders;
}

List<OrdenMesa^>^ OrdenController::ReadAllOrdersFromFile(String^ filePath) {
    List<OrdenMesa^>^ orders = gcnew List<OrdenMesa^>();

    try {
        StreamReader^ reader = gcnew StreamReader(filePath);

        String^ line;
        while ((line = reader->ReadLine()) != nullptr) {
            array<String^>^ data = line->Split(';');
            int orderId = Int32::Parse(data[0]);
            int mesa = Int32::Parse(data[1]);
            int estado = Int32::Parse(data[2]);
            String^ fecha = data[3];            
            List<ProductoPedido^>^ orderDetails = ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", orderId);
            OrdenMesa^ order = gcnew OrdenMesa(orderId, mesa, estado, orderDetails, fecha);
            orders->Add(order);
            

        }
        reader->Close();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }

    return orders;
}


void OrdenController::actualizarEstado(int idPedido, int idProductoPedido, int estado) {
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
        listaProductosEncontrados = objOrdenController->ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];
            if (usuario == "chef") {
                if ((objProductoPedido->GetObjProducto()->GetTipo()) == 2 && (objProductoPedido->GetEstado() == 1 || objProductoPedido->GetEstado() == 0)) {
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
        listaProductosEncontrados = objOrdenController->ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];
            if (usuario == "chef") {
                if ((objProductoPedido->GetObjProducto()->GetTipo()) == 1 && (objProductoPedido->GetEstado() == 1 || objProductoPedido->GetEstado() == 0)) {
                    listaBebidasPedidos->Add(objProductoPedido);                     
                }
            }
            else if (usuario == "asistente") {
                if ((objProductoPedido->GetObjProducto()->GetTipo()) == 1) {
                    
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
        listaProductosEncontrados = objOrdenController->ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];         
            if ((objProductoPedido->GetObjProducto()->GetTipo()) == 1 && (objProductoPedido->GetEstado() == 1 || objProductoPedido->GetEstado() == 0)) {
                listaIdsBebidasPedidos->Add(listaIdsEncontrados[j]);
            }            
        }
    }
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
        listaProductosEncontrados = objOrdenController->ReadOrderDetailsFromFile("NewComensal//DetallePedidoMesaGeneral.txt", listaOrdenes[i]->GetId());
        for (int j = 0; j < listaProductosEncontrados->Count; j++) {
            ProductoPedido^ objProductoPedido = gcnew ProductoPedido();
            objProductoPedido = listaProductosEncontrados[j];
            if ((objProductoPedido->GetObjProducto()->GetTipo()) == 2 && (objProductoPedido->GetEstado() == 1 || objProductoPedido->GetEstado() == 0)) {
                listaIdsPlatosPedidos->Add(listaIdsEncontrados[j]);
            }
        }
    }
    return listaIdsPlatosPedidos;
}

List<String^>^ OrdenController::ReadOrderIds(String^ filePath, int orderId) {
    List<String^>^ orderIds = gcnew List<String^>();
    try {
        StreamReader^ reader = gcnew StreamReader(filePath);
        String^ line;
        while ((line = reader->ReadLine()) != nullptr) {
            array<String^>^ data = line->Split(';');
            int orderID = Int32::Parse(data[0]);
            if (orderID == orderId) {               
                orderIds->Add(Convert::ToString(orderID));
            }
        }
        reader->Close();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }
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