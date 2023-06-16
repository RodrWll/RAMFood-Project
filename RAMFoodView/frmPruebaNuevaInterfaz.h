#pragma once

namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace RAMFoodModel;
	using namespace RAMFoodController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmPruebaNuevaInterfaz
	/// </summary>
	public ref class frmPruebaNuevaInterfaz : public System::Windows::Forms::Form
	{
	public:
		frmPruebaNuevaInterfaz(void)
		{
			InitializeComponent();
			InicializarTabla();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPruebaNuevaInterfaz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnaNombre;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Columnamenos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCantidad;
	private: System::Windows::Forms::DataGridViewButtonColumn^ ColumnaMas;
	private: System::Windows::Forms::DataGridViewImageColumn^ ColumnaImagen;






































































	protected:






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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPruebaNuevaInterfaz::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->columnaNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Columnamenos = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->ColumnaCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaMas = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->ColumnaImagen = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->CausesValidation = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->columnaNombre,
					this->Columnamenos, this->ColumnaCantidad, this->ColumnaMas, this->ColumnaImagen
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 24);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->Padding = System::Windows::Forms::Padding(10, 5, 5, 0);
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->Size = System::Drawing::Size(408, 360);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPruebaNuevaInterfaz::dataGridView1_CellContentClick);
			// 
			// columnaNombre
			// 
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(0, 15, 0, 0);
			this->columnaNombre->DefaultCellStyle = dataGridViewCellStyle1;
			this->columnaNombre->Frozen = true;
			this->columnaNombre->HeaderText = L"nombre";
			this->columnaNombre->Name = L"columnaNombre";
			this->columnaNombre->Width = 150;
			// 
			// Columnamenos
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->Columnamenos->DefaultCellStyle = dataGridViewCellStyle2;
			this->Columnamenos->FillWeight = 20;
			this->Columnamenos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Columnamenos->HeaderText = L"menos";
			this->Columnamenos->Name = L"Columnamenos";
			this->Columnamenos->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Columnamenos->Text = L"-";
			this->Columnamenos->Width = 20;
			// 
			// ColumnaCantidad
			// 
			dataGridViewCellStyle3->Padding = System::Windows::Forms::Padding(0, 15, 0, 0);
			this->ColumnaCantidad->DefaultCellStyle = dataGridViewCellStyle3;
			this->ColumnaCantidad->HeaderText = L"cantidad";
			this->ColumnaCantidad->Name = L"ColumnaCantidad";
			this->ColumnaCantidad->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// ColumnaMas
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->ColumnaMas->DefaultCellStyle = dataGridViewCellStyle4;
			this->ColumnaMas->FillWeight = 20;
			this->ColumnaMas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ColumnaMas->HeaderText = L"mas";
			this->ColumnaMas->Name = L"ColumnaMas";
			this->ColumnaMas->Text = L"+";
			this->ColumnaMas->Width = 20;
			// 
			// ColumnaImagen
			// 
			this->ColumnaImagen->HeaderText = L"imagen";
			this->ColumnaImagen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ColumnaImagen.Image")));
			this->ColumnaImagen->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->ColumnaImagen->Name = L"ColumnaImagen";
			// 
			// frmPruebaNuevaInterfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 434);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmPruebaNuevaInterfaz";
			this->Text = L"frmPruebaNuevaInterfaz";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void InicializarTabla() {
		/*leer datos*/
			PedidoController^ objPedidoController = gcnew PedidoController();
			

			List<Bebida^>^ listaBebidas = objPedidoController->obtenerInfoBebida();
			List<Plato^>^ listaPlato = objPedidoController->obtenerInfoPlato();
			/*limpiar el data gridview*/
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaPlato->Count;i++) {
				Plato^ pI = listaPlato[i];
				/*añadiendo contenido a columna uno por uno*/
				array<String^>^ FilaGrilla = gcnew array<String^>(4);
				FilaGrilla[0] = pI->GetNombre();
				FilaGrilla[1] = "-";
				FilaGrilla[2] = "0";
				FilaGrilla[3] = "+";
				String^ direccion = "Recursos/productosImgenes/" + Convert::ToString(pI->GetId())+".jpg";
				this->dataGridView1->Rows->Add(FilaGrilla);
				//AgregandoImagen
				this->dataGridView1->Rows[i]->Cells[4]->Value = Image::FromFile(direccion); ;			
					/*
				String^ nombre = pI->GetNombre();
				String^ cantidad = "0";
				this->dataGridView1->Rows[i]->Cells[0]->Value = nombre;
				this->dataGridView1->Rows[i]->Cells[0]->Value = cantidad;
				*/
			}
			/*
			for (int i = 0; i < Lista2->Count; i++) {
					Bebida^ p_i = Lista2[i];
					array<String^>^ FilaGrilla = gcnew array<String^>(3);
					FilaGrilla[0] = p_i->GetNombre();
					FilaGrilla[1] = Convert::ToString(p_i->GetCantidadPedida());
					FilaGrilla[2] = Convert::ToString(p_i->GetPrecio());
					this->dataGridView1->Rows->Add(FilaGrilla);
				};
			
			*/
		};


private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
