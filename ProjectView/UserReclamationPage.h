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
	private: System::Windows::Forms::Button^ button_send;
	private: System::Windows::Forms::Button^ button_clearall;
	private: System::Windows::Forms::Button^ button_insertphoto;
	private: System::Windows::Forms::ComboBox^ comboBox_category;
	private: System::Windows::Forms::ComboBox^ comboBox_type;

	private: System::Windows::Forms::PictureBox^ pb_photo;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_title;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_dni;
	private: System::Windows::Forms::TextBox^ textBox_surname;
	private: System::Windows::Forms::TextBox^ textBox_phone;
	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::Button^ button_confirmexistence;
	private: System::Windows::Forms::TextBox^ textBox_enter_email;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RichTextBox^ richTextBox_description;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserReclamationPage::typeid));
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_send = (gcnew System::Windows::Forms::Button());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->button_insertphoto = (gcnew System::Windows::Forms::Button());
			this->comboBox_category = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_type = (gcnew System::Windows::Forms::ComboBox());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_title = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_dni = (gcnew System::Windows::Forms::TextBox());
			this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_phone = (gcnew System::Windows::Forms::TextBox());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_confirmexistence = (gcnew System::Windows::Forms::Button());
			this->textBox_enter_email = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->richTextBox_description = (gcnew System::Windows::Forms::RichTextBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_cancel
			// 
			this->button_cancel->BackColor = System::Drawing::Color::Maroon;
			this->button_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_cancel->Location = System::Drawing::Point(623, 371);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(105, 31);
			this->button_cancel->TabIndex = 174;
			this->button_cancel->Tag = L"65";
			this->button_cancel->Text = L"CANCELAR";
			this->button_cancel->UseVisualStyleBackColor = false;
			this->button_cancel->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_cancel_Click);
			// 
			// button_send
			// 
			this->button_send->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_send->Location = System::Drawing::Point(285, 370);
			this->button_send->Name = L"button_send";
			this->button_send->Size = System::Drawing::Size(103, 30);
			this->button_send->TabIndex = 167;
			this->button_send->Tag = L"60";
			this->button_send->Text = L"ENVIAR";
			this->button_send->UseVisualStyleBackColor = true;
			this->button_send->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_send_Click);
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(163, 370);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(108, 30);
			this->button_clearall->TabIndex = 166;
			this->button_clearall->Tag = L"55";
			this->button_clearall->Text = L"Limpiar todo";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_clearall_Click);
			// 
			// button_insertphoto
			// 
			this->button_insertphoto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_insertphoto->Location = System::Drawing::Point(406, 370);
			this->button_insertphoto->Name = L"button_insertphoto";
			this->button_insertphoto->Size = System::Drawing::Size(174, 30);
			this->button_insertphoto->TabIndex = 165;
			this->button_insertphoto->Tag = L"50";
			this->button_insertphoto->Text = L"Adjuntar imagen";
			this->button_insertphoto->UseVisualStyleBackColor = true;
			this->button_insertphoto->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_insertphoto_Click);
			// 
			// comboBox_category
			// 
			this->comboBox_category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_category->FormattingEnabled = true;
			this->comboBox_category->Location = System::Drawing::Point(286, 134);
			this->comboBox_category->Name = L"comboBox_category";
			this->comboBox_category->Size = System::Drawing::Size(106, 27);
			this->comboBox_category->TabIndex = 162;
			this->comboBox_category->Tag = L"5";
			// 
			// comboBox_type
			// 
			this->comboBox_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_type->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_type->FormattingEnabled = true;
			this->comboBox_type->Location = System::Drawing::Point(80, 134);
			this->comboBox_type->Name = L"comboBox_type";
			this->comboBox_type->Size = System::Drawing::Size(106, 27);
			this->comboBox_type->TabIndex = 161;
			this->comboBox_type->Tag = L"0";
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Location = System::Drawing::Point(406, 231);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(322, 134);
			this->pb_photo->TabIndex = 173;
			this->pb_photo->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(205, 137);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 19);
			this->label10->TabIndex = 172;
			this->label10->Text = L"Categoría";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(171, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 19);
			this->label5->TabIndex = 171;
			this->label5->Text = L"Descripción";
			// 
			// textBox_title
			// 
			this->textBox_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_title->Location = System::Drawing::Point(80, 186);
			this->textBox_title->Name = L"textBox_title";
			this->textBox_title->Size = System::Drawing::Size(312, 26);
			this->textBox_title->TabIndex = 163;
			this->textBox_title->Tag = L"15";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 19);
			this->label4->TabIndex = 170;
			this->label4->Text = L"Título";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 19);
			this->label3->TabIndex = 169;
			this->label3->Text = L"Tipo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(169, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(467, 31);
			this->label1->TabIndex = 168;
			this->label1->Text = L"FORMULARIO DE RECLAMACIÓN";
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->textBox_name);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox_dni);
			this->groupBox2->Controls->Add(this->textBox_surname);
			this->groupBox2->Controls->Add(this->textBox_phone);
			this->groupBox2->Controls->Add(this->button_logout);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(446, 56);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(251, 170);
			this->groupBox2->TabIndex = 249;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Perfil";
			// 
			// textBox_name
			// 
			this->textBox_name->Enabled = false;
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_name->Location = System::Drawing::Point(84, 30);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_name->Size = System::Drawing::Size(147, 26);
			this->textBox_name->TabIndex = 240;
			this->textBox_name->Tag = L"";
			this->textBox_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 19);
			this->label2->TabIndex = 247;
			this->label2->Text = L"Apellido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 19);
			this->label6->TabIndex = 245;
			this->label6->Text = L"DNI";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 19);
			this->label7->TabIndex = 244;
			this->label7->Text = L"Teléfono";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(20, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 19);
			this->label8->TabIndex = 246;
			this->label8->Text = L"Nombre";
			// 
			// textBox_dni
			// 
			this->textBox_dni->Enabled = false;
			this->textBox_dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_dni->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_dni->Location = System::Drawing::Point(84, 128);
			this->textBox_dni->Name = L"textBox_dni";
			this->textBox_dni->Size = System::Drawing::Size(147, 26);
			this->textBox_dni->TabIndex = 243;
			this->textBox_dni->Tag = L"";
			this->textBox_dni->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_surname
			// 
			this->textBox_surname->Enabled = false;
			this->textBox_surname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_surname->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_surname->Location = System::Drawing::Point(84, 62);
			this->textBox_surname->Name = L"textBox_surname";
			this->textBox_surname->Size = System::Drawing::Size(147, 26);
			this->textBox_surname->TabIndex = 241;
			this->textBox_surname->Tag = L"";
			this->textBox_surname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_phone
			// 
			this->textBox_phone->Enabled = false;
			this->textBox_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_phone->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_phone->Location = System::Drawing::Point(84, 94);
			this->textBox_phone->Name = L"textBox_phone";
			this->textBox_phone->Size = System::Drawing::Size(147, 26);
			this->textBox_phone->TabIndex = 242;
			this->textBox_phone->Tag = L"";
			this->textBox_phone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(717, 60);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(113, 24);
			this->button_logout->TabIndex = 40;
			this->button_logout->Text = L"Cerrar sesión";
			this->button_logout->UseVisualStyleBackColor = false;
			// 
			// button_confirmexistence
			// 
			this->button_confirmexistence->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_confirmexistence->Location = System::Drawing::Point(291, 85);
			this->button_confirmexistence->Name = L"button_confirmexistence";
			this->button_confirmexistence->Size = System::Drawing::Size(100, 30);
			this->button_confirmexistence->TabIndex = 248;
			this->button_confirmexistence->Tag = L"55";
			this->button_confirmexistence->Text = L"Confirmar existencia";
			this->button_confirmexistence->UseVisualStyleBackColor = true;
			this->button_confirmexistence->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_confirmexistence_Click);
			// 
			// textBox_enter_email
			// 
			this->textBox_enter_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_enter_email->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_enter_email->Location = System::Drawing::Point(127, 85);
			this->textBox_enter_email->Name = L"textBox_enter_email";
			this->textBox_enter_email->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_enter_email->Size = System::Drawing::Size(147, 26);
			this->textBox_enter_email->TabIndex = 246;
			this->textBox_enter_email->Tag = L"";
			this->textBox_enter_email->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(23, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 19);
			this->label9->TabIndex = 247;
			this->label9->Text = L"Para(e-mail)";
			// 
			// richTextBox_description
			// 
			this->richTextBox_description->Location = System::Drawing::Point(22, 266);
			this->richTextBox_description->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox_description->Name = L"richTextBox_description";
			this->richTextBox_description->Size = System::Drawing::Size(366, 99);
			this->richTextBox_description->TabIndex = 250;
			this->richTextBox_description->Text = L"";
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// UserReclamationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(760, 405);
			this->Controls->Add(this->richTextBox_description);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button_confirmexistence);
			this->Controls->Add(this->textBox_enter_email);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->button_send);
			this->Controls->Add(this->button_clearall);
			this->Controls->Add(this->button_insertphoto);
			this->Controls->Add(this->comboBox_category);
			this->Controls->Add(this->comboBox_type);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_title);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"UserReclamationPage";
			this->Text = L"UserReclamationPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserReclamationPage::UserReclamationPage_FormClosed);
			this->Load += gcnew System::EventHandler(this, &UserReclamationPage::UserReclamationPage_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

		bool Confirmarexistencia() {
			String^ enteredEmail = textBox_enter_email->Text;
			List<Proprietor^>^ proprietors = Controller::QueryAllProprietors();
			List<Client^>^ clients = Controller::QueryAllClients();

			if (Session::CurrentProprietor != nullptr && enteredEmail == Session::CurrentProprietor->Email) {
				return false;
			}
			if (proprietors != nullptr) {
				for each (Proprietor ^ proprietor in proprietors) {
					if (proprietor->Email == enteredEmail) {
						return true;
					}
				}
			}

			if (clients != nullptr) {
				for each (Client ^ client in clients) {
					if (client->Email == enteredEmail) {
						return true;
					}
				}
			}

			return false;
		}

		void FillCombos() {

			comboBox_type->Items->Add("Ayuda");
			comboBox_type->Items->Add("Reclamo");
			comboBox_type->Items->Add("Sugerencia");
			comboBox_type->Items->Add("Queja");
			comboBox_category->Items->Add("Leve o Crítico");
			comboBox_category->Items->Add("Moderado o Urgente");
			comboBox_category->Items->Add("Grave o Emergente");
			textBox_name->Text = "Nombre";
			textBox_surname->Text = "Apellido";
			textBox_phone->Text = "Teléfono";
			textBox_dni->Text = "DNI";
			



		}

		void ClearTextBoxes() {
			//función para limpiar todas las textboxes
			comboBox_type->Items->Clear();
			comboBox_category->Items->Clear();
			textBox_title->Clear();
			richTextBox_description->Clear();

			pb_photo->Image = nullptr;
		}

	private: System::Void button_clearall_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearTextBoxes();
		FillCombos();

	}
	private: System::Void button_insertphoto_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ opnfd = gcnew OpenFileDialog();
		opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pb_photo->Image = gcnew Bitmap(opnfd->FileName);
		}

	}
	private: System::Void button_send_Click(System::Object^ sender, System::EventArgs^ e) {

		Reclamation^ r = gcnew Reclamation();
		String^ tenter_email = textBox_enter_email->Text;
		String^ description = richTextBox_description->Text;
		String^ title = textBox_title->Text;
		String^ type = comboBox_type->Text;
		String^ category = comboBox_category->Text;



		if (String::IsNullOrWhiteSpace(description)  || String::IsNullOrWhiteSpace(description) || String::IsNullOrWhiteSpace(title) || String::IsNullOrWhiteSpace(type) ||
			String::IsNullOrWhiteSpace(category)) {
			MessageBox::Show("Es necesario que se completen todos los datos de registro");
			return;
		}

		



		//Este es un paso a relacionar Admin con User
		/*if (Admin responde){

			status="Respondido"

			}
			else if (Admin no responde){}

			status="En proceso..."

			}
			else if (No enviado al Admin){}
			status="".

		*/

		//r-> Status = status; status cambia con la respuesta de de la retroalimentación


		/////AQUÍ EL PROPIETARIO SE COMUNICARÁ CON OTROS USUARIOS DE TODO TIPO//////
		
		r->SystemDate = System::DateTime::Now;
		r->Description = description;
		r->Title = title;
		r->Type = type;
		r->Category = category;

		if (pb_photo->Image != nullptr) {

			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pb_photo->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			r->Photo = ms->ToArray();
			ms->Close();
		}

		Proprietor^ ProprietorP = Session::CurrentProprietor;
		ProprietorP->ListReclamationSentProprietor->Add(r);
		Controller::UpdateProprietor(ProprietorP);

		List<Adm^>^ adms = Controller::QueryAllAdms();

		if ("admin" == tenter_email) {
			Adm^ adm = gcnew Adm();
			adm->ListReclamationReceivedAdm->Add(r);
			if (adms == nullptr) {
				Controller::CreateAdm(adm);
				MessageBox::Show("Se ha agregado una nueva consulta");
				Controller::CreateReclamation(r);

			}
			else {
				Controller::UpdateAdm(adm);
				MessageBox::Show("Se ha agregado una nueva consulta");
				Controller::CreateReclamation(r);
			}
		}


		if (Confirmarexistencia()) {

			r->Id = Controller::GenerateReclamationId();

			r->Usertransmitter = Session::CurrentProprietor;

			if (Controller::QueryProprietorByEmail(textBox_enter_email->Text) != nullptr) {
				r->Userreceiver = Controller::QueryProprietorByEmail(textBox_enter_email->Text);
			}
			else {
				if (Controller::QueryClientByEmail(textBox_enter_email->Text) != nullptr) {
					r->Userreceiver = Controller::QueryClientByEmail(textBox_enter_email->Text);
				}
			}


			r->SystemDate = System::DateTime::Now;
			r->Description = description;
			r->Title = title;
			r->Type = type;
			r->Category = category;


			if (pb_photo->Image != nullptr) {

				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pb_photo->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				r->Photo = ms->ToArray();
				ms->Close();
			}

			MessageBox::Show("Se ha agregado una nueva consulta");

			Controller::CreateReclamation(r);


			//Hacemos método de búsqueda
			List<Proprietor^>^ proprietors = Controller::QueryAllProprietors();
			List<Client^>^ clients = Controller::QueryAllClients();
			

			if ((clients != nullptr) && (proprietors != nullptr)) {
				for each (Proprietor ^ proprietor in proprietors) {
					if (proprietor->Email == tenter_email) {
						proprietor->ListReclamationReceivedProprietor->Add(r);
						Controller::UpdateProprietor(proprietor);
						break;
					}
				}
				for each (Client ^ client in clients) {
					if (client->Email == tenter_email) {
						client->ListReclamationReceivedClient->Add(r);
						Controller::UpdateClient(client);
						break;
					}
				}
			}
			else {
				MessageBox::Show("No existe el email ingresado");
			}
			MessageBox::Show("El mensaje se envió correctamente");
			ClearTextBoxes();
		}
		else {
			MessageBox::Show("No se envió mensaje o se le envió al Administrador");
			ClearTextBoxes();
		}
		////
		this->Close();


		

	}
	private: System::Void button_cancel_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}

	private: System::Void UserReclamationPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}




	private: System::Void button_confirmexistence_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tenter_email = textBox_enter_email->Text;
		if (String::IsNullOrWhiteSpace(tenter_email)) {
			MessageBox::Show("Ingrese el email a confirmar existencia");
			return;
		}

		List<Proprietor^>^ proprietors = Controller::QueryAllProprietors();
		List<Client^>^ clients = Controller::QueryAllClients();

		if (Session::CurrentProprietor != nullptr && tenter_email == Session::CurrentProprietor->Email) {
			MessageBox::Show("Es su correo xd");
		}

		if (Confirmarexistencia()) {
			for each (Proprietor ^ proprietor in proprietors) {
				if (proprietor->Email == tenter_email) {
					textBox_name->Text = proprietor->Name;
					textBox_surname->Text = proprietor->Lastname;
					textBox_phone->Text = proprietor->Phone.ToString();
					textBox_dni->Text = proprietor->Dni.ToString();
					break;
				}
			}

			for each (Client ^ client in clients) {
				if (client->Email == tenter_email) {
					textBox_name->Text = client->Name;
					textBox_surname->Text = client->Lastname;
					textBox_phone->Text = client->Phone.ToString();
					textBox_dni->Text = client->Dni.ToString();
					break;
				}
			}
		}
		else {
			MessageBox::Show("No existe el email ingresado o ingresaste como email al Admistrador");
		}

	}
	private: System::Void UserReclamationPage_Load_1(System::Object^ sender, System::EventArgs^ e) {
		FillCombos();
		notifyIcon1->BalloonTipText = "Primero confirme el email del la persona antes de redactar porfavor. Para el Administrador, no es necesario.";
		notifyIcon1->ShowBalloonTip(2500);
		MessageBox::Show("Si deseara contactarse con el Administrador, solo escriba exactamente en el entrada de email lo siguiente :\nadmin");

	}
};
}
