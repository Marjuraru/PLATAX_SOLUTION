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
	/// Resumen de UserProfilePage
	/// </summary>
	public ref class UserProfilePage : public System::Windows::Forms::Form
	{
	public:
		UserProfilePage(void)
		{
			InitializeComponent();
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserProfilePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox_male;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox_female;
	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button_savechanges;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dtp_birthdate;
	private: System::Windows::Forms::TextBox^ textBox_dni;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_email;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_phone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_lastname;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pb_photo;

	private: System::Windows::Forms::Button^ button_insertphoto;

	private: System::Windows::Forms::TextBox^ textBox_newpassword;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button_back;







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
			this->checkBox_male = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_female = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button_savechanges = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dtp_birthdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox_dni = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_phone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_lastname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->button_insertphoto = (gcnew System::Windows::Forms::Button());
			this->textBox_newpassword = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox_male
			// 
			this->checkBox_male->AutoSize = true;
			this->checkBox_male->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_male->Location = System::Drawing::Point(41, 505);
			this->checkBox_male->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_male->Name = L"checkBox_male";
			this->checkBox_male->Size = System::Drawing::Size(96, 26);
			this->checkBox_male->TabIndex = 65;
			this->checkBox_male->Text = L"Hombre";
			this->checkBox_male->UseVisualStyleBackColor = true;
			this->checkBox_male->CheckedChanged += gcnew System::EventHandler(this, &UserProfilePage::checkBox_male_CheckedChanged);
			// 
			// checkBox_female
			// 
			this->checkBox_female->AutoSize = true;
			this->checkBox_female->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_female->Location = System::Drawing::Point(41, 476);
			this->checkBox_female->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_female->Name = L"checkBox_female";
			this->checkBox_female->Size = System::Drawing::Size(80, 26);
			this->checkBox_female->TabIndex = 60;
			this->checkBox_female->Text = L"Mujer";
			this->checkBox_female->UseVisualStyleBackColor = true;
			this->checkBox_female->CheckedChanged += gcnew System::EventHandler(this, &UserProfilePage::checkBox_female_CheckedChanged);
			// 
			// textBox_address
			// 
			this->textBox_address->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_address->Location = System::Drawing::Point(41, 405);
			this->textBox_address->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(628, 30);
			this->textBox_address->TabIndex = 55;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(37, 368);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 23);
			this->label10->TabIndex = 45;
			this->label10->Text = L"Dirección";
			// 
			// button_savechanges
			// 
			this->button_savechanges->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_savechanges->Location = System::Drawing::Point(185, 651);
			this->button_savechanges->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_savechanges->Name = L"button_savechanges";
			this->button_savechanges->Size = System::Drawing::Size(232, 37);
			this->button_savechanges->TabIndex = 85;
			this->button_savechanges->Text = L"GUARDAR CAMBIOS";
			this->button_savechanges->UseVisualStyleBackColor = true;
			this->button_savechanges->Click += gcnew System::EventHandler(this, &UserProfilePage::button_savechanges_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(268, 554);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 23);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Cambiar contraseña";
			// 
			// textBox_password
			// 
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_password->Location = System::Drawing::Point(92, 602);
			this->textBox_password->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(228, 30);
			this->textBox_password->TabIndex = 75;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(71, 452);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 23);
			this->label8->TabIndex = 41;
			this->label8->Text = L"Sexo";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(437, 452);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 23);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Fecha de Nacimiento";
			// 
			// dtp_birthdate
			// 
			this->dtp_birthdate->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_birthdate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_birthdate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtp_birthdate->Location = System::Drawing::Point(337, 498);
			this->dtp_birthdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtp_birthdate->Name = L"dtp_birthdate";
			this->dtp_birthdate->Size = System::Drawing::Size(332, 30);
			this->dtp_birthdate->TabIndex = 70;
			// 
			// textBox_dni
			// 
			this->textBox_dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_dni->Location = System::Drawing::Point(391, 246);
			this->textBox_dni->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_dni->Name = L"textBox_dni";
			this->textBox_dni->Size = System::Drawing::Size(279, 30);
			this->textBox_dni->TabIndex = 45;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(387, 209);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 23);
			this->label6->TabIndex = 37;
			this->label6->Text = L"DNI";
			// 
			// textBox_email
			// 
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->Location = System::Drawing::Point(41, 325);
			this->textBox_email->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(628, 30);
			this->textBox_email->TabIndex = 50;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 288);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 23);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Correo Electrónico";
			// 
			// textBox_phone
			// 
			this->textBox_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_phone->Location = System::Drawing::Point(41, 246);
			this->textBox_phone->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_phone->Name = L"textBox_phone";
			this->textBox_phone->Size = System::Drawing::Size(279, 30);
			this->textBox_phone->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 209);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 23);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Teléfono";
			// 
			// textBox_lastname
			// 
			this->textBox_lastname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_lastname->Location = System::Drawing::Point(391, 160);
			this->textBox_lastname->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_lastname->Name = L"textBox_lastname";
			this->textBox_lastname->Size = System::Drawing::Size(279, 30);
			this->textBox_lastname->TabIndex = 35;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(387, 123);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 23);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Apellidos";
			// 
			// textBox_name
			// 
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->Location = System::Drawing::Point(41, 160);
			this->textBox_name->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(279, 30);
			this->textBox_name->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 123);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 23);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Nombres";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(139, 46);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 38);
			this->label1->TabIndex = 28;
			this->label1->Text = L"PERFIL DE USUARIO";
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Location = System::Drawing::Point(803, 160);
			this->pb_photo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(285, 226);
			this->pb_photo->TabIndex = 49;
			this->pb_photo->TabStop = false;
			// 
			// button_insertphoto
			// 
			this->button_insertphoto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_insertphoto->Location = System::Drawing::Point(836, 421);
			this->button_insertphoto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_insertphoto->Name = L"button_insertphoto";
			this->button_insertphoto->Size = System::Drawing::Size(232, 37);
			this->button_insertphoto->TabIndex = 50;
			this->button_insertphoto->Text = L"Selecciona una foto";
			this->button_insertphoto->UseVisualStyleBackColor = true;
			this->button_insertphoto->Click += gcnew System::EventHandler(this, &UserProfilePage::button_insertphoto_Click);
			// 
			// textBox_newpassword
			// 
			this->textBox_newpassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_newpassword->Location = System::Drawing::Point(441, 602);
			this->textBox_newpassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_newpassword->Name = L"textBox_newpassword";
			this->textBox_newpassword->Size = System::Drawing::Size(228, 30);
			this->textBox_newpassword->TabIndex = 80;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(88, 577);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(164, 23);
			this->label11->TabIndex = 53;
			this->label11->Text = L"Contraseña actual";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(437, 577);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(163, 23);
			this->label12->TabIndex = 54;
			this->label12->Text = L"Contraseña nueva";
			// 
			// button_back
			// 
			this->button_back->BackColor = System::Drawing::Color::Maroon;
			this->button_back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_back->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_back->Location = System::Drawing::Point(603, 651);
			this->button_back->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(232, 37);
			this->button_back->TabIndex = 91;
			this->button_back->Text = L"CANCELAR";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Click += gcnew System::EventHandler(this, &UserProfilePage::button_back_Click_1);
			// 
			// UserProfilePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1167, 732);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox_newpassword);
			this->Controls->Add(this->button_insertphoto);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->checkBox_male);
			this->Controls->Add(this->checkBox_female);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button_savechanges);
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
			this->Name = L"UserProfilePage";
			this->Text = L",";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserProfilePage::UserProfilePage_FormClosed);
			this->Load += gcnew System::EventHandler(this, &UserProfilePage::UserProfilePage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_insertphoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ opnfd = gcnew OpenFileDialog();
		opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pb_photo->Image = gcnew Bitmap(opnfd->FileName);
		}
	}

	void ShowImage(array<System::Byte>^ imageBytes, PictureBox^ pictureBox) {
		if (imageBytes == nullptr || imageBytes->Length == 0 || pictureBox == nullptr) {
			// Verificar si la matriz de bytes es nula o vacía, o si el PictureBox es nulo.
			// Puedes manejar esto de acuerdo a tus necesidades, por ejemplo, mostrar un mensaje de error.
			return;
		}

		// Crear un MemoryStream a partir de la matriz de bytes.
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(imageBytes);

		try {
			// Crear una imagen desde el MemoryStream.
			System::Drawing::Image^ image = System::Drawing::Image::FromStream(ms);

			// Mostrar la imagen en el PictureBox.
			pictureBox->Image = image;
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que pueda ocurrir al cargar la imagen.
			// Puedes mostrar un mensaje de error o realizar otra acción adecuada.
			MessageBox::Show("Error al cargar la imagen: " + ex->Message);
		}
	}

	

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

private: System::Void button_savechanges_Click(System::Object^ sender, System::EventArgs^ e) {
	Proprietor^ c = Session::CurrentProprietor;

	String^ name = textBox_name->Text;
	String^ lastname = textBox_lastname->Text;
	String^ _dni = textBox_dni->Text;
	String^ _phone = textBox_phone->Text;
	String^ email = textBox_email->Text;
	String^ address = textBox_address->Text;
	String^ password = textBox_password->Text;
	String^ newpassword = textBox_newpassword->Text;

	bool male = checkBox_male->Checked;
	bool female = checkBox_female->Checked;

	if (String::IsNullOrWhiteSpace(name) || String::IsNullOrWhiteSpace(lastname) || String::IsNullOrWhiteSpace(_dni) ||
		String::IsNullOrWhiteSpace(_phone) || String::IsNullOrWhiteSpace(address)) {
		MessageBox::Show("Es necesario que se completen todos los datos de registro");
		return;
	}

	if (!String::IsNullOrWhiteSpace(password) && !String::IsNullOrWhiteSpace(newpassword)) {
		Proprietor^ currentproprietor = Controller::QueryProprietorById(Session::CurrentProprietor->Id);
		if (password == currentproprietor->Password) {
			c->Password = newpassword;
		}
		else {
			MessageBox::Show("La contraseña actual ingresada es incorrecta");
			return;
		}
	}
	else if (!String::IsNullOrWhiteSpace(password) || !String::IsNullOrWhiteSpace(newpassword)) {
		MessageBox::Show("Por favor ingrese ambas contraseñas para actualizarla");
		return;
	}

	int phone = 0, dni = 0;
	if (_phone->Length != 9 || !Int32::TryParse(_phone, phone)) {
		MessageBox::Show("El número de telefono ingresado debe tener 9 dígitos y contener solo números");
		return;
	}
	if (_dni->Length != 8 || !Int32::TryParse(_dni, dni)) {
		MessageBox::Show("El número de DNI ingresado debe tener 8 dígitos y contener solo números");
		return;
	}

	if (!male && !female) {
		MessageBox::Show("Seleccione su sexo");
		return;
	}

	c->Name = name;
	c->Lastname = lastname;
	c->Dni = dni;
	c->Phone = phone;
	c->Email = email;
	c->Address = address;
	c->BirthDate = dtp_birthdate->Value;
	c->female = female;
	c->male = male;

	if (pb_photo->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pb_photo->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		c->Photo = ms->ToArray();
		ms->Close();
	}

	Controller::UpdateProprietor(c);
	MessageBox::Show("¡Se editó correctamente!");
	Session::CurrentProprietor = c;
	this->Close();
}



	private: System::Void UserProfilePage_Load(System::Object^ sender, System::EventArgs^ e) {
		Proprietor^ c = Session::CurrentProprietor;

		textBox_name->Text = c->Name;
		textBox_lastname->Text = c->Lastname;
		textBox_dni->Text = Convert::ToString(c->Dni);
		textBox_phone->Text = Convert::ToString(c->Phone);
		textBox_email->Text = c->Email;
		textBox_address->Text = c->Address;
		dtp_birthdate->Value = c->BirthDate;
		checkBox_female->Checked = c->female;
		checkBox_male->Checked = c->male;
		if (c->Photo != nullptr) {
			ShowImage(c->Photo, pb_photo);
		}
		

	}
	private: System::Void button_back_Click_1(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		

}
	private: System::Void UserProfilePage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
};
}
