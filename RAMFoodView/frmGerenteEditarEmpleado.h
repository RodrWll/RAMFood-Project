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
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:
	private: Usuario^ objUsuario;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->SuspendLayout();
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(696, 176);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(217, 22);
			this->textBox5->TabIndex = 30;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(696, 113);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 22);
			this->textBox3->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(534, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 24);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Contraseña:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(534, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Correo:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(431, 415);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 65);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Regresar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::button3_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(637, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(206, 62);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Editar empleado";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(155, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 62);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Generar credenciales";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(257, 266);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 24);
			this->comboBox1->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(257, 178);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 22);
			this->textBox4->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(257, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(257, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 30);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Puesto:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 29);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Apellido Materno:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 29);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Apellido Paterno:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 30);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Nombre:";
			// 
			// frmGerenteEditarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 515);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmGerenteEditarEmpleado";
			this->Text = L"frmGerenteEditarEmpleado";
			this->Load += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::frmGerenteEditarEmpleado_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmGerenteEditarEmpleado_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->Add("Gerente");
		this->comboBox1->Items->Add("Asistente");
		this->comboBox1->Items->Add("Chef");
		this->textBox1->Text = objUsuario->GetNombreUsuario();
		this->textBox2->Text = objUsuario->GetApellidoPat();
		this->textBox4->Text = objUsuario->GetApellidoMat();
		switch (objUsuario->GetTipo())
		{
		case 1:
			//this->comboBox1->Text = "Gerente";
			this->comboBox1->SelectedIndex = 0;
			break;
		case 2:
			//this->comboBox1->Text = "Asistente";
			this->comboBox1->SelectedIndex = 1;
			break;
		case 3:
			//this->comboBox1->Text = "Chef";
			this->comboBox1->SelectedIndex = 2;
			break;
		default:
			break;
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   private: int Tipo(String^ puesto) {
		   if (puesto == "Gerente") {
			   return 1;
		   }
		   if (puesto == "Asistente") {
			   return 2;
		   }
		   if (puesto == "Chef") {
			   return 3;
		   }
	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox4->Text == "" || this->comboBox1->Text == "") {
		MessageBox::Show("Faltan datos por llenar");
	}
	else {
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		objUsuarioController->generarCorreo(objUsuario);
		objUsuarioController->generarContrasenha(objUsuario);
		objUsuario->SetNombreUsuario(this->textBox1->Text);
		objUsuario->SetApellidoPat(this->textBox2->Text);
		objUsuario->SetApellidoMat(this->textBox4->Text);
		objUsuario->setTipo(Tipo(this->comboBox1->Text));
		//No se modifica el Id
		this->textBox3->Text = objUsuario->GetCorreo();
		this->textBox5->Text = objUsuario->GetContrasenha();
		this->button2->Enabled = true;
		
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	objUsuarioController->UpdateUsuario(objUsuario);
	MessageBox::Show("El usuario ha sido modificado correctamente");
	this->Close();
}
};
}
