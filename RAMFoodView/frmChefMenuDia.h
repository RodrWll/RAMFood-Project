#pragma once

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
	/// Resumen de frmChefMenuDia
	/// </summary>
	public ref class frmChefMenuDia : public System::Windows::Forms::Form
	{
	public:
		frmChefMenuDia(void)
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
		~frmChefMenuDia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ Salir;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Salir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(105, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(590, 354);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 160;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Salir
			// 
			this->Salir->Location = System::Drawing::Point(318, 403);
			this->Salir->Name = L"Salir";
			this->Salir->Size = System::Drawing::Size(190, 52);
			this->Salir->TabIndex = 1;
			this->Salir->Text = L"Salir";
			this->Salir->UseVisualStyleBackColor = true;
			this->Salir->Click += gcnew System::EventHandler(this, &frmChefMenuDia::Salir_Click);
			// 
			// frmChefMenuDia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 467);
			this->Controls->Add(this->Salir);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmChefMenuDia";
			this->Text = L"frmChefMenuDia";
			this->Load += gcnew System::EventHandler(this, &frmChefMenuDia::frmChefMenuDia_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: void mostrarGrillaBebidas(List<Bebida^>^ listaBebidas, List<Plato^>^ listaPlatos) {
	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/

	for (int i = 0; i < listaBebidas->Count; i++) {
		Bebida^ objBebida = listaBebidas[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objBebida->GetId());
		filaGrilla[1] = objBebida->GetNombre();
		filaGrilla[2] = Convert::ToString(objBebida->GetPrecio());
		filaGrilla[3] = "Bebida";
		this->dataGridView1->Rows->Add(filaGrilla);
	}
	for (int i = 0; i < listaPlatos->Count; i++) {
		Plato^ objPlato = listaPlatos[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objPlato->GetId());
		filaGrilla[1] = objPlato->GetNombre();
		filaGrilla[2] = Convert::ToString(objPlato->GetPrecio());
		filaGrilla[3] = "Plato";
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}
private: System::Void frmChefMenuDia_Load(System::Object^ sender, System::EventArgs^ e) {

	PedidoController^ objPedidoController = gcnew PedidoController();
	List<Bebida^>^ listaBebidas = objPedidoController->obtenerInfoBebida();
	List<Plato^>^ listaPlatos = objPedidoController->obtenerInfoPlato();
	mostrarGrillaBebidas(listaBebidas, listaPlatos);

}
};
}
