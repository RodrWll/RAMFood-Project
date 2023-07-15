#pragma once

namespace RAMFoodView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de frmComensalSeguridad
	/// </summary>
	public ref class frmComensalSeguridad : public System::Windows::Forms::Form
	{
	public:
		frmComensalSeguridad(void)
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
		~frmComensalSeguridad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button11;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label1->Location = System::Drawing::Point(61, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 22);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Ingresa la clave para validar la acción\r\n";
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button11->Location = System::Drawing::Point(127, 188);
			this->button11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(40, 28);
			this->button11->TabIndex = 48;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button11_Click_1);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button10->Location = System::Drawing::Point(261, 153);
			this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 28);
			this->button10->TabIndex = 47;
			this->button10->Text = L"Borrar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button10_Click_1);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button7->Location = System::Drawing::Point(175, 153);
			this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 28);
			this->button7->TabIndex = 46;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button7_Click_1);
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button8->Location = System::Drawing::Point(127, 153);
			this->button8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 28);
			this->button8->TabIndex = 45;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button8_Click_1);
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button9->Location = System::Drawing::Point(79, 153);
			this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 28);
			this->button9->TabIndex = 44;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button9_Click_1);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button4->Location = System::Drawing::Point(175, 117);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 28);
			this->button4->TabIndex = 43;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button4_Click_1);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button5->Location = System::Drawing::Point(127, 117);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 28);
			this->button5->TabIndex = 42;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button5_Click_1);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button6->Location = System::Drawing::Point(79, 117);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 28);
			this->button6->TabIndex = 41;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button6_Click_1);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button3->Location = System::Drawing::Point(175, 81);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 28);
			this->button3->TabIndex = 40;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button3_Click_1);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button2->Location = System::Drawing::Point(127, 81);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 28);
			this->button2->TabIndex = 39;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button2_Click_1);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->Location = System::Drawing::Point(79, 81);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 28);
			this->button1->TabIndex = 38;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::button1_Click);
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->buttonCancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelar->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->buttonCancelar->Location = System::Drawing::Point(251, 262);
			this->buttonCancelar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(100, 28);
			this->buttonCancelar->TabIndex = 37;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::buttonCancelar_Click_1);
			// 
			// buttonConfirmar
			// 
			this->buttonConfirmar->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->buttonConfirmar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonConfirmar->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConfirmar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->buttonConfirmar->Location = System::Drawing::Point(97, 262);
			this->buttonConfirmar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonConfirmar->Name = L"buttonConfirmar";
			this->buttonConfirmar->Size = System::Drawing::Size(100, 28);
			this->buttonConfirmar->TabIndex = 36;
			this->buttonConfirmar->Text = L"Confirmar";
			this->buttonConfirmar->UseVisualStyleBackColor = true;
			this->buttonConfirmar->Click += gcnew System::EventHandler(this, &frmComensalSeguridad::buttonConfirmar_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label2->Location = System::Drawing::Point(280, 94);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 19);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Clave:";
			// 
			// textBoxClave
			// 
			this->textBoxClave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->textBoxClave->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxClave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->textBoxClave->Location = System::Drawing::Point(249, 121);
			this->textBoxClave->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxClave->Name = L"textBoxClave";
			this->textBoxClave->Size = System::Drawing::Size(132, 22);
			this->textBoxClave->TabIndex = 34;
			// 
			// frmComensalSeguridad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(492, 334);
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
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmComensalSeguridad";
			this->Text = L"frmComensalSeguridad";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ claveParcial = this->textBoxClave->Text;
		String^ clave = claveParcial + "1";
		this->textBoxClave->Text = clave;
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "2";
	this->textBoxClave->Text = clave;

}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "3";
	this->textBoxClave->Text = clave;

}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "4";
	this->textBoxClave->Text = clave;
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "5";
	this->textBoxClave->Text = clave;
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "6";
	this->textBoxClave->Text = clave;
}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "7";
	this->textBoxClave->Text = clave;
}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "8";
	this->textBoxClave->Text = clave;

}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "9";
	this->textBoxClave->Text = clave;
}



private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {

	String^ claveParcial = this->textBoxClave->Text;
	String^ clave = claveParcial + "0";
	this->textBoxClave->Text = clave;
}


private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->textBoxClave->Text = "";

}
private: System::Void buttonCancelar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void buttonConfirmar_Click_1(System::Object^ sender, System::EventArgs^ e) {

	String^ clave = this->textBoxClave->Text;
	array<String^>^ claveLeida = File::ReadAllLines("Recursos/AsistenteChef/claveMesa.txt");
	int numeroClave = Convert::ToInt32(claveLeida[0]);
	if (numeroClave == Convert::ToInt32(clave)) {
		List<String^>^ linea = gcnew List<String^>();
		linea->Add("1");
		File::WriteAllLines("Recursos/Comensal/pedidotemporal/ClaveCorrecta.txt", linea);
		this->Close();
	}
	else {
		MessageBox::Show("Clave incorrecta");

	};

}

};
}
