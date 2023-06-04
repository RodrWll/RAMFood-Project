#include "ProductoPedido.h"
using namespace RAMFoodModel;
// Default constructor
ProductoPedido::ProductoPedido() {
    id = 0;
    objProducto = nullptr;
    cantidadPedida = 0;
    estado = 0;
}
// Parameterized constructor
ProductoPedido::ProductoPedido(int id, Producto^ objProducto, int cantidadPedida, int estado) {
    this->id = id;
    this->objProducto = objProducto;
    this->cantidadPedida = cantidadPedida;
    this->estado = estado;
}
int ProductoPedido::GetId() {
    return id;
}
int ProductoPedido::GetCantidadPedida() {
    return cantidadPedida;
}
int ProductoPedido::GetEstado() {
    return estado;
}
void ProductoPedido::SetId(int id) {
    this->id = id;
}
void ProductoPedido::SetCantidadPedida(int cantidad) {
    cantidadPedida = cantidad;
}
void ProductoPedido::SetEstado(int estado) {
    this->estado = estado;
}
Producto^ ProductoPedido::GetObjProducto() {
    return this->objProducto;
}
void ProductoPedido::SetProducto(Producto^ objProducto) {
    this->objProducto = objProducto;
}
