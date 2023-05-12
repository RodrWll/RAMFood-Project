#pragma once
#include "frmAsistente.h"
#include "frmChef.h"
#include "frmGerente.h"


namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RAMFoodController;

	/// <summary>
	/// Resumen de frmPersonal
	/// </summary>
	public ref class frmPersonal : public System::Windows::Forms::Form
	{
	public:
		frmPersonal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPersonal::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(166, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(214, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &frmPersonal::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(191, 237);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 43);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido";
			this->label1->Click += gcnew System::EventHandler(this, &frmPersonal::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Atrás";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPersonal::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(345, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmPersonal::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 456);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 30);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Ingresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPersonal::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(87, 283);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(367, 76);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Usuario";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(87, 365);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(367, 76);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Contraseña";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(10, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(345, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmPersonal::textBox2_TextChanged);
			// 
			// frmPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 507);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"frmPersonal";
			this->Text = L"Personal";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ usuarioIngresar = this->textBox1->Text; // Obtener el nombre de usuario ingresado
	String^ contrasenaIngresar = this->textBox2->Text;
	UsuarioController^ ObjUsuarioController = gcnew UsuarioController();
	bool credencialesValidas = ObjUsuarioController->VerificarCredenciales(usuarioIngresar, contrasenaIngresar);
	
	if (credencialesValidas) {
		// Las credenciales son válidas, abrir la ventana correspondiente
			
		String^ UsuarioIngresado = usuarioIngresar;
		if (UsuarioIngresado == "Cerdo") {
			frmGerente^ ventanaGerente = gcnew frmGerente();
			this->Close();
			ventanaGerente->ShowDialog();
		}
		else if (UsuarioIngresado  == "Asistonto") {
			frmAsistente^ ventanaAsistente = gcnew frmAsistente();
			ventanaAsistente->ShowDialog();
		}
		else if (UsuarioIngresado == "Rata") {
			frmChef^ ventanaChef = gcnew frmChef();
			ventanaChef->ShowDialog();
		}
		
	}
	else {
		// Las credenciales son inválidas, mostrar un mensaje de error
		MessageBox::Show("Credenciales inválidas. Por favor, inténtalo de nuevo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
