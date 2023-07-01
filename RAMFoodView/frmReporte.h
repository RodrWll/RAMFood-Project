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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPlatos))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBebidas))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVentas))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
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
			this->groupBox1->Location = System::Drawing::Point(6, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(314, 230);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"P";
			// 
			// chartPlatos
			// 
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->Name = L"ChartArea1";
			this->chartPlatos->ChartAreas->Add(chartArea1);
			this->chartPlatos->Cursor = System::Windows::Forms::Cursors::Cross;
			legend1->Name = L"Legend1";
			this->chartPlatos->Legends->Add(legend1);
			this->chartPlatos->Location = System::Drawing::Point(6, 19);
			this->chartPlatos->Name = L"chartPlatos";
			this->chartPlatos->Size = System::Drawing::Size(302, 194);
			this->chartPlatos->TabIndex = 0;
			this->chartPlatos->Text = L"chart1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chartBebidas);
			this->groupBox2->Location = System::Drawing::Point(326, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(312, 230);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"B";
			// 
			// chartBebidas
			// 
			chartArea2->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea2->Name = L"ChartArea1";
			this->chartBebidas->ChartAreas->Add(chartArea2);
			this->chartBebidas->Cursor = System::Windows::Forms::Cursors::Cross;
			legend2->Name = L"Legend1";
			this->chartBebidas->Legends->Add(legend2);
			this->chartBebidas->Location = System::Drawing::Point(7, 19);
			this->chartBebidas->Name = L"chartBebidas";
			this->chartBebidas->Size = System::Drawing::Size(299, 194);
			this->chartBebidas->TabIndex = 0;
			this->chartBebidas->Text = L"chart2";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->chartVentas);
			this->groupBox3->Location = System::Drawing::Point(6, 253);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(632, 258);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"V";
			// 
			// chartVentas
			// 
			chartArea3->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea3->Name = L"ChartArea1";
			this->chartVentas->ChartAreas->Add(chartArea3);
			this->chartVentas->Cursor = System::Windows::Forms::Cursors::Cross;
			legend3->Name = L"Legend1";
			this->chartVentas->Legends->Add(legend3);
			this->chartVentas->Location = System::Drawing::Point(22, 14);
			this->chartVentas->Name = L"chartVentas";
			this->chartVentas->Size = System::Drawing::Size(604, 238);
			this->chartVentas->TabIndex = 0;
			this->chartVentas->Text = L"chart1";
			// 
			// buttonRegresar
			// 
			this->buttonRegresar->Location = System::Drawing::Point(770, 600);
			this->buttonRegresar->Name = L"buttonRegresar";
			this->buttonRegresar->Size = System::Drawing::Size(75, 23);
			this->buttonRegresar->TabIndex = 4;
			this->buttonRegresar->Text = L"Regresar";
			this->buttonRegresar->UseVisualStyleBackColor = true;
			this->buttonRegresar->Click += gcnew System::EventHandler(this, &frmReporte::buttonRegresar_Click);
			// 
			// fechaInicio
			// 
			this->fechaInicio->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->fechaInicio->Location = System::Drawing::Point(99, 19);
			this->fechaInicio->Name = L"fechaInicio";
			this->fechaInicio->Size = System::Drawing::Size(200, 20);
			this->fechaInicio->TabIndex = 5;
			// 
			// fechaFin
			// 
			this->fechaFin->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
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
			this->botonGenerar->Location = System::Drawing::Point(665, 45);
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
			this->groupBox4->Size = System::Drawing::Size(644, 514);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Visible = false;
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
			this->groupBox5->Size = System::Drawing::Size(644, 53);
			this->groupBox5->TabIndex = 11;
			this->groupBox5->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 78);
			this->label4->TabIndex = 12;
			this->label4->Text = L" Seleccione el rango de fechas\r\n para poder ver un informe de:\r\n\r\n  Top 5 platos "
				L"más vendidos\r\n  Top 5 bebidas más vendidas\r\n   Ventas por día en ese rango";
			this->label4->Click += gcnew System::EventHandler(this, &frmReporte::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 605);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(407, 26);
			this->label5->TabIndex = 13;
			this->label5->Text = L"El porcentaje de las bebidas, platos se calcula en función de la cantidad vendida"
				L" de \r\nbebidas , platos en el rango de fecha establecido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 52);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Desde 01/07/2023 hasta 01/07/2023:\r\n     Se vendieron  XXXX productos\r\n          "
				L" XXX  platos de comida\r\n           XXX  bebidas";
			this->label6->Visible = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Location = System::Drawing::Point(665, 97);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(198, 136);
			this->groupBox6->TabIndex = 15;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Indicaciones";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label6);
			this->groupBox7->Location = System::Drawing::Point(665, 263);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(200, 122);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Datos";
			// 
			// frmReporte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 635);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->label5);
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
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
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
