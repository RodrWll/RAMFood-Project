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
			BebidaPlatosController^ objController;
			List<PlatoBebidaMenu^>^ listaPlatoBebidasMostrar = objController->buscarTodas();
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
	private: System::Windows::Forms::GroupBox^ groupBox3;






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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductosEncontrados))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(8, 138);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 39);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::IndianRed;
			this->button2->Location = System::Drawing::Point(15, 489);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 71);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(102, 138);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 39);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button1_Click);
			// 
			// dgvProductosEncontrados
			// 
			this->dgvProductosEncontrados->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvProductosEncontrados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProductosEncontrados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column6, this->Column7, this->Column8
			});
			this->dgvProductosEncontrados->GridColor = System::Drawing::SystemColors::Highlight;
			this->dgvProductosEncontrados->Location = System::Drawing::Point(172, 30);
			this->dgvProductosEncontrados->Margin = System::Windows::Forms::Padding(4);
			this->dgvProductosEncontrados->MultiSelect = false;
			this->dgvProductosEncontrados->Name = L"dgvProductosEncontrados";
			this->dgvProductosEncontrados->RowHeadersWidth = 51;
			this->dgvProductosEncontrados->RowTemplate->Height = 24;
			this->dgvProductosEncontrados->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvProductosEncontrados->Size = System::Drawing::Size(440, 471);
			this->dgvProductosEncontrados->TabIndex = 16;
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
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 84);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Nombre";
			// 
			// lbNombreProducto
			// 
			this->lbNombreProducto->Location = System::Drawing::Point(202, 84);
			this->lbNombreProducto->Margin = System::Windows::Forms::Padding(4);
			this->lbNombreProducto->Name = L"lbNombreProducto";
			this->lbNombreProducto->Size = System::Drawing::Size(205, 26);
			this->lbNombreProducto->TabIndex = 14;
			// 
			// lbIdProducto
			// 
			this->lbIdProducto->Location = System::Drawing::Point(202, 30);
			this->lbIdProducto->Margin = System::Windows::Forms::Padding(4);
			this->lbIdProducto->Name = L"lbIdProducto";
			this->lbIdProducto->Size = System::Drawing::Size(205, 26);
			this->lbIdProducto->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 30);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Id Producto";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->lbNombreProducto);
			this->groupBox1->Controls->Add(this->lbIdProducto);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(15, 34);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(452, 211);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parámetros de búsqueda:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->dgvProductosEncontrados);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(509, 34);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(685, 543);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Productos encontrados:";
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(117, 271);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(208, 165);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Imagen del producto:";
			// 
			// frmGerenteBuscarProductosMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1228, 591);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmGerenteBuscarProductosMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Gestionar Productos para el menú";
			this->Load += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::frmGerenteGestionarProductos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductosEncontrados))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void actualizar() {
		productoController^ objController = gcnew productoController();
		List<PlatoBebidaMenu^>^ listaPlatosBebidasMenu = objController->listarProductos();
		mostrarGrilla(listaPlatosBebidasMenu);
	}
	private: System::Void frmGerenteGestionarProductos_Load(System::Object^ sender, System::EventArgs^ e) {
		actualizar();
	}
	private: void mostrarGrilla(List<PlatoBebidaMenu^>^ listaPlatosBebidasMenu) {
		this->dgvProductosEncontrados->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPlatosBebidasMenu->Count; i++) {
			PlatoBebidaMenu^ objPlatoBebidaMenu = listaPlatosBebidasMenu[i];
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
			//Búsqueda de producto por el código ingresado por el usuario
			
			PlatoBebidaMenu^ ojbPlatoBebidaMenu = objController->buscarProductoxId(Convert::ToInt32(lbIdProducto->Text->Trim()));
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
			List<PlatoBebidaMenu^>^ productList = objController->buscarProductoxNombre(lbNombreProducto->Text->Trim());
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
				PlatoBebidaMenu^ objPlatoBebidaMenuDiario = objController->buscarProductoxId(IdProducto);
				objController->addProductToDailyMenu(objPlatoBebidaMenuDiario);
				MessageBox::Show("Producto " + objPlatoBebidaMenuDiario->GetNombre() + " agregado");
			}
			else {
				MessageBox::Show("El producto ya existe en el menú");
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
};
}
