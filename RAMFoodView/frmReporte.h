#pragma once

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartPlatos;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ buttonRegresar;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartBebidas;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartVentas;
	private: System::Windows::Forms::DateTimePicker^ fechaInicio;
	private: System::Windows::Forms::DateTimePicker^ fechaFin;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ botonGenerar;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox5;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chartPlatos = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chartBebidas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->chartVentas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->buttonRegresar = (gcnew System::Windows::Forms::Button());
			this->fechaInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->fechaFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->botonGenerar = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPlatos))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBebidas))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVentas))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(239, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"GENERAR REPORTE";
			this->label1->Click += gcnew System::EventHandler(this, &frmReporte::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chartPlatos);
			this->groupBox1->Location = System::Drawing::Point(6, 17);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(293, 230);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"P";
			// 
			// chartPlatos
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartPlatos->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartPlatos->Legends->Add(legend4);
			this->chartPlatos->Location = System::Drawing::Point(6, 19);
			this->chartPlatos->Name = L"chartPlatos";
			this->chartPlatos->Size = System::Drawing::Size(281, 194);
			this->chartPlatos->TabIndex = 0;
			this->chartPlatos->Text = L"chart1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chartBebidas);
			this->groupBox2->Location = System::Drawing::Point(305, 17);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(293, 230);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"B";
			// 
			// chartBebidas
			// 
			chartArea5->Name = L"ChartArea1";
			this->chartBebidas->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chartBebidas->Legends->Add(legend5);
			this->chartBebidas->Location = System::Drawing::Point(7, 19);
			this->chartBebidas->Name = L"chartBebidas";
			this->chartBebidas->Size = System::Drawing::Size(280, 194);
			this->chartBebidas->TabIndex = 0;
			this->chartBebidas->Text = L"chart2";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->chartVentas);
			this->groupBox3->Location = System::Drawing::Point(6, 253);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(387, 258);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"V";
			// 
			// chartVentas
			// 
			chartArea6->Name = L"ChartArea1";
			this->chartVentas->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chartVentas->Legends->Add(legend6);
			this->chartVentas->Location = System::Drawing::Point(22, 14);
			this->chartVentas->Name = L"chartVentas";
			this->chartVentas->Size = System::Drawing::Size(339, 238);
			this->chartVentas->TabIndex = 0;
			this->chartVentas->Text = L"chart1";
			// 
			// buttonRegresar
			// 
			this->buttonRegresar->Location = System::Drawing::Point(629, 600);
			this->buttonRegresar->Name = L"buttonRegresar";
			this->buttonRegresar->Size = System::Drawing::Size(75, 23);
			this->buttonRegresar->TabIndex = 4;
			this->buttonRegresar->Text = L"Regresar";
			this->buttonRegresar->UseVisualStyleBackColor = true;
			this->buttonRegresar->Click += gcnew System::EventHandler(this, &frmReporte::buttonRegresar_Click);
			// 
			// fechaInicio
			// 
			this->fechaInicio->Location = System::Drawing::Point(99, 19);
			this->fechaInicio->Name = L"fechaInicio";
			this->fechaInicio->Size = System::Drawing::Size(200, 20);
			this->fechaInicio->TabIndex = 5;
			// 
			// fechaFin
			// 
			this->fechaFin->Location = System::Drawing::Point(348, 18);
			this->fechaFin->Name = L"fechaFin";
			this->fechaFin->Size = System::Drawing::Size(200, 20);
			this->fechaFin->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Desde";
			this->label2->Click += gcnew System::EventHandler(this, &frmReporte::label2_Click);
			// 
			// botonGenerar
			// 
			this->botonGenerar->Location = System::Drawing::Point(629, 45);
			this->botonGenerar->Name = L"botonGenerar";
			this->botonGenerar->Size = System::Drawing::Size(75, 23);
			this->botonGenerar->TabIndex = 8;
			this->botonGenerar->Text = L"Generar";
			this->botonGenerar->UseVisualStyleBackColor = true;
			this->botonGenerar->Click += gcnew System::EventHandler(this, &frmReporte::button1_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Controls->Add(this->groupBox3);
			this->groupBox4->Controls->Add(this->groupBox2);
			this->groupBox4->Location = System::Drawing::Point(12, 88);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(611, 514);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(305, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"hasta";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->fechaFin);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->fechaInicio);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Location = System::Drawing::Point(12, 29);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(611, 53);
			this->groupBox5->TabIndex = 11;
			this->groupBox5->TabStop = false;
			// 
			// frmReporte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 635);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->botonGenerar);
			this->Controls->Add(this->buttonRegresar);
			this->Controls->Add(this->label1);
			this->Name = L"frmReporte";
			this->Text = L"frmReporte";
			this->Load += gcnew System::EventHandler(this, &frmReporte::frmReporte_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPlatos))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBebidas))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVentas))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
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


	objController->obtenerTopPlatos(PlatosTopId, PlatosTopValor);
	objController->obtenerTopBebidas(BebidasTopId, BebidasTopValor);
	objController->obtenerVentasTotal(Fechas, VentasXFecha);
	
	Producto^ productoI = gcnew Producto();
	int i = 0;
	//chartPlatos
	for (i = 0; i < 5; i++) {

		productoI = objProductosController->buscarProductoxId(Convert::ToInt32(PlatosTopId[i]));

		//titulos
		Series^ seriePlato = this->chartPlatos->Series->Add(productoI->GetNombre());
		//cantidades

		seriePlato->Label = PlatosTopValor[i];
		seriePlato->Points->Add(Convert::ToInt32(PlatosTopValor[i]));
	}
	//chart bebidas
	for (i = 0; i < 5; i++) {
		//titulos
		productoI = objProductosController->buscarProductoxId(Convert::ToInt32(BebidasTopId[i]));
		Series^ serieBebida = this->chartBebidas->Series->Add(productoI->GetNombre());
		//cantidades

		serieBebida->Label = BebidasTopValor[i];
		serieBebida->Points->Add(Convert::ToInt32(BebidasTopValor[i]));
	}
	//chart venta total

	for (i = 0; i < Fechas->Count; i++) {
		//titulos
		Series^ serieFecha = this->chartVentas->Series->Add(Fechas[i]);
		//cantidades
		serieFecha->Label = VentasXFecha[i];
		serieFecha->Points->Add(Convert::ToInt32(VentasXFecha[i]));
	}

	//hasta aquí
}
};
}
