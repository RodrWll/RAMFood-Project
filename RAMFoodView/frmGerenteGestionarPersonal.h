#pragma once
#include "frmGerenteAgregarEmpleado.h"
#include "frmGerenteEditarEmpleado.h"
#include "frmGerenteReincorporarEmpleado.h"
namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace RAMFoodController;
	using namespace RAMFoodModel;
	using namespace RAMFoodView;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmGerenteGestionarPersonal
	/// </summary>
	public ref class frmGerenteGestionarPersonal : public System::Windows::Forms::Form
	{
	public:
		frmGerenteGestionarPersonal(void)
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
		~frmGerenteGestionarPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:





	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ button2;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGerenteGestionarPersonal::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Location = System::Drawing::Point(306, 118);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(847, 293);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Puesto";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombre";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Apellidos";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Correo";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 80;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button1->Location = System::Drawing::Point(55, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"DESPEDIR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteGestionarPersonal::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button3->Location = System::Drawing::Point(55, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 57);
			this->button3->TabIndex = 3;
			this->button3->Text = L"AÑADIR";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerenteGestionarPersonal::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Goldenrod;
			this->button4->Location = System::Drawing::Point(1041, 473);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 57);
			this->button4->TabIndex = 4;
			this->button4->Text = L"REGRESAR";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmGerenteGestionarPersonal::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->groupBox1->Location = System::Drawing::Point(121, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(961, 87);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar empleado";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(592, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 28);
			this->comboBox1->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(785, 26);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(127, 37);
			this->button6->TabIndex = 7;
			this->button6->Text = L"BUSCAR";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &frmGerenteGestionarPersonal::button6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(506, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Puesto: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 28);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre/Apellidos: ";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button5->Location = System::Drawing::Point(55, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(181, 51);
			this->button5->TabIndex = 6;
			this->button5->Text = L"MODIFICAR";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmGerenteGestionarPersonal::button5_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button2->Location = System::Drawing::Point(55, 391);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 57);
			this->button2->TabIndex = 7;
			this->button2->Text = L"REINCORPORAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteGestionarPersonal::button2_Click_1);
			// 
			// frmGerenteGestionarPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->ClientSize = System::Drawing::Size(1217, 557);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmGerenteGestionarPersonal";
			this->Text = L"Gestionar Personal";
			this->Load += gcnew System::EventHandler(this, &frmGerenteGestionarPersonal::frmGerenteGestionarPersonal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: void showGrid(List<Usuario^>^ listaUsuarios) {
		this-> dataGridView1->Rows->Clear();
		for (int i = 0; i < listaUsuarios->Count; i++) {
			Usuario^ objUsuario = listaUsuarios[i];
			if(objUsuario->GetStatus()){

				array<String^>^ filaGrid = gcnew array<String^>(5);
				filaGrid[0] = Convert::ToString(objUsuario->GetId());
				filaGrid[1] = objUsuario->Puesto[(objUsuario->GetRol()) - 1];
				filaGrid[4] = objUsuario->GetCorreo();
				if (Gerente^ gerente = dynamic_cast<Gerente^>(objUsuario))
				{
					filaGrid[2] = gerente->GetNombre();
					filaGrid[3] = gerente->GetApellidoPat() + " " + gerente->GetApellidoMat();
				}
				else if (Asistente^ asistente = dynamic_cast<Asistente^>(objUsuario))
				{
					filaGrid[2] = asistente->GetNombre();
					filaGrid[3] = asistente->GetApellidoPat() + " " + asistente->GetApellidoMat();
				}
				else if (Chef^ chef = dynamic_cast<Chef^>(objUsuario))
				{
					filaGrid[2] = chef->GetNombre();
					filaGrid[3] = chef->GetApellidoPat() + " " + chef->GetApellidoMat();
				}

				this->dataGridView1->Rows->Add(filaGrid);
			}
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmGerenteAgregarEmpleado^ frmAgregarEmpleado = gcnew frmGerenteAgregarEmpleado();
		frmAgregarEmpleado->ShowDialog();
		Actualizar();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Actualizar();
}
void Actualizar() {
	List<Usuario^>^ listaUsuarios;
	empleadoController^ objUsuarioController = gcnew empleadoController();
	listaUsuarios = objUsuarioController->leerArchivo();
	showGrid(listaUsuarios);

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Solo funciona cuando se selecciona una fila
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		if (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value) {
			int id = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			empleadoController^ objUsuarioController = gcnew empleadoController();
			objUsuarioController->deleteUsuario(id);
			MessageBox::Show("Empleado despedido");
			Actualizar();

		}
		else {
			MessageBox::Show("Seleccione una fila");
		}
	}
	else {
		MessageBox::Show("Seleccione un empleado");

	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//Solo funciona cuando se selecciona una fila
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		if (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value) {
			
			int id = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			empleadoController^ objUsuarioController = gcnew empleadoController();
			Usuario^ objUsuario = objUsuarioController->QueryUsuarioById(id);
			frmGerenteEditarEmpleado^ ventanaEditarEmpleado = gcnew frmGerenteEditarEmpleado(objUsuario);
			//Se crea la nueva ventana y se envia como parametro el usuario a editar
			ventanaEditarEmpleado->ShowDialog();
			Actualizar();
		}
		else {
			MessageBox::Show("Seleccione un empleado");
		}
	}
	else {
		MessageBox::Show("Seleccione un empleado");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ NombreBuscar = this->textBox1->Text;
	int PuestoBuscar = this->comboBox1->SelectedIndex;
	empleadoController^ objUsuarioController = gcnew empleadoController();
	if( PuestoBuscar== 0 && NombreBuscar== ""){
		//MessageBox::Show("Ingrese un campo de busqueda");
		Actualizar();
	}
	else
	{
		/*Buscar por nombre y puesto*/
		List<Usuario^>^ listaUsuariosEncontrados = objUsuarioController->QuerryUsuarioByNombrexRol(NombreBuscar, PuestoBuscar);
		if (listaUsuariosEncontrados->Count == 0) {
			MessageBox::Show("No se encontraron resultados");
			Actualizar();
		}
		else {
			showGrid(listaUsuariosEncontrados);
		}
	}
}
private: System::Void frmGerenteGestionarPersonal_Load(System::Object^ sender, System::EventArgs^ e) {
	Actualizar();
	Usuario^ objUsuario = gcnew Usuario();
	array<String^>^ listaPuestos = objUsuario->Puesto;
	this->comboBox1->Items->Add("");
	this->comboBox1->Items->AddRange(listaPuestos);
	this->comboBox1->SelectedIndex = 0;
	comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	frmGerenteReincorporarEmpleado^ frmReincorporarEmpleado = gcnew frmGerenteReincorporarEmpleado();
	this->Visible = false;
	frmReincorporarEmpleado->ShowDialog();
	this->Visible = true;
	Actualizar();
}
};
}