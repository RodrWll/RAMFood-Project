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
	using namespace System::Globalization;
	using namespace System::Windows::Forms::VisualStyles;

	/// <summary>
	/// Summary for frmGerenteEditarEmpleado
	/// </summary>
	public ref class frmGerenteEditarEmpleado : public System::Windows::Forms::Form
	{
	public:
		frmGerenteEditarEmpleado(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmGerenteEditarEmpleado(Usuario^ usuarioModificar)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->objUsuario = usuarioModificar;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmGerenteEditarEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: Usuario^ objUsuario;
	private: Gerente^ objGerente;
	private: Asistente^ objAsistente;
	private: Chef^ objChef;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGerenteEditarEmpleado::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label5->Location = System::Drawing::Point(18, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 22);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Correo:";
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
			this->button3->Location = System::Drawing::Point(854, 379);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 62);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Regresar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->Location = System::Drawing::Point(164, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 57);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Confirmar cambios";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::button2_Click);
			this->button2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGerenteEditarEmpleado::button1_Paint);
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
			this->button1->Location = System::Drawing::Point(110, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 50);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Aplicar cambios";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::button1_Click);
			this->button1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmGerenteEditarEmpleado::button1_Paint);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(226, 227);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 30);
			this->comboBox1->TabIndex = 23;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::comboBox1_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->textBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox4->Location = System::Drawing::Point(226, 172);
			this->textBox4->MaxLength = 10;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 30);
			this->textBox4->TabIndex = 22;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::textBox4_TextChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(224, 118);
			this->textBox2->MaxLength = 10;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 30);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::textBox4_TextChanged_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(226, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 30);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 30);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Rol:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 29);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Apellido Materno:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 29);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Apellido Paterno:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 30);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Nombre:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label9->Location = System::Drawing::Point(310, 28);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 26);
			this->label9->TabIndex = 29;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label7->Location = System::Drawing::Point(118, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 22);
			this->label7->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(23, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 22);
			this->label10->TabIndex = 30;
			this->label10->Text = L"ID:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->groupBox1->Location = System::Drawing::Point(35, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(422, 427);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Información del empleado";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(226, 286);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(174, 30);
			this->dateTimePicker1->TabIndex = 32;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(23, 292);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(205, 32);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Fecha de contrato:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->groupBox2->Location = System::Drawing::Point(527, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(519, 216);
			this->groupBox2->TabIndex = 32;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Correo actual:";
			// 
			// frmGerenteEditarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1058, 467);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmGerenteEditarEmpleado";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"frmGerenteEditarEmpleado";
			this->Load += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::frmGerenteEditarEmpleado_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmGerenteEditarEmpleado_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->Add("Gerente");
		this->comboBox1->Items->Add("Asistente");
		this->comboBox1->Items->Add("Chef");
		/*this->textBox1->Text = objUsuario->GetNombreUsuario();
		this->textBox2->Text = objUsuario->GetApellidoPat();
		this->textBox4->Text = objUsuario->GetApellidoMat();*/
		this->label9->Text = "000" + Convert::ToString(objUsuario->GetId());
		String^ fecha = objUsuario->GetFechaContrato();
		DateTime fechaSeleccionada;
		String^ formatoFecha = "dd/MM/yyyy";
		groupBox2->Text = "Correo actual:";

		//if (DateTime::TryParseExact(fecha, formatoFecha, CultureInfo::InvariantCulture, DateTimeStyles::None, fechaSeleccionada))
		//{
		//	// Establecer la fecha en el DateTimePicker
		//	dateTimePicker1->Value = fechaSeleccionada;
		//}
		//else
		//{
		//	// La cadena de fecha no tiene el formato esperado
		//	// Manejar el error o mostrar un mensaje al usuario
		//}
		
		switch (objUsuario->GetRol())
		{
		case 1:
			//this->comboBox1->Text = "Gerente";
			this->comboBox1->SelectedIndex = 0;
			objGerente = dynamic_cast<Gerente^>(objUsuario);
			this->textBox1->Text = objGerente->GetNombre();
			this->textBox2->Text = objGerente->GetApellidoPat();
			this->textBox4->Text = objGerente->GetApellidoMat();
			this->dateTimePicker1->Text = objGerente->GetFechaContrato();
			break;
		case 2:
			//this->comboBox1->Text = "Asistente";
			this->comboBox1->SelectedIndex = 1;
			objAsistente = dynamic_cast<Asistente^>(objUsuario);
			this->textBox1->Text = objAsistente->GetNombre();
			this->textBox2->Text = objAsistente->GetApellidoPat();
			this->textBox4->Text = objAsistente->GetApellidoMat();
			this->dateTimePicker1->Text = objAsistente->GetFechaContrato();

			break;
		case 3:
			//this->comboBox1->Text = "Chef";
			this->comboBox1->SelectedIndex = 2;
			objChef = dynamic_cast<Chef^>(objUsuario);
			this->textBox1->Text = objChef->GetNombre();
			this->textBox2->Text = objChef->GetApellidoPat();
			this->textBox4->Text = objChef->GetApellidoMat();
			this->dateTimePicker1->Text = objChef->GetFechaContrato();
			break;
		default:
			break;
		}
		button1->Enabled = false;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: int VerificaRol(String^ puesto) {
	if (puesto == "Gerente") {
		return 1;
	}
	if (puesto == "Asistente") {
		return 2;
	}
	if (puesto == "Chef") {
		return 3;
	}
	else {
		return 0;
	}
}
private:void obtenerNuevaInfo() {
	empleadoController^ objUsuarioController = gcnew empleadoController();
	int Rol = this->VerificaRol(this->comboBox1->Text);
	String^ nombre = this->textBox1->Text;
	String^ apellidoPat = this->textBox2->Text;
	String^ apellidoMat = this->textBox4->Text;
	String^ correo = objUsuarioController->generarCorreo(apellidoPat, apellidoMat);
	int id = Convert::ToInt32(this->label9->Text);

	switch (Rol)
	{
	case 1:
		objGerente = gcnew Gerente(objUsuario->GetId(), Rol, 1, objUsuario->GetFechaContrato(), nullptr, correo, objUsuario->GetContrasenha(), nombre, apellidoPat, apellidoMat);
		break;
	case 2:
		objAsistente = gcnew Asistente(objUsuario->GetId(), Rol, 1, objUsuario->GetFechaContrato(), nullptr, correo, objUsuario->GetContrasenha(), nombre, apellidoPat, apellidoMat);
		break;
	case 3:
		objChef = gcnew Chef(objUsuario->GetId(), Rol, 1, objUsuario->GetFechaContrato(), nullptr, correo, objUsuario->GetContrasenha(), nombre, apellidoPat, apellidoMat);
		break;
	default:
		break;
	}
	groupBox2->Text = "Correo nuevo:";
	this->label7->Text = correo;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox4->Text == "") {
		MessageBox::Show("Faltan datos por llenar");
	}
	else if (this->comboBox1->Text == "")
	{
		MessageBox::Show("Seleccione profesión.");
	}
	else if (VerificaRol(this->comboBox1->Text) == 0) {
		MessageBox::Show("Seleccione profesión correcta.");
	}
	else {
		obtenerNuevaInfo();
		this->button2->Enabled = true;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	empleadoController^ objUsuarioController = gcnew empleadoController();
	int Rol = this->VerificaRol(this->comboBox1->Text);
	obtenerNuevaInfo();
	switch (Rol)
	{
	case 1:
		objUsuarioController->UpdateUsuario(objGerente);
		
		break;
	case 2:
		objUsuarioController->UpdateUsuario(objAsistente);
		break;
	case 3:
		objUsuarioController->UpdateUsuario(objChef);
		break;
	default:
		break;
	}
	MessageBox::Show("El usuario ha sido modificado correctamente");
	this->Close();
}
private: System::Void textBox4_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = false;
	empleadoController^ objController = gcnew empleadoController();
	String^ apellidoPat = this->textBox2->Text;
	String^ apellidoMat = this->textBox4->Text;
	String^ correo = objController->generarCorreo(apellidoPat, apellidoMat);
	groupBox2->Text = "Correo nuevo:";
	label7->Text = correo;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	button2->Enabled = false;
	button1->Enabled = true;

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	button2->Enabled = false;
	button1->Enabled = true;

}
private: System::Void button1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}