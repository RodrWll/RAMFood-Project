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




	private: System::Windows::Forms::Button^ Salir;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmChefMenuDia::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Salir = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::AliceBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::AliceBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(105, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::AliceBlue;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(590, 354);
			this->dataGridView1->TabIndex = 0;
			// 
			// Salir
			// 
			this->Salir->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Salir->Location = System::Drawing::Point(318, 403);
			this->Salir->Name = L"Salir";
			this->Salir->Size = System::Drawing::Size(190, 52);
			this->Salir->TabIndex = 1;
			this->Salir->Text = L"Salir";
			this->Salir->UseVisualStyleBackColor = true;
			this->Salir->Click += gcnew System::EventHandler(this, &frmChefMenuDia::Salir_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Visible = false;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// frmChefMenuDia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(807, 467);
			this->Controls->Add(this->Salir);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmChefMenuDia";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
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
