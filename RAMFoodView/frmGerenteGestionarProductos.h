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
	using namespace RAMFoodView;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Runtime::Serialization;

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
	private: System::Windows::Forms::GroupBox^ gbFormulario;
	protected:

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btnAddBebidaPlato;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::TextBox^ lbPrecio;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ lbProductName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;


	private:










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGerenteGestionarProductos::typeid));
			this->gbFormulario = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnAddBebidaPlato = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->lbPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbProductName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->gbFormulario->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// gbFormulario
			// 
			this->gbFormulario->BackColor = System::Drawing::Color::Transparent;
			this->gbFormulario->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gbFormulario->Controls->Add(this->pictureBox1);
			this->gbFormulario->Controls->Add(this->textBox1);
			this->gbFormulario->Controls->Add(this->label1);
			this->gbFormulario->Controls->Add(this->button1);
			this->gbFormulario->Controls->Add(this->comboBox1);
			this->gbFormulario->Controls->Add(this->btnAddBebidaPlato);
			this->gbFormulario->Controls->Add(this->button7);
			this->gbFormulario->Controls->Add(this->lbPrecio);
			this->gbFormulario->Controls->Add(this->label4);
			this->gbFormulario->Controls->Add(this->label3);
			this->gbFormulario->Controls->Add(this->lbProductName);
			this->gbFormulario->Controls->Add(this->label2);
			this->gbFormulario->Dock = System::Windows::Forms::DockStyle::Left;
			this->gbFormulario->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbFormulario->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->gbFormulario->Location = System::Drawing::Point(0, 0);
			this->gbFormulario->Margin = System::Windows::Forms::Padding(4);
			this->gbFormulario->Name = L"gbFormulario";
			this->gbFormulario->Padding = System::Windows::Forms::Padding(4);
			this->gbFormulario->Size = System::Drawing::Size(603, 705);
			this->gbFormulario->TabIndex = 7;
			this->gbFormulario->TabStop = false;
			this->gbFormulario->Text = L"Datos del Producto:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(132, 333);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 205);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->textBox1->Location = System::Drawing::Point(316, 205);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 30);
			this->textBox1->TabIndex = 18;
			this->textBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label1->Location = System::Drawing::Point(43, 213);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 22);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Id:";
			this->label1->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->Location = System::Drawing::Point(80, 266);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 56);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Vaciar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(316, 143);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(209, 30);
			this->comboBox1->TabIndex = 15;
			// 
			// btnAddBebidaPlato
			// 
			this->btnAddBebidaPlato->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnAddBebidaPlato->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->btnAddBebidaPlato->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddBebidaPlato->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddBebidaPlato->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->btnAddBebidaPlato->Location = System::Drawing::Point(277, 266);
			this->btnAddBebidaPlato->Margin = System::Windows::Forms::Padding(4);
			this->btnAddBebidaPlato->Name = L"btnAddBebidaPlato";
			this->btnAddBebidaPlato->Size = System::Drawing::Size(166, 56);
			this->btnAddBebidaPlato->TabIndex = 11;
			this->btnAddBebidaPlato->Text = L"Agregar";
			this->btnAddBebidaPlato->UseVisualStyleBackColor = false;
			this->btnAddBebidaPlato->Click += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::btnAddBebidaPlato_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button7->Location = System::Drawing::Point(162, 575);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(219, 58);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Subir imagen";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::button7_Click);
			// 
			// lbPrecio
			// 
			this->lbPrecio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->lbPrecio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->lbPrecio->Location = System::Drawing::Point(316, 96);
			this->lbPrecio->Margin = System::Windows::Forms::Padding(4);
			this->lbPrecio->Name = L"lbPrecio";
			this->lbPrecio->Size = System::Drawing::Size(209, 30);
			this->lbPrecio->TabIndex = 6;
			this->lbPrecio->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmGerenteGestionarProductos::lbPrecio_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label4->Location = System::Drawing::Point(44, 151);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Tipo Bebida/Comida:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label3->Location = System::Drawing::Point(43, 104);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Precio:";
			// 
			// lbProductName
			// 
			this->lbProductName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->lbProductName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->lbProductName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->lbProductName->Location = System::Drawing::Point(316, 39);
			this->lbProductName->Margin = System::Windows::Forms::Padding(4);
			this->lbProductName->Name = L"lbProductName";
			this->lbProductName->Size = System::Drawing::Size(209, 30);
			this->lbProductName->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label2->Location = System::Drawing::Point(43, 47);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre del Producto: ";
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button10->Location = System::Drawing::Point(666, 186);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(185, 46);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Actualizar";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::button10_Click_1);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button8->Location = System::Drawing::Point(666, 84);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(185, 46);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Eliminar";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::button8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::GhostWhite;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView1->Location = System::Drawing::Point(930, 39);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(351, 517);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmGerenteGestionarProductos::dataGridView1_CellClick);
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"Id";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Visible = false;
			this->Column4->Width = 125;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 106;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"Precio";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 95;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"Tipo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 75;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->Location = System::Drawing::Point(1123, 618);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 62);
			this->button2->TabIndex = 13;
			this->button2->Text = L"REGRESAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::button2_Click);
			// 
			// frmGerenteGestionarProductos
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1334, 705);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->gbFormulario);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmGerenteGestionarProductos";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Gestionar productos";
			this->Load += gcnew System::EventHandler(this, &frmGerenteGestionarProductos::frmGerenteGestionarProductos_Load);
			this->gbFormulario->ResumeLayout(false);
			this->gbFormulario->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void Actualizar() {
	productoController^ objController = gcnew productoController();
	List<Producto^>^ listaPlatosBebidas = objController->listarProductos();
	mostrarGrilla(listaPlatosBebidas);

}
private: System::Void frmGerenteGestionarProductos_Load(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
	Actualizar();
	this->comboBox1->Items->Clear();
	this->comboBox1->Items->Add("");
	this->comboBox1->Items->Add("Bebida");
	this->comboBox1->Items->Add("Comida");
	this->button10->Enabled = false;
}
private: void mostrarGrilla(List<Producto^>^ listaPlatoBebidaMostrar) {
	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaPlatoBebidaMostrar->Count; i++) {
		Producto^ objPlatoBebida = listaPlatoBebidaMostrar[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objPlatoBebida->GetId());
		filaGrilla[1] = objPlatoBebida->GetNombre();
		filaGrilla[2] = Convert::ToString(objPlatoBebida->GetPrecio());
		if (objPlatoBebida->GetTipo()==1) {
			filaGrilla[3] = "Bebida";
		}
		else if (objPlatoBebida->GetTipo()==2)
		{
			filaGrilla[3] = "Comida";
		}
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	clearInputs();
	//esta funcion sirve para que cuando se seleccione una fila de la grilla, se muestre en los labels de la derecha
	//como evitar que se seleccione una celda? 
	this->label1->Visible = false;
	this->textBox1->Visible = false;
	this->button10->Enabled = false;
	this->btnAddBebidaPlato->Enabled = true;
	// Verificar si se ha seleccionado una fila
	if (e->RowIndex >= 0 && e->RowIndex < dataGridView1->Rows->Count)
	{
		// Acceder a la fila seleccionada
		DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

		// Realizar operaciones con la fila seleccionada
		// ...
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		if (!selectedRow->IsNewRow) {
			int codigoActualizar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			productoController^ objController = gcnew productoController();
			Producto^ objPlatoBebidaMenu = objController->buscarProductoxId(codigoActualizar);
			this->lbProductName->Text = objPlatoBebidaMenu->GetNombre();
			this->lbPrecio->Text = Convert::ToString(objPlatoBebidaMenu->GetPrecio());
			this->comboBox1->SelectedIndex = objPlatoBebidaMenu->GetTipo();
			this->label1->Visible = true;
			this->textBox1->Visible = true;
			this->textBox1->Text = Convert::ToString(objPlatoBebidaMenu->GetId());
			this->button10->Enabled = true;
			this->btnAddBebidaPlato->Enabled = false;
			String^ nombreArchivo = objPlatoBebidaMenu->GetId().ToString() + ".jpg";
			String^ carpetaDestino = "Recursos\\productosImgenes";
			String^ rutaImagen = Path::Combine(carpetaDestino, nombreArchivo);
			if (System::IO::File::Exists(rutaImagen))
			{
				// Cargar la imagen en el PictureBox
				pictureBox1->ImageLocation=rutaImagen;
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
private: System::Void btnAddBebidaPlato_Click(System::Object^ sender, System::EventArgs^ e) {
	int inputsLlenos = !(this->lbProductName->Text == "" || this->lbPrecio->Text == "" || this->comboBox1->Text == "");
	//Verificar que los campos no esten vacios
	if (!inputsLlenos )
	{
		MessageBox::Show("Ingrese los datos.");
	}
	else
		if (this->comboBox1->SelectedIndex == 1 || this->comboBox1->SelectedIndex == 2)
		{
			productoController^ objProductoController = gcnew productoController();
			Producto^ objBebidaPlato = gcnew Producto();;
			objBebidaPlato->SetNombre(this->lbProductName->Text);

			objBebidaPlato->SetPrecio(Convert::ToDouble(this->lbPrecio->Text));
			objBebidaPlato->SetTipo(this->comboBox1->SelectedIndex);
			objProductoController->generarIdProductos(objBebidaPlato);
			
			
			if (pictureBox1->Image != nullptr) {
				String^ nombreArchivo = objBebidaPlato->GetId().ToString() + ".jpg";
				String^ carpetaDestino = "Recursos\\productosImgenes";
				String^ rutaDestino = Path::Combine(carpetaDestino, nombreArchivo);
				this->pictureBox1->Image->Save(rutaDestino);
				//Se agrega el plato o bebida.
				objProductoController->addProducto(objBebidaPlato);
				MessageBox::Show("Producto agregado correctamente.");
				Actualizar();
				clearInputs();

			}
			else {
				MessageBox::Show("Ingrese una imagen.");
			}
			
		}else{
			MessageBox::Show("Ingrese la categoria correcta.");
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	if (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value){
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		productoController^ objController = gcnew productoController();
		
		String^ rutaCarpeta = "Recursos\\productosImgenes";
		String^ nombreArchivo = Convert::ToString(codigoEliminar) + ".jpg";
		String^ rutaImagen = Path::Combine(rutaCarpeta, nombreArchivo);
		try{
			if (System::IO::File::Exists(rutaImagen))
			{
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show("¿Está seguro que desea eliminar el producto?", "Eliminar producto", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
					this->pictureBox1->Image = nullptr;//Se deja de usar la imagen

					System::IO::File::Delete(rutaImagen);

					objController->deleteProducto(codigoEliminar);
					MessageBox::Show("Producto eliminado con exito");
					Actualizar();
					clearInputs();
					this->btnAddBebidaPlato->Enabled = true;
					this->label1->Visible = false;
					this->textBox1->Visible = false;
				}
			}
			else {
				MessageBox::Show("No se pudo eliminar la imagen.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ocurrió un error al eliminar la imagen.");
		}
	}
	else
	{
		MessageBox::Show("Seleccione una fila");
	}
}
	   //Actualizar
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Producto^ objPlatoBebidaMenu = gcnew Producto();
	objPlatoBebidaMenu->SetNombre(this->lbProductName->Text);
	objPlatoBebidaMenu->SetPrecio(Convert::ToDouble(this->lbPrecio->Text));
	productoController^ objController = gcnew productoController();
	objController->updateProducto(objPlatoBebidaMenu);
	List<Producto^>^ listaPlatosBebidas = objController->listarProductos();
	mostrarGrilla(listaPlatosBebidas);
}

private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//btnn actualizar
	
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	if (this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value ) {
		int inputsLlenos = !(this->lbProductName->Text == "" || this->lbPrecio->Text == "" || (this->comboBox1->SelectedIndex < 0) || this->textBox1->Text == "");
		if(inputsLlenos){
			if(this->comboBox1->SelectedIndex==1 || this->comboBox1->SelectedIndex==2)
			{
				productoController^ objController = gcnew productoController();
				Producto^ objPlatoBebida= gcnew Producto();
				objPlatoBebida->SetNombre(this->lbProductName->Text);
 				objPlatoBebida->SetPrecio(Convert::ToDouble(this->lbPrecio->Text));
				objPlatoBebida->SetId(Convert::ToInt32(this->textBox1->Text));
				objPlatoBebida->SetTipo(this->comboBox1->SelectedIndex);
				objController->updateProducto(objPlatoBebida);
				if (pictureBox1->Image != nullptr) {
					String^ nombreArchivo = objPlatoBebida->GetId().ToString() + ".jpg";
					String^ carpetaDestino = "Recursos\\productosImgenes";
					String^ rutaDestino = Path::Combine(carpetaDestino, nombreArchivo);
					this->pictureBox1->Image->Save(rutaDestino);
					MessageBox::Show("Producto actualizado correctamente.");
					Actualizar();
					clearInputs();
					btnAddBebidaPlato->Enabled = true;
					this->label1->Visible = false;
					this->textBox1->Visible = false;
					this->button10->Enabled = false;
				}
				else {
					MessageBox::Show("Ingrese una imagen.");
				}
			}
			else {
				MessageBox::Show("Seleccione un tipo correcto");
			}
		}
		else {
			MessageBox::Show("Llene toda la informaci�n");
		}
	}
	else {
		MessageBox::Show("Seleccione una fila");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//borramos los inputs
	clearInputs();
	this->label1->Visible = false;
	this->textBox1->Visible = false;
	this->button10->Enabled = false;
	this->btnAddBebidaPlato->Enabled = true;
	this->pictureBox1->Image = nullptr;

}
private: void clearInputs() {
	this->lbProductName->Text = "";
	this->lbPrecio->Text = "";
	this->comboBox1->SelectedIndex = 0;
	this->pictureBox1->Image = nullptr;
}
private: System::Void lbPrecio_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Verifica si el car�cter ingresado es un n�mero, un punto decimal o la tecla de retroceso
if (Char::IsDigit(e->KeyChar) || e->KeyChar == '.' || e->KeyChar == (char)Keys::Back)
	{
		// Si el car�cter es el punto decimal, verifica que no se haya ingresado anteriormente
	if (e->KeyChar == '.')
	{
		if (this->lbPrecio->Text->Contains("."))
		{
			e->Handled = true;
		}
		else
		{
			e->Handled = false;
		}
		}
		else
		{
			e->Handled = false;
		}
	}else
	{
		e->Handled = true;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
	if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Liberar los recursos de la imagen anterior si hay alguna
		if (pictureBox1->Image != nullptr)
		{
			delete pictureBox1->Image;
			pictureBox1->Image = nullptr;
		}

		// Cargar la nueva imagen en el PictureBox
		try
		{
			this->pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			this->pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ocurrió un error al subir la imagen.");
		}
	}
}
};
}
