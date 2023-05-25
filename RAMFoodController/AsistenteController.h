#pragma once

namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace RAMFoodModel;
	public ref class AsistenteController{
		public:
			AsistenteController();
			List<Asistente^>^ AsistenteController::leerArchivoMesa1();
			List<Asistente^>^ AsistenteController::leerArchivoMesa2();
			List<Asistente^>^ AsistenteController::leerArchivoMesa3();
			void ActualizarAsistencia();
	};
}
