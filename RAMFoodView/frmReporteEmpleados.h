#pragma once

namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace RAMFoodController;
	using namespace RAMFoodModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmReporteEmpleados
	/// </summary>
	public ref class frmReporteEmpleados : public System::Windows::Forms::Form
	{
	public:
		frmReporteEmpleados(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmReporteEmpleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(61, 75);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(537, 319);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteEmpleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(703, 496);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteEmpleados";
			this->Text = L"Reporte empleados";
			this->Load += gcnew System::EventHandler(this, &frmReporteEmpleados::frmReporteEmpleados_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteEmpleados_Load(System::Object^ sender, System::EventArgs^ e) {
		ReporteController^ objReporteController = gcnew ReporteController();
		List<Reportes^>^ lista = objReporteController->obtenerReportes();
		for (int i = 0; i < lista->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(lista[i]->getCantidadxRol());
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = Convert::ToString(lista[i]->getRol());
			switch (lista[i]->getRol())
			{
				case 1:
				this->chart1->Series["Series1"]->Points[i]->Color = Color::Red;
				this->chart1->Series["Series1"]->Points[i]->AxisLabel = "Gerente";
				break;
				case 2:
				this->chart1->Series["Series1"]->Points[i]->Color = Color::Blue;
				this->chart1->Series["Series1"]->Points[i]->AxisLabel = "Asistente";
				break;
				case 3:
				this->chart1->Series["Series1"]->Points[i]->Color = Color::Green;
				this->chart1->Series["Series1"]->Points[i]->AxisLabel = "Chef";
				break;

			default:
				break;
			}
		}
	}
	};
}
