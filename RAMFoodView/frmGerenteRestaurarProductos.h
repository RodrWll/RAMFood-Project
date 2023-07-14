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
    using namespace System::Runtime::Serialization;
    using namespace System::IO;
	/// <summary>
	/// Summary for frmGerenteRestaurarProductos
	/// </summary>
	public ref class frmGerenteRestaurarProductos : public System::Windows::Forms::Form
	{
	public:
		frmGerenteRestaurarProductos(void)
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
		~frmGerenteRestaurarProductos()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ button3;
    protected:
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::GroupBox^ gbFormulario;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label1;


    private: System::Windows::Forms::ComboBox^ comboBox1;


    private: System::Windows::Forms::TextBox^ lbPrecio;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ lbProductName;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;


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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGerenteRestaurarProductos::typeid));
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->gbFormulario = (gcnew System::Windows::Forms::GroupBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->lbPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->lbProductName = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->gbFormulario->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // button3
            // 
            this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(203)));
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)));
            this->button3->Location = System::Drawing::Point(675, 229);
            this->button3->Margin = System::Windows::Forms::Padding(4);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(167, 78);
            this->button3->TabIndex = 19;
            this->button3->Text = L"Restaurar producto";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &frmGerenteRestaurarProductos::button3_Click);
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
            this->button2->Location = System::Drawing::Point(1127, 723);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(183, 62);
            this->button2->TabIndex = 18;
            this->button2->Text = L"REGRESAR";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &frmGerenteRestaurarProductos::button2_Click);
            // 
            // gbFormulario
            // 
            this->gbFormulario->BackColor = System::Drawing::Color::Transparent;
            this->gbFormulario->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->gbFormulario->Controls->Add(this->pictureBox1);
            this->gbFormulario->Controls->Add(this->textBox1);
            this->gbFormulario->Controls->Add(this->label1);
            this->gbFormulario->Controls->Add(this->comboBox1);
            this->gbFormulario->Controls->Add(this->lbPrecio);
            this->gbFormulario->Controls->Add(this->label4);
            this->gbFormulario->Controls->Add(this->label3);
            this->gbFormulario->Controls->Add(this->lbProductName);
            this->gbFormulario->Controls->Add(this->label2);
            this->gbFormulario->Dock = System::Windows::Forms::DockStyle::Left;
            this->gbFormulario->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14));
            this->gbFormulario->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)));
            this->gbFormulario->Location = System::Drawing::Point(0, 0);
            this->gbFormulario->Margin = System::Windows::Forms::Padding(4);
            this->gbFormulario->Name = L"gbFormulario";
            this->gbFormulario->Padding = System::Windows::Forms::Padding(4);
            this->gbFormulario->Size = System::Drawing::Size(614, 803);
            this->gbFormulario->TabIndex = 16;
            this->gbFormulario->TabStop = false;
            this->gbFormulario->Text = L"Datos del Producto:";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(105, 340);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(377, 347);
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
            this->textBox1->Size = System::Drawing::Size(78, 33);
            this->textBox1->TabIndex = 18;
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
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(203)));
            this->comboBox1->Enabled = false;
            this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(316, 143);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(209, 34);
            this->comboBox1->TabIndex = 15;
            // 
            // lbPrecio
            // 
            this->lbPrecio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(203)));
            this->lbPrecio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lbPrecio->Enabled = false;
            this->lbPrecio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)));
            this->lbPrecio->Location = System::Drawing::Point(316, 96);
            this->lbPrecio->Margin = System::Windows::Forms::Padding(4);
            this->lbPrecio->Name = L"lbPrecio";
            this->lbPrecio->Size = System::Drawing::Size(209, 33);
            this->lbPrecio->TabIndex = 6;
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
            this->lbProductName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lbProductName->Enabled = false;
            this->lbProductName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)));
            this->lbProductName->Location = System::Drawing::Point(316, 39);
            this->lbProductName->Margin = System::Windows::Forms::Padding(4);
            this->lbProductName->Name = L"lbProductName";
            this->lbProductName->Size = System::Drawing::Size(209, 33);
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
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F));
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
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F));
            dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(38)));
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridView1->EnableHeadersVisualStyles = false;
            this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(203)));
            this->dataGridView1->Location = System::Drawing::Point(892, 39);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
            this->dataGridView1->MultiSelect = false;
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F));
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
            dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F));
            dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)));
            dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
            dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
            this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(418, 667);
            this->dataGridView1->TabIndex = 15;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmGerenteRestaurarProductos::dataGridView1_CellContentClick);
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
            this->Column1->Width = 117;
            // 
            // Column2
            // 
            this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->Column2->HeaderText = L"Precio";
            this->Column2->MinimumWidth = 6;
            this->Column2->Name = L"Column2";
            this->Column2->ReadOnly = true;
            this->Column2->Width = 103;
            // 
            // Column3
            // 
            this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->Column3->HeaderText = L"Tipo";
            this->Column3->MinimumWidth = 6;
            this->Column3->Name = L"Column3";
            this->Column3->ReadOnly = true;
            this->Column3->Width = 81;
            // 
            // frmGerenteRestaurarProductos
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 26);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
                static_cast<System::Int32>(static_cast<System::Byte>(203)));
            this->ClientSize = System::Drawing::Size(1344, 803);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->gbFormulario);
            this->Controls->Add(this->dataGridView1);
            this->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F));
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
                static_cast<System::Int32>(static_cast<System::Byte>(38)));
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"frmGerenteRestaurarProductos";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"Restaurar productos";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &frmGerenteRestaurarProductos::frmGerenteRestaurarProductos_Load);
            this->gbFormulario->ResumeLayout(false);
            this->gbFormulario->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: void mostrarGrilla(List<Producto^>^ listaPlatoBebidaMostrar) {
        this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
        for (int i = 0; i < listaPlatoBebidaMostrar->Count; i++) {
            Producto^ objPlatoBebida = listaPlatoBebidaMostrar[i];
            array<String^>^ filaGrilla = gcnew array<String^>(4);
            if (objPlatoBebida->GetStatus() == 0) {
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
                this->dataGridView1->Rows->Add(filaGrilla);
            }
        }
    }
    private: void limpiar() {
		this->lbProductName->Text = "";
		this->lbPrecio->Text = "";
        this->comboBox1->SelectedIndex = -1;
        this->textBox1->Text = "";
		this->pictureBox1->Image = nullptr;
	}
    private: void actualizar() {
productoController^ objController = gcnew productoController();
		this->mostrarGrilla(objController->listarProductos());
    }

    private: System::Void frmGerenteRestaurarProductos_Load(System::Object^ sender, System::EventArgs^ e) {
        this->comboBox1->Items->Clear();
        this->comboBox1->Items->Add("");
        this->comboBox1->Items->Add("Bebida");
        this->comboBox1->Items->Add("Comida");
        actualizar();
    }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
    if (filaSeleccionada >= 0) {
		int codigoActualizar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		productoController^ objController = gcnew productoController();
		Producto^ objPlatoBebidaMenu = objController->buscarProductoxId(codigoActualizar);
		objPlatoBebidaMenu->SetStatus(1);
		objController->updateProducto(objPlatoBebidaMenu);
		MessageBox::Show("Se ha restaurado el producto correctamente", "Restaurar producto", MessageBoxButtons::OK, MessageBoxIcon::Information);
        actualizar();
        limpiar();
	}
    else {
		MessageBox::Show("Seleccione un producto", "Restaurar producto", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this-> Close();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
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
