#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UserReclamationPage
	/// </summary>
	public ref class UserReclamationPage : public System::Windows::Forms::Form
	{
	public:
		UserReclamationPage(void)
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
		~UserReclamationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_cancel;
	protected:
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_insertphoto;


	private: System::Windows::Forms::ComboBox^ comboBox_operative;

	private: System::Windows::Forms::ComboBox^ comboBox_sparetire;




	private: System::Windows::Forms::TextBox^ textBox_brand;
	private: System::Windows::Forms::PictureBox^ pb_photo;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_plate;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;


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
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_insertphoto = (gcnew System::Windows::Forms::Button());
			this->comboBox_operative = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_sparetire = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_brand = (gcnew System::Windows::Forms::TextBox());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_plate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->SuspendLayout();
			// 
			// button_cancel
			// 
			this->button_cancel->BackColor = System::Drawing::Color::Maroon;
			this->button_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_cancel->Location = System::Drawing::Point(292, 288);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(105, 31);
			this->button_cancel->TabIndex = 160;
			this->button_cancel->Tag = L"65";
			this->button_cancel->Text = L"CANCELAR";
			this->button_cancel->UseVisualStyleBackColor = false;
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(292, 239);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(103, 30);
			this->button_add->TabIndex = 159;
			this->button_add->Tag = L"60";
			this->button_add->Text = L"ENVIAR";
			this->button_add->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(167, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 30);
			this->button1->TabIndex = 158;
			this->button1->Tag = L"55";
			this->button1->Text = L"Limpiar todo";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button_insertphoto
			// 
			this->button_insertphoto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_insertphoto->Location = System::Drawing::Point(506, 38);
			this->button_insertphoto->Name = L"button_insertphoto";
			this->button_insertphoto->Size = System::Drawing::Size(174, 30);
			this->button_insertphoto->TabIndex = 157;
			this->button_insertphoto->Tag = L"50";
			this->button_insertphoto->Text = L"Adjuntar imagen";
			this->button_insertphoto->UseVisualStyleBackColor = true;
			// 
			// comboBox_operative
			// 
			this->comboBox_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_operative->FormattingEnabled = true;
			this->comboBox_operative->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Operativo", L"Inoperativo" });
			this->comboBox_operative->Location = System::Drawing::Point(291, 41);
			this->comboBox_operative->Name = L"comboBox_operative";
			this->comboBox_operative->Size = System::Drawing::Size(106, 27);
			this->comboBox_operative->TabIndex = 154;
			this->comboBox_operative->Tag = L"40";
			// 
			// comboBox_sparetire
			// 
			this->comboBox_sparetire->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_sparetire->FormattingEnabled = true;
			this->comboBox_sparetire->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Sí", L"No" });
			this->comboBox_sparetire->Location = System::Drawing::Point(74, 41);
			this->comboBox_sparetire->Name = L"comboBox_sparetire";
			this->comboBox_sparetire->Size = System::Drawing::Size(106, 27);
			this->comboBox_sparetire->TabIndex = 152;
			this->comboBox_sparetire->Tag = L"35";
			// 
			// textBox_brand
			// 
			this->textBox_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_brand->Location = System::Drawing::Point(30, 125);
			this->textBox_brand->Multiline = true;
			this->textBox_brand->Name = L"textBox_brand";
			this->textBox_brand->Size = System::Drawing::Size(367, 83);
			this->textBox_brand->TabIndex = 147;
			this->textBox_brand->Tag = L"20";
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Location = System::Drawing::Point(432, 74);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(322, 134);
			this->pb_photo->TabIndex = 146;
			this->pb_photo->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(213, 45);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 17);
			this->label10->TabIndex = 145;
			this->label10->Text = L"Categoría";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(27, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 17);
			this->label5->TabIndex = 143;
			this->label5->Text = L"Descripción";
			// 
			// textBox_plate
			// 
			this->textBox_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_plate->Location = System::Drawing::Point(74, 74);
			this->textBox_plate->Name = L"textBox_plate";
			this->textBox_plate->Size = System::Drawing::Size(323, 26);
			this->textBox_plate->TabIndex = 144;
			this->textBox_plate->Tag = L"15";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 17);
			this->label4->TabIndex = 141;
			this->label4->Text = L"Título";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 17);
			this->label3->TabIndex = 140;
			this->label3->Text = L"Tipo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(279, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 31);
			this->label1->TabIndex = 137;
			this->label1->Text = L"RECLAMO";
			// 
			// UserReclamationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(776, 331);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_insertphoto);
			this->Controls->Add(this->comboBox_operative);
			this->Controls->Add(this->comboBox_sparetire);
			this->Controls->Add(this->textBox_brand);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_plate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"UserReclamationPage";
			this->Text = L"UserReclamationPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
