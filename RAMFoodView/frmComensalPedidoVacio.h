#pragma once

namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmComensalPedidoVacio
	/// </summary>
	public ref class frmComensalPedidoVacio : public System::Windows::Forms::Form
	{
	public:
		frmComensalPedidoVacio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmComensalPedidoVacio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TextoError;
	private: System::Windows::Forms::Label^ PedidoErrorIndicacion;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TextoError = (gcnew System::Windows::Forms::Label());
			this->PedidoErrorIndicacion = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TextoError
			// 
			this->TextoError->AutoSize = true;
			this->TextoError->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextoError->Location = System::Drawing::Point(61, 41);
			this->TextoError->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TextoError->Name = L"TextoError";
			this->TextoError->Size = System::Drawing::Size(375, 24);
			this->TextoError->TabIndex = 0;
			this->TextoError->Text = L"No ha ordenado ningún producto";
			this->TextoError->Click += gcnew System::EventHandler(this, &frmComensalPedidoVacio::label1_Click);
			// 
			// PedidoErrorIndicacion
			// 
			this->PedidoErrorIndicacion->AutoSize = true;
			this->PedidoErrorIndicacion->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PedidoErrorIndicacion->Location = System::Drawing::Point(164, 82);
			this->PedidoErrorIndicacion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PedidoErrorIndicacion->Name = L"PedidoErrorIndicacion";
			this->PedidoErrorIndicacion->Size = System::Drawing::Size(129, 16);
			this->PedidoErrorIndicacion->TabIndex = 1;
			this->PedidoErrorIndicacion->Text = L"Inténtelo de nuevo";
			this->PedidoErrorIndicacion->Click += gcnew System::EventHandler(this, &frmComensalPedidoVacio::PedidoErrorIndicacion_Click);
			// 
			// frmComensalPedidoVacio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 156);
			this->Controls->Add(this->PedidoErrorIndicacion);
			this->Controls->Add(this->TextoError);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmComensalPedidoVacio";
			this->Text = L"Pedido no vacío";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PedidoErrorIndicacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
