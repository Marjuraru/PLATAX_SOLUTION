#pragma once

#include "UserFeedPage.h"
#include "ClientFeedPage.h"

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
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox_client;
	private: System::Windows::Forms::CheckBox^ checkBox_proprietor;


	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserRegisterPage::typeid));
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
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox_client = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_proprietor = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(84, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(503, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FORMULARIO DE REGISTRO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 91);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 23);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nombres";
			// 
			// textBox_name
			// 
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->Location = System::Drawing::Point(41, 128);
			this->textBox_name->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(279, 30);
			this->textBox_name->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(387, 91);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Apellidos";
			// 
			// textBox_lastname
			// 
			this->textBox_lastname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_lastname->Location = System::Drawing::Point(391, 128);
			this->textBox_lastname->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_lastname->Name = L"textBox_lastname";
			this->textBox_lastname->Size = System::Drawing::Size(279, 30);
			this->textBox_lastname->TabIndex = 10;
			// 
			// textBox_phone
			// 
			this->textBox_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_phone->Location = System::Drawing::Point(41, 214);
			this->textBox_phone->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_phone->Name = L"textBox_phone";
			this->textBox_phone->Size = System::Drawing::Size(279, 30);
			this->textBox_phone->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 177);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Teléfono";
			// 
			// textBox_email
			// 
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->Location = System::Drawing::Point(41, 293);
			this->textBox_email->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(628, 30);
			this->textBox_email->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 256);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 23);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Correo Electrónico";
			// 
			// textBox_dni
			// 
			this->textBox_dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_dni->Location = System::Drawing::Point(391, 214);
			this->textBox_dni->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_dni->Name = L"textBox_dni";
			this->textBox_dni->Size = System::Drawing::Size(279, 30);
			this->textBox_dni->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(387, 177);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 23);
			this->label6->TabIndex = 15;
			this->label6->Text = L"DNI";
			// 
			// dtp_birthdate
			// 
			this->dtp_birthdate->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_birthdate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_birthdate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtp_birthdate->Location = System::Drawing::Point(153, 444);
			this->dtp_birthdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtp_birthdate->Name = L"dtp_birthdate";
			this->dtp_birthdate->Size = System::Drawing::Size(265, 30);
			this->dtp_birthdate->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(185, 420);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 23);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Fecha de Nacimiento";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(71, 420);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 23);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Sexo";
			// 
			// textBox_password
			// 
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_password->Location = System::Drawing::Point(441, 444);
			this->textBox_password->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(228, 30);
			this->textBox_password->TabIndex = 50;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(468, 420);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 23);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Crea tu contraseña";
			// 
			// button_register
			// 
			this->button_register->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_register->Location = System::Drawing::Point(443, 484);
			this->button_register->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(228, 36);
			this->button_register->TabIndex = 55;
			this->button_register->Text = L"REGISTRAR";
			this->button_register->UseVisualStyleBackColor = true;
			this->button_register->Click += gcnew System::EventHandler(this, &UserRegisterPage::button_register_Click);
			// 
			// textBox_address
			// 
			this->textBox_address->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_address->Location = System::Drawing::Point(41, 373);
			this->textBox_address->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(628, 30);
			this->textBox_address->TabIndex = 30;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(37, 336);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 23);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Dirección";
			// 
			// checkBox_female
			// 
			this->checkBox_female->AutoSize = true;
			this->checkBox_female->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_female->Location = System::Drawing::Point(41, 444);
			this->checkBox_female->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_female->Name = L"checkBox_female";
			this->checkBox_female->Size = System::Drawing::Size(80, 26);
			this->checkBox_female->TabIndex = 35;
			this->checkBox_female->Text = L"Mujer";
			this->checkBox_female->UseVisualStyleBackColor = true;
			this->checkBox_female->CheckedChanged += gcnew System::EventHandler(this, &UserRegisterPage::checkBox_female_CheckedChanged);
			// 
			// checkBox_male
			// 
			this->checkBox_male->AutoSize = true;
			this->checkBox_male->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_male->Location = System::Drawing::Point(41, 473);
			this->checkBox_male->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_male->Name = L"checkBox_male";
			this->checkBox_male->Size = System::Drawing::Size(96, 26);
			this->checkBox_male->TabIndex = 40;
			this->checkBox_male->Text = L"Hombre";
			this->checkBox_male->UseVisualStyleBackColor = true;
			this->checkBox_male->CheckedChanged += gcnew System::EventHandler(this, &UserRegisterPage::checkBox_male_CheckedChanged);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(205, 478);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(139, 23);
			this->label11->TabIndex = 56;
			this->label11->Text = L"Tipo de usuario";
			// 
			// checkBox_client
			// 
			this->checkBox_client->AutoSize = true;
			this->checkBox_client->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_client->Location = System::Drawing::Point(165, 505);
			this->checkBox_client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_client->Name = L"checkBox_client";
			this->checkBox_client->Size = System::Drawing::Size(89, 26);
			this->checkBox_client->TabIndex = 57;
			this->checkBox_client->Text = L"Cliente";
			this->checkBox_client->UseVisualStyleBackColor = true;
			this->checkBox_client->CheckedChanged += gcnew System::EventHandler(this, &UserRegisterPage::checkBox_client_CheckedChanged_1);
			// 
			// checkBox_proprietor
			// 
			this->checkBox_proprietor->AutoSize = true;
			this->checkBox_proprietor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_proprietor->Location = System::Drawing::Point(291, 505);
			this->checkBox_proprietor->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_proprietor->Name = L"checkBox_proprietor";
			this->checkBox_proprietor->Size = System::Drawing::Size(84, 26);
			this->checkBox_proprietor->TabIndex = 58;
			this->checkBox_proprietor->Text = L"Dueño";
			this->checkBox_proprietor->UseVisualStyleBackColor = true;
			this->checkBox_proprietor->CheckedChanged += gcnew System::EventHandler(this, &UserRegisterPage::checkBox_proprietor_CheckedChanged_1);
			// 
			// UserRegisterPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(697, 532);
			this->Controls->Add(this->checkBox_proprietor);
			this->Controls->Add(this->checkBox_client);
			this->Controls->Add(this->label11);
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
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"UserRegisterPage";
			this->Text = L"UserRegisterPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserRegisterPage::UserRegisterPage_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void checkBox_female_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox_female->Checked) {
			checkBox_male->Checked = false;
		}
	}
	private: System::Void checkBox_male_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox_male->Checked) {
			checkBox_female->Checked = false;
		}
	}


	private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		property int Id;
		property int Phone;
		property int Dni;
		property String^ Name;
		property String^ Lastname;
		property String^ Address;
		property String^ Email;
		property String^ Password;
		property bool male;
		property bool female;
		property DateTime SignDate;//Fecha y hora de inicio de contrato
		property DateTime BirthDate;//Fecha y hora de fin de contrato
		property array<Byte>^ Photo; // Matris de bytes

		*/

		String^ name = textBox_name->Text;
		String^ lastname = textBox_lastname->Text;
		String^ _dni = textBox_dni->Text;
		String^ _phone = textBox_phone->Text;
		String^ password = textBox_password->Text;
		String^ _email_ = textBox_email->Text;
		String^ address = textBox_address->Text;
		bool male = checkBox_male->Checked;
		bool female = checkBox_female->Checked;
		bool client = checkBox_client->Checked;
		bool proprietor = checkBox_proprietor->Checked;
		DateTime birthdate = dtp_birthdate->Value;

		if (String::IsNullOrWhiteSpace(name) || String::IsNullOrWhiteSpace(lastname) || String::IsNullOrWhiteSpace(_dni) ||
			String::IsNullOrWhiteSpace(_phone) || String::IsNullOrWhiteSpace(password) || String::IsNullOrWhiteSpace(address)) {
			MessageBox::Show("Es necesario que se completen todos los datos de registro");
			return;
		}

		int phone = 0, dni = 0;
		if (_phone->Length != 9) {
			MessageBox::Show("El número de telefono ingresado debe tener 9 dígitos");
			return;
		}

		if (_dni->Length != 8) {
			MessageBox::Show("El número de DNI ingresado debe tener 8 dígitos");
			return;
		}

		if (!Int32::TryParse(_phone, phone)) {
			MessageBox::Show("Ingrese solo números para el teléfono");
			return;
		}
		if (!Int32::TryParse(_dni, dni)) {
			MessageBox::Show("Ingrese solo números para el DNI");
			return;
		}

		if (!male && !female) {
			MessageBox::Show("Seleccione su sexo");
			return;
		}

		if (!client && !proprietor) {
			MessageBox::Show("Seleccione su tipo de usuario");
			return;
		}

		DateTime today = DateTime::Now;
		DateTime minimumDate = today.AddYears(-18);
		if (birthdate > minimumDate) {
			MessageBox::Show("Debe ser mayor de 18 años para registrarse.");
			return;
		}

		int _phone_ = Convert::ToInt32(textBox_phone->Text);
		if (Controller::IsPhoneRegistered(_phone_)) {
			MessageBox::Show("El número de teléfono ingresado ya ha sido registrado");
			return;
		}

		int _dni_ = Convert::ToInt32(textBox_dni->Text);

		if (Controller::IsDniRegistered(_dni_)) {
			MessageBox::Show("El DNI ingresado ya ha sido registrado");
			return;
		}


		if (Controller::IsEmailRegistered(_email_)) {
			MessageBox::Show("El Email ingresado ya ha sido registrado");
			return;
		}


		Proprietor^ p = gcnew Proprietor(); //declarar - crear
		Client^ c = gcnew Client(); //declarar - crear


		if (proprietor) {
			//se está creando siempre el mismo Id(1)??? errori

			p->Id = Controller::GenerateUserId();//ACA DEBERIA SER GENERATEUSERID
			p->Name = textBox_name->Text;
			p->Lastname = textBox_lastname->Text;
			p->Dni = Convert::ToInt32(textBox_dni->Text);
			p->Phone = Int32::Parse(textBox_phone->Text);
			p->BirthDate = dtp_birthdate->Value;
			p->Email = textBox_email->Text;
			p->Password = textBox_password->Text;
			p->Address = textBox_address->Text;
			p->female = checkBox_female->Checked;
			p->male = checkBox_male->Checked;
			p->client = checkBox_client->Checked;
			p->proprietor = checkBox_proprietor->Checked;
			p->SignDate = System::DateTime::Now;//toma hora y fecha del sistema
			p->ListVehicleProprietor = gcnew List<Vehicle^>();


			Session::CurrentProprietor = p;
			Controller::CreateProprietor(p);
			MessageBox::Show("El registro se realizó exitosamente");


			this->Close();

			UserFeedPage^ userFeedPage = gcnew UserFeedPage(); // modificar aquí - Diego
			userFeedPage->MdiParent = this->MdiParent;
			userFeedPage->Show();
			notifyIcon1->BalloonTipText = "Bienvenid@ a PlaTax estimado DUEÑO";
			notifyIcon1->ShowBalloonTip(2500);


		}
		else if (client) {

			c->Id = Controller::GenerateUserId();//ACA DEBERIA SER GENERATEUSERID
			c->Name = textBox_name->Text;
			c->Lastname = textBox_lastname->Text;
			c->Dni = Convert::ToInt32(textBox_dni->Text);
			c->Phone = Int32::Parse(textBox_phone->Text);
			c->BirthDate = dtp_birthdate->Value;
			c->Email = textBox_email->Text;
			c->Password = textBox_password->Text;
			c->Address = textBox_address->Text;
			c->female = checkBox_female->Checked;
			c->male = checkBox_male->Checked;
			c->client = checkBox_client->Checked;
			c->proprietor = checkBox_proprietor->Checked;
			c->SignDate = System::DateTime::Now;//toma hora y fecha del sistema
			c->ListVehicleClient = gcnew List<Vehicle^>();

			Session::CurrentClient = c;
			Controller::CreateClient(c);
			MessageBox::Show("El registro se realizó exitosamente.");


			this->Close();

			ClientFeedPage^ clientFeedPage = gcnew ClientFeedPage();//modificar de aquí (Diego)
			clientFeedPage->MdiParent = this->MdiParent;
			clientFeedPage->Show();
			notifyIcon1->BalloonTipText = "Bienvenid@ a PlaTax estimado CLIENTE.";
			notifyIcon1->ShowBalloonTip(2500);// hasta aquí

		}
	}

	private: System::Void checkBox_client_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox_client->Checked) {
			checkBox_proprietor->Checked = false;
		}
	}

	private: System::Void checkBox_proprietor_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox_proprietor->Checked) {
			checkBox_client->Checked = false;
		}
	}


	private: System::Void UserRegisterPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
};
}
