#pragma once

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
	using namespace System::IO;
	using namespace System::Runtime::Serialization;

	/// <summary>
	/// Summary for frmGerenteBuscarProductosMenu
	/// </summary>
	public ref class frmGerenteBuscarProductosMenu : public System::Windows::Forms::Form
	{
	public:
		frmGerenteBuscarProductosMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			productoController^ objController;
			List<Producto^>^ listaPlatoBebidasMostrar = objController->listarProductos();
			mostrarGrilla(listaPlatoBebidasMostrar);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmGerenteBuscarProductosMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dgvProductosEncontrados;






	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ lbNombreProducto;

	private: System::Windows::Forms::TextBox^ lbIdProducto;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGerenteBuscarProductosMenu::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgvProductosEncontrados = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbNombreProducto = (gcnew System::Windows::Forms::TextBox());
			this->lbIdProducto = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductosEncontrados))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button3->Location = System::Drawing::Point(48, 136);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 59);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button2->Location = System::Drawing::Point(13, 515);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 63);
			this->button2->TabIndex = 18;
			this->button2->Text = L"REGRESAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button1->Location = System::Drawing::Point(149, 136);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 59);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button1_Click);
			// 
			// dgvProductosEncontrados
			// 
			this->dgvProductosEncontrados->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvProductosEncontrados->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->dgvProductosEncontrados->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvProductosEncontrados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProductosEncontrados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column6, this->Column7, this->Column8
			});
			this->dgvProductosEncontrados->GridColor = System::Drawing::SystemColors::Highlight;
			this->dgvProductosEncontrados->Location = System::Drawing::Point(256, 30);
			this->dgvProductosEncontrados->Margin = System::Windows::Forms::Padding(4);
			this->dgvProductosEncontrados->MultiSelect = false;
			this->dgvProductosEncontrados->Name = L"dgvProductosEncontrados";
			this->dgvProductosEncontrados->RowHeadersVisible = false;
			this->dgvProductosEncontrados->RowHeadersWidth = 51;
			this->dgvProductosEncontrados->RowTemplate->Height = 24;
			this->dgvProductosEncontrados->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvProductosEncontrados->Size = System::Drawing::Size(353, 471);
			this->dgvProductosEncontrados->TabIndex = 16;
			this->dgvProductosEncontrados->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmGerenteBuscarProductosMenu::dgvProductosEncontrados_CellClick);
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Id";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 49;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"Nombre";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 90;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"Precio";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 77;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column8->HeaderText = L"Tipo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 65;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->label7->Location = System::Drawing::Point(14, 84);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Nombre";
			// 
			// lbNombreProducto
			// 
			this->lbNombreProducto->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNombreProducto->Location = System::Drawing::Point(202, 84);
			this->lbNombreProducto->Margin = System::Windows::Forms::Padding(4);
			this->lbNombreProducto->Name = L"lbNombreProducto";
			this->lbNombreProducto->Size = System::Drawing::Size(205, 28);
			this->lbNombreProducto->TabIndex = 14;
			// 
			// lbIdProducto
			// 
			this->lbIdProducto->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbIdProducto->Location = System::Drawing::Point(202, 30);
			this->lbIdProducto->Margin = System::Windows::Forms::Padding(4);
			this->lbIdProducto->Name = L"lbIdProducto";
			this->lbIdProducto->Size = System::Drawing::Size(205, 28);
			this->lbIdProducto->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->label6->Location = System::Drawing::Point(14, 30);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Id Producto";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->lbNombreProducto);
			this->groupBox1->Controls->Add(this->lbIdProducto);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->groupBox1->Location = System::Drawing::Point(15, 34);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(452, 433);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parámetros de búsqueda:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(102, 218);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(235, 144);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->dgvProductosEncontrados);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->groupBox2->Location = System::Drawing::Point(509, 34);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(685, 543);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Productos encontrados:";
			// 
			// frmGerenteBuscarProductosMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->ClientSize = System::Drawing::Size(1228, 591);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmGerenteBuscarProductosMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Buscar productos para el menú";
			this->Load += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::frmGerenteGestionarProductos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductosEncontrados))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void actualizar() {
		productoController^ objController = gcnew productoController();
		List<Producto^>^ listaPlatosBebidasMenu = objController->listarProductos();
		mostrarGrilla(listaPlatosBebidasMenu);
	}
	private: System::Void frmGerenteGestionarProductos_Load(System::Object^ sender, System::EventArgs^ e) {
		actualizar();
	}
	private: void mostrarGrilla(List<Producto^>^ listaPlatosBebidasMenu) {
		this->dgvProductosEncontrados->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPlatosBebidasMenu->Count; i++) {
			Producto^ objPlatoBebidaMenu = listaPlatosBebidasMenu[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(objPlatoBebidaMenu->GetId());
			filaGrilla[1] = objPlatoBebidaMenu->GetNombre();
			filaGrilla[2] = Convert::ToString(objPlatoBebidaMenu->GetPrecio());
			if (objPlatoBebidaMenu->GetTipo() == 1) {
				filaGrilla[3] = "Bebida";
			}
			else if (objPlatoBebidaMenu->GetTipo() == 2)
			{
				filaGrilla[3] = "Comida";
			}
			this->dgvProductosEncontrados->Rows->Add(filaGrilla);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		productoController^ objController;
		if (lbIdProducto->Text->Trim() != "") {
			//Búsqueda de Producto por el código ingresado por el usuario
			
			Producto^ ojbPlatoBebidaMenu = objController->buscarProductoxId(Convert::ToInt32(lbIdProducto->Text->Trim()));
			//Se borran los datos del grid.
			this->dgvProductosEncontrados->Rows->Clear();
			this->dgvProductosEncontrados->Rows->Add(gcnew array<String^> {
				"" + Convert::ToString(ojbPlatoBebidaMenu->GetId()),
					ojbPlatoBebidaMenu->GetNombre(),
					Convert::ToString(ojbPlatoBebidaMenu->GetPrecio()),
					Convert::ToString(ojbPlatoBebidaMenu->GetTipo())
			});
		}
		else {
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			List<Producto^>^ productList = objController->buscarProductoxNombre(lbNombreProducto->Text->Trim());
			//Se borran los datos del grid.
			this->dgvProductosEncontrados->Rows->Clear();
			mostrarGrilla(productList);
		}
	}
		   //Button agregar Producto al menu diario
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dgvProductosEncontrados->SelectedRows[0]->Index;
		if (this->dgvProductosEncontrados->Rows[filaSeleccionada]->Cells[0]->Value) {
			int IdProducto = Convert::ToInt32(this->dgvProductosEncontrados->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			productoController^ objController = gcnew productoController();
			int yaExiste = objController->existeProductoMenuxId(IdProducto);
			if(!yaExiste){
				Producto^ objPlatoBebidaMenuDiario = objController->buscarProductoxId(IdProducto);
				objController->addProductToDailyMenu(objPlatoBebidaMenuDiario);
				MessageBox::Show("Producto " + objPlatoBebidaMenuDiario->GetNombre() + " agregado");
			}
			else {
				MessageBox::Show("El Producto ya existe en el menú");
			}
		}
		else {
			MessageBox::Show("Seleccione una fila");
		}

		/*frmGerente^ objFrmGerente = gcnew frmGerente();
		List<PlatoBebidaMenu^>^ productList = objController->QueryAllProductFromDailyMenu();
		objFrmGerente->mostrarGrilla_GestionarMenu();*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void dgvProductosEncontrados_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0 && e->RowIndex < dgvProductosEncontrados->Rows->Count)
	{
		// Acceder a la fila seleccionada
		DataGridViewRow^ selectedRow = dgvProductosEncontrados->Rows[e->RowIndex];

		// Realizar operaciones con la fila seleccionada
		// ...
		int filaSeleccionada = this->dgvProductosEncontrados->SelectedRows[0]->Index;
		if (!selectedRow->IsNewRow) {
			int codigoActualizar = Convert::ToInt32(this->dgvProductosEncontrados->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			productoController^ objController = gcnew productoController();
			Producto^ objPlatoBebidaMenu = objController->buscarProductoxId(codigoActualizar);
			String^ nombreArchivo = objPlatoBebidaMenu->GetId().ToString() + ".jpg";
			String^ carpetaDestino = "Recursos\\productosImgenes";
			String^ rutaImagen = Path::Combine(carpetaDestino, nombreArchivo);
			if (System::IO::File::Exists(rutaImagen))
			{
				// Cargar la imagen en el PictureBox
				pictureBox1->ImageLocation = rutaImagen;
				this->pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
			}
			else
			{
				// Mostrar un mensaje de error o realizar otras acciones necesarias si el archivo no existe
				MessageBox::Show("La imagen no existe.");
			}
		}
	}
}
};
}
