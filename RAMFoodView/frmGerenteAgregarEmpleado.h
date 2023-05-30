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
	using namespace RAMFoodController;
	/// <summary>
	/// Summary for frmGerenteAgregarEmpleado
	/// </summary>
	public ref class frmGerenteAgregarEmpleado : public System::Windows::Forms::Form
	{
	public:
		frmGerenteAgregarEmpleado(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->objUsuario = gcnew Usuario();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmGerenteAgregarEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: Usuario^ objUsuario;
	private: Gerente^ objGerente;
	private: Asistente^ objAsistente;
	private: Chef^ objChef;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGerenteAgregarEmpleado::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(53, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido Paterno:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(53, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido Materno:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(53, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 30);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Puesto:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(275, 43);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 32);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(275, 105);
			this->textBox2->MaxLength = 10;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 32);
			this->textBox2->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(275, 173);
			this->textBox4->MaxLength = 10;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 32);
			this->textBox4->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Location = System::Drawing::Point(275, 258);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 32);
			this->comboBox1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(153, 337);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 62);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Generar credenciales";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteAgregarEmpleado::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(215, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 62);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Añadir empleado";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteAgregarEmpleado::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(777, 378);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(191, 65);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Regresar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerenteAgregarEmpleado::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(22, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Correo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(22, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Contraseña:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label7->Location = System::Drawing::Point(180, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 24);
			this->label7->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label8->Location = System::Drawing::Point(180, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 24);
			this->label8->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label9->Location = System::Drawing::Point(180, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 24);
			this->label9->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(22, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 24);
			this->label10->TabIndex = 19;
			this->label10->Text = L"ID:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(44, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(478, 425);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del nuevo empleado:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(562, 44);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(550, 315);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Credenciales";
			// 
			// frmGerenteAgregarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(1165, 511);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmGerenteAgregarEmpleado";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"frmGerenteAgregarEmpleado";
			this->Load += gcnew System::EventHandler(this, &frmGerenteAgregarEmpleado::frmGerenteAgregarEmpleado_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmGerenteAgregarEmpleado_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->Add("");
		this->comboBox1->Items->Add("Gerente");
		this->comboBox1->Items->Add("Asistente");
		this->comboBox1->Items->Add("Chef");
		this->comboBox1->SelectedIndex = 0;
		comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
	}
	private: int Rol(String^ puesto) {
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	empleadoController^ objUsuarioController = gcnew empleadoController();
	int rol = this->comboBox1->SelectedIndex;
	switch (rol)
	{
	case 1:
		objUsuarioController->AddUsuario(objGerente);
		break;
	case 2:
		objUsuarioController->AddUsuario(objAsistente);
		break;
	case 3:
		objUsuarioController->AddUsuario(objChef);
		break;
	default:
		break;
	}
	MessageBox::Show( "Usuario Agregado" );
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   
	  
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox4->Text == "") {
		MessageBox::Show("Faltan datos por llenar");
	}
	else if (this->comboBox1->Text == "")
	{
		MessageBox::Show("Seleccione profesión.");
		
	}
	else if (Rol(this->comboBox1->Text) == 0) {
		MessageBox::Show("Seleccione profesión correcta.");		
	}else {
		empleadoController^ objUsuarioController = gcnew empleadoController();

		objUsuarioController->generarId(objUsuario);
		int rol = this->comboBox1->SelectedIndex;


		objUsuario->SetStatus(1);
		//Poner la fecha de contrato
		//
		objUsuario->SetFechaContrato(DateTime::Now.ToString("dd/MM/yyyy"));
		//No se pone la fecha de despido 
		String^ fechaContrato = DateTime::Now.ToString("dd/MM/yyyy");
		//objUsuarioController->generarCorreo(objUsuario);
		objUsuarioController->generarContrasenha(objUsuario);
		
		String^ nombre = this->textBox1->Text;
		String^ apellidoPat = this->textBox2->Text;
		String^ apellidoMat = this->textBox4->Text;

		switch (rol)
		{
		case 1:
			objGerente = gcnew Gerente(objUsuario->GetId(), rol, 1, fechaContrato, nullptr, objUsuarioController->generarCorreo(apellidoPat, apellidoMat), objUsuario->GetContrasenha(), nombre, apellidoPat, apellidoMat);
			this->label7->Text = objGerente->GetCorreo();
			this->label8->Text = objGerente->GetContrasenha();
			this->label9->Text = Convert::ToString(objGerente->GetId());
			break;
		case 2:
			objAsistente = gcnew Asistente(objUsuario->GetId(), rol, 1, fechaContrato, nullptr, objUsuarioController->generarCorreo(apellidoPat, apellidoMat), objUsuario->GetContrasenha(), nombre, apellidoPat, apellidoMat);
			this->label7->Text = objAsistente->GetCorreo();
			this->label8->Text = objAsistente->GetContrasenha();
			this->label9->Text = Convert::ToString(objAsistente->GetId());
			break;
		case 3:
			objChef = gcnew Chef(objUsuario->GetId(), rol, 1, fechaContrato, nullptr, objUsuarioController->generarCorreo(apellidoPat, apellidoMat), objUsuario->GetContrasenha(), nombre, apellidoPat, apellidoMat);
			this->label7->Text = objChef->GetCorreo();
			this->label8->Text = objChef->GetContrasenha();
			this->label9->Text = Convert::ToString(objChef->GetId());
			break;
		default:
			break;
		}

		/*objUsuario->SetNombreUsuario(this->textBox1->Text);
		objUsuario->SetApellidoPat(this->textBox2->Text);
		objUsuario->SetApellidoMat(this->textBox4->Text);
		objUsuario->SetRol( Rol(this->comboBox1->Text));*/
		
		/*this->label7->Text = objUsuario->GetCorreo();
		this->label8->Text = objUsuario->GetContrasenha();
		this->label9->Text = Convert::ToString(objUsuario->GetId());*/
		this->button2-> Enabled = true;
	}
}
};
}
