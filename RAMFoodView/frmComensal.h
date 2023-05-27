#pragma once
#include "frmComensalGenerarPedido.h"
#include "frmComensalPedidoVacio.h"
#include "frmComensalSolicitarAtencion.h"
using namespace System::IO;
namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace RAMFoodModel;
	using namespace RAMFoodController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmComensal
	/// </summary>
	public ref class frmComensal : public System::Windows::Forms::Form
	{
	public:
		/*pedido = 1, nuevo pedido;
		pedido = 0, se está retrocediendo desde el form FV_mesa_geenerar_pedido
		*/
		
		frmComensal()
		{
			InitializeComponent();
			this->buttonVerPedidoTotal->Enabled = false;
			this->buttonVerPedidoTotal->Visible = false;

			this->nuevo_pedido = 1;
			this->ObjPedidoMesa = gcnew PedidoMesa();
			ObjPedidoMesa->setReiniciarPedido(0);
			PedidoController^ objPedidoController = gcnew PedidoController();
			this->ListaBebidasInfogeneral = objPedidoController->obtenerInfoBebida();
			this->ListaPlatoInfoGeneral = objPedidoController->obtenerInfoPlato();
			MostrasInfoPlatosYBebidas();

			//
			//TODO: agregar código de constructor aquí
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmComensal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: PedidoMesa^ ObjPedidoMesa;
	private: List<Bebida^>^ ListaBebidasInfogeneral;
	private: List<Plato^>^ ListaPlatoInfoGeneral;
	private: System::Windows::Forms::Button^ button1;
	private: int nuevo_pedido;
	private: int reiniciarCuentaDefault = 0;
	
	private: int numMesa=1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	



	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::Label^ label7;





	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ BotonSiguiente;


	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::GroupBox^ groupBox14;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::GroupBox^ groupBox12;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::GroupBox^ groupBox15;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
public: System::Windows::Forms::GroupBox^ groupBox16;
private: System::Windows::Forms::Button^ buttonVerPedidoTotal;
public:

public:




















































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmComensal::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->BotonSiguiente = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonVerPedidoTotal = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox9->SuspendLayout();
			this->groupBox14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->groupBox13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->groupBox15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(157, 20);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Comidas";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmComensal::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::GreenYellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(285, 20);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Bebida";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmComensal::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightBlue;
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->groupBox1->Location = System::Drawing::Point(93, 63);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1065, 610);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"COMIDAS";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmComensal::groupBox1_Enter);
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::White;
			this->groupBox7->Controls->Add(this->label16);
			this->groupBox7->Controls->Add(this->button13);
			this->groupBox7->Controls->Add(this->button14);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->pictureBox6);
			this->groupBox7->Location = System::Drawing::Point(709, 325);
			this->groupBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Size = System::Drawing::Size(275, 238);
			this->groupBox7->TabIndex = 32;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"groupBox7";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(119, 203);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(16, 16);
			this->label16->TabIndex = 30;
			this->label16->Text = L"0";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(156, 198);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(29, 26);
			this->button13->TabIndex = 29;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &frmComensal::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(67, 198);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(29, 26);
			this->button14->TabIndex = 28;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &frmComensal::button14_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(101, 160);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 19);
			this->label17->TabIndex = 22;
			this->label17->Text = L"S/20";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(83, 135);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 24);
			this->label18->TabIndex = 15;
			this->label18->Text = L"Plato1";
			this->label18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox6
			// 
			this->pictureBox6->InitialImage = nullptr;
			this->pictureBox6->Location = System::Drawing::Point(44, 14);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(189, 119);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::White;
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Controls->Add(this->button11);
			this->groupBox6->Controls->Add(this->button12);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->pictureBox5);
			this->groupBox6->Location = System::Drawing::Point(384, 325);
			this->groupBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Size = System::Drawing::Size(275, 238);
			this->groupBox6->TabIndex = 34;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(119, 203);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 16);
			this->label12->TabIndex = 30;
			this->label12->Text = L"0";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(156, 198);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(29, 26);
			this->button11->TabIndex = 29;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmComensal::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(67, 198);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(29, 26);
			this->button12->TabIndex = 28;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &frmComensal::button12_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(101, 160);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 19);
			this->label14->TabIndex = 22;
			this->label14->Text = L"S/20";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(83, 135);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(88, 24);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Plato1";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox5
			// 
			this->pictureBox5->InitialImage = nullptr;
			this->pictureBox5->Location = System::Drawing::Point(44, 14);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(189, 119);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::White;
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->button10);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->pictureBox4);
			this->groupBox5->Location = System::Drawing::Point(64, 325);
			this->groupBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Size = System::Drawing::Size(275, 238);
			this->groupBox5->TabIndex = 33;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"groupBox5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(119, 203);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 16);
			this->label9->TabIndex = 30;
			this->label9->Text = L"0";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(156, 198);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(29, 26);
			this->button9->TabIndex = 29;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmComensal::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(67, 198);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(29, 26);
			this->button10->TabIndex = 28;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmComensal::button10_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(101, 160);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 19);
			this->label10->TabIndex = 22;
			this->label10->Text = L"S/20";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(83, 135);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 24);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Plato1";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox4
			// 
			this->pictureBox4->InitialImage = nullptr;
			this->pictureBox4->Location = System::Drawing::Point(44, 14);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(189, 119);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::White;
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->button8);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Location = System::Drawing::Point(709, 54);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(275, 238);
			this->groupBox4->TabIndex = 32;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"groupBox4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(119, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 16);
			this->label5->TabIndex = 30;
			this->label5->Text = L"0";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(156, 198);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(29, 26);
			this->button7->TabIndex = 29;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmComensal::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(67, 198);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(29, 26);
			this->button8->TabIndex = 28;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmComensal::button8_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(101, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 19);
			this->label6->TabIndex = 22;
			this->label6->Text = L"S/20";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(83, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 24);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Plato1";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->InitialImage = nullptr;
			this->pictureBox3->Location = System::Drawing::Point(44, 14);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(189, 119);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::White;
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Location = System::Drawing::Point(384, 54);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(275, 238);
			this->groupBox3->TabIndex = 32;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(119, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 16);
			this->label2->TabIndex = 30;
			this->label2->Text = L"0";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(156, 198);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(29, 26);
			this->button5->TabIndex = 29;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmComensal::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(67, 198);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(29, 26);
			this->button6->TabIndex = 28;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmComensal::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(101, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 19);
			this->label3->TabIndex = 22;
			this->label3->Text = L"S/20";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(83, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 24);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Plato1";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(44, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(189, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Location = System::Drawing::Point(64, 54);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(275, 238);
			this->groupBox2->TabIndex = 31;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(119, 203);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 16);
			this->label13->TabIndex = 30;
			this->label13->Text = L"0";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(156, 198);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(29, 26);
			this->button4->TabIndex = 29;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmComensal::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(67, 198);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(29, 26);
			this->button3->TabIndex = 28;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmComensal::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(101, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 19);
			this->label7->TabIndex = 22;
			this->label7->Text = L"S/20";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label7->Click += gcnew System::EventHandler(this, &frmComensal::label7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 24);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Plato1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &frmComensal::label1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->InitialImage = nullptr;
			this->pictureBox2->Location = System::Drawing::Point(44, 14);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(189, 119);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox9->Controls->Add(this->groupBox14);
			this->groupBox9->Controls->Add(this->groupBox13);
			this->groupBox9->Controls->Add(this->groupBox12);
			this->groupBox9->Controls->Add(this->groupBox11);
			this->groupBox9->Controls->Add(this->groupBox10);
			this->groupBox9->Controls->Add(this->groupBox15);
			this->groupBox9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->groupBox9->Location = System::Drawing::Point(88, 62);
			this->groupBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Size = System::Drawing::Size(1069, 607);
			this->groupBox9->TabIndex = 35;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"BEBIDAS";
			this->groupBox9->Enter += gcnew System::EventHandler(this, &frmComensal::groupBox9_Enter);
			// 
			// groupBox14
			// 
			this->groupBox14->BackColor = System::Drawing::Color::White;
			this->groupBox14->Controls->Add(this->label33);
			this->groupBox14->Controls->Add(this->button26);
			this->groupBox14->Controls->Add(this->button27);
			this->groupBox14->Controls->Add(this->label34);
			this->groupBox14->Controls->Add(this->label35);
			this->groupBox14->Controls->Add(this->pictureBox11);
			this->groupBox14->Location = System::Drawing::Point(745, 326);
			this->groupBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox14->Size = System::Drawing::Size(275, 238);
			this->groupBox14->TabIndex = 32;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"groupBox14";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(119, 203);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(16, 16);
			this->label33->TabIndex = 30;
			this->label33->Text = L"0";
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(156, 198);
			this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(29, 26);
			this->button26->TabIndex = 29;
			this->button26->Text = L"+";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &frmComensal::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(67, 198);
			this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(29, 26);
			this->button27->TabIndex = 28;
			this->button27->Text = L"-";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &frmComensal::button27_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(101, 160);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 19);
			this->label34->TabIndex = 22;
			this->label34->Text = L"S/20";
			this->label34->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(83, 135);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(99, 24);
			this->label35->TabIndex = 15;
			this->label35->Text = L"Bebida1";
			this->label35->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->InitialImage = nullptr;
			this->pictureBox11->Location = System::Drawing::Point(35, 14);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(189, 119);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			// 
			// groupBox13
			// 
			this->groupBox13->BackColor = System::Drawing::Color::White;
			this->groupBox13->Controls->Add(this->label30);
			this->groupBox13->Controls->Add(this->button24);
			this->groupBox13->Controls->Add(this->button25);
			this->groupBox13->Controls->Add(this->label31);
			this->groupBox13->Controls->Add(this->label32);
			this->groupBox13->Controls->Add(this->pictureBox10);
			this->groupBox13->Location = System::Drawing::Point(419, 325);
			this->groupBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox13->Size = System::Drawing::Size(275, 238);
			this->groupBox13->TabIndex = 32;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"groupBox13";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(119, 203);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(16, 16);
			this->label30->TabIndex = 30;
			this->label30->Text = L"0";
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(156, 198);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(29, 26);
			this->button24->TabIndex = 29;
			this->button24->Text = L"+";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &frmComensal::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(67, 198);
			this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(29, 26);
			this->button25->TabIndex = 28;
			this->button25->Text = L"-";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &frmComensal::button25_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(101, 160);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(41, 19);
			this->label31->TabIndex = 22;
			this->label31->Text = L"S/20";
			this->label31->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(83, 135);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(99, 24);
			this->label32->TabIndex = 15;
			this->label32->Text = L"Bebida1";
			this->label32->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->InitialImage = nullptr;
			this->pictureBox10->Location = System::Drawing::Point(35, 14);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(189, 119);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			// 
			// groupBox12
			// 
			this->groupBox12->BackColor = System::Drawing::Color::White;
			this->groupBox12->Controls->Add(this->label27);
			this->groupBox12->Controls->Add(this->button22);
			this->groupBox12->Controls->Add(this->button23);
			this->groupBox12->Controls->Add(this->label28);
			this->groupBox12->Controls->Add(this->label29);
			this->groupBox12->Controls->Add(this->pictureBox9);
			this->groupBox12->Location = System::Drawing::Point(69, 325);
			this->groupBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox12->Size = System::Drawing::Size(275, 238);
			this->groupBox12->TabIndex = 32;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"groupBox12";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(119, 203);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(16, 16);
			this->label27->TabIndex = 30;
			this->label27->Text = L"0";
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(156, 198);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(29, 26);
			this->button22->TabIndex = 29;
			this->button22->Text = L"+";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &frmComensal::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(67, 198);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(29, 26);
			this->button23->TabIndex = 28;
			this->button23->Text = L"-";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &frmComensal::button23_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(101, 160);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 19);
			this->label28->TabIndex = 22;
			this->label28->Text = L"S/20";
			this->label28->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(83, 135);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(99, 24);
			this->label29->TabIndex = 15;
			this->label29->Text = L"Bebida1";
			this->label29->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->InitialImage = nullptr;
			this->pictureBox9->Location = System::Drawing::Point(35, 14);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(189, 119);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			// 
			// groupBox11
			// 
			this->groupBox11->BackColor = System::Drawing::Color::White;
			this->groupBox11->Controls->Add(this->label24);
			this->groupBox11->Controls->Add(this->button20);
			this->groupBox11->Controls->Add(this->button21);
			this->groupBox11->Controls->Add(this->label25);
			this->groupBox11->Controls->Add(this->label26);
			this->groupBox11->Controls->Add(this->pictureBox8);
			this->groupBox11->Location = System::Drawing::Point(745, 55);
			this->groupBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox11->Size = System::Drawing::Size(275, 238);
			this->groupBox11->TabIndex = 32;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"groupBox11";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(119, 203);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(16, 16);
			this->label24->TabIndex = 30;
			this->label24->Text = L"0";
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(156, 198);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(29, 26);
			this->button20->TabIndex = 29;
			this->button20->Text = L"+";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &frmComensal::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(67, 198);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(29, 26);
			this->button21->TabIndex = 28;
			this->button21->Text = L"-";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &frmComensal::button21_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(101, 160);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 19);
			this->label25->TabIndex = 22;
			this->label25->Text = L"S/20";
			this->label25->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(83, 135);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(99, 24);
			this->label26->TabIndex = 15;
			this->label26->Text = L"Bebida1";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->InitialImage = nullptr;
			this->pictureBox8->Location = System::Drawing::Point(35, 14);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(189, 119);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			// 
			// groupBox10
			// 
			this->groupBox10->BackColor = System::Drawing::Color::White;
			this->groupBox10->Controls->Add(this->label21);
			this->groupBox10->Controls->Add(this->button18);
			this->groupBox10->Controls->Add(this->button19);
			this->groupBox10->Controls->Add(this->label22);
			this->groupBox10->Controls->Add(this->label23);
			this->groupBox10->Controls->Add(this->pictureBox7);
			this->groupBox10->Location = System::Drawing::Point(419, 55);
			this->groupBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox10->Size = System::Drawing::Size(275, 238);
			this->groupBox10->TabIndex = 32;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"groupBox10";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(119, 203);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 16);
			this->label21->TabIndex = 30;
			this->label21->Text = L"0";
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(156, 198);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(29, 26);
			this->button18->TabIndex = 29;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &frmComensal::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(67, 198);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(29, 26);
			this->button19->TabIndex = 28;
			this->button19->Text = L"-";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &frmComensal::button19_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(101, 160);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 19);
			this->label22->TabIndex = 22;
			this->label22->Text = L"S/20";
			this->label22->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(83, 135);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(99, 24);
			this->label23->TabIndex = 15;
			this->label23->Text = L"Bebida1";
			this->label23->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->InitialImage = nullptr;
			this->pictureBox7->Location = System::Drawing::Point(35, 14);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(189, 119);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 10;
			this->pictureBox7->TabStop = false;
			// 
			// groupBox15
			// 
			this->groupBox15->BackColor = System::Drawing::Color::White;
			this->groupBox15->Controls->Add(this->label36);
			this->groupBox15->Controls->Add(this->button28);
			this->groupBox15->Controls->Add(this->button29);
			this->groupBox15->Controls->Add(this->label37);
			this->groupBox15->Controls->Add(this->label38);
			this->groupBox15->Controls->Add(this->pictureBox12);
			this->groupBox15->Location = System::Drawing::Point(69, 55);
			this->groupBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox15->Size = System::Drawing::Size(275, 238);
			this->groupBox15->TabIndex = 32;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"groupBox15";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(119, 203);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(16, 16);
			this->label36->TabIndex = 30;
			this->label36->Text = L"0";
			this->label36->Click += gcnew System::EventHandler(this, &frmComensal::label36_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(156, 198);
			this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(29, 26);
			this->button28->TabIndex = 29;
			this->button28->Text = L"+";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &frmComensal::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(67, 198);
			this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(29, 26);
			this->button29->TabIndex = 28;
			this->button29->Text = L"-";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &frmComensal::button29_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(101, 160);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(41, 19);
			this->label37->TabIndex = 22;
			this->label37->Text = L"S/20";
			this->label37->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label37->Click += gcnew System::EventHandler(this, &frmComensal::label37_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(83, 135);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(99, 24);
			this->label38->TabIndex = 15;
			this->label38->Text = L"Bebida1";
			this->label38->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->InitialImage = nullptr;
			this->pictureBox12->Location = System::Drawing::Point(35, 14);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(189, 119);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 10;
			this->pictureBox12->TabStop = false;
			// 
			// BotonSiguiente
			// 
			this->BotonSiguiente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonSiguiente->Location = System::Drawing::Point(865, 11);
			this->BotonSiguiente->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BotonSiguiente->Name = L"BotonSiguiente";
			this->BotonSiguiente->Size = System::Drawing::Size(288, 46);
			this->BotonSiguiente->TabIndex = 16;
			this->BotonSiguiente->Text = L"Resumen del pedido";
			this->BotonSiguiente->UseVisualStyleBackColor = true;
			this->BotonSiguiente->Click += gcnew System::EventHandler(this, &frmComensal::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(93, 694);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(180, 46);
			this->button17->TabIndex = 17;
			this->button17->Text = L"Atras";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Location = System::Drawing::Point(456, 679);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(355, 60);
			this->groupBox8->TabIndex = 18;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"CUENTA";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(205, 15);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(61, 37);
			this->label20->TabIndex = 31;
			this->label20->Text = L"S/0";
			this->label20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label20->Click += gcnew System::EventHandler(this, &frmComensal::label20_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(40, 23);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(140, 25);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Monto Total :";
			this->label19->Click += gcnew System::EventHandler(this, &frmComensal::label19_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(957, 688);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(201, 37);
			this->button15->TabIndex = 19;
			this->button15->Text = L"Llamar a un mozo";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &frmComensal::button15_Click);
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->groupBox1);
			this->groupBox16->Controls->Add(this->buttonVerPedidoTotal);
			this->groupBox16->Controls->Add(this->groupBox9);
			this->groupBox16->Controls->Add(this->button15);
			this->groupBox16->Controls->Add(this->groupBox8);
			this->groupBox16->Controls->Add(this->button17);
			this->groupBox16->Controls->Add(this->BotonSiguiente);
			this->groupBox16->Controls->Add(this->button2);
			this->groupBox16->Controls->Add(this->button1);
			this->groupBox16->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox16->Location = System::Drawing::Point(15, 14);
			this->groupBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox16->Size = System::Drawing::Size(1215, 738);
			this->groupBox16->TabIndex = 37;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"MENÚ DEL DÍA";
			this->groupBox16->Enter += gcnew System::EventHandler(this, &frmComensal::groupBox16_Enter);
			// 
			// buttonVerPedidoTotal
			// 
			this->buttonVerPedidoTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->buttonVerPedidoTotal->Location = System::Drawing::Point(600, 11);
			this->buttonVerPedidoTotal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonVerPedidoTotal->Name = L"buttonVerPedidoTotal";
			this->buttonVerPedidoTotal->Size = System::Drawing::Size(225, 44);
			this->buttonVerPedidoTotal->TabIndex = 36;
			this->buttonVerPedidoTotal->Text = L"Ver Pedido Total";
			this->buttonVerPedidoTotal->UseVisualStyleBackColor = true;
			this->buttonVerPedidoTotal->Click += gcnew System::EventHandler(this, &frmComensal::buttonVerPedidoTotal_Click_1);
			// 
			// frmComensal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1253, 750);
			this->Controls->Add(this->groupBox16);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmComensal";
			this->Text = L"frmComensal";
			this->Load += gcnew System::EventHandler(this, &frmComensal::frmComensal_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->groupBox15->ResumeLayout(false);
			this->groupBox15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox16->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox1->Visible = true;
		this->groupBox9->Visible = false;
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   //Esta funcion es de Creacion propia;
void MostrasInfoPlatosYBebidas() {
	
	/*Bebidas*/
	PedidoController^ objPedidoController = gcnew PedidoController();
	 this->nuevo_pedido = objPedidoController->esNuevoPedido("estado_pedido");

	 List<Bebida^>^ listaBebidas = objPedidoController->obtenerInfoBebida();
	 List<Plato^>^ listaPlato = objPedidoController->obtenerInfoPlato();
	 // Bebidas^ Objeto1 = listaBebidas[0];

	 this->label38->Text = listaBebidas[0]->GetNombre();
	 this->label37->Text = "S/. " + Convert::ToString(listaBebidas[0]->GetPrecio());

	 this->label23->Text = listaBebidas[1]->GetNombre();
	 this->label22->Text = "S/. " + Convert::ToString(listaBebidas[1]->GetPrecio());

	 this->label26->Text = listaBebidas[2]->GetNombre();
	 this->label25->Text = "S/. " + Convert::ToString(listaBebidas[2]->GetPrecio());

	 this->label29->Text = listaBebidas[3]->GetNombre();
	 this->label28->Text = "S/. " + Convert::ToString(listaBebidas[3]->GetPrecio());

	 this->label32->Text = listaBebidas[4]->GetNombre();
	 this->label31->Text = "S/. " + Convert::ToString(listaBebidas[4]->GetPrecio());

	 this->label35->Text = listaBebidas[5]->GetNombre();
	 this->label34->Text = "S/. " + Convert::ToString(listaBebidas[5]->GetPrecio());

	 /*Platos*/
	 

	 
	 this->label1->Text = listaPlato[0]->GetNombre();
	 this->label7->Text = "S/. " + Convert::ToString(listaPlato[0]->GetPrecio());

	 this->label4->Text = listaPlato[1]->GetNombre();
	 this->label3->Text = "S/. " + Convert::ToString(listaPlato[1]->GetPrecio());

	 this->label8->Text = listaPlato[2]->GetNombre();
	 this->label6->Text = "S/. " + Convert::ToString(listaPlato[2]->GetPrecio());

	 this->label11->Text = listaPlato[3]->GetNombre();
	 this->label10->Text = "S/. " + Convert::ToString(listaPlato[3]->GetPrecio());

	 this->label15->Text = listaPlato[4]->GetNombre();
	 this->label14->Text = "S/. " + Convert::ToString(listaPlato[4]->GetPrecio());

	 this->label18->Text = listaPlato[5]->GetNombre();
	 this->label17->Text = "S/. " + Convert::ToString(listaPlato[5]->GetPrecio());

	 /*Codigo para obtener la cantidad pedida por el usuario en caso ya lo ha hecho*/
	 
		/*modificar a 0 la cantidad de cada producto*/
		 /*Asumiendo que solo se usan 6 bebidas y 6 platos botones*/
		 
	 this->label13->Text="0";
	 this->label5->Text = "0";
	 this->label9->Text = "0";
	 this->label2->Text = "0";
	 this->label12->Text = "0";
	 this->label16->Text = "0";
		 /*
		 int valor = Convert::ToInt32(this->label21->Text);
		 */

	 this->label36->Text = "0";
	 this->label21->Text = "0";
	 this->label24->Text = "0";
	 this->label27->Text = "0";
	 this->label30->Text = "0";
	 this->label33->Text = "0";
	 /*si es 0, indica que ya se hizo un pedido previamente*/
	 if(this->nuevo_pedido==0){
		 /*leer valores del texto y setearlos a cada label*/
		 List<Plato^>^ lista_pedidos_activos_plato = objPedidoController->LeerPedidosPlato("pedidotemporal//pedido1.txt");
		 List<Bebida^>^ lista_pedidos_activos_bebida = objPedidoController->LeerPedidosBebidas("pedidotemporal//pedido1.txt");
		 int id_i=0;
		 for each (Plato^ plato_i in lista_pedidos_activos_plato) {
			 /*buscando el id del plato*/

			 String^ nombre_i = plato_i->GetNombre();
			 for each (Plato ^ plato_lista_i in ListaPlatoInfoGeneral) {
				 String^ nombre_j = plato_lista_i->GetNombre();
				 if (nombre_i == nombre_j) {
					 id_i = plato_lista_i->GetId();
					 break;
				 }
			 };

			 /*modificando cantidad de acuerdo al id*/
			/*posbiles valores para id, 1-6 */
			 switch (id_i)
			 {
			 case 1:
				 this->label13->Text = Convert::ToString(plato_i->GetCantidadPedida());
			 case 2:
				 this->label2->Text = Convert::ToString(plato_i->GetCantidadPedida());
			 case 3:
				 this->label5->Text = Convert::ToString(plato_i->GetCantidadPedida());
			 case 4:
				 this->label9->Text = Convert::ToString(plato_i->GetCantidadPedida());
			 case 5:
				 this->label12->Text = Convert::ToString(plato_i->GetCantidadPedida());
			 case 6:
				 this->label16->Text = Convert::ToString(plato_i->GetCantidadPedida());
			 default:
				 break;
			 };

		 }
		 int id_i_b=0;
		 for each (Bebida ^ bebida_i in lista_pedidos_activos_bebida) {
			 /*buscando el id del plato*/

			 String^ nombre_i = bebida_i->GetNombre();
			 for each (Bebida ^ bebida_lista_i in ListaBebidasInfogeneral) {
				 String^ nombre_j = bebida_lista_i->GetNombre();
				 if (nombre_i == nombre_j) {
					 id_i_b = bebida_lista_i->GetId();
					 break;
				 }
			 };

			 /*modificando cantidad de acuerdo al id*/
			/*posbiles valores para id, 1-6 */
			 switch (id_i_b)
			 {
			 case 1:
				 this->label36->Text = Convert::ToString(bebida_i->GetCantidadPedida());
			 case 2:
				 this->label21->Text = Convert::ToString(bebida_i->GetCantidadPedida());
			 case 3:
				 this->label24->Text = Convert::ToString(bebida_i->GetCantidadPedida());
			 case 4:
				 this->label27->Text = Convert::ToString(bebida_i->GetCantidadPedida());
			 case 5:
				 this->label30->Text = Convert::ToString(bebida_i->GetCantidadPedida());
			 case 6:
				 this->label33->Text = Convert::ToString(bebida_i->GetCantidadPedida());
			 default:
				 break;
			 };

		 }
	 }
	 
		

		


	 


}


private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	int valor2 = Convert::ToInt32(this->label13->Text);


	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor2 > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaPlatoInfoGeneral[0]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor2 > 0) { valor2 = valor2 - 1; };
	this->label13->Text = Convert::ToString(valor2);

}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: int OrdenEstaVacia() {
	int CantidadesPlato[6];
	int CantidadesBebida[6];

	/*Asumiendo que solo se usan 6 bebidas y 6 platos botones*/
	CantidadesPlato[0] = Convert::ToInt32(this->label13->Text);
	CantidadesPlato[1] = Convert::ToInt32(this->label2->Text);
	CantidadesPlato[2] = Convert::ToInt32(this->label5->Text);
	CantidadesPlato[3] = Convert::ToInt32(this->label9->Text);
	CantidadesPlato[4] = Convert::ToInt32(this->label12->Text);
	CantidadesPlato[5] = Convert::ToInt32(this->label16->Text);
	/*
	int valor = Convert::ToInt32(this->label21->Text);
	*/

	CantidadesBebida[0] = Convert::ToInt32(this->label36->Text);
	CantidadesBebida[1] = Convert::ToInt32(this->label21->Text);
	CantidadesBebida[2] = Convert::ToInt32(this->label24->Text);
	CantidadesBebida[3] = Convert::ToInt32(this->label27->Text);
	CantidadesBebida[4] = Convert::ToInt32(this->label30->Text);
	CantidadesBebida[5] = Convert::ToInt32(this->label33->Text);
	int suma = 0;
	for (int j = 0; j < 6; j++) {

		suma = suma + CantidadesBebida[j] + CantidadesPlato[j];
	};
	if(suma > 0) {
		return 0;
	}
	else {
		return 1;
	}
};

private: void CantidadACero() {
	/*Asumiendo que solo se usan 6 bebidas y 6 platos botones*/
	this->label13->Text = "0";
	this->label2->Text = "0";
	this->label5->Text = "0";
	this->label9->Text = "0";
	this->label12->Text = "0";
	this->label16->Text = "0";
	/*
	int valor = Convert::ToInt32(this->label21->Text);
	*/

	this->label36->Text = "0";
	this->label21->Text = "0";
	this->label24->Text = "0";
	this->label27->Text = "0";
	this->label30->Text = "0";
	this->label33->Text = "0";

	this->label20->Text = "S/ 0";
	this->ObjPedidoMesa->SetCuenta(0);

};
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	int Cantidades_elegidas_plato[6];
	int Cantidades_elegidas_bebida[6];

	/*Asumiendo que solo se usan 6 bebidas y 6 platos botones*/
	Cantidades_elegidas_plato[0] = Convert::ToInt32(this->label13->Text);
	Cantidades_elegidas_plato[1] = Convert::ToInt32(this->label2->Text);
	Cantidades_elegidas_plato[2] = Convert::ToInt32(this->label5->Text);
	Cantidades_elegidas_plato[3] = Convert::ToInt32(this->label9->Text);
	Cantidades_elegidas_plato[4] = Convert::ToInt32(this->label12->Text);
	Cantidades_elegidas_plato[5] = Convert::ToInt32(this->label16->Text);
	/*
	int valor = Convert::ToInt32(this->label21->Text);
	*/

	Cantidades_elegidas_bebida[0] = Convert::ToInt32(this->label36->Text);
	Cantidades_elegidas_bebida[1] = Convert::ToInt32(this->label21->Text);
	Cantidades_elegidas_bebida[2] = Convert::ToInt32(this->label24->Text);
	Cantidades_elegidas_bebida[3] = Convert::ToInt32(this->label27->Text);
	Cantidades_elegidas_bebida[4] = Convert::ToInt32(this->label30->Text);
	Cantidades_elegidas_bebida[5] = Convert::ToInt32(this->label33->Text);
	int esPedidoVacio = OrdenEstaVacia();
	/*vale 1 si no se pide nada, vale 0 si hay algo*/
	if (esPedidoVacio==0) {
		PedidoController^ objPedidoController = gcnew PedidoController();
		objPedidoController->escribirPedidos(
			this->ListaPlatoInfoGeneral,
			this->ListaBebidasInfogeneral,
			"pedido", Cantidades_elegidas_bebida, Cantidades_elegidas_plato
		);
		/*Guardando un 0 en un .txt para comunicar al sistema que no es un pedido nuevo*/
		objPedidoController->escribirArchivo("estado_pedido", 0);

		
		frmComensalGenerarPedido^ Ventana2 = gcnew frmComensalGenerarPedido(this->ObjPedidoMesa, this->numMesa,0);
		this->Visible=false;
		Ventana2->ShowDialog();
		this->buttonVerPedidoTotal->Enabled = true;
		this->buttonVerPedidoTotal->Visible = true;
		this->Visible = true;

	}
	else {
		frmComensalPedidoVacio^ ventana = gcnew frmComensalPedidoVacio();
		
		ventana->ShowDialog();
		
	}
	if (this->ObjPedidoMesa->getReiniciarPedido()) {
		CantidadACero();
	};
	


}	
/*eventos*/
/*	   System::Windows::Forms::Form::OnShown(System::EventArgs^)
*/



private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBox1->Visible = false;
	this->groupBox9->Visible = true;
	/*
		this->groupBox1->Visible = true;
		this->groupBox9->Visible = false;
	*/
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
//Apartir de aqui se definen las funcionalidaddes de los botones + - para disminuir la cantidad de platos que el usuario desea
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label36->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label36->Text = Convert::ToString(valor);

	//Aqui aumentamos el valor de cuenta total
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaBebidasInfogeneral[0]->GetPrecio());	
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	
}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor2 = Convert::ToInt32(this->label36->Text);
	

	double CuentaAuxiliar= this->ObjPedidoMesa->GetCuenta();	
	if (CuentaAuxiliar > double(0) && valor2>0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaBebidasInfogeneral[0]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}		
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor2 > 0) { valor2 = valor2 - 1; };
	this->label36->Text = Convert::ToString(valor2);
	
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label21->Text);
	
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaBebidasInfogeneral[1]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor > 0) { valor = valor - 1; };
	this->label21->Text = Convert::ToString(valor);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label21->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label21->Text = Convert::ToString(valor);

	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaBebidasInfogeneral[1]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());

}  
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label24->Text);
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaBebidasInfogeneral[2]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor > 0) { valor = valor - 1; };
	this->label24->Text = Convert::ToString(valor);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label24->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label24->Text = Convert::ToString(valor);

	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaBebidasInfogeneral[2]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label27->Text);
	
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaBebidasInfogeneral[3]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor > 0) { valor = valor - 1; };
	this->label27->Text = Convert::ToString(valor);
}

private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label27->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label27->Text = Convert::ToString(valor);

	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaBebidasInfogeneral[3]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label30->Text);
	

	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaBebidasInfogeneral[4]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor > 0) { valor = valor - 1; };
	this->label30->Text = Convert::ToString(valor);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label30->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label30->Text = Convert::ToString(valor);

	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaBebidasInfogeneral[4]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label33->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label33->Text = Convert::ToString(valor);

	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaBebidasInfogeneral[5]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label33->Text);
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaBebidasInfogeneral[5]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};

	if (valor > 0) { valor = valor - 1; };
	this->label33->Text = Convert::ToString(valor);
}

	   //Aqui termina los botones + -//
private: System::Void groupBox9_Enter(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void groupBox16_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmComensal_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label13->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label13->Text = Convert::ToString(valor);

	//Aqui aumentamos el valor de cuenta total
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaPlatoInfoGeneral[0]->GetPrecio());
	
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor2 = Convert::ToInt32(this->label2->Text);


	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor2 > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaPlatoInfoGeneral[1]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor2 > 0) { valor2 = valor2 - 1; };
	this->label2->Text = Convert::ToString(valor2);

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int valor = Convert::ToInt32(this->label2->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label2->Text = Convert::ToString(valor);

	//Aqui aumentamos el valor de cuenta total
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaPlatoInfoGeneral[1]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());



}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	int valor2 = Convert::ToInt32(this->label5->Text);


	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor2 > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaPlatoInfoGeneral[2]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor2 > 0) { valor2 = valor2 - 1; };
	this->label5->Text = Convert::ToString(valor2);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	int valor = Convert::ToInt32(this->label5->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label5->Text = Convert::ToString(valor);

	//Aqui aumentamos el valor de cuenta total
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaPlatoInfoGeneral[2]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());


}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	int valor2 = Convert::ToInt32(this->label9->Text);


	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor2 > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaPlatoInfoGeneral[3]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor2 > 0) { valor2 = valor2 - 1; };
	this->label9->Text = Convert::ToString(valor2);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	int valor = Convert::ToInt32(this->label9->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label9->Text = Convert::ToString(valor);

	//Aqui aumentamos el valor de cuenta total
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaPlatoInfoGeneral[3]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());


}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

	int valor2 = Convert::ToInt32(this->label12->Text);


	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor2 > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaPlatoInfoGeneral[4]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor2 > 0) { valor2 = valor2 - 1; };
	this->label12->Text = Convert::ToString(valor2);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {


	int valor = Convert::ToInt32(this->label12->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label12->Text = Convert::ToString(valor);

	//Aqui aumentamos el valor de cuenta total
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaPlatoInfoGeneral[4]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());


}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

	int valor2 = Convert::ToInt32(this->label16->Text);


	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	if (CuentaAuxiliar > double(0) && valor2 > 0) {
		CuentaAuxiliar = CuentaAuxiliar - (this->ListaPlatoInfoGeneral[5]->GetPrecio());
		if (CuentaAuxiliar < 0.3) {
			this->ObjPedidoMesa->SetCuenta(0);
		}
		else {
			this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
		}
		this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());
	};
	if (valor2 > 0) { valor2 = valor2 - 1; };
	this->label16->Text = Convert::ToString(valor2);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

	int valor = Convert::ToInt32(this->label16->Text);
	if (valor >= 0) { valor = valor + 1; };
	this->label16->Text = Convert::ToString(valor);

	//Aqui aumentamos el valor de cuenta total
	double CuentaAuxiliar = this->ObjPedidoMesa->GetCuenta();
	CuentaAuxiliar = CuentaAuxiliar + (this->ListaPlatoInfoGeneral[5]->GetPrecio());
	this->ObjPedidoMesa->SetCuenta(CuentaAuxiliar);
	this->label20->Text = "S/" + Convert::ToString(this->ObjPedidoMesa->GetCuenta());


}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	int esPedidoVacio = OrdenEstaVacia();
	frmComensalSolicitarAtencion^ venta_emergente_mozo = gcnew frmComensalSolicitarAtencion(this->ObjPedidoMesa, this->numMesa, esPedidoVacio);
	venta_emergente_mozo->ShowDialog();
	/*reiniciando valores de la comida*/
	if (this->ObjPedidoMesa->getReiniciarPedido()) {
		CantidadACero();
		this->buttonVerPedidoTotal->Visible = false;
		/*copiar la informaación en otro archivo y reiniciar los archivos pedido mesa total*/
		
	};

}
/*
private: System::Void buttonReinicio_Click(System::Object^ sender, System::EventArgs^ e) {


	this->label13->Text = "0";
	this->label5->Text = "0";
	this->label9->Text = "0";
	this->label12->Text = "0";
	this->label16->Text = "0";
	this->label2->Text = "0";


	this->label36->Text = "0";
	this->label21->Text = "0";
	this->label24->Text = "0";
	this->label27->Text = "0";
	this->label30->Text = "0";
	this->label33->Text = "0";
	this->label20->Text = "0";
	
}
*/

private: System::Void buttonVerPedidoTotal_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void buttonVerPedidoTotal_Click_1(System::Object^ sender, System::EventArgs^ e) {
	frmComensalGenerarPedido^ cuenta = gcnew frmComensalGenerarPedido(this->ObjPedidoMesa, this->numMesa, 2);
	cuenta->FormatoCuenta();
	this->Visible=false;
	cuenta->ShowDialog();
	this->Visible = true;
}
};


}
