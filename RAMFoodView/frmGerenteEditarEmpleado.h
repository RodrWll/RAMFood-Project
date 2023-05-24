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

	protected:
	private: Usuario^ objUsuario;


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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Correo:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(706, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 62);
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
			this->button2->Location = System::Drawing::Point(179, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 62);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Confirmar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(106, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 62);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Generar correo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(245, 262);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 24);
			this->comboBox1->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(245, 194);
			this->textBox4->MaxLength = 10;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 22);
			this->textBox4->TabIndex = 22;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::textBox4_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(245, 126);
			this->textBox2->MaxLength = 10;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(245, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmGerenteEditarEmpleado::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 30);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Puesto:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 29);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Apellido Materno:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 29);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Apellido Paterno:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 30);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Nombre:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label9->Location = System::Drawing::Point(241, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 24);
			this->label9->TabIndex = 29;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label7->Location = System::Drawing::Point(118, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 24);
			this->label7->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(23, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 24);
			this->label10->TabIndex = 30;
			this->label10->Text = L"ID:";
			// 
			// groupBox1
			// 
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
			this->groupBox1->Location = System::Drawing::Point(35, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(431, 401);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Información del empleado";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(527, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(519, 216);
			this->groupBox2->TabIndex = 32;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Nuevo correo:";
			// 
			// frmGerenteEditarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 452);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
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
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->Add("Gerente");
		this->comboBox1->Items->Add("Asistente");
		this->comboBox1->Items->Add("Chef");
		this->textBox1->Text = objUsuario->GetNombreUsuario();
		this->textBox2->Text = objUsuario->GetApellidoPat();
		this->textBox4->Text = objUsuario->GetApellidoMat();
		this->label9->Text = Convert::ToString(objUsuario->GetId());
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
	if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox4->Text == "") {
		MessageBox::Show("Faltan datos por llenar");
	}
	else if (this->comboBox1->Text == "")
	{
		MessageBox::Show("Seleccione profesión.");
	}
	else if (Tipo(this->comboBox1->Text) == 0) {
		MessageBox::Show("Seleccione profesión correcta.");
	}
	else {
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		
		objUsuario->SetNombreUsuario(this->textBox1->Text);
		objUsuario->SetApellidoPat(this->textBox2->Text);
		objUsuario->SetApellidoMat(this->textBox4->Text);
		objUsuario->setTipo(Tipo(this->comboBox1->Text));
		objUsuarioController->generarCorreo(objUsuario);
		//No se modifica el Id
		this->label7->Text = objUsuario->GetCorreo();
		this->button2->Enabled = true;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	objUsuarioController->UpdateUsuario(objUsuario);
	MessageBox::Show("El usuario ha sido modificado correctamente");
	this->Close();
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
