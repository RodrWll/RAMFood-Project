#pragma once
#include<iostream>
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
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Resumen de frmReporte
	/// </summary>
	public ref class frmReporte : public System::Windows::Forms::Form
	{
	public:
		frmReporte(void)
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
		~frmReporte()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::Button^ buttonRegresar;


	private: System::Windows::Forms::DateTimePicker^ fechaInicio;
	private: System::Windows::Forms::DateTimePicker^ fechaFin;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ botonGenerar;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartBebidas;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartPlatos;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartVentas;
	private: System::Windows::Forms::GroupBox^ groupBox4;



	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmReporte::typeid));
			this->buttonRegresar = (gcnew System::Windows::Forms::Button());
			this->fechaInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->fechaFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->botonGenerar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chartBebidas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chartPlatos = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->chartVentas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBebidas))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPlatos))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVentas))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonRegresar
			// 
			this->buttonRegresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRegresar->Location = System::Drawing::Point(1344, 703);
			this->buttonRegresar->Margin = System::Windows::Forms::Padding(6);
			this->buttonRegresar->Name = L"buttonRegresar";
			this->buttonRegresar->Size = System::Drawing::Size(181, 62);
			this->buttonRegresar->TabIndex = 4;
			this->buttonRegresar->Text = L"Regresar";
			this->buttonRegresar->UseVisualStyleBackColor = true;
			this->buttonRegresar->Click += gcnew System::EventHandler(this, &frmReporte::buttonRegresar_Click);
			// 
			// fechaInicio
			// 
			this->fechaInicio->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->fechaInicio->Location = System::Drawing::Point(104, 27);
			this->fechaInicio->Margin = System::Windows::Forms::Padding(6);
			this->fechaInicio->Name = L"fechaInicio";
			this->fechaInicio->Size = System::Drawing::Size(363, 30);
			this->fechaInicio->TabIndex = 5;
			// 
			// fechaFin
			// 
			this->fechaFin->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->fechaFin->Location = System::Drawing::Point(560, 25);
			this->fechaFin->Margin = System::Windows::Forms::Padding(6);
			this->fechaFin->Name = L"fechaFin";
			this->fechaFin->Size = System::Drawing::Size(363, 30);
			this->fechaFin->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 36);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Desde";
			this->label2->Click += gcnew System::EventHandler(this, &frmReporte::label2_Click);
			// 
			// botonGenerar
			// 
			this->botonGenerar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonGenerar->Location = System::Drawing::Point(972, 25);
			this->botonGenerar->Margin = System::Windows::Forms::Padding(6);
			this->botonGenerar->Name = L"botonGenerar";
			this->botonGenerar->Size = System::Drawing::Size(138, 38);
			this->botonGenerar->TabIndex = 8;
			this->botonGenerar->Text = L"Generar";
			this->botonGenerar->UseVisualStyleBackColor = true;
			this->botonGenerar->Click += gcnew System::EventHandler(this, &frmReporte::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(482, 36);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 22);
			this->label3->TabIndex = 10;
			this->label3->Text = L"hasta";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->fechaFin);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->fechaInicio);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->botonGenerar);
			this->groupBox5->Location = System::Drawing::Point(38, 15);
			this->groupBox5->Margin = System::Windows::Forms::Padding(6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(6);
			this->groupBox5->Size = System::Drawing::Size(1110, 82);
			this->groupBox5->TabIndex = 11;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Generar reporte";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 50);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(286, 132);
			this->label4->TabIndex = 12;
			this->label4->Text = L" Seleccione el rango de fechas\r\n para poder ver un informe de:\r\n\r\n  Top 5 platos "
				L"más vendidos\r\n  Top 5 bebidas más vendidas\r\n   Ventas por día en ese rango";
			this->label4->Click += gcnew System::EventHandler(this, &frmReporte::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(171, 703);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(762, 44);
			this->label5->TabIndex = 13;
			this->label5->Text = L"El porcentaje de las bebidas, platos se calcula en función de la cantidad vendida"
				L" de \r\nbebidas , platos en el rango de fecha establecido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 50);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(365, 88);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Desde 01/07/2023 hasta 01/07/2023:\r\n     Se vendieron  XXXX productos\r\n          "
				L" XXX  platos de comida\r\n           XXX  bebidas";
			this->label6->Visible = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Location = System::Drawing::Point(1165, 48);
			this->groupBox6->Margin = System::Windows::Forms::Padding(6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(6);
			this->groupBox6->Size = System::Drawing::Size(411, 220);
			this->groupBox6->TabIndex = 15;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Indicaciones";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label6);
			this->groupBox7->Location = System::Drawing::Point(1165, 280);
			this->groupBox7->Margin = System::Windows::Forms::Padding(6);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(6);
			this->groupBox7->Size = System::Drawing::Size(415, 157);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Datos";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chartBebidas);
			this->groupBox2->Location = System::Drawing::Point(567, 4);
			this->groupBox2->Margin = System::Windows::Forms::Padding(6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(6);
			this->groupBox2->Size = System::Drawing::Size(519, 261);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"B";
			// 
			// chartBebidas
			// 
			this->chartBebidas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->chartBebidas->BorderlineColor = System::Drawing::Color::Black;
			this->chartBebidas->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			chartArea1->Name = L"ChartArea1";
			this->chartBebidas->ChartAreas->Add(chartArea1);
			this->chartBebidas->Cursor = System::Windows::Forms::Cursors::Arrow;
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			legend1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			legend1->TitleFont = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->TitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			legend1->TitleSeparatorColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->chartBebidas->Legends->Add(legend1);
			this->chartBebidas->Location = System::Drawing::Point(12, 32);
			this->chartBebidas->Margin = System::Windows::Forms::Padding(6);
			this->chartBebidas->Name = L"chartBebidas";
			series1->ChartArea = L"ChartArea1";
			series1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->LabelBackColor = System::Drawing::Color::Transparent;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartBebidas->Series->Add(series1);
			this->chartBebidas->Size = System::Drawing::Size(478, 229);
			this->chartBebidas->TabIndex = 0;
			this->chartBebidas->Text = L"chart2";
			title1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			title1->Name = L"Title1";
			this->chartBebidas->Titles->Add(title1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chartPlatos);
			this->groupBox1->Location = System::Drawing::Point(17, 4);
			this->groupBox1->Margin = System::Windows::Forms::Padding(6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(6);
			this->groupBox1->Size = System::Drawing::Size(538, 261);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"P";
			// 
			// chartPlatos
			// 
			this->chartPlatos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->chartPlatos->BorderlineColor = System::Drawing::Color::Black;
			this->chartPlatos->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			chartArea2->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			chartArea2->Name = L"ChartArea1";
			this->chartPlatos->ChartAreas->Add(chartArea2);
			this->chartPlatos->Cursor = System::Windows::Forms::Cursors::Arrow;
			legend2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			legend2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			legend2->HeaderSeparatorColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			legend2->IsTextAutoFit = false;
			legend2->ItemColumnSeparatorColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			legend2->Name = L"Legend1";
			this->chartPlatos->Legends->Add(legend2);
			this->chartPlatos->Location = System::Drawing::Point(11, 32);
			this->chartPlatos->Margin = System::Windows::Forms::Padding(6);
			this->chartPlatos->Name = L"chartPlatos";
			series2->ChartArea = L"ChartArea1";
			series2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->LabelForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chartPlatos->Series->Add(series2);
			this->chartPlatos->Size = System::Drawing::Size(506, 229);
			this->chartPlatos->TabIndex = 0;
			this->chartPlatos->Text = L"chart1";
			title2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			title2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			title2->Name = L"Title1";
			this->chartPlatos->Titles->Add(title2);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->chartVentas);
			this->groupBox3->Location = System::Drawing::Point(12, 270);
			this->groupBox3->Margin = System::Windows::Forms::Padding(6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(6);
			this->groupBox3->Size = System::Drawing::Size(1060, 293);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"V";
			// 
			// chartVentas
			// 
			this->chartVentas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->chartVentas->BorderlineColor = System::Drawing::Color::Black;
			this->chartVentas->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			chartArea3->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			chartArea3->Name = L"ChartArea1";
			this->chartVentas->ChartAreas->Add(chartArea3);
			this->chartVentas->Cursor = System::Windows::Forms::Cursors::Arrow;
			legend3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			legend3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			legend3->HeaderSeparatorColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			legend3->IsTextAutoFit = false;
			legend3->Name = L"Legend1";
			legend3->TitleFont = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend3->TitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->chartVentas->Legends->Add(legend3);
			this->chartVentas->Location = System::Drawing::Point(12, 20);
			this->chartVentas->Margin = System::Windows::Forms::Padding(6);
			this->chartVentas->Name = L"chartVentas";
			series3->ChartArea = L"ChartArea1";
			series3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series3->LabelForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chartVentas->Series->Add(series3);
			this->chartVentas->Size = System::Drawing::Size(1040, 273);
			this->chartVentas->TabIndex = 0;
			this->chartVentas->Text = L"chart1";
			title3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			title3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			title3->Name = L"Title12";
			this->chartVentas->Titles->Add(title3);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Controls->Add(this->groupBox3);
			this->groupBox4->Controls->Add(this->groupBox2);
			this->groupBox4->Location = System::Drawing::Point(38, 109);
			this->groupBox4->Margin = System::Windows::Forms::Padding(6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(6);
			this->groupBox4->Size = System::Drawing::Size(1110, 575);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Visible = false;
			// 
			// frmReporte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1605, 801);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->buttonRegresar);
			this->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"frmReporte";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reporte de ventas";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmReporte::frmReporte_Load);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBebidas))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPlatos))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVentas))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmReporte_Load(System::Object^ sender, System::EventArgs^ e) {
		

	};
private: System::Void buttonRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	

	
	DateTime fI = Convert::ToDateTime(this->fechaInicio->Text);
	DateTime fF = Convert::ToDateTime(this->fechaFin->Text);
	String^ fechaCuenta = DateTime::Now.ToString("yyyy-MM-dd");
	DateTime fHoy = Convert::ToDateTime(fechaCuenta);
	if (DateTime::Compare(fHoy,fF) >= 0) {
		if (DateTime::Compare(fF, fI) > 0) {
			this->chartPlatos->Series->Clear();
			this->chartBebidas->Series->Clear();
			this->chartVentas->Series->Clear();

			this->chartPlatos->Titles->Clear();
			this->chartBebidas->Titles->Clear();
			this->chartVentas->Titles->Clear();

			
			this->fechaInicio->CustomFormat = "yyyy-MM-dd";
			this->fechaFin->CustomFormat = "yyyy-MM-dd";
			String^ fechaInicio = this->fechaInicio->Text;
			String^ fechaFin = this->fechaFin->Text;

			this->chartPlatos->Titles->Add("Top 5 platos más vendidos");
			this->chartBebidas->Titles->Add("Top 5 bebidas más vendidas");
			this->chartVentas->Titles->Add("Ventas por fecha");
			
			//lo de abajo, código para producir los gráficos

			ReporteController^ objController = gcnew ReporteController();
			productoController^ objProductosController = gcnew productoController();
			List<String^>^ PlatosTopId = gcnew List<String^>();
			List<String^>^ PlatosTopValor = gcnew List<String^>();
			List<String^>^ BebidasTopId = gcnew List<String^>();
			List<String^>^ BebidasTopValor = gcnew List<String^>();
			List<String^>^ Fechas = gcnew List<String^>();
			List<String^>^ VentasXFecha = gcnew List<String^>();


			//objController->obtenerTopPlatos(PlatosTopId, PlatosTopValor, fechaInicio, fechaFin);
			//objController->obtenerTopBebidas(BebidasTopId, BebidasTopValor, fechaInicio, fechaFin);
			objController->obtenerTop(PlatosTopId,PlatosTopValor,BebidasTopId,BebidasTopValor,fechaInicio,fechaFin);
			objController->obtenerVentasTotal(Fechas, VentasXFecha, fechaInicio, fechaFin);

			Producto^ productoI = gcnew Producto();
			int i = 0;
			//chartPlatos
			int limiteTopPlatos = PlatosTopId->Count;
			int limiteTopBebidas = BebidasTopId->Count;

			int cantidadTotalPlatos = 0;
			int cantidadTotalBebidas = 0;

			for each (String ^ cantidadI in PlatosTopValor)
			{
				cantidadTotalPlatos = cantidadTotalPlatos + Convert::ToInt32(cantidadI);
			};

			for each (String ^ cantidadI in BebidasTopValor)
			{
				cantidadTotalBebidas = cantidadTotalBebidas + Convert::ToInt32(cantidadI);
			};



			int iP = 5;
			int iB = 5;
			if (limiteTopPlatos < 5) {
				iP = limiteTopPlatos;
			};
			if (limiteTopBebidas < 5) {
				iB = limiteTopBebidas;
			};

			if (PlatosTopId->Count > 0) {
				this->chartPlatos->Visible = true;
				for (i = 0; i < iP; i++) {

					productoI = objProductosController->buscarProductoxId(Convert::ToInt32(PlatosTopId[limiteTopPlatos-1-i]));
					double porcentaje = round((Convert::ToDouble(PlatosTopValor[limiteTopPlatos - 1 - i])/(double)cantidadTotalPlatos)*100.0);
					//titulos

					Series^ seriePlato = this->chartPlatos->Series->Add(productoI->GetNombre()+ " ("+ Convert::ToString(porcentaje) + " % )");
					//cantidades

					//seriePlato->Label = PlatosTopValor[limiteTopPlatos - 1 - i];
					seriePlato->Points->Add(porcentaje);
					
				}
			}
			else {
				MessageBox::Show("Lo sentimos, no hay suficientes datos para calcular el top de Platos en ese rango");
				this->chartPlatos->Visible = false;

			}

			//chart bebidas
			if (BebidasTopId->Count > 0) {

				this->chartBebidas->Visible = true;

				for (i = 0; i < iB; i++) {
					//titulos
					productoI = objProductosController->buscarProductoxId(Convert::ToInt32(BebidasTopId[limiteTopBebidas - 1 - i]));
					double porcentaje = round((Convert::ToDouble(BebidasTopValor[limiteTopBebidas - 1 - i]) / (double)cantidadTotalBebidas) * 100.0);
					Series^ serieBebida = this->chartBebidas->Series->Add(productoI->GetNombre() + " (" + Convert::ToString(porcentaje) + " % )");
					//cantidades

					//serieBebida->Label = BebidasTopValor[limiteTopBebidas - 1 - i];
					serieBebida->Points->Add(porcentaje);
				}
				//chart venta total
			}
			else {
				MessageBox::Show("Lo sentimos, no hay suficientes datos para calcular el top de Bebidas en ese rango");
				this->chartBebidas->Visible = false;

			}







			if (VentasXFecha->Count > 0) {
				this->chartVentas->Visible = true;
				for (i = 0; i < Fechas->Count; i++) {
					//titulos
					//cambiar en fechas si es que se necesita
					Series^ serieFecha = this->chartVentas->Series->Add("( S/ "+VentasXFecha[i]+" ) "+ Fechas[i]->Replace(" 00:00:00"," "));
					//cantidades
					//serieFecha->Label = VentasXFecha[i];
					serieFecha->Points->Add(Convert::ToDouble(VentasXFecha[i]));
				}


			}
			else {
				MessageBox::Show("Lo sentimos, no hay suficientes datos para calcular las ventas en ese rango");
				this->chartVentas->Visible = false;

			}

			//limpiando lista porque causan problemas
			int cantidadTotal = cantidadTotalPlatos+cantidadTotalBebidas;
			this->label6->Text = L"Desde "+ fechaInicio+" hasta "+ fechaFin+":\r\n     Se vendieron " + cantidadTotal+" productos\r\n          "
				L""+ cantidadTotalPlatos + " platos de comida\r\n         "+cantidadTotalBebidas +" bebidas";
			this->label6->Visible = true;

			PlatosTopId->Clear();
			PlatosTopValor->Clear();
			BebidasTopId->Clear();
			BebidasTopValor->Clear();
			Fechas->Clear();
			VentasXFecha->Clear();
			this->groupBox4->Visible = true;







		}
		else {
			MessageBox::Show("El orden de las fechas no es correcto o las fechas son la misma");
		}
	}
	else {
		MessageBox::Show("No puede consultar fechas mayores a la actual");
	}
	
	//hasta aquí
	

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}



};
}
