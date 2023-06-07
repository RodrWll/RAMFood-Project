#pragma once
#include "frmComensalAsistenciaSolicitada.h"
#include "frmComensalGenerarPedido.h"
#include "frmComensalPedidoVacio.h"
namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		frmComensalSolicitarAtencion(PedidoMesa^ objPedidoMesa, int numeroMesa, int pedidovacio)
		{
			this->numMesa = numeroMesa;
			this->frmObjPedidoMesa = gcnew PedidoMesa();
			this->frmObjPedidoMesa = objPedidoMesa;
			this->pedidovacio=pedidovacio;
			InitializeComponent();

			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: int numMesa;
	private: int pedidovacio;
	private: PedidoMesa^ frmObjPedidoMesa;
	protected:


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ AtrasLlamarMozo;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmComensalSolicitarAtencion::typeid));
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
			this->label1->Text = L"�Qu� acci�n desea realizar\?";
			// 
			// PagarCuenta
			// 
			this->PagarCuenta->Location = System::Drawing::Point(132, 284);
			this->PagarCuenta->Margin = System::Windows::Forms::Padding(4);
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
			this->Asistencia->Margin = System::Windows::Forms::Padding(4);
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
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(860, 471);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ACCI�N";
			// 
			// AtrasLlamarMozo
			// 
			this->AtrasLlamarMozo->Location = System::Drawing::Point(8, 423);
			this->AtrasLlamarMozo->Margin = System::Windows::Forms::Padding(4);
			this->AtrasLlamarMozo->Name = L"AtrasLlamarMozo";
			this->AtrasLlamarMozo->Size = System::Drawing::Size(144, 41);
			this->AtrasLlamarMozo->TabIndex = 3;
			this->AtrasLlamarMozo->Text = L"Atr�s";
			this->AtrasLlamarMozo->UseVisualStyleBackColor = true;
			this->AtrasLlamarMozo->Click += gcnew System::EventHandler(this, &frmComensalSolicitarAtencion::AtrasLlamarMozo_Click);
			// 
			// frmComensalSolicitarAtencion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1193, 761);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmComensalSolicitarAtencion";
			this->Text = L"frmComensalSolicitarAtencion";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ lineasLeidas = File::ReadAllLines("Recursos/Comensal/pedidototal/pedidomesaAsistente.txt");

		if (!(lineasLeidas[0]=="vacio")) {
			frmComensalGenerarPedido^ cuenta = gcnew frmComensalGenerarPedido(this->frmObjPedidoMesa, this->numMesa, 1);
			cuenta->FormatoCuenta();
			
			cuenta->ShowDialog();
			this->Close();
		}
		else {

			frmComensalPedidoVacio^ ventana = gcnew frmComensalPedidoVacio();
			ventana->ShowDialog();
		}

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
