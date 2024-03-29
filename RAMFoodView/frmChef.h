#pragma once
#include "frmChefConfirmacionDeOrdenTerminada.h"
#include "frmChefMenuDia.h"
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
	/// Summary for frmChef
	/// </summary>
	public ref class frmChef : public System::Windows::Forms::Form
	{
	public:
		frmChef(void)
		{
			InitializeComponent();
			this->idPedidoChef = 0;
			this->idProductoPedidoChef = 0;
			//
			//TODO: Add the constructor code here
			//
		}
		frmChef(Chef^ objChef)
		{
			InitializeComponent();
			this->idPedidoChef = 0;
			this->idProductoPedidoChef = 0;
			this->objChef = objChef;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmChef()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: Chef^ objChef = gcnew Chef();


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::DataGridView^ dataGridView2;





	private: int idPedidoChef;
	private: int idProductoPedidoChef;





	private: System::Windows::Forms::Button^ button3;








	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label6;










	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;





















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmChef::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
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
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column1, this->Column3, this->Column2
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::AliceBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::MenuText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView1->Location = System::Drawing::Point(13, 167);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
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
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(489, 335);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Id";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Visible = false;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"PLATO";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"CANTIDAD";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ESTADO";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Visible = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1056, 189);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 88);
			this->button1->TabIndex = 1;
			this->button1->Text = L"TOMAR ORDEN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmChef::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1056, 304);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 94);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ORDEN TERMINADA";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmChef::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
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
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->ColumnHeadersHeight = 29;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column7,
					this->dataGridViewTextBoxColumn1, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn2
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::AliceBlue;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView2->Location = System::Drawing::Point(526, 167);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(500, 335);
			this->dataGridView2->TabIndex = 6;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Id";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"BEBIDA";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"CANTIDAD";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"ESTADO";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Visible = false;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button3->Location = System::Drawing::Point(440, 27);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 63);
			this->button3->TabIndex = 9;
			this->button3->Text = L"ACTUALIZAR PEDIDOS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmChef::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(1056, 439);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 58);
			this->button4->TabIndex = 10;
			this->button4->Text = L"MENU";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmChef::button4_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 532);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 40);
			this->label1->TabIndex = 11;
			this->label1->Text = L"USTED SE ENCARGANDO DE : ";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(380, 536);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 33);
			this->label2->TabIndex = 12;
			this->label2->Text = L"****";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(836, 536);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 33);
			this->label6->TabIndex = 14;
			this->label6->Text = L"****";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->dataGridView2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 13);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Size = System::Drawing::Size(1241, 599);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(522, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 22);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Lista de bebidas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 22);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Lista de platos";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(672, 532);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 40);
			this->label7->TabIndex = 15;
			this->label7->Text = L"CANTIDAD: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label5->Location = System::Drawing::Point(8, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 26);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Bienvenido, ....";
			// 
			// frmChef
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1269, 625);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmChef";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chef";
			this->Load += gcnew System::EventHandler(this, &frmChef::frmChef_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: void mostrarGrillaPlatos(List<ProductoPedido^>^ listaPlatos) {
	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaPlatos->Count; i++) {
		ProductoPedido^ objProductoPedido = listaPlatos[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objProductoPedido->GetId());
		filaGrilla[1] = objProductoPedido->GetObjProducto()->GetNombre();
		filaGrilla[2] = Convert::ToString(objProductoPedido->GetCantidadPedida());
		filaGrilla[3] = Convert::ToString(objProductoPedido->GetEstado());
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}
private: void mostrarGrillaBebidas(List<ProductoPedido^>^ listaBebidas) {
	this->dataGridView2->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaBebidas->Count; i++) {
		ProductoPedido^ objProductoPedido = listaBebidas[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objProductoPedido->GetId());
		filaGrilla[1] = objProductoPedido->GetObjProducto()->GetNombre();
		filaGrilla[2] = Convert::ToString(objProductoPedido->GetCantidadPedida());
		filaGrilla[3] = Convert::ToString(objProductoPedido->GetEstado());
		this->dataGridView2->Rows->Add(filaGrilla);
	}
}
private: void actualizarGrilla() {
	OrdenController^ objOrdenController = gcnew OrdenController();
	List<ProductoPedido^>^ listaPlatosPedidos = gcnew List<ProductoPedido^>();
	List<ProductoPedido^>^ listaBebidasPedidos = gcnew List<ProductoPedido^>();
	//Tipo 1: bebida
	//TIpo 2: plato
	String^ chef = "chef";
	listaBebidasPedidos = objOrdenController->buscarListaBebidasPedidos("NewComensal//pedidoMesaGeneral.txt", chef);
	listaPlatosPedidos = objOrdenController->buscarListaPlatosPedidos("NewComensal//pedidoMesaGeneral.txt", chef);
	mostrarGrillaPlatos(listaPlatosPedidos);
	mostrarGrillaBebidas(listaBebidasPedidos);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	OrdenController^ objOrdenController = gcnew OrdenController();
	List<ProductoPedido^>^ listaPlatosPedidos = gcnew List<ProductoPedido^>();
	List<ProductoPedido^>^ listaBebidasPedidos = gcnew List<ProductoPedido^>();

	//Tipo 1: bebida
	//TIpo 2: plato
	String^ chef = "chef";
	listaBebidasPedidos = objOrdenController->buscarListaBebidasPedidos("NewComensal//pedidoMesaGeneral.txt", chef);
	listaPlatosPedidos = objOrdenController->buscarListaPlatosPedidos("NewComensal//pedidoMesaGeneral.txt", chef);

	mostrarGrillaPlatos(listaPlatosPedidos);
	mostrarGrillaBebidas(listaBebidasPedidos);
}
private: Void actualizar() {
	OrdenController^ objOrdenController = gcnew OrdenController();
	List<ProductoPedido^>^ listaPlatosPedidos = gcnew List<ProductoPedido^>();
	List<ProductoPedido^>^ listaBebidasPedidos = gcnew List<ProductoPedido^>();
	//Tipo 1: bebida
	//TIpo 2: plato
	String^ chef = "chef";
	listaBebidasPedidos = objOrdenController->buscarListaBebidasPedidos("NewComensal//pedidoMesaGeneral.txt", chef);
	listaPlatosPedidos = objOrdenController->buscarListaPlatosPedidos("NewComensal//pedidoMesaGeneral.txt", chef);
	mostrarGrillaPlatos(listaPlatosPedidos);
	mostrarGrillaBebidas(listaBebidasPedidos);
	ProductoPedido^ objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedidoChef, idProductoPedidoChef);
	if (objProductoPedido->GetEstado() == 1) {
		this->label2->Text = objProductoPedido->GetObjProducto()->GetNombre();
		this->label6->Text = Convert::ToString(objProductoPedido->GetCantidadPedida());
	}
	else {
		this->label2->Text = "";
		this->label6->Text = "";
	}


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OrdenController^ objOrdenController = gcnew OrdenController();
	List<String^>^ listaIdsPlatosPedidos = gcnew List<String^>();
	List<String^>^ listaIdsBebidasPedidos = gcnew List<String^>();
	listaIdsPlatosPedidos = objOrdenController->buscarListaIdsPlatos("NewComensal//pedidoMesaGeneral.txt");
	listaIdsBebidasPedidos = objOrdenController->buscarListaIdsBebidas("NewComensal//pedidoMesaGeneral.txt");
	String^ nombreSeleccionado;
	int idProductoPedido;
	int idPedido;

	if ((this->dataGridView1->SelectedRows->Count) > 0) {
		String^ filaSeleccionada = Convert::ToString(this->dataGridView1->SelectedRows[0]->Index);
		idProductoPedido = Convert::ToInt32(this->dataGridView1->Rows[Convert::ToInt32(filaSeleccionada)]->Cells[0]->Value->ToString());
		idPedido = Convert::ToInt32(listaIdsPlatosPedidos[Convert::ToInt32(filaSeleccionada)]);
	}
	else if ((this->dataGridView2->SelectedRows->Count) > 0) {
		String^ filaSeleccionada = Convert::ToString(this->dataGridView2->SelectedRows[0]->Index);
		idProductoPedido = Convert::ToInt32(this->dataGridView2->Rows[Convert::ToInt32(filaSeleccionada)]->Cells[0]->Value->ToString());
		idPedido = Convert::ToInt32(listaIdsBebidasPedidos[Convert::ToInt32(filaSeleccionada)]);
	}
	else {
		MessageBox::Show("Debe seleccionar un plato o bebida");
		return;
	}
	ProductoPedido^ objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedido, idProductoPedido);
	if ((objProductoPedido->GetEstado()) == 0) {
		objOrdenController->actualizarEstado(idPedido, idProductoPedido, 1);
		productoController^ objProductoController = gcnew productoController();
		MessageBox::Show("Usted ha seleccionado el plato " + objProductoController->buscarProductoxId(objOrdenController->buscarObjProducto(idPedido, idProductoPedido)->GetId())->GetNombre());
		this->button1->Enabled = false;
		this->button2->Enabled = true;
		this->idPedidoChef = idPedido;
		this->idProductoPedidoChef = idProductoPedido;
		this->dataGridView1->Enabled = false;
		this->dataGridView2->Enabled = false;
		actualizar();


	}
	else {
		MessageBox::Show("Este plato ya esta siendo preparado");
	}

	actualizarGrilla();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	OrdenController^ objOrdenController = gcnew OrdenController();
	List<String^>^ listaIdsPlatosPedidos = gcnew List<String^>();
	List<String^>^ listaIdsBebidasPedidos = gcnew List<String^>();
	listaIdsPlatosPedidos = objOrdenController->buscarListaIdsPlatos("NewComensal//pedidoMesaGeneral.txt");
	listaIdsBebidasPedidos = objOrdenController->buscarListaIdsBebidas("NewComensal//pedidoMesaGeneral.txt");
	int idProductoPedido;
	int idPedido;

	/*if ((this->dataGridView1->SelectedRows->Count) > 0) {
		String^ filaSeleccionada = Convert::ToString(this->dataGridView1->SelectedRows[0]->Index);
		idProductoPedido = Convert::ToInt32(this->dataGridView1->Rows[Convert::ToInt32(filaSeleccionada)]->Cells[0]->Value->ToString());
		idPedido = Convert::ToInt32(listaIdsPlatosPedidos[Convert::ToInt32(filaSeleccionada)]);
	}
	else if ((this->dataGridView2->SelectedRows->Count) > 0) {
		String^ filaSeleccionada = Convert::ToString(this->dataGridView2->SelectedRows[0]->Index);
		idProductoPedido = Convert::ToInt32(this->dataGridView2->Rows[Convert::ToInt32(filaSeleccionada)]->Cells[0]->Value->ToString());
		idPedido = Convert::ToInt32(listaIdsBebidasPedidos[Convert::ToInt32(filaSeleccionada)]);
	}
	else {
		MessageBox::Show("Debe seleccionar un plato o bebida");
		return;
	}


	ProductoPedido^ objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedido, idProductoPedido);
	if ((objProductoPedido->GetEstado()) == 1) {
		objOrdenController->actualizarEstado(idPedido, idProductoPedido, 1);
		frmChefConfirmacionDeOrdenTerminada^ VentaConfirmacion = gcnew frmChefConfirmacionDeOrdenTerminada(idPedido, idProductoPedido);
		VentaConfirmacion->ShowDialog();
		objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedido, idProductoPedido);
		if (objProductoPedido->GetEstado() == 2){
			this->button1->Enabled = true;
		}
	}
	else {
		MessageBox::Show("Este plato todavia no esta siendo preparado");
	}*/
	ProductoPedido^ objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedidoChef, idProductoPedidoChef);
	if ((objProductoPedido->GetEstado()) == 1) {
		frmChefConfirmacionDeOrdenTerminada^ VentaConfirmacion = gcnew frmChefConfirmacionDeOrdenTerminada(idPedidoChef, idProductoPedidoChef);
		VentaConfirmacion->ShowDialog();
		objProductoPedido = objOrdenController->buscarProductoPedidoxId(idPedidoChef, idProductoPedidoChef);
		if (objProductoPedido->GetEstado() == 2) {
			this->button1->Enabled = true;
			this->dataGridView1->Enabled = true;
			this->dataGridView2->Enabled = true;
			actualizar();
		}
	}
	else {
		MessageBox::Show("Este plato todavia no esta siendo preparado");
	}
	
}
private: System::Void frmChef_Load(System::Object^ sender, System::EventArgs^ e) {
	this->button2->Enabled = false;
	actualizarGrilla();
	this->label5->Text = "Bienvenido, " + objChef->GetNombre() + " " + objChef->GetApellidoPat() + " " + objChef->GetApellidoMat();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	frmChefMenuDia^ objFrmChefMenuDia = gcnew frmChefMenuDia();
	objFrmChefMenuDia->ShowDialog();
}
};
}
