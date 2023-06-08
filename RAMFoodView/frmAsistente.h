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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;














	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cerrar Sesión";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAsistente::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(17, 40);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(433, 335);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAsistente::dataGridView1_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Comida/Bebida";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 131;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Cantidad";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 90;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio ";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 78;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Estado";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 79;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(14, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(471, 394);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mesa 1";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(397, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 22);
			this->button4->TabIndex = 3;
			this->button4->Text = L"C";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmAsistente::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(324, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 22);
			this->button3->TabIndex = 2;
			this->button3->Text = L"B";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmAsistente::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Location = System::Drawing::Point(503, 54);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(471, 394);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Mesa 2";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(397, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 22);
			this->button5->TabIndex = 13;
			this->button5->Text = L"C";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmAsistente::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(324, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(53, 22);
			this->button6->TabIndex = 12;
			this->button6->Text = L"B";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmAsistente::button6_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->Column5
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->Location = System::Drawing::Point(17, 40);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(433, 335);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAsistente::dataGridView2_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Comida/Bebida";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 131;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 90;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Precio ";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 78;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 79;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->dataGridView3);
			this->groupBox3->Location = System::Drawing::Point(989, 54);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(471, 394);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Mesa 3";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(397, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(53, 22);
			this->button7->TabIndex = 15;
			this->button7->Text = L"C";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmAsistente::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(324, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(53, 22);
			this->button8->TabIndex = 14;
			this->button8->Text = L"B";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmAsistente::button8_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->Column6
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView3->Location = System::Drawing::Point(17, 40);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->Size = System::Drawing::Size(433, 335);
			this->dataGridView3->TabIndex = 1;
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAsistente::dataGridView3_CellClick);
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Comida/Bebida";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 131;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 90;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Precio ";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 78;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Estado";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 79;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(168, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 30);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Enviar Pedido";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAsistente::button2_Click_1);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(680, 454);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 30);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Enviar Pedido";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmAsistente::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1179, 454);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 30);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Enviar Pedido";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmAsistente::button10_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button15);
			this->groupBox4->Controls->Add(this->button14);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->button11);
			this->groupBox4->Location = System::Drawing::Point(14, 490);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(471, 122);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Alertas";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(364, 81);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(85, 22);
			this->button15->TabIndex = 18;
			this->button15->Text = L"Atender";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &frmAsistente::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(364, 50);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(85, 22);
			this->button14->TabIndex = 16;
			this->button14->Text = L"Atender";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &frmAsistente::button14_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 22);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Asistencia requerida";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 22);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Cobrar la cuenta";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(365, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(85, 22);
			this->button11->TabIndex = 15;
			this->button11->Text = L"Refrescar";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmAsistente::button11_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->button17);
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->button12);
			this->groupBox5->Location = System::Drawing::Point(503, 490);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(471, 122);
			this->groupBox5->TabIndex = 14;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Alertas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 22);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Asistencia requerida";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 22);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Cobrar la cuenta";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(365, 81);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(85, 22);
			this->button17->TabIndex = 19;
			this->button17->Text = L"Atender";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &frmAsistente::button17_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(365, 50);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(85, 22);
			this->button16->TabIndex = 17;
			this->button16->Text = L"Atender";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &frmAsistente::button16_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(365, 12);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 22);
			this->button12->TabIndex = 16;
			this->button12->Text = L"Refrescar";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &frmAsistente::button12_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->label3);
			this->groupBox6->Controls->Add(this->button18);
			this->groupBox6->Controls->Add(this->button19);
			this->groupBox6->Controls->Add(this->button13);
			this->groupBox6->Location = System::Drawing::Point(989, 490);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(471, 122);
			this->groupBox6->TabIndex = 14;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Alertas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(193, 22);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Asistencia requerida";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 22);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Cobrar la cuenta";
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(365, 81);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(85, 22);
			this->button18->TabIndex = 21;
			this->button18->Text = L"Atender";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &frmAsistente::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(365, 50);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(85, 22);
			this->button19->TabIndex = 20;
			this->button19->Text = L"Atender";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &frmAsistente::button19_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(365, 12);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(85, 22);
			this->button13->TabIndex = 16;
			this->button13->Text = L"Refrescar";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &frmAsistente::button13_Click);
			// 
			// frmAsistente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1473, 622);
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
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"frmAsistente";
			this->Text = L"Asistente";
			this->Load += gcnew System::EventHandler(this, &frmAsistente::frmAsistente_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Cierra la ventana	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	//Carga la informacion de la mesa
	private: void actualizarPlatoGrilla1() {
		//AsistenteController^ objAsistenteController = gcnew AsistenteController();
		//List<Plato^>^ listaPlatos = objAsistenteController->listarPlatosPedidosMesa();
		PedidoController^ objPedidoController = gcnew PedidoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(1, listaPlatos, listaBebidas);
		mostrarPlato(listaPlatos, 1);
	}
	private: void actualizarPlatoGrilla2() {
		//AsistenteController^ objAsistenteController = gcnew AsistenteController();
		//List<Plato^>^ listaPlatos = objAsistenteController->listarPlatosPedidosMesa();
		PedidoController^ objPedidoController = gcnew PedidoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(2, listaPlatos, listaBebidas);
		mostrarPlato(listaPlatos, 2);
	}
	private: void actualizarPlatoGrilla3() {
		//AsistenteController^ objAsistenteController = gcnew AsistenteController();
		//List<Plato^>^ listaPlatos = objAsistenteController->listarPlatosPedidosMesa();
		PedidoController^ objPedidoController = gcnew PedidoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(3, listaPlatos, listaBebidas);
		mostrarPlato(listaPlatos, 3);
	}
	private: void actualizarBebidaGrilla1() {
		//AsistenteController^ objAsistenteController = gcnew AsistenteController();
		//List<Bebida^>^ listaBebidas = objAsistenteController->listarBebidasPedidosMesa();
		PedidoController^ objPedidoController = gcnew PedidoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(1, listaPlatos, listaBebidas);
		mostrarBebida(listaBebidas,1);
	}
	private: void actualizarBebidaGrilla2() {
		//AsistenteController^ objAsistenteController = gcnew AsistenteController();
		//List<Bebida^>^ listaBebidas = objAsistenteController->listarBebidasPedidosMesa();
		PedidoController^ objPedidoController = gcnew PedidoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(2, listaPlatos, listaBebidas);
		mostrarBebida(listaBebidas, 2);
	}
	private: void actualizarBebidaGrilla3() {
		//AsistenteController^ objAsistenteController = gcnew AsistenteController();
		//List<Bebida^>^ listaBebidas = objAsistenteController->listarBebidasPedidosMesa();
		PedidoController^ objPedidoController = gcnew PedidoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(3, listaPlatos, listaBebidas);
		mostrarBebida(listaBebidas, 3);
	}
	// Esta funcion es generica, le puedes poner la lista de platos de la mesa que quieras
	//Tendrias que adaptarla para que se muestre segun el data grid que quieras
	private: void mostrarPlato(List<Plato^>^ listaPedidos, int indice) {
		if(indice==1)
		{
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaPedidos->Count; i++) {
				Plato^ objPlato = listaPedidos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(4);
				filaGrilla[0] = objPlato->GetNombre();
				filaGrilla[1] = Convert::ToString(objPlato->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objPlato->GetPrecio());
				if (objPlato->GetEstado() == 0) {
					filaGrilla[3] = "En espera";
				}
				else if (objPlato->GetEstado() == 1) {
					filaGrilla[3] = "En preparación";
				}
				else if (objPlato->GetEstado() == 2) {
					filaGrilla[3] = "Listo para entregar";
				}
				else if (objPlato->GetEstado() == 3) {
					filaGrilla[3] = "Entregado";
				}
				this->dataGridView1->Rows->Add(filaGrilla);
			}
		}
		if (indice == 2)
		{
			this->dataGridView2->Rows->Clear();
			for (int i = 0; i < listaPedidos->Count; i++) {
				Plato^ objPlato = listaPedidos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(4);
				filaGrilla[0] = objPlato->GetNombre();
				filaGrilla[1] = Convert::ToString(objPlato->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objPlato->GetPrecio());
				if (objPlato->GetEstado() == 0) {
					filaGrilla[3] = "En espera";
				}
				else if (objPlato->GetEstado() == 1) {
					filaGrilla[3] = "En preparación";
				}
				else if (objPlato->GetEstado() == 2) {
					filaGrilla[3] = "Listo para entregar";
				}
				else if (objPlato->GetEstado() == 3) {
					filaGrilla[3] = "Entregado";
				}
				this->dataGridView2->Rows->Add(filaGrilla);
			}
		}
		if (indice == 3)
		{
			this->dataGridView3->Rows->Clear();
			for (int i = 0; i < listaPedidos->Count; i++) {
				Plato^ objPlato = listaPedidos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(4);
				filaGrilla[0] = objPlato->GetNombre();
				filaGrilla[1] = Convert::ToString(objPlato->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objPlato->GetPrecio());
				if (objPlato->GetEstado() == 0) {
					filaGrilla[3] = "En espera";
				}
				else if (objPlato->GetEstado() == 1) {
					filaGrilla[3] = "En preparación";
				}
				else if (objPlato->GetEstado() == 2) {
					filaGrilla[3] = "Listo para entregar";
				}
				else if (objPlato->GetEstado() == 3) {
					filaGrilla[3] = "Entregado";
				}
				this->dataGridView3->Rows->Add(filaGrilla);
			}
		}
}
	private: void mostrarBebida(List<Bebida^>^ listaPedidos, int indice) {
		if (indice == 1)
		{
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < listaPedidos->Count; i++) {
				Bebida^ objBebida = listaPedidos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(4);
				filaGrilla[0] = objBebida->GetNombre();
				filaGrilla[1] = Convert::ToString(objBebida->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objBebida->GetPrecio());
				if (objBebida->GetEstado() == 0) {
					filaGrilla[3] = "En espera";
				}
				else if (objBebida->GetEstado() == 1) {
					filaGrilla[3] = "En preparación";
				}
				else if (objBebida->GetEstado() == 2) {
					filaGrilla[3] = "Listo para entregar";
				}
				else if (objBebida->GetEstado() == 3) {
					filaGrilla[3] = "Entregado";
				}
				this->dataGridView1->Rows->Add(filaGrilla);
			}
		}
		if (indice == 2)
		{
			this->dataGridView2->Rows->Clear();
			for (int i = 0; i < listaPedidos->Count; i++) {
				Bebida^ objBebida = listaPedidos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(4);
				filaGrilla[0] = objBebida->GetNombre();
				filaGrilla[1] = Convert::ToString(objBebida->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objBebida->GetPrecio());
				if (objBebida->GetEstado() == 0) {
					filaGrilla[3] = "En espera";
				}
				else if (objBebida->GetEstado() == 1) {
					filaGrilla[3] = "En preparación";
				}
				else if (objBebida->GetEstado() == 2) {
					filaGrilla[3] = "Listo para entregar";
				}
				else if (objBebida->GetEstado() == 3) {
					filaGrilla[3] = "Entregado";
				}
				this->dataGridView2->Rows->Add(filaGrilla);
			}
		}
		if (indice == 3)
		{
			this->dataGridView3->Rows->Clear();
			for (int i = 0; i < listaPedidos->Count; i++) {
				Bebida^ objBebida = listaPedidos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(4);
				filaGrilla[0] = objBebida->GetNombre();
				filaGrilla[1] = Convert::ToString(objBebida->GetCantidadPedida());
				filaGrilla[2] = Convert::ToString(objBebida->GetPrecio());
				if (objBebida->GetEstado() == 0) {
					filaGrilla[3] = "En espera";
				}
				else if (objBebida->GetEstado() == 1) {
					filaGrilla[3] = "En preparación";
				}
				else if (objBebida->GetEstado() == 2) {
					filaGrilla[3] = "Listo para entregar";
				}
				else if (objBebida->GetEstado() == 3) {
					filaGrilla[3] = "Entregado";
				}
				this->dataGridView3->Rows->Add(filaGrilla);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		
		actualizarPlatoGrilla1();
	}

	private: System::Void frmAsistente_Load(System::Object^ sender, System::EventArgs^ e) {
		this->button2->Enabled = false;
		this->button9->Enabled = false;
		this->button10->Enabled = false;
		this->button14->Enabled = false;
		this->button15->Enabled = false;
		this->button16->Enabled = false;
		this->button17->Enabled = false;
		this->button18->Enabled = false;
		this->button19->Enabled = false;
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarPlatoGrilla1();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarBebidaGrilla1();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarPlatoGrilla2();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarPlatoGrilla3();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarBebidaGrilla2();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		actualizarBebidaGrilla3();
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		PedidoController^ objPedidoController = gcnew PedidoController();
		productoController^ objProductoController = gcnew productoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(1, listaPlatos, listaBebidas);

		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ nombre = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

		int cantidad = Convert::ToDouble(this->dataGridView1->Rows[filaSeleccionada]->Cells[1]->Value->ToString());
		double precio = Convert::ToDouble(this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString());
		if ("Listo para entregar" == this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString()) {
			objPedidoController->ModificarEstadoPedido(objProductoController->buscarIdxNombre(nombre), cantidad, 3, 1);
			actualizarPlatoGrilla1();
		}
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int estado = "Listo para entregar" == (this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
		if (estado) {
			button2->Enabled = true;
		}
		else {
			button2->Enabled = false;
		}
	}
	private: System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int filaSeleccionada = this->dataGridView2->SelectedRows[0]->Index;
		int estado = "Listo para entregar" == (this->dataGridView2->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
		if (estado) {
			button9->Enabled = true;
		}
		else {
			button9->Enabled = false;
		}
	}
	private: System::Void dataGridView3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int filaSeleccionada = this->dataGridView3->SelectedRows[0]->Index;
		int estado = "Listo para entregar" == (this->dataGridView3->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
		if (estado) {
			button10->Enabled = true;
		}
		else {
			button10->Enabled = false;
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		PedidoController^ objPedidoController = gcnew PedidoController();
		productoController^ objProductoController = gcnew productoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(2, listaPlatos, listaBebidas);
		int filaSeleccionada = this->dataGridView2->SelectedRows[0]->Index;
		String^ nombre = this->dataGridView2->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

		int cantidad = Convert::ToDouble(this->dataGridView2->Rows[filaSeleccionada]->Cells[1]->Value->ToString());
		double precio = Convert::ToDouble(this->dataGridView2->Rows[filaSeleccionada]->Cells[2]->Value->ToString());
		if ("Listo para entregar" == this->dataGridView2->Rows[filaSeleccionada]->Cells[3]->Value->ToString()) {
			objPedidoController->ModificarEstadoPedido(objProductoController->buscarIdxNombre(nombre), cantidad, 3, 2);
			actualizarPlatoGrilla2();
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		PedidoController^ objPedidoController = gcnew PedidoController();
		productoController^ objProductoController = gcnew productoController();
		List<Plato^>^ listaPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaBebidas = gcnew List<Bebida^>();
		objPedidoController->ListarPedidosMesa(3, listaPlatos, listaBebidas);
		int filaSeleccionada = this->dataGridView3->SelectedRows[0]->Index;
		String^ nombre = this->dataGridView3->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

		int cantidad = Convert::ToDouble(this->dataGridView3->Rows[filaSeleccionada]->Cells[1]->Value->ToString());
		double precio = Convert::ToDouble(this->dataGridView3->Rows[filaSeleccionada]->Cells[2]->Value->ToString());
		if ("Listo para entregar" == this->dataGridView3->Rows[filaSeleccionada]->Cells[3]->Value->ToString()) {
			objPedidoController->ModificarEstadoPedido(objProductoController->buscarIdxNombre(nombre), cantidad, 3, 3);
			actualizarPlatoGrilla3();
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
		}
		else {
			objAsistenteController->ModificarEstadoAsistencia(1, Convert::ToInt32(estadoAsis));
			actualizarAlertas1();
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) { //Cobranza mesa 3
		AsistenteController^ objAsistenteController = gcnew AsistenteController();
		String^ estadoCob = objAsistenteController->LeerArchivoEstadoCobranza(1);
		if (estadoCob == "1") {
			objAsistenteController->ModificarEstadoCobranza(3, Convert::ToInt32(estadoCob));
			actualizarAlertas3();
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
		}
		else {
			objAsistenteController->ModificarEstadoAsistencia(3, Convert::ToInt32(estadoAsis));
			actualizarAlertas3();
		}
	}
};
}
