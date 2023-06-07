#pragma once
#include "frmChefConfirmacionDeOrdenTerminada.h"
namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RAMFoodController;
	using namespace RAMFoodModel;

	/// <summary>
	/// Summary for frmChef
	/// </summary>
	public ref class frmChef : public System::Windows::Forms::Form
	{
	public:
		frmChef(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmChef()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;






	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;




















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmChef::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column1, this->Column3, this->Column2
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(12, 138);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(555, 402);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Id";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 40;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"PLATO";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 225;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"CANTIDAD";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ESTADO";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1264, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 74);
			this->button1->TabIndex = 1;
			this->button1->Text = L"TOMAR ORDEN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmChef::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1264, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 79);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ORDEN TERMINADA";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmChef::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column7,
					this->dataGridViewTextBoxColumn1, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn2
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->Location = System::Drawing::Point(660, 138);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(553, 402);
			this->dataGridView2->TabIndex = 6;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Id";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 40;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"BEBIDA";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 225;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"CANTIDAD";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"ESTADO";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(251, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Lista de Platos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(884, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Lista de Bebida";
			this->label4->Click += gcnew System::EventHandler(this, &frmChef::label4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Azure;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(544, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 79);
			this->button3->TabIndex = 9;
			this->button3->Text = L"ACTUALIZAR PEDIDOS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmChef::button3_Click);
			// 
			// frmChef
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1423, 637);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmChef";
			this->Text = L"Chef";
			this->Load += gcnew System::EventHandler(this, &frmChef::frmChef_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: void mostrarGrillaPlatos(List<ProductoPedido^>^ listaPlatos) {
	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaPlatos->Count; i++) {
		ProductoPedido^ objProductoPedido = listaPlatos[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objProductoPedido->GetId());
		filaGrilla[1] = objProductoPedido->GetObjProducto()->GetNombre();
		filaGrilla[2] = Convert::ToString(objProductoPedido->GetCantidadPedida());
		filaGrilla[3] = Convert::ToString(objProductoPedido->GetEstado());
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}
private: void mostrarGrillaBebidas(List<ProductoPedido^>^ listaBebidas) {
	this->dataGridView2->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaBebidas->Count; i++) {
		ProductoPedido^ objProductoPedido = listaBebidas[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objProductoPedido->GetId());
		filaGrilla[1] = objProductoPedido->GetObjProducto()->GetNombre();
		filaGrilla[2] = Convert::ToString(objProductoPedido->GetCantidadPedida());
		filaGrilla[3] = Convert::ToString(objProductoPedido->GetEstado());
		this->dataGridView2->Rows->Add(filaGrilla);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	OrdenController^ objOrdenController = gcnew OrdenController();
	List<ProductoPedido^>^ listaPlatosPedidos = gcnew List<ProductoPedido^>();
	List<ProductoPedido^>^ listaBebidasPedidos = gcnew List<ProductoPedido^>();

	//Tipo 1: bebida
	//TIpo 2: plato
	String^ chef = "chef";
	listaBebidasPedidos = objOrdenController->buscarListaBebidasPedidos("NewComensal//pedidoMesaGeneral.txt", chef);
	listaPlatosPedidos = objOrdenController->buscarListaPlatosPedidos("NewComensal//pedidoMesaGeneral.txt", chef);

	mostrarGrillaPlatos(listaPlatosPedidos);
	mostrarGrillaBebidas(listaBebidasPedidos);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OrdenController^ objOrdenController = gcnew OrdenController();
	List<String^>^ listaIdsPlatosPedidos = gcnew List<String^>();
	List<String^>^ listaIdsBebidasPedidos = gcnew List<String^>();
	listaIdsPlatosPedidos = objOrdenController->buscarListaIdsPlatos("NewComensal//pedidoMesaGeneral.txt");
	listaIdsBebidasPedidos = objOrdenController->buscarListaIdsBebidas("NewComensal//pedidoMesaGeneral.txt");
	String^ nombreSeleccionado;
	int idProductoPedido;
	int idPedido;

	if ((this->dataGridView1->SelectedRows->Count) > 0) {
		String^ filaSeleccionada = Convert::ToString(this->dataGridView1->SelectedRows[0]->Index);
		idProductoPedido = Convert::ToInt32(this->dataGridView1->Rows[Convert::ToInt32(filaSeleccionada)]->Cells[0]->Value->ToString());
		idPedido = Convert::ToInt32(listaIdsPlatosPedidos[Convert::ToInt32(filaSeleccionada)]);
	}
	else if ((this->dataGridView2->SelectedRows->Count) > 0) {
		String^ filaSeleccionada = Convert::ToString(this->dataGridView2->SelectedRows[0]->Index);
		idProductoPedido = Convert::ToInt32(this->dataGridView2->Rows[Convert::ToInt32(filaSeleccionada)]->Cells[0]->Value->ToString());
		idPedido = Convert::ToInt32(listaIdsBebidasPedidos[Convert::ToInt32(filaSeleccionada)]);
	}
	else {
		MessageBox::Show("Debe seleccionar un plato o bebida");
		return;
	}
	ProductoPedido^ objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedido, idProductoPedido);
	if ((objProductoPedido->GetEstado()) == 0) {
		objOrdenController->actualizarEstado(idPedido, idProductoPedido, 1);
		productoController^ objProductoController = gcnew productoController();
		MessageBox::Show("Usted ha seleccionado el plato " + objProductoController->buscarProductoxId(objOrdenController->buscarObjProducto(idPedido, idProductoPedido)->GetId())->GetNombre());
		this->button1->Enabled = false;
	}
	else {
		MessageBox::Show("Este plato ya esta siendo preparado");
	}


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	OrdenController^ objOrdenController = gcnew OrdenController();
	List<String^>^ listaIdsPlatosPedidos = gcnew List<String^>();
	List<String^>^ listaIdsBebidasPedidos = gcnew List<String^>();
	listaIdsPlatosPedidos = objOrdenController->buscarListaIdsPlatos("NewComensal//pedidoMesaGeneral.txt");
	listaIdsBebidasPedidos = objOrdenController->buscarListaIdsBebidas("NewComensal//pedidoMesaGeneral.txt");
	int idProductoPedido;
	int idPedido;
	if ((this->dataGridView1->SelectedRows->Count) > 0) {
		String^ filaSeleccionada = Convert::ToString(this->dataGridView1->SelectedRows[0]->Index);
		idProductoPedido = Convert::ToInt32(this->dataGridView1->Rows[Convert::ToInt32(filaSeleccionada)]->Cells[0]->Value->ToString());
		idPedido = Convert::ToInt32(listaIdsPlatosPedidos[Convert::ToInt32(filaSeleccionada)]);
	}
	else if ((this->dataGridView2->SelectedRows->Count) > 0) {
		String^ filaSeleccionada = Convert::ToString(this->dataGridView2->SelectedRows[0]->Index);
		idProductoPedido = Convert::ToInt32(this->dataGridView2->Rows[Convert::ToInt32(filaSeleccionada)]->Cells[0]->Value->ToString());
		idPedido = Convert::ToInt32(listaIdsBebidasPedidos[Convert::ToInt32(filaSeleccionada)]);
	}
	else {
		MessageBox::Show("Debe seleccionar un plato o bebida");
		return;
	}


	ProductoPedido^ objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedido, idProductoPedido);
	if ((objProductoPedido->GetEstado()) == 1) {
		objOrdenController->actualizarEstado(idPedido, idProductoPedido, 1);
		frmChefConfirmacionDeOrdenTerminada^ VentaConfirmacion = gcnew frmChefConfirmacionDeOrdenTerminada(idPedido, idProductoPedido);
		VentaConfirmacion->ShowDialog();
		objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedido, idProductoPedido);
		if (objProductoPedido->GetEstado() == 2){
			this->button1->Enabled = true;
		}
	}
	else {
		MessageBox::Show("Este plato todavia no esta siendo preparado");
	}
	List<ProductoPedido^>^ listaPlatosPedidos = gcnew List<ProductoPedido^>();
	List<ProductoPedido^>^ listaBebidasPedidos = gcnew List<ProductoPedido^>();
	//Tipo 1: bebida
	//TIpo 2: plato
	String^ chef = "chef";
	listaBebidasPedidos = objOrdenController->buscarListaBebidasPedidos("NewComensal//pedidoMesaGeneral.txt", chef);
	listaPlatosPedidos = objOrdenController->buscarListaPlatosPedidos("NewComensal//pedidoMesaGeneral.txt", chef);
	mostrarGrillaPlatos(listaPlatosPedidos);
	mostrarGrillaBebidas(listaBebidasPedidos);
}
private: System::Void frmChef_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
