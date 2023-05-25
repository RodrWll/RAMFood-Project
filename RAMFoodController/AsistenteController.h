#pragma once

namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace RAMFoodModel;
	public ref class AsistenteController{
		public:
			AsistenteController();
			List<Asistente^>^ leerArchivoMesa1();
			List<Asistente^>^ leerArchivoMesa2();
			List<Asistente^>^ leerArchivoMesa3();
			/*Funcion generica para leer el archivo txt
			* este archivo debe tener 2 datos, el id del plato y la cantidad pedida
			* seran 2 funciones, una para bebidas y otra para comida
			*/
			List<Plato^>^ listarPlatosPedidosMesa();
			List<Bebidas^>^ listarBebidasPedidosMesa();
			void ActualizarAsistencia();
	};
}
