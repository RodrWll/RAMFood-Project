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

	/// <summary>
	/// Summary for frmAsistente
	/// </summary>
	public ref class frmAsistente : public System::Windows::Forms::Form
	{
	public:
		frmAsistente(void)
		{
			InitializeComponent();
			//AsistenteController^ objAsistenteController = gcnew AsistenteController();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAsistente()
		{
			if (components)
			{
				delete components;
			}
		}
	//private: microcontroller^ objMicrocontroller =gcnew microcontroller();
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;

	private: System::Windows::Forms::Button^ button4;

















	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::GroupBox^ groupBox4;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;












	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label7;





	private: System::Windows::Forms::Label^ label8;










private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAsistente::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->Location = System::Drawing::Point(13, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cerrar Sesión";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmAsistente::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column7, this->Column10
			});
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView1->Location = System::Drawing::Point(17, 40);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(486, 335);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAsistente::dataGridView1_CellClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(3, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(513, 394);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(222, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 19);
			this->label8->TabIndex = 2;
			this->label8->Text = L"MESA 1";
			this->label8->Click += gcnew System::EventHandler(this, &frmAsistente::label8_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button4->Location = System::Drawing::Point(676, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 26);
			this->button4->TabIndex = 3;
			this->button4->Text = L"ACTUALIZAR";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmAsistente::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(522, 54);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(499, 394);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(198, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 19);
			this->label9->TabIndex = 3;
			this->label9->Text = L"MESA 2";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->ColumnHeadersHeight = 29;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->Column5, this->Column8, this->Column11
			});
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView2->Location = System::Drawing::Point(6, 40);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(470, 335);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAsistente::dataGridView2_CellClick);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->dataGridView3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(1027, 54);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(506, 394);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(214, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 19);
			this->label10->TabIndex = 4;
			this->label10->Text = L"MESA 3";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView3->ColumnHeadersHeight = 29;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->Column6, this->Column9, this->Column12
			});
			this->dataGridView3->EnableHeadersVisualStyles = false;
			this->dataGridView3->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView3->Location = System::Drawing::Point(17, 40);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->Size = System::Drawing::Size(479, 335);
			this->dataGridView3->TabIndex = 1;
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAsistente::dataGridView3_CellClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->Location = System::Drawing::Point(187, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 30);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Enviar Pedido";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmAsistente::button2_Click_1);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button9->Location = System::Drawing::Point(715, 454);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 30);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Enviar Pedido";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &frmAsistente::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button10->Location = System::Drawing::Point(1222, 454);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 30);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Enviar Pedido";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &frmAsistente::button10_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->groupBox4->Controls->Add(this->button15);
			this->groupBox4->Controls->Add(this->button14);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->button11);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(3, 490);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(513, 145);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Alertas de la mesa";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button15->Location = System::Drawing::Point(387, 101);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(85, 22);
			this->button15->TabIndex = 18;
			this->button15->Text = L"Atender";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &frmAsistente::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button14->Location = System::Drawing::Point(387, 70);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(85, 22);
			this->button14->TabIndex = 16;
			this->button14->Text = L"Atender";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &frmAsistente::button14_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 22);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Asistencia requerida";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 22);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Cobrar la cuenta";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(419, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(85, 37);
			this->button11->TabIndex = 15;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &frmAsistente::button11_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->button17);
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->button12);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(522, 490);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(499, 145);
			this->groupBox5->TabIndex = 14;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Alertas de la mesa";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 22);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Asistencia requerida";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 22);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Cobrar la cuenta";
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button17->Location = System::Drawing::Point(377, 101);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(85, 22);
			this->button17->TabIndex = 19;
			this->button17->Text = L"Atender";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &frmAsistente::button17_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button16->Location = System::Drawing::Point(377, 70);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(85, 22);
			this->button16->TabIndex = 17;
			this->button16->Text = L"Atender";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &frmAsistente::button16_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(402, 12);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 37);
			this->button12->TabIndex = 16;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &frmAsistente::button12_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->label3);
			this->groupBox6->Controls->Add(this->button18);
			this->groupBox6->Controls->Add(this->button19);
			this->groupBox6->Controls->Add(this->button13);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(1027, 490);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(506, 145);
			this->groupBox6->TabIndex = 14;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Alertas de la mesa";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 22);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Asistencia requerida";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 22);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Cobrar la cuenta";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button18->Location = System::Drawing::Point(373, 101);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(85, 22);
			this->button18->TabIndex = 21;
			this->button18->Text = L"Atender";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &frmAsistente::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button19->Location = System::Drawing::Point(373, 70);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(85, 22);
			this->button19->TabIndex = 20;
			this->button19->Text = L"Atender";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &frmAsistente::button19_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(411, 12);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(85, 37);
			this->button13->TabIndex = 16;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &frmAsistente::button13_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button21);
			this->groupBox7->Controls->Add(this->button20);
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox7->Location = System::Drawing::Point(522, 651);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(498, 119);
			this->groupBox7->TabIndex = 15;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Alerta de la faja";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(402, 72);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(85, 22);
			this->button21->TabIndex = 22;
			this->button21->Text = L"Revisar";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &frmAsistente::button21_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(402, 13);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(85, 37);
			this->button20->TabIndex = 17;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &frmAsistente::button20_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 22);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Revisión requerida";
			// 
			// Column1
			// 
			this->Column1->FillWeight = 91.57755F;
			this->Column1->HeaderText = L"Producto";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 91.57755F;
			this->Column2->HeaderText = L"Cantidad";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 91.57755F;
			this->Column3->HeaderText = L"Precio ";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 91.57755F;
			this->Column4->HeaderText = L"Estado";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->FillWeight = 133.6898F;
			this->Column7->HeaderText = L"Tipo";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"IdPedido";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Producto";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Precio ";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Tipo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"IdPedido";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Visible = false;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Producto";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Precio ";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Estado";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Tipo";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"IdPedido";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Visible = false;
			// 
			// frmAsistente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1539, 782);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmAsistente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Asistente";
			this->Load += gcnew System::EventHandler(this, &frmAsistente::frmAsistente_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Cierra la ventana	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	//Carga la informacion de la mesa
	private: void actualizarProductos() {
		//AsistenteController^ objAsistenteController = gcnew AsistenteController();
		//List<Plato^>^ listaPlatos = objAsistenteController->listarPlatosPedidosMesa();
		OrdenController^ objOrdenController = gcnew OrdenController();
		List<ProductoPedido^>^ listaProducoPedido1 = objOrdenController->ReadOrderDetailsxNroMesa(1)->GetListaProductosPedidos();
		List<ProductoPedido^>^ listaProducoPedido2 = objOrdenController->ReadOrderDetailsxNroMesa(2)->GetListaProductosPedidos();
		List<ProductoPedido^>^ listaProducoPedido3 = objOrdenController->ReadOrderDetailsxNroMesa(3)->GetListaProductosPedidos();
		mostrarProductosMesa(objOrdenController->ReadOrderDetailsxNroMesa(1)->GetListaProductosPedidos(), 1);
		mostrarProductosMesa(objOrdenController->ReadOrderDetailsxNroMesa(2)->GetListaProductosPedidos(), 2);
		mostrarProductosMesa(objOrdenController->ReadOrderDetailsxNroMesa(3)->GetListaProductosPedidos(), 3);

	}
	
	// Esta funcion es generica, le puedes poner la lista de platos de la mesa que quieras
	//Tendrias que adaptarla para que se muestre segun el data grid que quieras
private: void mostrarProductosMesa(List<ProductoPedido^>^ listaProductos, int mesa) {
		if(mesa ==1){
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaProductos->Count; i++) {
				ProductoPedido^ objProductoPedido = listaProductos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(6);
				filaGrilla[0] = objProductoPedido->GetObjProducto()->GetNombre();
				filaGrilla[1] = Convert::ToString(objProductoPedido->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objProductoPedido->GetObjProducto()->GetPrecio());
				OrdenController^ objOrdenController = gcnew OrdenController();
				filaGrilla[3] = objOrdenController->ReadEstadoDelProductoPedido(objProductoPedido->GetEstado());
				filaGrilla[4] = objOrdenController->ReadTipoDeProductoPedido(objProductoPedido->GetObjProducto()->GetTipo());
				filaGrilla[5] = Convert::ToString(objProductoPedido->GetId()); // this column will not be shown in the grid
				this->dataGridView1->Rows->Add(filaGrilla);
			}
		}
		if (mesa == 2){
			this->dataGridView2->Rows->Clear();
			for (int i = 0; i < listaProductos->Count; i++) {
				ProductoPedido^ objProductoPedido = listaProductos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(6);
				filaGrilla[0] = objProductoPedido->GetObjProducto()->GetNombre();
				filaGrilla[1] = Convert::ToString(objProductoPedido->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objProductoPedido->GetObjProducto()->GetPrecio());
				OrdenController^ objOrdenController = gcnew OrdenController();
				filaGrilla[3] = objOrdenController->ReadEstadoDelProductoPedido(objProductoPedido->GetEstado());
				filaGrilla[4] = objOrdenController->ReadTipoDeProductoPedido(objProductoPedido->GetObjProducto()->GetTipo());
				filaGrilla[5] = Convert::ToString(objProductoPedido->GetId()); // this column will not be shown in the grid
				this->dataGridView2->Rows->Add(filaGrilla);
			}
		}
		if (mesa == 3){
			this->dataGridView3->Rows->Clear();
			for (int i = 0; i < listaProductos->Count; i++) {
				ProductoPedido^ objProductoPedido = listaProductos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(6);
				filaGrilla[0] = objProductoPedido->GetObjProducto()->GetNombre();
				filaGrilla[1] = Convert::ToString(objProductoPedido->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objProductoPedido->GetObjProducto()->GetPrecio());
				OrdenController^ objOrdenController = gcnew OrdenController();
				filaGrilla[3] = objOrdenController->ReadEstadoDelProductoPedido(objProductoPedido->GetEstado());
				filaGrilla[4] = objOrdenController->ReadTipoDeProductoPedido(objProductoPedido->GetObjProducto()->GetTipo());
				filaGrilla[5] = Convert::ToString(objProductoPedido->GetId()); // this column will not be shown in the grid
				this->dataGridView3->Rows->Add(filaGrilla);
			}
		}
}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void frmAsistente_Load(System::Object^ sender, System::EventArgs^ e) {
		/*
		this->button2->Enabled = false;
		this->button9->Enabled = false;
		this->button10->Enabled = false;
		this->button14->Enabled = false;
		this->button15->Enabled = false;
		this->button16->Enabled = false;
		this->button17->Enabled = false;
		this->button18->Enabled = false;
		this->button19->Enabled = false;
		this->button21->Enabled = false;
		*/
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarProductos();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {	
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {	
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {	
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {	
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {	
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		PedidoController^ objPedidoController = gcnew PedidoController();
		productoController^ objProductoController = gcnew productoController();
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int ProductIdSelected = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[5]->Value->ToString());
		OrdenController^ objOrdenController = gcnew OrdenController();
		ProductoPedido^ objProductoPedido = objOrdenController->queryRequestedProductById(ProductIdSelected);
		if (objProductoPedido->GetEstado() == 2) {
			objOrdenController->actualizarEstadoDelProductoPedido(objProductoPedido->GetId(),3);
			actualizarProductos();
		}
		
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		/*
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int estado = "Listo para entregar" == (this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
		if (estado) {
			button2->Enabled = true;
		}
		else {
			button2->Enabled = false;
		}
		*/
	}
	private: System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		/*
		int filaSeleccionada = this->dataGridView3->SelectedRows[0]->Index;
		int estado = "Listo para entregar" == (this->dataGridView3->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
		if (estado) {
			button10->Enabled = true;
		}
		else {
			button10->Enabled = false;
		}
		*/
	}
	private: System::Void dataGridView3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		/*
		int filaSeleccionada = this->dataGridView3->SelectedRows[0]->Index;
		int estado = "Listo para entregar" == (this->dataGridView3->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
		if (estado) {
			button10->Enabled = true;
		}
		else {
			button10->Enabled = false;
		}
		*/
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		PedidoController^ objPedidoController = gcnew PedidoController();
		productoController^ objProductoController = gcnew productoController();
		int filaSeleccionada = this->dataGridView2->SelectedRows[0]->Index;
		int ProductIdSelected = Convert::ToInt32(this->dataGridView2->Rows[filaSeleccionada]->Cells[5]->Value->ToString());
		OrdenController^ objOrdenController = gcnew OrdenController();
		ProductoPedido^ objProductoPedido = objOrdenController->queryRequestedProductById(ProductIdSelected);
		if (objProductoPedido->GetEstado() == 2) {
			objOrdenController->actualizarEstadoDelProductoPedido(objProductoPedido->GetId(), 3);
			actualizarProductos();
		}

	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		PedidoController^ objPedidoController = gcnew PedidoController();
		productoController^ objProductoController = gcnew productoController();
		int filaSeleccionada = this->dataGridView3->SelectedRows[0]->Index;
		int ProductIdSelected = Convert::ToInt32(this->dataGridView3->Rows[filaSeleccionada]->Cells[5]->Value->ToString());
		OrdenController^ objOrdenController = gcnew OrdenController();
		ProductoPedido^ objProductoPedido = objOrdenController->queryRequestedProductById(ProductIdSelected);
		if (objProductoPedido->GetEstado() == 2) {
			objOrdenController->actualizarEstadoDelProductoPedido(objProductoPedido->GetId(), 3);
			actualizarProductos();
		}
	}
	private: void actualizarAlertas1() {
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoAsis = objAsistenteController->LeerArchivoEstadoAsistencia(1); 
		String^ estadoCob = objAsistenteController->LeerArchivoEstadoCobranza(1);
		if (estadoAsis == "1") {
			button15->Enabled = true;
		}
		else {
			button15->Enabled = false;
		}
		if (estadoCob == "1") {
			button14->Enabled = true;
		}
		else {
			button14->Enabled = false;
		}
	}
	private: void actualizarAlertas2() {
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoAsis = objAsistenteController->LeerArchivoEstadoAsistencia(2);
		String^ estadoCob = objAsistenteController->LeerArchivoEstadoCobranza(2);
		if (estadoAsis == "1") {
			button17->Enabled = true;
		}
		else {
			button17->Enabled = false;
		}
		if (estadoCob == "1") {
			button16->Enabled = true;
		}
		else {
			button16->Enabled = false;
		}
	}
	private: void actualizarAlertas3() {
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoAsis = objAsistenteController->LeerArchivoEstadoAsistencia(3);
		String^ estadoCob = objAsistenteController->LeerArchivoEstadoCobranza(3);
		if (estadoAsis == "1") {
			button18->Enabled = true;
		}
		else {
			button18->Enabled = false;
		}
		if (estadoCob == "1") {
			button19->Enabled = true;
		}
		else {
			button19->Enabled = false;
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarAlertas1();
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarAlertas2();
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarAlertas3();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) { //Cobranza mesa 2
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoCob = objAsistenteController->LeerArchivoEstadoCobranza(2);
		if (estadoCob == "1") {
			objAsistenteController->ModificarEstadoCobranza(2,Convert::ToInt32(estadoCob));
			actualizarAlertas2();
			MessageBox::Show("Diríjase a la Mesa 2 para cobrar la cuenta");
		}
		else {
			objAsistenteController->ModificarEstadoCobranza(2,Convert::ToInt32(estadoCob));
			actualizarAlertas2();
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) { //Asistencia mesa 2
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoAsis = objAsistenteController->LeerArchivoEstadoAsistencia(2);
		if (estadoAsis == "1") {
			objAsistenteController->ModificarEstadoAsistencia(2, Convert::ToInt32(estadoAsis));
			actualizarAlertas2();
			MessageBox::Show("Diríjase a la Mesa 2 para asistir al comensal");
		}
		else {
			objAsistenteController->ModificarEstadoAsistencia(2, Convert::ToInt32(estadoAsis));
			actualizarAlertas2();
		}
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) { //Cobranza mesa 1
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoCob = objAsistenteController->LeerArchivoEstadoCobranza(1);
		if (estadoCob == "1") {
			objAsistenteController->ModificarEstadoCobranza(1, Convert::ToInt32(estadoCob));
			actualizarAlertas1();
			MessageBox::Show("Diríjase a la Mesa 1 para cobrar la cuenta");
		}
		else {
			objAsistenteController->ModificarEstadoCobranza(1, Convert::ToInt32(estadoCob));
			actualizarAlertas1();
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) { //Asistencia mesa 1
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoAsis = objAsistenteController->LeerArchivoEstadoAsistencia(1);
		if (estadoAsis == "1") {
			objAsistenteController->ModificarEstadoAsistencia(1, Convert::ToInt32(estadoAsis));
			actualizarAlertas1();
			MessageBox::Show("Diríjase a la Mesa 1 para asistir al comensal");
		}
		else {
			objAsistenteController->ModificarEstadoAsistencia(1, Convert::ToInt32(estadoAsis));
			actualizarAlertas1();
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) { //Cobranza mesa 3
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoCob = objAsistenteController->LeerArchivoEstadoCobranza(3);
		if (estadoCob == "1") {
			objAsistenteController->ModificarEstadoCobranza(3, Convert::ToInt32(estadoCob));
			actualizarAlertas3();
			MessageBox::Show("Diríjase a la Mesa 3 para cobrar la cuenta");
		}
		else {
			objAsistenteController->ModificarEstadoCobranza(3, Convert::ToInt32(estadoCob));
			actualizarAlertas3();
		}
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) { //Asistencia mesa 3
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoAsis = objAsistenteController->LeerArchivoEstadoAsistencia(3);
		if (estadoAsis == "1") {
			objAsistenteController->ModificarEstadoAsistencia(3, Convert::ToInt32(estadoAsis));
			actualizarAlertas3();
			MessageBox::Show("Diríjase a la Mesa 3 para asistir al comensal");
		}
		else {
			objAsistenteController->ModificarEstadoAsistencia(3, Convert::ToInt32(estadoAsis));
			actualizarAlertas3();
		}
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		//Este botón refrescar el estado de la faja, si falló o no
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		//Este botón actualiza el estado de la faja, si falló (Estado 1 por ejemplo) entonces se da click y su estado cambia a 0 (Error corregido O no hay error)
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
