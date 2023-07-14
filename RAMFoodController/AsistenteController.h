#pragma once

namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace RAMFoodModel;
	using namespace System::Data::SqlClient;
	public ref class AsistenteController{
		private:
			SqlConnection^ objConexion;
		public:
			AsistenteController();
			void abrirConexion();
			void cerrarConexion();
			List<Plato^>^ listarPlatosPedidosMesa();
			List<Bebida^>^ listarBebidasPedidosMesa();
			//String^ LeerArchivoEstadoAsistencia(int numeroMesa);
			//String^ LeerArchivoEstadoCobranza(int numeroMesa);
			/*void ModificarEstadoAsistencia(int numeroDeMesaALeer, int estadoAsis);*/
			//void ModificarEstadoCobranza(int numeroDeMesaALeer, int estadoCob);
			int BuscarEstadoAsistencia(int numeroMesa);
			int BuscarEstadoCobranza(int numeroMesa);
			void ActualizarEstadoAsistencia(int numeroMesa, int estadoAsis);
			void ActualizarEstadoCobranza(int numeroMesa, int estadoCob);
	};
}
