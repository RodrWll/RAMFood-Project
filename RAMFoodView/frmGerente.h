#pragma once
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
#include "frmGerenteGestionarProductos.h"

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
			this->gbFormulario->Visible = true;
			this->gbMenu->Visible = false;
			BebidaPlatosController^ objController;
			List<PlatoBebidaMenu^>^ listaPlatoBebidasMostrar = objController->buscarTodas();
			List<PlatoBebidaMenu^>^ listaPlatoBebidasMostrarMenuDiario = objController->QueryAllProductFromDailyMenu();
			mostrarGrilla(listaPlatoBebidasMostrar);
			mostrarGrilla_GestionarMenu(listaPlatoBebidasMostrarMenuDiario);
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
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ bttnEstablecerMenu;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::GroupBox^ gbFormulario;


	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ lbProductName;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btnAddBebidaPlato;


	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ lbTipo;

	private: System::Windows::Forms::TextBox^ lbPrecio;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::TextBox^ lbId;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::GroupBox^ gbMenu;
	private: System::Windows::Forms::DataGridView^ dgvEstablecerMenu;






	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button9;




	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ bttnGestionarProductos;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->gbMenu = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->dgvEstablecerMenu = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->bttnGestionarProductos = (gcnew System::Windows::Forms::Button());
			this->gbFormulario = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->btnAddBebidaPlato = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->lbTipo = (gcnew System::Windows::Forms::TextBox());
			this->lbPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbProductName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbId = (gcnew System::Windows::Forms::TextBox());
			this->bttnEstablecerMenu = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->gbMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstablecerMenu))->BeginInit();
			this->gbFormulario->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->gbMenu);
			this->groupBox1->Controls->Add(this->bttnGestionarProductos);
			this->groupBox1->Controls->Add(this->gbFormulario);
			this->groupBox1->Controls->Add(this->bttnEstablecerMenu);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(6, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1130, 824);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gerente";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmGerente::groupBox1_Enter);
			// 
			// gbMenu
			// 
			this->gbMenu->BackColor = System::Drawing::Color::WhiteSmoke;
			this->gbMenu->Controls->Add(this->button12);
			this->gbMenu->Controls->Add(this->dgvEstablecerMenu);
			this->gbMenu->Controls->Add(this->vScrollBar1);
			this->gbMenu->Controls->Add(this->button11);
			this->gbMenu->Controls->Add(this->button9);
			this->gbMenu->Location = System::Drawing::Point(199, 266);
			this->gbMenu->Name = L"gbMenu";
			this->gbMenu->Size = System::Drawing::Size(733, 523);
			this->gbMenu->TabIndex = 9;
			this->gbMenu->TabStop = false;
			this->gbMenu->Text = L"MENU";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(232, 460);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(231, 53);
			this->button12->TabIndex = 8;
			this->button12->Text = L"FIJAR MENU DEL DIA";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// dgvEstablecerMenu
			// 
			this->dgvEstablecerMenu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEstablecerMenu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column6, this->Column7, this->Column8
			});
			this->dgvEstablecerMenu->Location = System::Drawing::Point(17, 105);
			this->dgvEstablecerMenu->Name = L"dgvEstablecerMenu";
			this->dgvEstablecerMenu->RowHeadersWidth = 51;
			this->dgvEstablecerMenu->RowTemplate->Height = 24;
			this->dgvEstablecerMenu->Size = System::Drawing::Size(682, 333);
			this->dgvEstablecerMenu->TabIndex = 6;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Id";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 70;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Nombre";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 350;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Precio";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Tipo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(656, 218);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(21, 100);
			this->vScrollBar1->TabIndex = 7;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(399, 23);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(124, 30);
			this->button11->TabIndex = 5;
			this->button11->Text = L"Eliminar Producto";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmGerente::button11_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(159, 23);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(194, 30);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Agregar Producto";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmGerente::button9_Click);
			// 
			// bttnGestionarProductos
			// 
			this->bttnGestionarProductos->Location = System::Drawing::Point(6, 610);
			this->bttnGestionarProductos->Name = L"bttnGestionarProductos";
			this->bttnGestionarProductos->Size = System::Drawing::Size(186, 37);
			this->bttnGestionarProductos->TabIndex = 10;
			this->bttnGestionarProductos->Text = L"GESTIONAR PRODUCTOS";
			this->bttnGestionarProductos->UseVisualStyleBackColor = true;
			this->bttnGestionarProductos->Click += gcnew System::EventHandler(this, &frmGerente::bttnGestionarProductos_Click);
			// 
			// gbFormulario
			// 
			this->gbFormulario->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->gbFormulario->Controls->Add(this->label5);
			this->gbFormulario->Controls->Add(this->button10);
			this->gbFormulario->Controls->Add(this->btnAddBebidaPlato);
			this->gbFormulario->Controls->Add(this->button8);
			this->gbFormulario->Controls->Add(this->button7);
			this->gbFormulario->Controls->Add(this->lbTipo);
			this->gbFormulario->Controls->Add(this->lbPrecio);
			this->gbFormulario->Controls->Add(this->label4);
			this->gbFormulario->Controls->Add(this->label3);
			this->gbFormulario->Controls->Add(this->lbProductName);
			this->gbFormulario->Controls->Add(this->label2);
			this->gbFormulario->Controls->Add(this->dataGridView1);
			this->gbFormulario->Controls->Add(this->lbId);
			this->gbFormulario->Location = System::Drawing::Point(218, 118);
			this->gbFormulario->Name = L"gbFormulario";
			this->gbFormulario->Size = System::Drawing::Size(707, 625);
			this->gbFormulario->TabIndex = 6;
			this->gbFormulario->TabStop = false;
			this->gbFormulario->Text = L"Formulario";
			this->gbFormulario->Enter += gcnew System::EventHandler(this, &frmGerente::gbFormulario_Enter);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(32, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Id:";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Location = System::Drawing::Point(446, 321);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(108, 32);
			this->button10->TabIndex = 12;
			this->button10->Text = L"ACTUALIZAR";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &frmGerente::button10_Click);
			// 
			// btnAddBebidaPlato
			// 
			this->btnAddBebidaPlato->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAddBebidaPlato->Location = System::Drawing::Point(129, 321);
			this->btnAddBebidaPlato->Name = L"btnAddBebidaPlato";
			this->btnAddBebidaPlato->Size = System::Drawing::Size(108, 32);
			this->btnAddBebidaPlato->TabIndex = 11;
			this->btnAddBebidaPlato->Text = L"AGREGAR";
			this->btnAddBebidaPlato->UseVisualStyleBackColor = false;
			this->btnAddBebidaPlato->Click += gcnew System::EventHandler(this, &frmGerente::btnAddBebidaPlato_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Location = System::Drawing::Point(281, 321);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 32);
			this->button8->TabIndex = 10;
			this->button8->Text = L"ELIMINAR";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &frmGerente::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(540, 247);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 32);
			this->button7->TabIndex = 9;
			this->button7->Text = L"IMAGEN";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// lbTipo
			// 
			this->lbTipo->Location = System::Drawing::Point(254, 160);
			this->lbTipo->Name = L"lbTipo";
			this->lbTipo->Size = System::Drawing::Size(153, 23);
			this->lbTipo->TabIndex = 7;
			// 
			// lbPrecio
			// 
			this->lbPrecio->Location = System::Drawing::Point(254, 107);
			this->lbPrecio->Name = L"lbPrecio";
			this->lbPrecio->Size = System::Drawing::Size(153, 23);
			this->lbPrecio->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(32, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Tipo Bebida(1) Comida(2):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Precio:";
			// 
			// lbProductName
			// 
			this->lbProductName->Location = System::Drawing::Point(254, 66);
			this->lbProductName->Name = L"lbProductName";
			this->lbProductName->Size = System::Drawing::Size(191, 23);
			this->lbProductName->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre del Producto: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 372);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(675, 233);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmGerente::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmGerente::dataGridView1_CellContentClick);
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Id";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 300;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Precio";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 120;
			// 
			// lbId
			// 
			this->lbId->Location = System::Drawing::Point(254, 212);
			this->lbId->Name = L"lbId";
			this->lbId->Size = System::Drawing::Size(153, 23);
			this->lbId->TabIndex = 14;
			// 
			// bttnEstablecerMenu
			// 
			this->bttnEstablecerMenu->Location = System::Drawing::Point(938, 397);
			this->bttnEstablecerMenu->Name = L"bttnEstablecerMenu";
			this->bttnEstablecerMenu->Size = System::Drawing::Size(186, 37);
			this->bttnEstablecerMenu->TabIndex = 6;
			this->bttnEstablecerMenu->Text = L"ESTABLECER MENU";
			this->bttnEstablecerMenu->UseVisualStyleBackColor = true;
			this->bttnEstablecerMenu->Click += gcnew System::EventHandler(this, &frmGerente::bttnEstablecerMenu_click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(938, 567);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 37);
			this->button6->TabIndex = 7;
			this->button6->Text = L"VENTAS";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 530);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 37);
			this->button3->TabIndex = 5;
			this->button3->Text = L"GESTIONAR EMPLEADO";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 411);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 67);
			this->button4->TabIndex = 4;
			this->button4->Text = L"INCIDENCIAS / RECLAMOS";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(53, 30);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(611, 61);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Abrir/Cerrar restaurante";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 23);
			this->label7->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->ForeColor = System::Drawing::Color::IndianRed;
			this->label6->Location = System::Drawing::Point(455, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"OFF";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(294, 22);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerente::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(200, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Abrir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerente::button1_Click);
			// frmGerente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1180, 908);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmGerente";
			this->Text = L"frmGerente";
			this->Load += gcnew System::EventHandler(this, &frmGerente::frmGerente_Load);
			this->groupBox1->ResumeLayout(false);
			this->gbMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstablecerMenu))->EndInit();
			this->gbFormulario->ResumeLayout(false);
			this->gbFormulario->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		//agregando el microcontrolador de la clase microcontroller
		microcontroller^ esp32 = gcnew microcontroller();
		void updateLabel() {
			if (esp32->getStatus() == 1) {
				this->label6->Text = "ON";
				this->label6->ForeColor = System::Drawing::Color::Lime;
			}
			else {
				this->label6->Text = "OFF";
				this->label6->ForeColor = System::Drawing::Color::IndianRed;
			}
		}
	private: System::Void frmGerente_Load(System::Object^ sender, System::EventArgs^ e) {
		updateLabel();
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
		   //Esta funcion se ejecuta cuando se quiere abrir el restaurante
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		esp32->setStatus(1);
		updateLabel();
	}
		   //Esta funcion se ejecuta cuando se quiere cerrar el restaurante
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		esp32->setStatus(0);
		updateLabel();
	}
	private: void mostrarGrilla(List<PlatoBebidaMenu^>^ listaPlatoBebidaMostrar) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPlatoBebidaMostrar->Count; i++) {
			PlatoBebidaMenu^ objPlatoBebida = listaPlatoBebidaMostrar[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(objPlatoBebida->GetId());
			filaGrilla[1] = objPlatoBebida->GetNombre();
			filaGrilla[2] = Convert::ToString(objPlatoBebida->GetPrecio());
			filaGrilla[3] = Convert::ToString(objPlatoBebida->GetTipo());

			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	public: void mostrarGrilla_GestionarMenu(List<PlatoBebidaMenu^>^ listaPlatoBebidaMostrar) {
		this->dgvEstablecerMenu->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPlatoBebidaMostrar->Count; i++) {
			PlatoBebidaMenu^ objPlatoBebida = listaPlatoBebidaMostrar[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(objPlatoBebida->GetId());
			filaGrilla[1] = objPlatoBebida->GetNombre();
			filaGrilla[2] = Convert::ToString(objPlatoBebida->GetPrecio());
			filaGrilla[3] = Convert::ToString(objPlatoBebida->GetTipo());

			this->dgvEstablecerMenu->Rows->Add(filaGrilla);
		}
	}
	private: System::Void btnAddBebidaPlato_Click(System::Object^ sender, System::EventArgs^ e) {
		PlatoBebidaMenu^ objBebidaPlato = gcnew PlatoBebidaMenu();;
		objBebidaPlato->SetNombre(this->lbProductName->Text);
		objBebidaPlato->SetId(Convert::ToInt32(this->lbId->Text));
		objBebidaPlato->SetPrecio(Convert::ToDouble(this->lbPrecio->Text));
		objBebidaPlato->SetTipo(Convert::ToInt32(this->lbTipo->Text));
		BebidaPlatosController^ objController = gcnew BebidaPlatosController();
		objController->AddPlatoBebidaMenu(objBebidaPlato);
		List<PlatoBebidaMenu^>^ listaPlatosBebidas = objController->buscarTodas();
		mostrarGrilla(listaPlatosBebidas);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		BebidaPlatosController^ objController = gcnew BebidaPlatosController();
		objController->EliminarPlatoBebida(codigoEliminar);
		List<PlatoBebidaMenu^>^ listaPlatosBebidas = objController->buscarTodas();
		mostrarGrilla(listaPlatosBebidas);
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoActualizar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		BebidaPlatosController^ objController = gcnew BebidaPlatosController();
		PlatoBebidaMenu^ objPlatoBebidaMenu = objController->QueryProductById(codigoActualizar);
		this->lbProductName->Text = objPlatoBebidaMenu->GetNombre();
		this->lbPrecio->Text = Convert::ToString(objPlatoBebidaMenu->GetPrecio());
		this->lbId->Text = Convert::ToString(objPlatoBebidaMenu->GetId());
		this->lbTipo->Text = Convert::ToString(objPlatoBebidaMenu->GetTipo());
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		PlatoBebidaMenu^ objPlatoBebidaMenu = gcnew PlatoBebidaMenu();
		objPlatoBebidaMenu->SetNombre(this->lbProductName->Text);
		objPlatoBebidaMenu->SetId(Convert::ToInt32(this->lbId->Text));
		objPlatoBebidaMenu->SetPrecio(Convert::ToDouble(this->lbPrecio->Text));
		objPlatoBebidaMenu->SetTipo(Convert::ToInt32(this->lbTipo->Text));
		BebidaPlatosController^ objController = gcnew BebidaPlatosController();
		objController->UpdateProduct(objPlatoBebidaMenu);
		List<PlatoBebidaMenu^>^ listaPlatosBebidas = objController->buscarTodas();
		mostrarGrilla(listaPlatosBebidas);
	}
	private: System::Void gbFormulario_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bttnEstablecerMenu_click(System::Object^ sender, System::EventArgs^ e) {
		this->gbFormulario->Visible = false;
		this->gbMenu->Visible = true;
	}
	private: System::Void bttnGestionarProductos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->gbFormulario->Visible = true;
		this->gbMenu->Visible = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		frmGerenteGestionarProductos^ Ventana2 = gcnew frmGerenteGestionarProductos();
		Ventana2->ShowDialog();
		BebidaPlatosController^ objController = gcnew BebidaPlatosController();
		List<PlatoBebidaMenu^>^ productList = objController->QueryAllProductFromDailyMenu();
		mostrarGrilla_GestionarMenu(productList);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dgvEstablecerMenu->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dgvEstablecerMenu->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		BebidaPlatosController^ objController = gcnew BebidaPlatosController();
		objController->EliminarProductoDelMenuDiario(codigoEliminar);
		List<PlatoBebidaMenu^>^ productList = objController->QueryAllProductFromDailyMenu();
		mostrarGrilla_GestionarMenu(productList);
	}
		   //Esta funcion se ejecuta cuando se quiere cerrar el restaurante

	};
}