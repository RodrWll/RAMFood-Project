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
	using namespace System::IO;
	/// <summary>
	/// Resumen de frmComensalIngresarClave
	/// </summary>
	public ref class frmComensalIngresarClave : public System::Windows::Forms::Form
	{
	public:
		frmComensalIngresarClave(void)
		{
			InitializeComponent();
			this->comboBox1->Text = "1";
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmComensalIngresarClave()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxClave;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonConfirmar;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

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
			this->textBoxClave = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonConfirmar = (gcnew System::Windows::Forms::Button());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxClave
			// 
			this->textBoxClave->Location = System::Drawing::Point(190, 98);
			this->textBoxClave->Name = L"textBoxClave";
			this->textBoxClave->Size = System::Drawing::Size(100, 20);
			this->textBoxClave->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(31, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingresar número de mesa (1-3):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(196, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Clave dinámica:";
			// 
			// buttonConfirmar
			// 
			this->buttonConfirmar->Location = System::Drawing::Point(76, 213);
			this->buttonConfirmar->Name = L"buttonConfirmar";
			this->buttonConfirmar->Size = System::Drawing::Size(75, 23);
			this->buttonConfirmar->TabIndex = 4;
			this->buttonConfirmar->Text = L"Confirmar";
			this->buttonConfirmar->UseVisualStyleBackColor = true;
			this->buttonConfirmar->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::buttonConfirmar_Click);
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Location = System::Drawing::Point(191, 213);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(75, 23);
			this->buttonCancelar->TabIndex = 5;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::buttonCancelar_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox1->Location = System::Drawing::Point(199, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(98, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(134, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(134, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(98, 95);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(62, 95);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(134, 124);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(30, 23);
			this->button7->TabIndex = 15;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(98, 124);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(30, 23);
			this->button8->TabIndex = 14;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(62, 124);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(30, 23);
			this->button9->TabIndex = 13;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(199, 124);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 16;
			this->button10->Text = L"Borrar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(98, 153);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(30, 23);
			this->button11->TabIndex = 17;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmComensalIngresarClave::button11_Click);
			// 
			// frmComensalIngresarClave
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(333, 248);
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
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->buttonConfirmar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxClave);
			this->Name = L"frmComensalIngresarClave";
			this->Text = L"frmComensalIngresarClave";
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
private: System::Void buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void buttonConfirmar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ clave = this->textBoxClave->Text;
	array<String^>^ claveLeida = File::ReadAllLines("Recursos/AsistenteChef/claveMesa.txt");
	int numeroClave = Convert::ToInt32(claveLeida[0]);
	if (numeroClave==Convert::ToInt32(clave)) {
		String^ numero = this->comboBox1->Text;
			List<String^>^ linea = gcnew List<String^>();
			linea->Add(numero);
			File::WriteAllLines("Recursos/Comensal/pedidotemporal/numeroMesa.txt", linea);
			MessageBox::Show("Se cambió el número de mesa");
			this->Close();
	}
	else {
		MessageBox::Show("Clave incorrecta");

	};
	
}
};
}
