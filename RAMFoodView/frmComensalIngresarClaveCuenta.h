#pragma once

namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	/// <summary>
	/// Resumen de frmComensalIngresarClaveCuenta
	/// </summary>
	public ref class frmComensalIngresarClaveCuenta : public System::Windows::Forms::Form
	{
	public:
		frmComensalIngresarClaveCuenta(void)
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
		~frmComensalIngresarClaveCuenta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button11;
	protected:
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::Button^ buttonConfirmar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxClave;
	private: System::Windows::Forms::Label^ label1;

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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->buttonConfirmar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxClave = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(101, 145);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(30, 23);
			this->button11->TabIndex = 32;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(202, 116);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 31;
			this->button10->Text = L"Borrar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button10_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(137, 116);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(30, 23);
			this->button7->TabIndex = 30;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(101, 116);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(30, 23);
			this->button8->TabIndex = 29;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(65, 116);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(30, 23);
			this->button9->TabIndex = 28;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button9_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(137, 87);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 23);
			this->button4->TabIndex = 27;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(101, 87);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(65, 87);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 23);
			this->button6->TabIndex = 25;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button6_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(137, 58);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 23);
			this->button3->TabIndex = 24;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(101, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(65, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::button1_Click);
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Location = System::Drawing::Point(194, 205);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(75, 23);
			this->buttonCancelar->TabIndex = 21;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			// 
			// buttonConfirmar
			// 
			this->buttonConfirmar->Location = System::Drawing::Point(79, 205);
			this->buttonConfirmar->Name = L"buttonConfirmar";
			this->buttonConfirmar->Size = System::Drawing::Size(75, 23);
			this->buttonConfirmar->TabIndex = 20;
			this->buttonConfirmar->Text = L"Confirmar";
			this->buttonConfirmar->UseVisualStyleBackColor = true;
			this->buttonConfirmar->Click += gcnew System::EventHandler(this, &frmComensalIngresarClaveCuenta::buttonConfirmar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(199, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Clave dinámica:";
			// 
			// textBoxClave
			// 
			this->textBoxClave->Location = System::Drawing::Point(193, 90);
			this->textBoxClave->Name = L"textBoxClave";
			this->textBoxClave->Size = System::Drawing::Size(100, 20);
			this->textBoxClave->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(113, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 20);
			this->label1->TabIndex = 33;
			this->label1->Text = L"CONFIRMAR PAGO";
			// 
			// frmComensalIngresarClaveCuenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(368, 241);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->buttonConfirmar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxClave);
			this->Name = L"frmComensalIngresarClaveCuenta";
			this->Text = L"frmComensalIngresarClaveCuenta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ claveParcial = this->textBoxClave->Text;
		String^ clave = claveParcial + "1";
		this->textBoxClave->Text = clave;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "2";
	this->textBoxClave->Text = clave;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "3";
	this->textBoxClave->Text = clave;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "4";
	this->textBoxClave->Text = clave;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "5";
	this->textBoxClave->Text = clave;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "6";
	this->textBoxClave->Text = clave;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "7";
	this->textBoxClave->Text = clave;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "8";
	this->textBoxClave->Text = clave;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "9";
	this->textBoxClave->Text = clave;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "0";
	this->textBoxClave->Text = clave;
}



private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxClave->Text = "";

}
private: System::Void buttonConfirmar_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ clave = this->textBoxClave->Text;
	array<String^>^ claveLeida = File::ReadAllLines("Recursos/AsistenteChef/claveMesa.txt");
	int numeroClave = Convert::ToInt32(claveLeida[0]);
	List<String^>^ uno = gcnew List<String^>();
	uno->Add("1");
	if (numeroClave == Convert::ToInt32(clave)) {
		File::WriteAllLines("Recursos/Comensal/pedidotemporal/confirmaPago.txt",uno);
		MessageBox::Show("Pago Confirmado");
		this->Close();
	}
	else {
		MessageBox::Show("Clave incorrecta");

	};
}
};
}
