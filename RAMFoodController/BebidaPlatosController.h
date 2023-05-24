#pragma once
using namespace System::Collections::Generic;
using namespace RAMFoodModel;
using namespace System;
namespace RAMFoodController {
	public ref class BebidaPlatosController {
	public:
		BebidaPlatosController();
	
		List<PlatoBebidaMenu^>^ ListaPlatosBebidas = gcnew List<PlatoBebidaMenu^>();

		// TODO: Agregue aquí los métodos de esta clase.
		//Métodos CRUD de BebidaMenu (C:Create, R:Request, U:Update, D:Delete)
		void AddPlatoBebidaMenu(PlatoBebidaMenu^);
		void escribirArchivo(List<PlatoBebidaMenu^>^ ListaPlatoBebida, int TipoArchivo);
		List<PlatoBebidaMenu^>^ buscarTodas();
		void EliminarPlatoBebida(int Id);
		PlatoBebidaMenu^ QueryProductById(int codigoActualizar);
		void UpdateProduct(PlatoBebidaMenu^ objPlatoBebidaMenu);
		List<PlatoBebidaMenu^>^ BuscarProductoPorNombre(String^ Nombre);
		//void DeletePlatoBebidaMenu(int Id);

		void EliminarProductoDelMenuDiario(int Id);
		List<PlatoBebidaMenu^>^ QueryAllProductFromDailyMenu();
		void AddProductToDailyMenu(PlatoBebidaMenu^ ObjPlatoBebidaMenu);
		PlatoBebidaMenu^ QueryProductByIdFromDailyMenu(int codigoActualizar);


		//void UpdatePlatoBebidaMenu(PlatoBebidaMenu^);
		/*
		List<Bebidas^>^ ObtenerInfoBebida();
		List<Plato^>^ ObtenerInfoPlato();
	void Escribir_pedidos(List<Plato^>^ listaPlatosMesa, List<Bebidas^>^ listaBebidasMesa, String^ nombre_archivo,
	int cantidad_bebida[], int cantidad_platos[]);
	void Escribir_archivo(String^ nombre_archivo, int valor);
	array<String^>^ Leer_archivo(String^ nombre_archivo);
	List<Plato^>^ LeerPedidosPlato(String^ nombre_archivo);
	List<Bebidas^>^ LeerPedidosBebidas(String^ nombre_archivo);
	int es_nuevo_pedido(String^ nombre_archivo);*/

	};
}