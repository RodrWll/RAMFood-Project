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
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DataGridView^ dgvEstablecerMenu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button9;

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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->dgvEstablecerMenu = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->gbMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstablecerMenu))->BeginInit();
			this->SuspendLayout();
			// 
			// gbMenu
			// 
			this->gbMenu->BackColor = System::Drawing::Color::WhiteSmoke;
			this->gbMenu->Controls->Add(this->button12);
			this->gbMenu->Controls->Add(this->dgvEstablecerMenu);
			this->gbMenu->Controls->Add(this->vScrollBar1);
			this->gbMenu->Controls->Add(this->button11);
			this->gbMenu->Controls->Add(this->button9);
			this->gbMenu->Location = System::Drawing::Point(49, 12);
			this->gbMenu->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gbMenu->Name = L"gbMenu";
			this->gbMenu->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gbMenu->Size = System::Drawing::Size(750, 650);
			this->gbMenu->TabIndex = 10;
			this->gbMenu->TabStop = false;
			this->gbMenu->Text = L"MENU";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(200, 556);
			this->button12->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(317, 67);
			this->button12->TabIndex = 8;
			this->button12->Text = L"FIJAR MENU DEL DIA";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// dgvEstablecerMenu
			// 
			this->dgvEstablecerMenu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEstablecerMenu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column6, this->Column7, this->Column8
			});
			this->dgvEstablecerMenu->Location = System::Drawing::Point(95, 119);
			this->dgvEstablecerMenu->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dgvEstablecerMenu->Name = L"dgvEstablecerMenu";
			this->dgvEstablecerMenu->RowHeadersWidth = 51;
			this->dgvEstablecerMenu->RowTemplate->Height = 24;
			this->dgvEstablecerMenu->Size = System::Drawing::Size(508, 417);
			this->dgvEstablecerMenu->TabIndex = 6;
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
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column6->HeaderText = L"Nombre";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 109;
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
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(902, 272);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(21, 125);
			this->vScrollBar1->TabIndex = 7;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(418, 20);
			this->button11->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(171, 72);
			this->button11->TabIndex = 5;
			this->button11->Text = L"Eliminar Producto";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(118, 20);
			this->button9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(165, 72);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Agregar Producto";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmGerenteEstablecerMenu::button9_Click);
			// 
			// frmGerenteEstablecerMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 699);
			this->Controls->Add(this->gbMenu);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"frmGerenteEstablecerMenu";
			this->Text = L"Establecer menú del día";
			this->Load += gcnew System::EventHandler(this, &frmGerenteEstablecerMenu::frmGerenteEstablecerMenu_Load);
			this->gbMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstablecerMenu))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void Actualizar() {
	BebidaPlatosController^ objController = gcnew BebidaPlatosController();
	List<PlatoBebidaMenu^>^ productList = objController->QueryAllProductFromDailyMenu();
	mostrarGrilla_GestionarMenu(productList);
}
private: System::Void frmGerenteEstablecerMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}

void mostrarGrilla_GestionarMenu(List<PlatoBebidaMenu^>^ listaPlatoBebidaMostrar) {
	this->dgvEstablecerMenu->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaPlatoBebidaMostrar->Count; i++) {
		PlatoBebidaMenu^ objPlatoBebida = listaPlatoBebidaMostrar[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objPlatoBebida->GetId());
		filaGrilla[1] = objPlatoBebida->GetNombre();
		filaGrilla[2] = Convert::ToString(objPlatoBebida->GetPrecio());
		filaGrilla[3] = Convert::ToString(objPlatoBebida->GetTipo());

		this->dgvEstablecerMenu->Rows->Add(filaGrilla);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	frmGerenteBuscarProductosMenu^ Ventana2 = gcnew frmGerenteBuscarProductosMenu();
	Ventana2->ShowDialog();
	Actualizar();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dgvEstablecerMenu->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->dgvEstablecerMenu->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	BebidaPlatosController^ objController = gcnew BebidaPlatosController();
	objController->EliminarProductoDelMenuDiario(codigoEliminar);
	Actualizar();
}
};
}
