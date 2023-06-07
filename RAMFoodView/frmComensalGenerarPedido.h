#pragma once

#include "frmComensalPedidoGenerado.h"
#include "frmComensalConfirmacionCuenta.h"

namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using namespace RAMFoodController;
	using namespace RAMFoodModel;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de frmComensalGenerarPedido
	/// </summary>
	public ref class frmComensalGenerarPedido : public System::Windows::Forms::Form
	{
	public:
		frmComensalGenerarPedido(void)
		{
			InitializeComponent();
			GenerarResumen(0);
			ActualizarCuenta();

			//
			//TODO: agregar código de constructor aquí
			//


		}
		frmComensalGenerarPedido(PedidoMesa^ objPedidoMesa, int numMesa,int tipoResumen)
		{
			InitializeComponent();
			this->numMesa = numMesa;
			this->frmObjPedidoMesa = gcnew PedidoMesa();
			this->frmObjPedidoMesa = objPedidoMesa;
			this->frmObjPedidoMesa->setMesa(numMesa);
			/*estas funciones van después de declarar los atributos del formulario*/
			GenerarResumen(tipoResumen);
			ActualizarCuenta();
			//
			//TODO: agregar código de constructor aquí
			//


		}
		frmComensalGenerarPedido(PedidoMesa^ objPedidoMesa, int numMesa, int tipoResumen, OrdenMesa^ objOrdenMesa)
		{
			InitializeComponent();
			this->numMesa = numMesa;
			this->frmObjPedidoMesa = gcnew PedidoMesa();
			this->frmObjPedidoMesa = objPedidoMesa;
			this->frmObjPedidoMesa->setMesa(numMesa);
			this->frmObjOrdenMesa = gcnew OrdenMesa();
			this->frmObjOrdenMesa->SetMesa(numMesa);

			/*estas funciones van después de declarar los atributos del formulario*/
			GenerarResumen(tipoResumen);
			ActualizarCuenta();
			//
			//TODO: agregar código de constructor aquí
			//


		}
		void FormatoCuenta() {
			
			this->groupBox1->BackColor = System::Drawing::Color::IndianRed;
			this->label1->Text = "Cuenta";
			this->button2->Visible = false;
			this->button_confirmar->Visible = true;


		};

		void ActualizarCuenta() {
			double valor_cuenta = 0;
			for (int i = 0; i < this->dataGridView1->RowCount; i++) {
				valor_cuenta += Convert::ToDouble(this->dataGridView1->Rows[i]->Cells[2]->Value);

			};
			this->cuentaDiferencial = valor_cuenta;
			this->label3->Text = "S/. " + Convert::ToString(valor_cuenta);
		};
		void GenerarResumen(int tipo) {
			/*si tipo es 0, se genera un resumen de los pedidos que solicito en ese momento
				si tipo es 1 se hará un resumen con todos los pedidos que ha hecho por la interfaz
			*/
			if (tipo == 0) {
				PedidoController^ objPedidoControllerA = gcnew PedidoController();
				List<Plato^>^ Lista1 = objPedidoControllerA->LeerPedidosPlato("Recursos//Comensal//pedidotemporal//pedido1.txt");
				List<Bebida^>^ Lista2 = objPedidoControllerA->LeerPedidosBebidas("Recursos//Comensal//pedidotemporal//pedido1.txt");
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < Lista1->Count; i++) {
					Plato^ p_i = Lista1[i];
					array<String^>^ FilaGrilla = gcnew array<String^>(3);
					FilaGrilla[0] = p_i->GetNombre();
					FilaGrilla[1] = Convert::ToString(p_i->GetCantidadPedida());
					FilaGrilla[2] = Convert::ToString(p_i->GetPrecio());
					this->dataGridView1->Rows->Add(FilaGrilla);
				};
				for (int i = 0; i < Lista2->Count; i++) {
					Bebida^ p_i = Lista2[i];
					array<String^>^ FilaGrilla = gcnew array<String^>(3);
					FilaGrilla[0] = p_i->GetNombre();
					FilaGrilla[1] = Convert::ToString(p_i->GetCantidadPedida());
					FilaGrilla[2] = Convert::ToString(p_i->GetPrecio());
					this->dataGridView1->Rows->Add(FilaGrilla);
				};

			}
			else if (tipo == 1) {
				/*codigo para la orden total*/
				this->Column3->HeaderText = L"Precio Total";
				PedidoController^ objPedidoController = gcnew PedidoController();
				List<Plato^>^ Lista1 = objPedidoController->LeerPedidosPlatoFinal("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
				List<Bebida^>^ Lista2 = objPedidoController->LeerPedidosBebidasFinal("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < Lista1->Count; i++) {
					Plato^ p_i = Lista1[i];
					array<String^>^ FilaGrilla = gcnew array<String^>(3);
					FilaGrilla[0] = p_i->GetNombre();
					FilaGrilla[1] = Convert::ToString(p_i->GetCantidadPedida());
					FilaGrilla[2] = Convert::ToString(p_i->GetPrecio() * p_i->GetCantidadPedida());
					this->dataGridView1->Rows->Add(FilaGrilla);
				};
				for (int i = 0; i < Lista2->Count; i++) {
					Bebida^ p_i = Lista2[i];
					array<String^>^ FilaGrilla = gcnew array<String^>(3);
					FilaGrilla[0] = p_i->GetNombre();
					FilaGrilla[1] = Convert::ToString(p_i->GetCantidadPedida());
					FilaGrilla[2] = Convert::ToString(p_i->GetPrecio() * p_i->GetCantidadPedida());
					this->dataGridView1->Rows->Add(FilaGrilla);
				};
			}
			else if (tipo == 2) {
				this->frmObjPedidoMesa->setReiniciarPedido(0);
				this->button_confirmar->Visible=false;
				this->button_confirmar->Enabled = false;
				this->button2->Visible=false;
				this->button2->Enabled = false;
				/*codigo para la orden total*/
				this->Column3->HeaderText = L"Precio Total";
				PedidoController^ objPedidoController = gcnew PedidoController();
				List<Plato^>^ Lista1 = objPedidoController->LeerPedidosPlatoFinal("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
				List<Bebida^>^ Lista2 = objPedidoController->LeerPedidosBebidasFinal("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < Lista1->Count; i++) {
					Plato^ p_i = Lista1[i];
					array<String^>^ FilaGrilla = gcnew array<String^>(3);
					FilaGrilla[0] = p_i->GetNombre();
					FilaGrilla[1] = Convert::ToString(p_i->GetCantidadPedida());
					FilaGrilla[2] = Convert::ToString(p_i->GetPrecio() * p_i->GetCantidadPedida());
					this->dataGridView1->Rows->Add(FilaGrilla);
				};
				for (int i = 0; i < Lista2->Count; i++) {
					Bebida^ p_i = Lista2[i];
					array<String^>^ FilaGrilla = gcnew array<String^>(3);
					FilaGrilla[0] = p_i->GetNombre();
					FilaGrilla[1] = Convert::ToString(p_i->GetCantidadPedida());
					FilaGrilla[2] = Convert::ToString(p_i->GetPrecio() * p_i->GetCantidadPedida());
					this->dataGridView1->Rows->Add(FilaGrilla);
				};
			}
			else {
				MessageBox::Show("Error, especificar el tipo de cuenta que requiere ver");
			};
		};
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmComensalGenerarPedido()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BotonAtras;

	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_confirmar;
	private: PedidoMesa^ frmObjPedidoMesa;
	private: OrdenMesa^ frmObjOrdenMesa;
	private: int numMesa;
	private: double cuentaDiferencial;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmComensalGenerarPedido::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_confirmar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BotonAtras = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->groupBox1->Controls->Add(this->button_confirmar);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->BotonAtras);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(68, 61);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(808, 483);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RESUMEN";
			// 
			// button_confirmar
			// 
			this->button_confirmar->Location = System::Drawing::Point(680, 395);
			this->button_confirmar->Name = L"button_confirmar";
			this->button_confirmar->Size = System::Drawing::Size(128, 40);
			this->button_confirmar->TabIndex = 5;
			this->button_confirmar->Text = L"Confirmar";
			this->button_confirmar->UseVisualStyleBackColor = true;
			this->button_confirmar->Visible = false;
			this->button_confirmar->Click += gcnew System::EventHandler(this, &frmComensalGenerarPedido::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(680, 440);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Enviar Pedido";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmComensalGenerarPedido::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(290, 419);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(201, 63);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"CUENTA ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(118, 23);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"S/. 0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 25);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Monto Total: ";
			// 
			// BotonAtras
			// 
			this->BotonAtras->BackColor = System::Drawing::Color::Transparent;
			this->BotonAtras->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonAtras->Location = System::Drawing::Point(0, 442);
			this->BotonAtras->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BotonAtras->Name = L"BotonAtras";
			this->BotonAtras->Size = System::Drawing::Size(92, 42);
			this->BotonAtras->TabIndex = 2;
			this->BotonAtras->Text = L"Atras";
			this->BotonAtras->UseVisualStyleBackColor = false;
			this->BotonAtras->Click += gcnew System::EventHandler(this, &frmComensalGenerarPedido::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(64, 118);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(656, 227);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmComensalGenerarPedido::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Comida y Bebida";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 300;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Cantidad";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio / Unidad";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 200;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 41);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Resumen del pedido";
			this->label1->Click += gcnew System::EventHandler(this, &frmComensalGenerarPedido::label1_Click);
			// 
			// frmComensalGenerarPedido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 609);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmComensalGenerarPedido";
			this->Text = L"frmComensalGenerarPedido";
			this->Load += gcnew System::EventHandler(this, &frmComensalGenerarPedido::frmComensalGenerarPedido_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->frmObjPedidoMesa->setReiniciarPedido(0);
		this->Close();
	}

	private: System::Void frmComensalGenerarPedido_Load(System::Object^ sender, System::EventArgs^ e) {
	}


		   /*boton enviar*/
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->frmObjOrdenMesa->SetCuenta(this->cuentaDiferencial);
		PedidoController^ objPedidoControllerB = gcnew PedidoController();
		objPedidoControllerB->escribirArchivo("Recursos//Comensal//pedidotemporal//estado_pedido", 1);
		this->frmObjPedidoMesa->setReiniciarPedido(1);
		PedidoController^ objPedidoController = gcnew PedidoController();
		objPedidoController->guardarPedido(this->frmObjOrdenMesa);
		//objPedidoController->guardarPedidoFormatoAsistente(this->numMesa);
		
		frmComensalPedidoGenerado^ ventana3 = gcnew frmComensalPedidoGenerado();
		
		ventana3->ShowDialog();
		this->Close();

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
		   /*boton confirmar*/
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		frmComensalConfirmacionCuenta^ ventana_confirmacion = gcnew frmComensalConfirmacionCuenta();
		PedidoController^ objPedidoControllerCuentaPagada = gcnew PedidoController();
		/*en la interfaz las cantidades deben volver a cero*/
		this->frmObjPedidoMesa->setReiniciarPedido(1);
		objPedidoControllerCuentaPagada->CuentaPagada(this->frmObjOrdenMesa);
		ventana_confirmacion->ShowDialog();
		this->Close();
	
		
	}
};
}