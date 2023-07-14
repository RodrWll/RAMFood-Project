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




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;







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
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button3->Location = System::Drawing::Point(354, 164);
			this->button3->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(177, 50);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->Location = System::Drawing::Point(37, 726);
			this->button2->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 50);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->Location = System::Drawing::Point(143, 164);
			this->button1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 50);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteBuscarProductosMenu::button1_Click);
			// 
			// dgvProductosEncontrados
			// 
			this->dgvProductosEncontrados->AllowUserToAddRows = false;
			this->dgvProductosEncontrados->AllowUserToDeleteRows = false;
			this->dgvProductosEncontrados->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dgvProductosEncontrados->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvProductosEncontrados->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dgvProductosEncontrados->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvProductosEncontrados->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dgvProductosEncontrados->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvProductosEncontrados->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvProductosEncontrados->ColumnHeadersHeight = 35;
			this->dgvProductosEncontrados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvProductosEncontrados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column6, this->Column7, this->Column8
			});
			this->dgvProductosEncontrados->EnableHeadersVisualStyles = false;
			this->dgvProductosEncontrados->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dgvProductosEncontrados->Location = System::Drawing::Point(38, 80);
			this->dgvProductosEncontrados->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->dgvProductosEncontrados->MultiSelect = false;
			this->dgvProductosEncontrados->Name = L"dgvProductosEncontrados";
			this->dgvProductosEncontrados->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvProductosEncontrados->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dgvProductosEncontrados->RowHeadersVisible = false;
			this->dgvProductosEncontrados->RowHeadersWidth = 51;
			this->dgvProductosEncontrados->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dgvProductosEncontrados->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvProductosEncontrados->RowTemplate->Height = 24;
			this->dgvProductosEncontrados->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvProductosEncontrados->Size = System::Drawing::Size(436, 670);
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
			this->Column5->Visible = false;
			this->Column5->Width = 59;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"Nombre";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 121;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"Precio";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 107;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column8->HeaderText = L"Tipo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 84;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label7->Location = System::Drawing::Point(104, 101);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 22);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Nombre";
			// 
			// lbNombreProducto
			// 
			this->lbNombreProducto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->lbNombreProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbNombreProducto->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNombreProducto->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->lbNombreProducto->Location = System::Drawing::Point(354, 101);
			this->lbNombreProducto->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->lbNombreProducto->Name = L"lbNombreProducto";
			this->lbNombreProducto->Size = System::Drawing::Size(273, 30);
			this->lbNombreProducto->TabIndex = 14;
			// 
			// lbIdProducto
			// 
			this->lbIdProducto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->lbIdProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbIdProducto->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbIdProducto->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->lbIdProducto->Location = System::Drawing::Point(354, 43);
			this->lbIdProducto->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->lbIdProducto->Name = L"lbIdProducto";
			this->lbIdProducto->Size = System::Drawing::Size(273, 30);
			this->lbIdProducto->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label6->Location = System::Drawing::Point(104, 43);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 22);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Id Producto";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->lbNombreProducto);
			this->groupBox1->Controls->Add(this->lbIdProducto);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->groupBox1->Location = System::Drawing::Point(37, 5);
			this->groupBox1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->groupBox1->Size = System::Drawing::Size(644, 631);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parámetros de búsqueda:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(143, 224);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(457, 321);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->dgvProductosEncontrados);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->groupBox2->Location = System::Drawing::Point(769, 26);
			this->groupBox2->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->groupBox2->Size = System::Drawing::Size(535, 762);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Productos encontrados:";
			// 
			// frmGerenteBuscarProductosMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1344, 803);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"frmGerenteBuscarProductosMenu";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Buscar productos para el menú";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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
		List<Producto^>^ listaProductos = objController->listarProductos();
		//Verficamos si el producto ya est'a en la tabla ListaPreviaMenu, si es asi, no lo mostramos. Usamos la funcion existeProductoMenuxId
		/*for (int i = 0; i < listaProductos->Count; i++) {
			Producto^ objProducto = listaProductos[i];
			productoController^ objController = gcnew productoController();
			if (objController->existeProductoMenuxId(objProducto->GetId())) {
				listaProductos->RemoveAt(i);
				i--;
			}
		}*/
		this->pictureBox1->Image = nullptr;
		mostrarGrilla(listaProductos);
	}
	private: System::Void frmGerenteGestionarProductos_Load(System::Object^ sender, System::EventArgs^ e) {
		actualizar();
	}
	private: void mostrarGrilla(List<Producto^>^ listaPlatosBebidasMenu) {
		this->dgvProductosEncontrados->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		productoController^ objController = gcnew productoController();
		for (int i = 0; i < listaPlatosBebidasMenu->Count; i++) {
			
				Producto^ objPlatoBebidaMenu = listaPlatosBebidasMenu[i];
				
				if (objPlatoBebidaMenu->GetStatus()==1 && objPlatoBebidaMenu->GetMenu()==0)
				{
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
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		productoController^ objController = gcnew productoController();
		if (lbIdProducto->Text->Trim() != "") {
			//Búsqueda de Producto por el código ingresado por el usuario
			
			Producto^ ojbPlatoBebidaMenu = objController->buscarProductoxId(Convert::ToInt32(lbIdProducto->Text->Trim()));
			//Se borran los datos del grid.
			this->dgvProductosEncontrados->Rows->Clear();
			if( ojbPlatoBebidaMenu != nullptr){
				this->dgvProductosEncontrados->Rows->Add(gcnew array<String^> {
					"" + Convert::ToString(ojbPlatoBebidaMenu->GetId()),
						ojbPlatoBebidaMenu->GetNombre(),
						Convert::ToString(ojbPlatoBebidaMenu->GetPrecio()),
						Convert::ToString(ojbPlatoBebidaMenu->GetTipo())
				});
			}
			else {
				MessageBox::Show("No se encontró el producto");
				lbIdProducto->Text = "";
				lbNombreProducto->Text = "";
				this->pictureBox1->Image = nullptr;

			}
		}
		else {
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			List<Producto^>^ productList = objController->buscarProductoxNombre(lbNombreProducto->Text->Trim());
			//Se borran los datos del grid.
			this->dgvProductosEncontrados->Rows->Clear();
			//Verficamos si la lista esta vacia
			if (productList->Count == 0) {
				MessageBox::Show("No se encontró el producto");
				lbIdProducto->Text = "";
				lbNombreProducto->Text = "";
				this->pictureBox1->Image = nullptr;
			}
			mostrarGrilla(productList);
		}
	}
		   //Button agregar Producto al menu diario
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dgvProductosEncontrados->SelectedRows[0]->Index;
		if (this->dgvProductosEncontrados->Rows[filaSeleccionada]->Cells[0]->Value) {
			int IdProducto = Convert::ToInt32(this->dgvProductosEncontrados->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			productoController^ objController = gcnew productoController();
			Producto^ objPlatoBebidaMenuDiario = objController->buscarProductoxId(IdProducto);
			objController->addProductToDailyMenu(objPlatoBebidaMenuDiario);
			MessageBox::Show("Producto " + objPlatoBebidaMenuDiario->GetNombre() + " agregado");
			actualizar();
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
