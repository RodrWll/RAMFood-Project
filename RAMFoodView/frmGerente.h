#pragma once
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
#include "frmGerenteBuscarProductosMenu.h"
#include "frmGerenteGestionarPersonal.h"
#include "frmGerenteGestionarProductos.h"
#include "frmGerenteEstablecerMenu.h"
#include "frmReporte.h"

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
	using namespace System::Collections::Generic;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for frmGerente
	/// </summary>
	public ref class frmGerente : public System::Windows::Forms::Form
	{
	public:
		frmGerente(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmGerente(Gerente^ objGerente)
		{
			this->objGerente = objGerente;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmGerente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: Gerente^ objGerente =gcnew Gerente();
	private: microcontroller^ esp32 = gcnew microcontroller();
	protected:

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ bttnEstablecerMenu;
	private: System::Windows::Forms::Button^ bttnGestionarProductos;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGerente::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->bttnEstablecerMenu = (gcnew System::Windows::Forms::Button());
			this->bttnGestionarProductos = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->groupBox2->Location = System::Drawing::Point(195, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(700, 109);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Abrir/Cerrar restaurante";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(631, 39);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 42);
			this->button7->TabIndex = 11;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &frmGerente::button7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::IndianRed;
			this->label6->Location = System::Drawing::Point(484, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 34);
			this->label6->TabIndex = 2;
			this->label6->Text = L"OFF";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button2->Location = System::Drawing::Point(317, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerente::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button1->Location = System::Drawing::Point(155, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Abrir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerente::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button4->Location = System::Drawing::Point(75, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(313, 88);
			this->button4->TabIndex = 4;
			this->button4->Text = L"INCIDENCIAS / RECLAMOS";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button3->Location = System::Drawing::Point(75, 321);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(313, 70);
			this->button3->TabIndex = 5;
			this->button3->Text = L"GESTIONAR PERSONAL";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerente::button3_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(619, 454);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(252, 78);
			this->button6->TabIndex = 7;
			this->button6->Text = L"VENTAS";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &frmGerente::button6_Click);
			// 
			// bttnEstablecerMenu
			// 
			this->bttnEstablecerMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->bttnEstablecerMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bttnEstablecerMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnEstablecerMenu->FlatAppearance->BorderSize = 0;
			this->bttnEstablecerMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnEstablecerMenu->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnEstablecerMenu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->bttnEstablecerMenu->Location = System::Drawing::Point(619, 321);
			this->bttnEstablecerMenu->Name = L"bttnEstablecerMenu";
			this->bttnEstablecerMenu->Size = System::Drawing::Size(252, 69);
			this->bttnEstablecerMenu->TabIndex = 6;
			this->bttnEstablecerMenu->Text = L"ESTABLECER MENU";
			this->bttnEstablecerMenu->UseVisualStyleBackColor = false;
			this->bttnEstablecerMenu->Click += gcnew System::EventHandler(this, &frmGerente::bttnEstablecerMenu_Click);
			// 
			// bttnGestionarProductos
			// 
			this->bttnGestionarProductos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->bttnGestionarProductos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bttnGestionarProductos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttnGestionarProductos->FlatAppearance->BorderSize = 0;
			this->bttnGestionarProductos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnGestionarProductos->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnGestionarProductos->ForeColor = System::Drawing::Color::White;
			this->bttnGestionarProductos->Location = System::Drawing::Point(75, 443);
			this->bttnGestionarProductos->Name = L"bttnGestionarProductos";
			this->bttnGestionarProductos->Size = System::Drawing::Size(313, 76);
			this->bttnGestionarProductos->TabIndex = 10;
			this->bttnGestionarProductos->Text = L"GESTIONAR PRODUCTOS";
			this->bttnGestionarProductos->UseVisualStyleBackColor = false;
			this->bttnGestionarProductos->Click += gcnew System::EventHandler(this, &frmGerente::bttnGestionarProductos_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->bttnGestionarProductos);
			this->groupBox1->Controls->Add(this->bttnEstablecerMenu);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->groupBox1->Location = System::Drawing::Point(52, 96);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(987, 582);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gerente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->label1->Location = System::Drawing::Point(48, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido, ....";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button5->Location = System::Drawing::Point(856, 23);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(183, 46);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Cerrar sesión";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmGerente::button5_Click);
			// 
			// frmGerente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->ClientSize = System::Drawing::Size(1090, 689);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmGerente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RAMFood Gerente";
			this->Load += gcnew System::EventHandler(this, &frmGerente::frmGerente_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//agregando el microcontrolador de la clase microcontroller
	private: System::Void frmGerente_Load(System::Object^ sender, System::EventArgs^ e) {
		updateLabel();
		this->label1->Text = "Bienvenido, " + objGerente->GetNombre() + " " + objGerente->GetApellidoPat() + " " + objGerente->GetApellidoMat();
	}
	void updateLabel() {
		int status = esp32->getStatusMotor();
		if (esp32->getErrorMessage() == "") {
			if (status == 1) {
				this->label6->Text = "ABIERTO";
				this->label6->ForeColor = System::Drawing::Color::Lime;
			}
			else {
				this->label6->Text = "CERRADO";
				this->label6->ForeColor = System::Drawing::Color::IndianRed;
			}
		}
		else {
			MessageBox::Show(esp32->getErrorMessage(), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		   //Esta funcion se ejecuta cuando se quiere abrir el restaurante
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		esp32->setStatusMotor(1);
		updateLabel();
	}
		   //Esta funcion se ejecuta cuando se quiere cerrar el restaurante
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		esp32->setStatusMotor(0);
		updateLabel();
		
	}
		   //Este boton se encarga de abrir la ventana de gestionar personal
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmGerenteGestionarPersonal^ ventana = gcnew frmGerenteGestionarPersonal(this->objGerente->GetId());
	this->Visible = false;
	ventana->ShowDialog();
	this->Visible = true;
}
	   //Este boton se encarga de abrir la ventana de gestionar productos
private: System::Void bttnGestionarProductos_Click(System::Object^ sender, System::EventArgs^ e) {
	frmGerenteGestionarProductos^ ventana = gcnew frmGerenteGestionarProductos();
	this->Visible = false;
	ventana->ShowDialog();
	this->Visible = true;
}
	   //Este boton se encarga de abrir la ventana de establecer menu.
private: System::Void bttnEstablecerMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	frmGerenteEstablecerMenu^ ventana = gcnew frmGerenteEstablecerMenu();
	this->Visible = false;
	ventana->ShowDialog();
	this->Visible = true;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporte^ ventana = gcnew frmReporte();
	this->Visible = false;
	ventana->ShowDialog();
	this->Visible = true;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// Cerrar esta ventana
	this->Close();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	updateLabel();
}
};
}