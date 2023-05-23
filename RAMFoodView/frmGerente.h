#pragma once
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
#include "frmGerenteBuscarProductosMenu.h"
#include "frmGerenteGestionarPersonal.h"
#include "frmGerenteGestionarProductos.h"
#include "frmGerenteEstablecerMenu.h"

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
			this->gbMenu->Visible = false;
			BebidaPlatosController^ objController;
			List<PlatoBebidaMenu^>^ listaPlatoBebidasMostrar = objController->buscarTodas();
			List<PlatoBebidaMenu^>^ listaPlatoBebidasMostrarMenuDiario = objController->QueryAllProductFromDailyMenu();
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
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ bttnEstablecerMenu;

	private: System::Windows::Forms::GroupBox^ gbMenu;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DataGridView^ dgvEstablecerMenu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button9;

















	private: System::Windows::Forms::Button^ bttnGestionarProductos;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ventasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionarPersonalToolStripMenuItem;


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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->bttnEstablecerMenu = (gcnew System::Windows::Forms::Button());
			this->bttnGestionarProductos = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionarPersonalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2->SuspendLayout();
			this->gbMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstablecerMenu))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(288, 22);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(611, 69);
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
			this->button2->Location = System::Drawing::Point(317, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmGerente::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(186, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Abrir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmGerente::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(28, 391);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 88);
			this->button4->TabIndex = 4;
			this->button4->Text = L"INCIDENCIAS / RECLAMOS";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(28, 517);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 70);
			this->button3->TabIndex = 5;
			this->button3->Text = L"GESTIONAR PERSONAL";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmGerente::button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(979, 569);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 78);
			this->button6->TabIndex = 7;
			this->button6->Text = L"VENTAS";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// bttnEstablecerMenu
			// 
			this->bttnEstablecerMenu->Location = System::Drawing::Point(979, 386);
			this->bttnEstablecerMenu->Name = L"bttnEstablecerMenu";
			this->bttnEstablecerMenu->Size = System::Drawing::Size(186, 69);
			this->bttnEstablecerMenu->TabIndex = 6;
			this->bttnEstablecerMenu->Text = L"ESTABLECER MENU";
			this->bttnEstablecerMenu->UseVisualStyleBackColor = true;
			this->bttnEstablecerMenu->Click += gcnew System::EventHandler(this, &frmGerente::bttnEstablecerMenu_click);
			// 
			// bttnGestionarProductos
			// 
			this->bttnGestionarProductos->Location = System::Drawing::Point(28, 655);
			this->bttnGestionarProductos->Name = L"bttnGestionarProductos";
			this->bttnGestionarProductos->Size = System::Drawing::Size(186, 76);
			this->bttnGestionarProductos->TabIndex = 10;
			this->bttnGestionarProductos->Text = L"GESTIONAR PRODUCTOS";
			this->bttnGestionarProductos->UseVisualStyleBackColor = true;
			this->bttnGestionarProductos->Click += gcnew System::EventHandler(this, &frmGerente::bttnGestionarProductos_Click);
			// 
			// gbMenu
			// 
			this->gbMenu->AutoSize = true;
			this->gbMenu->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->gbMenu->BackColor = System::Drawing::Color::WhiteSmoke;
			this->gbMenu->Controls->Add(this->button12);
			this->gbMenu->Controls->Add(this->dgvEstablecerMenu);
			this->gbMenu->Controls->Add(this->vScrollBar1);
			this->gbMenu->Controls->Add(this->button11);
			this->gbMenu->Controls->Add(this->button9);
			this->gbMenu->Location = System::Drawing::Point(1094, 12);
			this->gbMenu->Name = L"gbMenu";
			this->gbMenu->Size = System::Drawing::Size(724, 524);
			this->gbMenu->TabIndex = 9;
			this->gbMenu->TabStop = false;
			this->gbMenu->Text = L"MENU";
			this->gbMenu->Visible = false;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(239, 450);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(231, 53);
			this->button12->TabIndex = 8;
			this->button12->Text = L"FIJAR MENU DEL DIA";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &frmGerente::button12_Click);
			// 
			// dgvEstablecerMenu
			// 
			this->dgvEstablecerMenu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEstablecerMenu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->Column6, this->Column7, this->Column8
			});
			this->dgvEstablecerMenu->Location = System::Drawing::Point(21, 87);
			this->dgvEstablecerMenu->Name = L"dgvEstablecerMenu";
			this->dgvEstablecerMenu->RowHeadersWidth = 51;
			this->dgvEstablecerMenu->RowTemplate->Height = 24;
			this->dgvEstablecerMenu->Size = System::Drawing::Size(697, 333);
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
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column6->HeaderText = L"Nombre";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 85;
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
			this->button11->Location = System::Drawing::Point(398, 16);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(124, 58);
			this->button11->TabIndex = 5;
			this->button11->Text = L"Eliminar Producto";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmGerente::button11_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(203, 16);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 58);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Agregar Producto";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmGerente::button9_Click);
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
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1186, 824);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gerente";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmGerente::groupBox1_Enter);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ventasToolStripMenuItem,
					this->gestionarPersonalToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1830, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->ventasToolStripMenuItem->Text = L"Ventas";
			// 
			// gestionarPersonalToolStripMenuItem
			// 
			this->gestionarPersonalToolStripMenuItem->Name = L"gestionarPersonalToolStripMenuItem";
			this->gestionarPersonalToolStripMenuItem->Size = System::Drawing::Size(145, 24);
			this->gestionarPersonalToolStripMenuItem->Text = L"Gestionar Personal";
			this->gestionarPersonalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmGerente::gestionarPersonalToolStripMenuItem_Click);
			// 
			// frmGerente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(1830, 848);
			this->Controls->Add(this->gbMenu);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmGerente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmGerente";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmGerente::frmGerente_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->gbMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstablecerMenu))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
		this->gbMenu->Visible = false;
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
	private: System::Void gbFormulario_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bttnEstablecerMenu_click(System::Object^ sender, System::EventArgs^ e) {
		//this->gbFormulario->Visible = false;
		this->gbMenu->Visible = true;
		frmGerenteEstablecerMenu ^ ventanaEstablecerMenu = gcnew frmGerenteEstablecerMenu();
ventanaEstablecerMenu->ShowDialog();
	}
	private: System::Void bttnGestionarProductos_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->gbFormulario->Visible = true;
		this->gbMenu->Visible = false;
		frmGerenteGestionarProductos^ ventanaGestionarProductos = gcnew frmGerenteGestionarProductos();
		ventanaGestionarProductos->ShowDialog();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		frmGerenteBuscarProductosMenu^ Ventana2 = gcnew frmGerenteBuscarProductosMenu();
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
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmGerenteGestionarPersonal^ ventana = gcnew frmGerenteGestionarPersonal();
		ventana->ShowDialog();
	}
private: System::Void gestionarPersonalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmGerenteGestionarPersonal^ ventana = gcnew frmGerenteGestionarPersonal();
	ventana->ShowDialog();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}