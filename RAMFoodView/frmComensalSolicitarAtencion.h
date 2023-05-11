#pragma once
#include "frmComensalAsistenciaSolicitada.h"
#include "frmComensalGenerarPedido.h"

namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmComensalSolicitarAtencion
	/// </summary>
	public ref class frmComensalSolicitarAtencion : public System::Windows::Forms::Form
	{
	public:
		frmComensalSolicitarAtencion(void)
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
		~frmComensalSolicitarAtencion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ PagarCuenta;
	private: System::Windows::Forms::Button^ Asistencia;
	protected:


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ AtrasLlamarMozo;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PagarCuenta = (gcnew System::Windows::Forms::Button());
			this->Asistencia = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->AtrasLlamarMozo = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(156, 169);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(477, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¿Qué acción desea realizar\?";
			// 
			// PagarCuenta
			// 
			this->PagarCuenta->Location = System::Drawing::Point(132, 284);
			this->PagarCuenta->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->PagarCuenta->Name = L"PagarCuenta";
			this->PagarCuenta->Size = System::Drawing::Size(200, 65);
			this->PagarCuenta->TabIndex = 1;
			this->PagarCuenta->Text = L"PAGAR CUENTA";
			this->PagarCuenta->UseVisualStyleBackColor = true;
			this->PagarCuenta->Click += gcnew System::EventHandler(this, &frmComensalSolicitarAtencion::button1_Click);
			// 
			// Asistencia
			// 
			this->Asistencia->Location = System::Drawing::Point(483, 284);
			this->Asistencia->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Asistencia->Name = L"Asistencia";
			this->Asistencia->Size = System::Drawing::Size(200, 65);
			this->Asistencia->TabIndex = 2;
			this->Asistencia->Text = L"ASISTENCIA";
			this->Asistencia->UseVisualStyleBackColor = true;
			this->Asistencia->Click += gcnew System::EventHandler(this, &frmComensalSolicitarAtencion::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->AtrasLlamarMozo);
			this->groupBox1->Controls->Add(this->Asistencia);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->PagarCuenta);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(168, 84);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(860, 471);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ACCIÓN";
			// 
			// AtrasLlamarMozo
			// 
			this->AtrasLlamarMozo->Location = System::Drawing::Point(8, 423);
			this->AtrasLlamarMozo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AtrasLlamarMozo->Name = L"AtrasLlamarMozo";
			this->AtrasLlamarMozo->Size = System::Drawing::Size(144, 41);
			this->AtrasLlamarMozo->TabIndex = 3;
			this->AtrasLlamarMozo->Text = L"Atrás";
			this->AtrasLlamarMozo->UseVisualStyleBackColor = true;
			this->AtrasLlamarMozo->Click += gcnew System::EventHandler(this, &frmComensalSolicitarAtencion::AtrasLlamarMozo_Click);
			// 
			// frmComensalSolicitarAtencion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1193, 761);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmComensalSolicitarAtencion";
			this->Text = L"frmComensalSolicitarAtencion";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmComensalGenerarPedido^ cuenta = gcnew frmComensalGenerarPedido();
		cuenta->FormatoCuenta();
		this->Close();
		cuenta->ShowDialog();
		


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmComensalAsistenciaSolicitada^ venta_emergente = gcnew frmComensalAsistenciaSolicitada();
		venta_emergente->ShowDialog();
		this->Close();

	}
	private: System::Void AtrasLlamarMozo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	};
}
