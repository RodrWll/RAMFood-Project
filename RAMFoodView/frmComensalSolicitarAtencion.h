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
			//TODO: agregar código de constructor aquí
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
			//TODO: agregar código de constructor aquí
			//
		}
		frmComensalSolicitarAtencion(PedidoMesa^ objPedidoMesa, int numeroMesa, int pedidovacio, OrdenMesa^ objOrdenMesa)
		{
			this->numMesa = numeroMesa;
			this->frmObjPedidoMesa = gcnew PedidoMesa();
			this->frmObjPedidoMesa = objPedidoMesa;
			this->pedidovacio = pedidovacio;
			this->frmOrdenMesa = gcnew OrdenMesa();
			this->frmOrdenMesa = objOrdenMesa;
			InitializeComponent();

			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmComensalSolicitarAtencion(PedidoMesa^ objPedidoMesa, int numeroMesa, int pedidovacio, OrdenMesa^ objOrdenMesa, int^ pedidoEnviado)
		{
			this->numMesa = numeroMesa;
			this->frmObjPedidoMesa = gcnew PedidoMesa();
			this->frmObjPedidoMesa = objPedidoMesa;
			this->pedidovacio = pedidovacio;
			this->frmOrdenMesa = gcnew OrdenMesa();
			this->frmOrdenMesa = objOrdenMesa;
			this->pedidoEnviado = pedidoEnviado;
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
	private: int numMesa;
	private: int pedidovacio;
	private: PedidoMesa^ frmObjPedidoMesa;
	private: OrdenMesa^ frmOrdenMesa;
	private: int^ pedidoEnviado;
	protected:


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ AtrasLlamarMozo;
	private: System::Windows::Forms::GroupBox^ groupBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmComensalSolicitarAtencion::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PagarCuenta = (gcnew System::Windows::Forms::Button());
			this->Asistencia = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->AtrasLlamarMozo = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(116, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(385, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¿Qué acción desea realizar\?";
			// 
			// PagarCuenta
			// 
			this->PagarCuenta->BackColor = System::Drawing::Color::White;
			this->PagarCuenta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PagarCuenta->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PagarCuenta->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->PagarCuenta->Location = System::Drawing::Point(111, 256);
			this->PagarCuenta->Name = L"PagarCuenta";
			this->PagarCuenta->Size = System::Drawing::Size(150, 42);
			this->PagarCuenta->TabIndex = 1;
			this->PagarCuenta->Text = L"PAGAR CUENTA";
			this->PagarCuenta->UseVisualStyleBackColor = false;
			this->PagarCuenta->Click += gcnew System::EventHandler(this, &frmComensalSolicitarAtencion::button1_Click);
			// 
			// Asistencia
			// 
			this->Asistencia->BackColor = System::Drawing::Color::White;
			this->Asistencia->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Asistencia->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Asistencia->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Asistencia->Location = System::Drawing::Point(351, 256);
			this->Asistencia->Name = L"Asistencia";
			this->Asistencia->Size = System::Drawing::Size(150, 42);
			this->Asistencia->TabIndex = 2;
			this->Asistencia->Text = L"ASISTENCIA";
			this->Asistencia->UseVisualStyleBackColor = false;
			this->Asistencia->Click += gcnew System::EventHandler(this, &frmComensalSolicitarAtencion::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->groupBox1->Controls->Add(this->AtrasLlamarMozo);
			this->groupBox1->Controls->Add(this->Asistencia);
			this->groupBox1->Controls->Add(this->PagarCuenta);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(645, 383);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ACCIÓN";
			// 
			// AtrasLlamarMozo
			// 
			this->AtrasLlamarMozo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AtrasLlamarMozo->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AtrasLlamarMozo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->AtrasLlamarMozo->Location = System::Drawing::Point(6, 344);
			this->AtrasLlamarMozo->Name = L"AtrasLlamarMozo";
			this->AtrasLlamarMozo->Size = System::Drawing::Size(108, 33);
			this->AtrasLlamarMozo->TabIndex = 3;
			this->AtrasLlamarMozo->Text = L"Atrás";
			this->AtrasLlamarMozo->UseVisualStyleBackColor = true;
			this->AtrasLlamarMozo->Click += gcnew System::EventHandler(this, &frmComensalSolicitarAtencion::AtrasLlamarMozo_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->groupBox2->Location = System::Drawing::Point(12, 137);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(645, 100);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			// 
			// frmComensalSolicitarAtencion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 428);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmComensalSolicitarAtencion";
			this->Text = L"frmComensalSolicitarAtencion";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show("¿Está seguro?", "Confirmar", MessageBoxButtons::YesNo);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			//array<String^>^ lineasLeidas = File::ReadAllLines("Recursos/Comensal/pedidototal/pedidomesaAsistente.txt");

			if (this->frmOrdenMesa->GetPedidoEnviado()==1) {
				PedidoController^ objPedidoController = gcnew PedidoController();
				objPedidoController->notificarAsistente(this->frmObjPedidoMesa->getMesa(),2);
				frmComensalGenerarPedido^ cuenta = gcnew frmComensalGenerarPedido(this->frmObjPedidoMesa, this->numMesa, 1, this->frmOrdenMesa);
				cuenta->FormatoCuenta();
				cuenta->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("El registro de pedido está vacío");
				
			}

			
		}

	
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		PedidoController^ objPedidoController = gcnew PedidoController();
		
		frmComensalAsistenciaSolicitada^ venta_emergente = gcnew frmComensalAsistenciaSolicitada();
		objPedidoController->notificarAsistente(this->frmObjPedidoMesa->getMesa(),1);
		venta_emergente->ShowDialog();
		this->Close();

	}
	private: System::Void AtrasLlamarMozo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	};
}
