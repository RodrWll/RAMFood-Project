#pragma once
#include "frmGerenteBuscarProductosMenu.h"

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
	/// Summary for frmGerenteEstablecerMenu
	/// </summary>
	public ref class frmGerenteEstablecerMenu : public System::Windows::Forms::Form
	{
	public:
		frmGerenteEstablecerMenu(void)
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
		~frmGerenteEstablecerMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbMenu;
	protected:

	private: System::Windows::Forms::DataGridView^ dgvEstablecerMenu;




	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGerenteEstablecerMenu::typeid));
			this->gbMenu = (gcnew System::Windows::Forms::GroupBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dgvEstablecerMenu = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->gbMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstablecerMenu))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbMenu
			// 
			this->gbMenu->BackColor = System::Drawing::Color::WhiteSmoke;
			this->gbMenu->Controls->Add(this->vScrollBar1);
			this->gbMenu->Controls->Add(this->button11);
			this->gbMenu->Controls->Add(this->button9);
			this->gbMenu->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbMenu->Location = System::Drawing::Point(13, 12);
			this->gbMenu->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gbMenu->Name = L"gbMenu";
			this->gbMenu->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gbMenu->Size = System::Drawing::Size(435, 178);
			this->gbMenu->TabIndex = 10;
			this->gbMenu->TabStop = false;
			this->gbMenu->Text = L"Agregar productos al menú del día:";
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(902, 272);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(21, 125);
			this->vScrollBar1->TabIndex = 7;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(219, 79);
			this->button11->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(171, 54);
			this->button11->TabIndex = 5;
			this->button11->Text = L"Eliminar Producto";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmGerenteEstablecerMenu::button11_Click_1);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(8, 79);
			this->button9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(165, 54);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Agregar Producto";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmGerenteEstablecerMenu::button9_Click);
			// 
			// dgvEstablecerMenu
			// 
			this->dgvEstablecerMenu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEstablecerMenu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column6, this->Column7, this->Column8
			});
			this->dgvEstablecerMenu->Location = System::Drawing::Point(31, 27);
			this->dgvEstablecerMenu->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dgvEstablecerMenu->MultiSelect = false;
			this->dgvEstablecerMenu->Name = L"dgvEstablecerMenu";
			this->dgvEstablecerMenu->RowHeadersWidth = 51;
			this->dgvEstablecerMenu->RowTemplate->Height = 24;
			this->dgvEstablecerMenu->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvEstablecerMenu->Size = System::Drawing::Size(396, 417);
			this->dgvEstablecerMenu->TabIndex = 6;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Id";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 54;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"Nombre";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 109;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"Precio";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 94;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column8->HeaderText = L"Tipo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 75;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dgvEstablecerMenu);
			this->groupBox1->Location = System::Drawing::Point(484, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(452, 474);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Productos agregados:";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::IndianRed;
			this->button1->Location = System::Drawing::Point(13, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 49);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteEstablecerMenu::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(112, 273);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(208, 44);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Establecer menú";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmGerenteEstablecerMenu::button4_Click);
			// 
			// frmGerenteEstablecerMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 498);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->gbMenu);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"frmGerenteEstablecerMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Establecer menú del día";
			this->Load += gcnew System::EventHandler(this, &frmGerenteEstablecerMenu::frmGerenteEstablecerMenu_Load);
			this->gbMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstablecerMenu))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: void Actualizar() {
	productoController^ objController = gcnew productoController();
	List<PlatoBebidaMenu^>^ productList = objController->listarMenu();
	showGrid(productList);
}
private: System::Void frmGerenteEstablecerMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	Actualizar();
}

void showGrid(List<PlatoBebidaMenu^>^ listaPlatoBebidaMostrar) {
	this->dgvEstablecerMenu->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaPlatoBebidaMostrar->Count; i++) {
		PlatoBebidaMenu^ objPlatoBebida = listaPlatoBebidaMostrar[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objPlatoBebida->GetId());
		filaGrilla[1] = objPlatoBebida->GetNombre();
		filaGrilla[2] = Convert::ToString(objPlatoBebida->GetPrecio());
		if (objPlatoBebida->GetTipo() == 1) {
			filaGrilla[3] = "Bebida";
		}
		else if (objPlatoBebida->GetTipo() == 2)
		{
			filaGrilla[3] = "Comida";
		}

		this->dgvEstablecerMenu->Rows->Add(filaGrilla);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	frmGerenteBuscarProductosMenu^ Ventana2 = gcnew frmGerenteBuscarProductosMenu();
	this->Visible = false;
	Ventana2->ShowDialog();
	Actualizar();
	this->Visible = true;
}
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dgvEstablecerMenu->SelectedRows[0]->Index;
	if (this->dgvEstablecerMenu->Rows[filaSeleccionada]->Cells[0]->Value) {
		int codigoEliminar = Convert::ToInt32(this->dgvEstablecerMenu->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		productoController^ objController = gcnew productoController();
		objController->removeDailyMenuProduct(codigoEliminar);
		Actualizar();
		MessageBox::Show("Producto eliminado del menú");
	}
	else {
		MessageBox::Show("Seleccione una fila");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	productoController^ objController = gcnew productoController();
	objController->generarArchivosMenu();
	MessageBox::Show("Menú establecido");
}
};
}
