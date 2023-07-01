#pragma once
#include "frmComensalGenerarPedido.h"

#include "frmComensalSolicitarAtencion.h"
#include "frmComensalIngresarClave.h"
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
			this->objOrdenMesa = gcnew OrdenMesa();
			this->objOrdenMesa->SetPedidoEnviado(0);
			incializarOrdenMesa();
			ObjPedidoMesa->setReiniciarPedido(0);
			PedidoController^ objPedidoController = gcnew PedidoController();
			/*modificar aqui para las imágenes*/
			this->ListaBebidasInfogeneral = objPedidoController->obtenerInfoBebida();
			this->ListaPlatoInfoGeneral = objPedidoController->obtenerInfoPlato();
			MostrasInfoPlatosYBebidas();

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
	private: OrdenMesa^ objOrdenMesa;
	private: int reiniciarCuentaDefault = 0;
	
	
	private: int numMesa=1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	



	private: System::Windows::Forms::Button^ BotonSiguiente;


	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::GroupBox^ groupBox9;




public: System::Windows::Forms::GroupBox^ groupBox16;
private: System::Windows::Forms::Button^ buttonVerPedidoTotal;
private: System::Windows::Forms::DataGridView^ dataGridViewPlatos;






private: System::Windows::Forms::DataGridView^ dataGridViewBebidas;






























private: System::Windows::Forms::Button^ botonMesa;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnaNombre;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaPrecioUnidad;
private: System::Windows::Forms::DataGridViewButtonColumn^ Columnamenos;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCantidad;
private: System::Windows::Forms::DataGridViewButtonColumn^ ColumnaMas;
private: System::Windows::Forms::DataGridViewImageColumn^ ColumnaImagen;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewButtonColumn^ menos;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewButtonColumn^ mas;
private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewImageColumn1;
























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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmComensal::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewPlatos = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewBebidas = (gcnew System::Windows::Forms::DataGridView());
			this->BotonSiguiente = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->botonMesa = (gcnew System::Windows::Forms::Button());
			this->buttonVerPedidoTotal = (gcnew System::Windows::Forms::Button());
			this->columnaNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaPrecioUnidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Columnamenos = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->ColumnaCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaMas = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->ColumnaImagen = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menos = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mas = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewImageColumn1 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPlatos))->BeginInit();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewBebidas))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(88, 18);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Comidas";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmComensal::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(224, 18);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Bebida";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmComensal::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->dataGridViewPlatos);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->groupBox1->Location = System::Drawing::Point(83, 60);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(980, 610);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"C";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmComensal::groupBox1_Enter);
			// 
			// dataGridViewPlatos
			// 
			this->dataGridViewPlatos->AllowUserToAddRows = false;
			this->dataGridViewPlatos->AllowUserToDeleteRows = false;
			this->dataGridViewPlatos->AllowUserToResizeColumns = false;
			this->dataGridViewPlatos->AllowUserToResizeRows = false;
			this->dataGridViewPlatos->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridViewPlatos->CausesValidation = false;
			this->dataGridViewPlatos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPlatos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->columnaNombre,
					this->ColumnaPrecioUnidad, this->Columnamenos, this->ColumnaCantidad, this->ColumnaMas, this->ColumnaImagen
			});
			this->dataGridViewPlatos->Location = System::Drawing::Point(32, 24);
			this->dataGridViewPlatos->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewPlatos->MultiSelect = false;
			this->dataGridViewPlatos->Name = L"dataGridViewPlatos";
			this->dataGridViewPlatos->ReadOnly = true;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->Padding = System::Windows::Forms::Padding(10, 5, 5, 0);
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewPlatos->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridViewPlatos->RowHeadersVisible = false;
			this->dataGridViewPlatos->RowHeadersWidth = 51;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridViewPlatos->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridViewPlatos->Size = System::Drawing::Size(917, 549);
			this->dataGridViewPlatos->TabIndex = 1;
			this->dataGridViewPlatos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmComensal::dataGridViewPlatos_CellContentClick);
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox9->Controls->Add(this->dataGridViewBebidas);
			this->groupBox9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->groupBox9->Location = System::Drawing::Point(88, 62);
			this->groupBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Size = System::Drawing::Size(975, 607);
			this->groupBox9->TabIndex = 35;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"B";
			this->groupBox9->Enter += gcnew System::EventHandler(this, &frmComensal::groupBox9_Enter);
			// 
			// dataGridViewBebidas
			// 
			this->dataGridViewBebidas->AllowUserToAddRows = false;
			this->dataGridViewBebidas->AllowUserToDeleteRows = false;
			this->dataGridViewBebidas->AllowUserToResizeColumns = false;
			this->dataGridViewBebidas->AllowUserToResizeRows = false;
			this->dataGridViewBebidas->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridViewBebidas->CausesValidation = false;
			this->dataGridViewBebidas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewBebidas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn3, this->menos, this->dataGridViewTextBoxColumn2, this->mas, this->dataGridViewImageColumn1
			});
			this->dataGridViewBebidas->Location = System::Drawing::Point(25, 22);
			this->dataGridViewBebidas->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewBebidas->MultiSelect = false;
			this->dataGridViewBebidas->Name = L"dataGridViewBebidas";
			this->dataGridViewBebidas->ReadOnly = true;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->Padding = System::Windows::Forms::Padding(10, 5, 5, 0);
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewBebidas->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridViewBebidas->RowHeadersVisible = false;
			this->dataGridViewBebidas->RowHeadersWidth = 51;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridViewBebidas->RowsDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridViewBebidas->Size = System::Drawing::Size(910, 540);
			this->dataGridViewBebidas->TabIndex = 3;
			this->dataGridViewBebidas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmComensal::dataGridViewBebidas_CellContentClick);
			// 
			// BotonSiguiente
			// 
			this->BotonSiguiente->BackColor = System::Drawing::Color::Snow;
			this->BotonSiguiente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotonSiguiente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonSiguiente->Location = System::Drawing::Point(821, 20);
			this->BotonSiguiente->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BotonSiguiente->Name = L"BotonSiguiente";
			this->BotonSiguiente->Size = System::Drawing::Size(247, 36);
			this->BotonSiguiente->TabIndex = 16;
			this->BotonSiguiente->Text = L"Resumen del pedido";
			this->BotonSiguiente->UseVisualStyleBackColor = false;
			this->BotonSiguiente->Click += gcnew System::EventHandler(this, &frmComensal::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(71, 690);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(180, 46);
			this->button17->TabIndex = 17;
			this->button17->Text = L"Atras";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Location = System::Drawing::Point(376, 678);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(355, 60);
			this->groupBox8->TabIndex = 18;
			this->groupBox8->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(172, 12);
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
			this->label19->Location = System::Drawing::Point(28, 22);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(140, 25);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Monto Total :";
			this->label19->Click += gcnew System::EventHandler(this, &frmComensal::label19_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(849, 690);
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
			this->groupBox16->BackColor = System::Drawing::Color::Maroon;
			this->groupBox16->Controls->Add(this->botonMesa);
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
			this->groupBox16->Location = System::Drawing::Point(7, 14);
			this->groupBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox16->Size = System::Drawing::Size(1152, 738);
			this->groupBox16->TabIndex = 37;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"MENÚ DEL DÍA";
			this->groupBox16->Enter += gcnew System::EventHandler(this, &frmComensal::groupBox16_Enter);
			// 
			// botonMesa
			// 
			this->botonMesa->BackColor = System::Drawing::Color::White;
			this->botonMesa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonMesa->Location = System::Drawing::Point(409, 17);
			this->botonMesa->Margin = System::Windows::Forms::Padding(4);
			this->botonMesa->Name = L"botonMesa";
			this->botonMesa->Size = System::Drawing::Size(109, 37);
			this->botonMesa->TabIndex = 37;
			this->botonMesa->Text = L"Mesa 1";
			this->botonMesa->UseVisualStyleBackColor = false;
			this->botonMesa->Click += gcnew System::EventHandler(this, &frmComensal::botonMesa_Click);
			// 
			// buttonVerPedidoTotal
			// 
			this->buttonVerPedidoTotal->BackColor = System::Drawing::Color::Snow;
			this->buttonVerPedidoTotal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonVerPedidoTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->buttonVerPedidoTotal->Location = System::Drawing::Point(589, 18);
			this->buttonVerPedidoTotal->Margin = System::Windows::Forms::Padding(4);
			this->buttonVerPedidoTotal->Name = L"buttonVerPedidoTotal";
			this->buttonVerPedidoTotal->Size = System::Drawing::Size(225, 37);
			this->buttonVerPedidoTotal->TabIndex = 36;
			this->buttonVerPedidoTotal->Text = L"Ver Pedido Total";
			this->buttonVerPedidoTotal->UseVisualStyleBackColor = false;
			this->buttonVerPedidoTotal->Click += gcnew System::EventHandler(this, &frmComensal::buttonVerPedidoTotal_Click_1);
			// 
			// columnaNombre
			// 
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(0, 15, 0, 0);
			this->columnaNombre->DefaultCellStyle = dataGridViewCellStyle1;
			this->columnaNombre->Frozen = true;
			this->columnaNombre->HeaderText = L"nombre";
			this->columnaNombre->MinimumWidth = 6;
			this->columnaNombre->Name = L"columnaNombre";
			this->columnaNombre->ReadOnly = true;
			this->columnaNombre->Width = 250;
			// 
			// ColumnaPrecioUnidad
			// 
			this->ColumnaPrecioUnidad->HeaderText = L"PrecioUnidad";
			this->ColumnaPrecioUnidad->MinimumWidth = 6;
			this->ColumnaPrecioUnidad->Name = L"ColumnaPrecioUnidad";
			this->ColumnaPrecioUnidad->ReadOnly = true;
			// 
			// Columnamenos
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->Columnamenos->DefaultCellStyle = dataGridViewCellStyle2;
			this->Columnamenos->FillWeight = 20;
			this->Columnamenos->HeaderText = L"menos";
			this->Columnamenos->MinimumWidth = 6;
			this->Columnamenos->Name = L"Columnamenos";
			this->Columnamenos->ReadOnly = true;
			this->Columnamenos->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Columnamenos->Text = L"-";
			this->Columnamenos->Width = 20;
			// 
			// ColumnaCantidad
			// 
			dataGridViewCellStyle3->Padding = System::Windows::Forms::Padding(0, 15, 0, 0);
			this->ColumnaCantidad->DefaultCellStyle = dataGridViewCellStyle3;
			this->ColumnaCantidad->HeaderText = L"cantidad";
			this->ColumnaCantidad->MinimumWidth = 6;
			this->ColumnaCantidad->Name = L"ColumnaCantidad";
			this->ColumnaCantidad->ReadOnly = true;
			this->ColumnaCantidad->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->ColumnaCantidad->Width = 150;
			// 
			// ColumnaMas
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->ColumnaMas->DefaultCellStyle = dataGridViewCellStyle4;
			this->ColumnaMas->FillWeight = 20;
			this->ColumnaMas->HeaderText = L"mas";
			this->ColumnaMas->MinimumWidth = 6;
			this->ColumnaMas->Name = L"ColumnaMas";
			this->ColumnaMas->ReadOnly = true;
			this->ColumnaMas->Text = L"+";
			this->ColumnaMas->Width = 20;
			// 
			// ColumnaImagen
			// 
			this->ColumnaImagen->HeaderText = L"imagen";
			this->ColumnaImagen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ColumnaImagen.Image")));
			this->ColumnaImagen->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->ColumnaImagen->MinimumWidth = 6;
			this->ColumnaImagen->Name = L"ColumnaImagen";
			this->ColumnaImagen->ReadOnly = true;
			this->ColumnaImagen->Width = 125;
			// 
			// dataGridViewTextBoxColumn1
			// 
			dataGridViewCellStyle7->Padding = System::Windows::Forms::Padding(0, 15, 0, 0);
			this->dataGridViewTextBoxColumn1->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridViewTextBoxColumn1->Frozen = true;
			this->dataGridViewTextBoxColumn1->HeaderText = L"nombre";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 250;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"PrecioUnidad";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// menos
			// 
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->menos->DefaultCellStyle = dataGridViewCellStyle8;
			this->menos->FillWeight = 20;
			this->menos->HeaderText = L"menos";
			this->menos->MinimumWidth = 6;
			this->menos->Name = L"menos";
			this->menos->ReadOnly = true;
			this->menos->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->menos->Text = L"-";
			this->menos->Width = 20;
			// 
			// dataGridViewTextBoxColumn2
			// 
			dataGridViewCellStyle9->Padding = System::Windows::Forms::Padding(0, 15, 0, 0);
			this->dataGridViewTextBoxColumn2->DefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridViewTextBoxColumn2->HeaderText = L"cantidad";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// mas
			// 
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->mas->DefaultCellStyle = dataGridViewCellStyle10;
			this->mas->FillWeight = 20;
			this->mas->HeaderText = L"mas";
			this->mas->MinimumWidth = 6;
			this->mas->Name = L"mas";
			this->mas->ReadOnly = true;
			this->mas->Text = L"+";
			this->mas->Width = 20;
			// 
			// dataGridViewImageColumn1
			// 
			this->dataGridViewImageColumn1->HeaderText = L"imagen";
			this->dataGridViewImageColumn1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dataGridViewImageColumn1.Image")));
			this->dataGridViewImageColumn1->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->dataGridViewImageColumn1->MinimumWidth = 6;
			this->dataGridViewImageColumn1->Name = L"dataGridViewImageColumn1";
			this->dataGridViewImageColumn1->ReadOnly = true;
			this->dataGridViewImageColumn1->Width = 125;
			// 
			// frmComensal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1173, 750);
			this->Controls->Add(this->groupBox16);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmComensal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmComensal";
			this->Load += gcnew System::EventHandler(this, &frmComensal::frmComensal_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPlatos))->EndInit();
			this->groupBox9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewBebidas))->EndInit();
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
void incializarOrdenMesa() {
	this->objOrdenMesa->SetEstado(0);
	this->objOrdenMesa->SetMesa(this->numMesa);
	this->objOrdenMesa->SetCuenta(0.0);
	this->ObjPedidoMesa->setMesa(this->numMesa);
}
void MostrasInfoPlatosYBebidas() {
	PedidoController^ objPedidoController = gcnew PedidoController();
	this->nuevo_pedido = objPedidoController->esNuevoPedido("estado_pedido");

	List<Bebida^>^ listaBebidas = objPedidoController->obtenerInfoBebida();
	List<Plato^>^ listaPlato = objPedidoController->obtenerInfoPlato();
	
	/*limpiar el data gridview*/
	this->dataGridViewPlatos->Rows->Clear();
		for (int i = 0; i < listaPlato->Count; i++) {
			Plato^ pI = listaPlato[i];
			/*añadiendo contenido a columna uno por uno*/
			array<String^>^ FilaGrilla = gcnew array<String^>(5);
			FilaGrilla[0] = pI->GetNombre();
			FilaGrilla[1] = Convert::ToString(pI->GetPrecio());
			FilaGrilla[2] = "-";
			FilaGrilla[3] = "0";
			FilaGrilla[4] = "+";
			String^ direccion = "Recursos/productosImgenes/" + Convert::ToString(pI->GetId()) + ".jpg";
			this->dataGridViewPlatos->Rows->Add(FilaGrilla);
			//AgregandoImagen
			this->dataGridViewPlatos->Rows[i]->Cells[5]->Value = Image::FromFile(direccion);
		};
	/*Bebidas*/
	
	this->dataGridViewBebidas->Rows->Clear();
		for (int i = 0; i < listaBebidas->Count; i++) {
			Bebida^ bI = listaBebidas[i];
			/*añadiendo contenido a columna uno por uno*/
			array<String^>^ FilaGrilla = gcnew array<String^>(5);
			FilaGrilla[0] = bI->GetNombre();
			FilaGrilla[1] = Convert::ToString(bI->GetPrecio());
			FilaGrilla[2] = "-";
			FilaGrilla[3] = "0";
			FilaGrilla[4] = "+";
			String^ direccion = "Recursos/productosImgenes/" + Convert::ToString(bI->GetId()) + ".jpg";
			this->dataGridViewBebidas->Rows->Add(FilaGrilla);
			//AgregandoImagen
			this->dataGridViewBebidas->Rows[i]->Cells[5]->Value = Image::FromFile(direccion);
		}




	 /*Codigo para obtener la cantidad pedida por el usuario en caso ya lo ha hecho*/
	 
		/*modificar a 0 la cantidad de cada producto*/
		 /*Asumiendo que solo se usan 6 bebidas y 6 platos botones*/
	/*
	 this->label13->Text="0";
	 this->label5->Text = "0";
	 this->label9->Text = "0";
	 this->label2->Text = "0";
	 this->label12->Text = "0";
	 this->label16->Text = "0";

	 this->label36->Text = "0";
	 this->label21->Text = "0";
	 this->label24->Text = "0";
	 this->label27->Text = "0";
	 this->label30->Text = "0";
	 this->label33->Text = "0";
	 */
 


}


private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   /*
	    
	   MIRAR ESTA FUNCIÓN PARA HACER EL MODELO DE LA ACTUALIZACION DE LA CANTIDAD DEL PEDIDO

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
	   */
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
	   /*
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; //Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0
	   int codigoCarreraEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	   CarreraController^ objCarreraController = gcnew CarreraController();
	   objCarreraController->eliminarCarrera(codigoCarreraEliminar);
	   List<Carrera^>^ listaCarreras = objCarreraController->buscarTodas();
	   mostrarGrilla(listaCarreras);
	   
	   */

private: int OrdenEstaVacia() {
	int CantidadesPlato[6];
	int CantidadesBebida[6];
	/*
	//Asumiendo que solo se usan 6 bebidas y 6 platos botones
	CantidadesPlato[0] = Convert::ToInt32(this->label13->Text);
	CantidadesPlato[1] = Convert::ToInt32(this->label2->Text);
	CantidadesPlato[2] = Convert::ToInt32(this->label5->Text);
	CantidadesPlato[3] = Convert::ToInt32(this->label9->Text);
	CantidadesPlato[4] = Convert::ToInt32(this->label12->Text);
	CantidadesPlato[5] = Convert::ToInt32(this->label16->Text);
	
	int valor = Convert::ToInt32(this->label21->Text);
	

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
	*/
	int suma = 0;
	int lb = this->dataGridViewBebidas->Rows->Count;
	int lp = this->dataGridViewPlatos->Rows->Count;
	//platos
	for (int i = 0; i < lp; i++) {
		int cantidadI = Convert::ToInt32(this->dataGridViewPlatos->Rows[i]->Cells[3]->Value->ToString());
		suma = suma + cantidadI;
	}
	//platos
	for (int i = 0; i < lb; i++) {
		int cantidadB = Convert::ToInt32(this->dataGridViewBebidas->Rows[i]->Cells[3]->Value->ToString());
		suma = suma + cantidadB;
	}
	if (suma == 0) {
		return 1;
	}
	else {
		return 0;
	}



};

private: void CantidadACero() {
	
	int lb = this->dataGridViewBebidas->Rows->Count;
	int lp = this->dataGridViewPlatos->Rows->Count;
	//platos
	for (int i = 0; i < lp; i++) {
		this->dataGridViewPlatos->Rows[i]->Cells[3]->Value = "0";
		
	}
	//platos
	for (int i = 0; i < lb; i++) {
		this->dataGridViewBebidas->Rows[i]->Cells[3]->Value = "0";

	}
	this->label20->Text = "S/ 0";
	this->ObjPedidoMesa->SetCuenta(0);

};

private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		
	List<String^>^ listaCantidadesP = gcnew List<String^>();
	List<String^>^ listaCantidadesB = gcnew List<String^>();
	int lb = this->dataGridViewBebidas->Rows->Count;
	int lp = this->dataGridViewPlatos->Rows->Count;

	for (int i = 0; i < lp; i++) {
		listaCantidadesP->Add(this->dataGridViewPlatos->Rows[i]->Cells[3]->Value->ToString());

	}
	//platos
	for (int i = 0; i < lb; i++) {
		listaCantidadesB->Add(this->dataGridViewBebidas->Rows[i]->Cells[3]->Value->ToString());

	}

	/*


	//Asumiendo que solo se usan 6 bebidas y 6 platos botones
	Cantidades_elegidas_plato[0] = Convert::ToInt32(this->label13->Text);
	Cantidades_elegidas_plato[1] = Convert::ToInt32(this->label2->Text);
	Cantidades_elegidas_plato[2] = Convert::ToInt32(this->label5->Text);
	Cantidades_elegidas_plato[3] = Convert::ToInt32(this->label9->Text);
	Cantidades_elegidas_plato[4] = Convert::ToInt32(this->label12->Text);
	Cantidades_elegidas_plato[5] = Convert::ToInt32(this->label16->Text);
	

	Cantidades_elegidas_bebida[0] = Convert::ToInt32(this->label36->Text);
	Cantidades_elegidas_bebida[1] = Convert::ToInt32(this->label21->Text);
	Cantidades_elegidas_bebida[2] = Convert::ToInt32(this->label24->Text);
	Cantidades_elegidas_bebida[3] = Convert::ToInt32(this->label27->Text);
	Cantidades_elegidas_bebida[4] = Convert::ToInt32(this->label30->Text);
	Cantidades_elegidas_bebida[5] = Convert::ToInt32(this->label33->Text);
	*/


	int esPedidoVacio = OrdenEstaVacia();
	/*vale 1 si no se pide nada, vale 0 si hay algo*/
	if (esPedidoVacio == 0) {
		PedidoController^ objPedidoController = gcnew PedidoController();
		objPedidoController->escribirPedidos(
			this->ListaPlatoInfoGeneral,
			this->ListaBebidasInfogeneral,
			"pedido", listaCantidadesB, listaCantidadesP
		);
		/*Guardando un 0 en un .txt para comunicar al sistema que no es un pedido nuevo*/
		objPedidoController->escribirArchivo("Recursos/Comensal/pedidotemporal/estado_pedido", 0);
		this->objOrdenMesa->SetCuenta(this->ObjPedidoMesa->GetCuenta());
		frmComensalGenerarPedido^ Ventana2 = gcnew frmComensalGenerarPedido(this->ObjPedidoMesa, this->numMesa, 0,this->objOrdenMesa);
		this->Visible = false;
		Ventana2->ShowDialog();

		//array<String^>^ mostrarBoton = File::ReadAllLines("Recursos/Comensal/pedidototal/pedidomesaAsistente.txt");
		

		if (this->objOrdenMesa->GetPedidoEnviado() == 1) {
			this->buttonVerPedidoTotal->Enabled = true;
			this->buttonVerPedidoTotal->Visible = true;

		};
		
		this->Visible = true;

	}
	else {
		MessageBox::Show("El pedido está vacío");
		
	}
	if (this->ObjPedidoMesa->getReiniciarPedido()) {
		CantidadACero();

		//aumentando el id a cada plato 
		/*
		array<String^>^ idAnterior = File::ReadAllLines("Recursos/Comensal/pedidotemporal/ultimoIdPedidoMesa.txt");
		int nuevoId = Convert::ToInt32(idAnterior[0]) + 1;
		List<String^>^ lineaIdNuevo = gcnew List<String^>();
		lineaIdNuevo[0] = Convert::ToString(nuevoId);
		File::WriteAllLines("Recursos/Comensal/pedidotemporal/ultimoIdPedidoMesa.txt", lineaIdNuevo);
		*/
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


	   //Aqui termina los botones + -//
private: System::Void groupBox9_Enter(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void groupBox16_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmComensal_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}

	private: double CalcularTotal() {
		double suma = 0;
		int lb = this->dataGridViewBebidas->Rows->Count;
		int lp = this->dataGridViewPlatos->Rows->Count;
		//platos
		for (int i = 0; i < lp; i++) {
			int cantidadI = Convert::ToInt32(this->dataGridViewPlatos->Rows[i]->Cells[3]->Value->ToString());
			double precio = Convert::ToDouble(this->dataGridViewPlatos->Rows[i]->Cells[1]->Value->ToString());
			suma = suma + (precio * (double)cantidadI);
		}
		//platos
		for (int i = 0; i < lb; i++) {
			int cantidadB = Convert::ToInt32(this->dataGridViewBebidas->Rows[i]->Cells[3]->Value->ToString());
			double precio = Convert::ToDouble(this->dataGridViewBebidas->Rows[i]->Cells[1]->Value->ToString());
			suma = suma + (precio * (double)cantidadB);
		}
		return suma;
	};

private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	int esPedidoVacio = OrdenEstaVacia();
	frmComensalSolicitarAtencion^ venta_emergente_mozo = gcnew frmComensalSolicitarAtencion(this->ObjPedidoMesa, this->numMesa, esPedidoVacio,this->objOrdenMesa);
	venta_emergente_mozo->ShowDialog();
	/*reiniciando valores de la comida*/
	if (this->ObjPedidoMesa->getReiniciarPedido()) {
		CantidadACero();
		this->buttonVerPedidoTotal->Visible = false;
		/*copiar la informaación en otro archivo y reiniciar los archivos pedido mesa total*/
		
	};

}

private: System::Void buttonVerPedidoTotal_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void buttonVerPedidoTotal_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->objOrdenMesa->SetCuenta(this->ObjPedidoMesa->GetCuenta());
	frmComensalGenerarPedido^ cuenta = gcnew frmComensalGenerarPedido(this->ObjPedidoMesa, this->numMesa, 2);
	cuenta->FormatoCuentaLectura();
	this->Visible=false;
	cuenta->ShowDialog();
	this->Visible = true;
}
private: System::Void dataGridViewPlatos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (e->RowIndex < 0 && e->ColumnIndex !=
		this->dataGridViewPlatos->Columns[2]->Index && e->ColumnIndex !=
		this->dataGridViewPlatos->Columns[4]->Index) return;
	//boton menos
	if (e->ColumnIndex == this->dataGridViewPlatos->Columns[2]->Index) {
		int cantidadInicial = Convert::ToInt32(this->dataGridViewPlatos->Rows[e->RowIndex]->Cells[3]->Value->ToString());
		cantidadInicial = cantidadInicial - 1;
		if (cantidadInicial >= 0) {
			this->dataGridViewPlatos->Rows[e->RowIndex]->Cells[3]->Value = Convert::ToString(cantidadInicial);
		}
	}
	//boton mas
	if (e->ColumnIndex == this->dataGridViewPlatos->Columns[4]->Index) {
		int cantidadInicial = Convert::ToInt32(this->dataGridViewPlatos->Rows[e->RowIndex]->Cells[3]->Value->ToString());
		cantidadInicial = cantidadInicial + 1;
		
		this->dataGridViewPlatos->Rows[e->RowIndex]->Cells[3]->Value = Convert::ToString(cantidadInicial);
		
	}

	double aumento = CalcularTotal();
	this->label20->Text = "S/ " + Convert::ToString(aumento);

}

private: System::Void dataGridViewBebidas_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (e->RowIndex < 0 && e->ColumnIndex !=
		this->dataGridViewBebidas->Columns[2]->Index && e->ColumnIndex !=
		this->dataGridViewBebidas->Columns[4]->Index) return;
	//boton menos
	if (e->ColumnIndex == this->dataGridViewBebidas->Columns[2]->Index) {
		int cantidadInicial = Convert::ToInt32(this->dataGridViewBebidas->Rows[e->RowIndex]->Cells[3]->Value->ToString());
		cantidadInicial = cantidadInicial - 1;
		if (cantidadInicial >= 0) {
			this->dataGridViewBebidas->Rows[e->RowIndex]->Cells[3]->Value = Convert::ToString(cantidadInicial);
		}
	}
	//boton mas
	if (e->ColumnIndex == this->dataGridViewBebidas->Columns[4]->Index) {
		int cantidadInicial = Convert::ToInt32(this->dataGridViewBebidas->Rows[e->RowIndex]->Cells[3]->Value->ToString());
		cantidadInicial = cantidadInicial + 1;

		this->dataGridViewBebidas->Rows[e->RowIndex]->Cells[3]->Value = Convert::ToString(cantidadInicial);

	}
	double aumento = CalcularTotal();
	this->label20->Text = "S/ " + Convert::ToString(aumento);

}
private: System::Void botonMesa_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result;
	
	result = MessageBox::Show("¿Deseas cambiar el número de mesa?", "Confirmar", MessageBoxButtons::YesNo);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			frmComensalIngresarClave^ ventana = gcnew frmComensalIngresarClave();
			ventana->ShowDialog();
			array<String^>^ linea = File::ReadAllLines("Recursos/Comensal/pedidotemporal/numeroMesa.txt");
			int numero = Convert::ToInt32(linea[0]);
			this->numMesa = numero;
			this->objOrdenMesa->SetMesa(this->numMesa);
			this->ObjPedidoMesa->setMesa(this->numMesa);
			this->botonMesa->Text = "Mesa " + Convert::ToString(numMesa);
		}

}
};


}
