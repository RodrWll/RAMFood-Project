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
	/// Summary for frmGerenteGestionarProductos
	/// </summary>
	public ref class frmGerenteGestionarProductos : public System::Windows::Forms::Form
	{
	public:
		frmGerenteGestionarProductos(void)
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
		~frmGerenteGestionarProductos()
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


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ lbNombreProducto;

	private: System::Windows::Forms::TextBox^ lbIdProducto;

	private: System::Windows::Forms::Label^ label6;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductosEncontrados))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(334, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 33);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(527, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 33);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(152, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 33);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::button1_Click);
			// 
			// dgvProductosEncontrados
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvProductosEncontrados->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvProductosEncontrados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProductosEncontrados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column6, this->Column7, this->Column8
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvProductosEncontrados->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvProductosEncontrados->GridColor = System::Drawing::SystemColors::Highlight;
			this->dgvProductosEncontrados->Location = System::Drawing::Point(43, 227);
			this->dgvProductosEncontrados->Name = L"dgvProductosEncontrados";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvProductosEncontrados->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvProductosEncontrados->RowHeadersWidth = 51;
			this->dgvProductosEncontrados->RowTemplate->Height = 24;
			this->dgvProductosEncontrados->Size = System::Drawing::Size(706, 256);
			this->dgvProductosEncontrados->TabIndex = 16;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Id";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 70;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Nombre";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 350;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Precio";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Tipo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(149, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Nombre/Descripcion";
			// 
			// lbNombreProducto
			// 
			this->lbNombreProducto->Location = System::Drawing::Point(346, 109);
			this->lbNombreProducto->Name = L"lbNombreProducto";
			this->lbNombreProducto->Size = System::Drawing::Size(237, 22);
			this->lbNombreProducto->TabIndex = 14;
			// 
			// lbIdProducto
			// 
			this->lbIdProducto->Location = System::Drawing::Point(346, 57);
			this->lbIdProducto->Name = L"lbIdProducto";
			this->lbIdProducto->Size = System::Drawing::Size(237, 22);
			this->lbIdProducto->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(149, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Id Producto";
			// 
			// frmGerenteGestionarProductos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 528);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgvProductosEncontrados);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lbNombreProducto);
			this->Controls->Add(this->lbIdProducto);
			this->Controls->Add(this->label6);
			this->Name = L"frmGerenteGestionarProductos";
			this->Text = L"Gestionar Productos para el menú";
			this->Load += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::frmGerenteGestionarProductos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductosEncontrados))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmGerenteGestionarProductos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lbIdProducto->Text->Trim() != "") {
			//Búsqueda de producto por el código ingresado por el usuario
			BebidaPlatosController^ objController;
			PlatoBebidaMenu^ ojbPlatoBebidaMenu = objController->QueryProductById(Convert::ToInt32(lbIdProducto->Text->Trim()));
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
			BebidaPlatosController^ objController;
			List<PlatoBebidaMenu^>^ productList = objController->BuscarProductoPorNombre(lbNombreProducto->Text->Trim());
			//Se borran los datos del grid.
			this->dgvProductosEncontrados->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvProductosEncontrados->Rows->Add(gcnew array<String^> {
					"" + Convert::ToString(productList[i]->GetId()),
						productList[i]->GetNombre(),
						Convert::ToString(productList[i]->GetPrecio()),
						Convert::ToString(productList[i]->GetTipo())
				});
			}
		}
	}
		   //Button agregar Producto al menu diario
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dgvProductosEncontrados->SelectedRows[0]->Index;
		int IdProducto = Convert::ToInt32(this->dgvProductosEncontrados->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		BebidaPlatosController^ objController = gcnew BebidaPlatosController();
		PlatoBebidaMenu^ objPlatoBebidaMenuDiario = objController->QueryProductById(IdProducto);
		objController->AddProductToDailyMenu(objPlatoBebidaMenuDiario);
		/*frmGerente^ objFrmGerente = gcnew frmGerente();
		List<PlatoBebidaMenu^>^ productList = objController->QueryAllProductFromDailyMenu();
		objFrmGerente->mostrarGrilla_GestionarMenu();*/
	}
	};
}
