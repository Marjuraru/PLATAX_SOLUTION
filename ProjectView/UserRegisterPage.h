#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Xml::Serialization;
	using namespace ProjectModel;
	using namespace ProjectController;


	/// <summary>
	/// Resumen de UserRegisterPage
	/// </summary>
	public ref class UserRegisterPage : public System::Windows::Forms::Form
	{
	public:
		UserRegisterPage(void)
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
		~UserRegisterPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_name;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_lastname;
	private: System::Windows::Forms::TextBox^ textBox_phone;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_email;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_dni;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dtp_birthdate;



	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_password;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button_register;


	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::CheckBox^ checkBox_female;
	private: System::Windows::Forms::CheckBox^ checkBox_male;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_lastname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_phone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_dni = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dtp_birthdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button_register = (gcnew System::Windows::Forms::Button());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox_female = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_male = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(400, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FORMULARIO DE REGISTRO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nombres";
			// 
			// textBox_name
			// 
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->Location = System::Drawing::Point(31, 104);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(210, 26);
			this->textBox_name->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(290, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Apellidos";
			// 
			// textBox_lastname
			// 
			this->textBox_lastname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_lastname->Location = System::Drawing::Point(293, 104);
			this->textBox_lastname->Name = L"textBox_lastname";
			this->textBox_lastname->Size = System::Drawing::Size(210, 26);
			this->textBox_lastname->TabIndex = 10;
			// 
			// textBox_phone
			// 
			this->textBox_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_phone->Location = System::Drawing::Point(31, 174);
			this->textBox_phone->Name = L"textBox_phone";
			this->textBox_phone->Size = System::Drawing::Size(210, 26);
			this->textBox_phone->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Teléfono";
			// 
			// textBox_email
			// 
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->Location = System::Drawing::Point(31, 238);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(472, 26);
			this->textBox_email->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 208);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Correo Electrónico";
			// 
			// textBox_dni
			// 
			this->textBox_dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_dni->Location = System::Drawing::Point(293, 174);
			this->textBox_dni->Name = L"textBox_dni";
			this->textBox_dni->Size = System::Drawing::Size(210, 26);
			this->textBox_dni->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(290, 144);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"DNI";
			// 
			// dtp_birthdate
			// 
			this->dtp_birthdate->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_birthdate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtp_birthdate->Location = System::Drawing::Point(110, 367);
			this->dtp_birthdate->Name = L"dtp_birthdate";
			this->dtp_birthdate->Size = System::Drawing::Size(200, 20);
			this->dtp_birthdate->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(139, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Fecha de Nacimiento";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(53, 341);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Sexo";
			// 
			// textBox_password
			// 
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_password->Location = System::Drawing::Point(331, 361);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(172, 26);
			this->textBox_password->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(351, 341);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 17);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Crea tu contraseña";
			// 
			// button_register
			// 
			this->button_register->Location = System::Drawing::Point(332, 393);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(171, 23);
			this->button_register->TabIndex = 23;
			this->button_register->Text = L"REGISTRAR";
			this->button_register->UseVisualStyleBackColor = true;
			this->button_register->Click += gcnew System::EventHandler(this, &UserRegisterPage::button_register_Click);
			// 
			// textBox_address
			// 
			this->textBox_address->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_address->Location = System::Drawing::Point(31, 303);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(472, 26);
			this->textBox_address->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(28, 273);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Dirección";
			// 
			// checkBox_female
			// 
			this->checkBox_female->AutoSize = true;
			this->checkBox_female->Location = System::Drawing::Point(31, 361);
			this->checkBox_female->Name = L"checkBox_female";
			this->checkBox_female->Size = System::Drawing::Size(52, 17);
			this->checkBox_female->TabIndex = 26;
			this->checkBox_female->Text = L"Mujer";
			this->checkBox_female->UseVisualStyleBackColor = true;
			// 
			// checkBox_male
			// 
			this->checkBox_male->AutoSize = true;
			this->checkBox_male->Location = System::Drawing::Point(31, 384);
			this->checkBox_male->Name = L"checkBox_male";
			this->checkBox_male->Size = System::Drawing::Size(63, 17);
			this->checkBox_male->TabIndex = 27;
			this->checkBox_male->Text = L"Hombre";
			this->checkBox_male->UseVisualStyleBackColor = true;
			// 
			// UserRegisterPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(523, 424);
			this->Controls->Add(this->checkBox_male);
			this->Controls->Add(this->checkBox_female);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button_register);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dtp_birthdate);
			this->Controls->Add(this->textBox_dni);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_email);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_phone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_lastname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserRegisterPage";
			this->Text = L"UserRegisterPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e) {
		Client^ c = gcnew Client(); //declarar - crear
		c->Name = textBox_name->Text;
		c->Lastname = textBox_lastname->Text;
		c->Dni = Convert::ToInt32(textBox_dni->Text); 
		// otras formas: Int32::Parse(textBox_dni->Text); 
		/*
		int dni;
		Int32::TryParse(textBox_dni->Text, dni);
		*/
		c->Phone = Int32::Parse(textBox_phone->Text);
		c->BirthDate = dtp_birthdate->Value;
		c->Password = textBox_password->Text;
		c->Address = textBox_address->Text;
		c->female = checkBox_female->Checked;
		c->male = checkBox_male->Checked;

		Controller::CreateClient(c);
	}
};
}
