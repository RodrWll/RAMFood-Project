#pragma once
#include "ProductoPedido.h"
#include "OrdenMesa.h"
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

using namespace RAMFoodModel;
// Default constructor
OrdenMesa::OrdenMesa() {
    id = 0;
    mesa = 0;
    listaProductosPedidos = gcnew List<ProductoPedido^>();
    fecha = nullptr;
 
}

// Parameterized constructor
OrdenMesa::OrdenMesa(int id, int Mesa,int EstadoOrden, List<ProductoPedido^>^ listaProductosPedidos, String^ Fecha) {
    this->id = id;
    this->mesa = Mesa;
    this->listaProductosPedidos = listaProductosPedidos;
    this->fecha = Fecha;
    this->Estado = EstadoOrden;
}
void OrdenMesa::SetId(int Id) {
    this->id = Id;
}
int OrdenMesa::GetId() {
    return id;
}
void OrdenMesa::SetMesa(int numeroMesa) {
    this->mesa = numeroMesa;
}
int OrdenMesa::GetMesa() {
    return mesa;
}
String^ OrdenMesa::GetFecha() {
    return fecha;
}
void OrdenMesa::SetFecha(String^ fecha) {
    this->fecha = fecha;
}
void OrdenMesa::SetEstado(int EstadoOrden) {
    this->Estado = EstadoOrden;
}
int OrdenMesa::GetEstado() {
    return this->Estado;
}
void OrdenMesa::SetCuenta( double numero) {
    this->cuenta = numero;
}
double OrdenMesa::GetCuenta() {
    return this->cuenta;
}

void OrdenMesa::SetListaProductosPedidos(List<ProductoPedido^>^ listaProductosPedidos) {
    this->listaProductosPedidos = listaProductosPedidos;
}
List<ProductoPedido^>^ OrdenMesa::GetListaProductosPedidos() {
    return this->listaProductosPedidos;
}


