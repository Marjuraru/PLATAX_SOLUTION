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
	/// Resumen de ClientMailBox
	/// </summary>
	public ref class UserMailBoxPage : public System::Windows::Forms::Form
	{
	public:
		UserMailBoxPage(void)
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
		~UserMailBoxPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;

	protected:



























	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage_Sendmessage;
	private: System::Windows::Forms::TabPage^ tabPage_Mailbox;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::RichTextBox^ richTextBox_content;


	private: System::Windows::Forms::Button^ button_send_message;


	private: System::Windows::Forms::Button^ button_clearall;
	private: System::Windows::Forms::TextBox^ textBox_enter_email;

	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_subject;
	private: System::Windows::Forms::DataGridView^ dgv_mails;




	private: System::Windows::Forms::Button^ button_confirmexistence;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_dni;
	private: System::Windows::Forms::TextBox^ textBox_surname;
	private: System::Windows::Forms::TextBox^ textBox_phone;







	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::RichTextBox^ richTextBox_showmessage;
	private: System::Windows::Forms::TextBox^ textBox_showsbuject;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_showname;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_from;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;













































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
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_Sendmessage = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_dni = (gcnew System::Windows::Forms::TextBox());
			this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_phone = (gcnew System::Windows::Forms::TextBox());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_confirmexistence = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_subject = (gcnew System::Windows::Forms::TextBox());
			this->textBox_enter_email = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_send_message = (gcnew System::Windows::Forms::Button());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->richTextBox_content = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage_Mailbox = (gcnew System::Windows::Forms::TabPage());
			this->textBox_showsbuject = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_showname = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_from = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox_showmessage = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dgv_mails = (gcnew System::Windows::Forms::DataGridView());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage_Sendmessage->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage_Mailbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_mails))->BeginInit();
			this->SuspendLayout();
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage_Sendmessage);
			this->tabControl1->Controls->Add(this->tabPage_Mailbox);
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1266, 668);
			this->tabControl1->TabIndex = 209;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserMailBoxPage::tabControl1_SelectedIndexChanged);
			// 
			// tabPage_Sendmessage
			// 
			this->tabPage_Sendmessage->Controls->Add(this->groupBox2);
			this->tabPage_Sendmessage->Controls->Add(this->button_confirmexistence);
			this->tabPage_Sendmessage->Controls->Add(this->label7);
			this->tabPage_Sendmessage->Controls->Add(this->textBox_subject);
			this->tabPage_Sendmessage->Controls->Add(this->textBox_enter_email);
			this->tabPage_Sendmessage->Controls->Add(this->label1);
			this->tabPage_Sendmessage->Controls->Add(this->button_send_message);
			this->tabPage_Sendmessage->Controls->Add(this->button_clearall);
			this->tabPage_Sendmessage->Controls->Add(this->richTextBox_content);
			this->tabPage_Sendmessage->Location = System::Drawing::Point(4, 25);
			this->tabPage_Sendmessage->Name = L"tabPage_Sendmessage";
			this->tabPage_Sendmessage->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Sendmessage->Size = System::Drawing::Size(1258, 639);
			this->tabPage_Sendmessage->TabIndex = 0;
			this->tabPage_Sendmessage->Text = L"Escribir mensaje";
			this->tabPage_Sendmessage->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->textBox_name);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox_dni);
			this->groupBox2->Controls->Add(this->textBox_surname);
			this->groupBox2->Controls->Add(this->textBox_phone);
			this->groupBox2->Controls->Add(this->button_logout);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(680, 28);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(335, 209);
			this->groupBox2->TabIndex = 245;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Perfil";
			// 
			// textBox_name
			// 
			this->textBox_name->Enabled = false;
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_name->Location = System::Drawing::Point(112, 37);
			this->textBox_name->Margin = System::Windows::Forms::Padding(4);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_name->Size = System::Drawing::Size(195, 30);
			this->textBox_name->TabIndex = 240;
			this->textBox_name->Tag = L"";
			this->textBox_name->Text = L"Nombre";
			this->textBox_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 80);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 23);
			this->label2->TabIndex = 247;
			this->label2->Text = L"Apellido";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 160);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 23);
			this->label4->TabIndex = 245;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 119);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 23);
			this->label3->TabIndex = 244;
			this->label3->Text = L"Teléfono";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(27, 39);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 23);
			this->label5->TabIndex = 246;
			this->label5->Text = L"Nombre";
			// 
			// textBox_dni
			// 
			this->textBox_dni->Enabled = false;
			this->textBox_dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_dni->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_dni->Location = System::Drawing::Point(112, 158);
			this->textBox_dni->Margin = System::Windows::Forms::Padding(4);
			this->textBox_dni->Name = L"textBox_dni";
			this->textBox_dni->Size = System::Drawing::Size(195, 30);
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
			this->textBox_surname->Location = System::Drawing::Point(112, 76);
			this->textBox_surname->Margin = System::Windows::Forms::Padding(4);
			this->textBox_surname->Name = L"textBox_surname";
			this->textBox_surname->Size = System::Drawing::Size(195, 30);
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
			this->textBox_phone->Location = System::Drawing::Point(112, 116);
			this->textBox_phone->Margin = System::Windows::Forms::Padding(4);
			this->textBox_phone->Name = L"textBox_phone";
			this->textBox_phone->Size = System::Drawing::Size(195, 30);
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
			this->button_logout->Location = System::Drawing::Point(956, 74);
			this->button_logout->Margin = System::Windows::Forms::Padding(4);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(151, 30);
			this->button_logout->TabIndex = 40;
			this->button_logout->Text = L"Cerrar sesión";
			this->button_logout->UseVisualStyleBackColor = false;
			// 
			// button_confirmexistence
			// 
			this->button_confirmexistence->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_confirmexistence->Location = System::Drawing::Point(428, 58);
			this->button_confirmexistence->Margin = System::Windows::Forms::Padding(4);
			this->button_confirmexistence->Name = L"button_confirmexistence";
			this->button_confirmexistence->Size = System::Drawing::Size(204, 37);
			this->button_confirmexistence->TabIndex = 244;
			this->button_confirmexistence->Tag = L"55";
			this->button_confirmexistence->Text = L"Confirmar existencia";
			this->button_confirmexistence->UseVisualStyleBackColor = true;
			this->button_confirmexistence->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button_confirmexistence_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(139, 147);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 23);
			this->label7->TabIndex = 243;
			this->label7->Text = L"Asunto";
			// 
			// textBox_subject
			// 
			this->textBox_subject->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_subject->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_subject->Location = System::Drawing::Point(256, 147);
			this->textBox_subject->Margin = System::Windows::Forms::Padding(4);
			this->textBox_subject->Name = L"textBox_subject";
			this->textBox_subject->Size = System::Drawing::Size(195, 30);
			this->textBox_subject->TabIndex = 242;
			this->textBox_subject->Tag = L"";
			this->textBox_subject->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_enter_email
			// 
			this->textBox_enter_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_enter_email->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_enter_email->Location = System::Drawing::Point(199, 60);
			this->textBox_enter_email->Margin = System::Windows::Forms::Padding(4);
			this->textBox_enter_email->Name = L"textBox_enter_email";
			this->textBox_enter_email->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_enter_email->Size = System::Drawing::Size(195, 30);
			this->textBox_enter_email->TabIndex = 239;
			this->textBox_enter_email->Tag = L"";
			this->textBox_enter_email->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(61, 60);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 23);
			this->label1->TabIndex = 240;
			this->label1->Text = L"Para(e-mail)";
			// 
			// button_send_message
			// 
			this->button_send_message->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_send_message->Location = System::Drawing::Point(642, 477);
			this->button_send_message->Margin = System::Windows::Forms::Padding(4);
			this->button_send_message->Name = L"button_send_message";
			this->button_send_message->Size = System::Drawing::Size(144, 37);
			this->button_send_message->TabIndex = 168;
			this->button_send_message->Tag = L"55";
			this->button_send_message->Text = L"Enviar mensaje";
			this->button_send_message->UseVisualStyleBackColor = true;
			this->button_send_message->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button_send_message_Click);
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(349, 477);
			this->button_clearall->Margin = System::Windows::Forms::Padding(4);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(144, 37);
			this->button_clearall->TabIndex = 167;
			this->button_clearall->Tag = L"55";
			this->button_clearall->Text = L"Limpiar todo";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button_clearall_Click);
			// 
			// richTextBox_content
			// 
			this->richTextBox_content->Location = System::Drawing::Point(61, 284);
			this->richTextBox_content->Name = L"richTextBox_content";
			this->richTextBox_content->Size = System::Drawing::Size(993, 176);
			this->richTextBox_content->TabIndex = 1;
			this->richTextBox_content->Text = L"";
			// 
			// tabPage_Mailbox
			// 
			this->tabPage_Mailbox->Controls->Add(this->button1);
			this->tabPage_Mailbox->Controls->Add(this->textBox_showsbuject);
			this->tabPage_Mailbox->Controls->Add(this->label9);
			this->tabPage_Mailbox->Controls->Add(this->textBox_showname);
			this->tabPage_Mailbox->Controls->Add(this->label8);
			this->tabPage_Mailbox->Controls->Add(this->textBox_from);
			this->tabPage_Mailbox->Controls->Add(this->label6);
			this->tabPage_Mailbox->Controls->Add(this->richTextBox_showmessage);
			this->tabPage_Mailbox->Controls->Add(this->comboBox1);
			this->tabPage_Mailbox->Controls->Add(this->dgv_mails);
			this->tabPage_Mailbox->Location = System::Drawing::Point(4, 25);
			this->tabPage_Mailbox->Name = L"tabPage_Mailbox";
			this->tabPage_Mailbox->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Mailbox->Size = System::Drawing::Size(1258, 639);
			this->tabPage_Mailbox->TabIndex = 1;
			this->tabPage_Mailbox->Text = L"Buzón de entrada";
			this->tabPage_Mailbox->UseVisualStyleBackColor = true;
			// 
			// textBox_showsbuject
			// 
			this->textBox_showsbuject->Enabled = false;
			this->textBox_showsbuject->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_showsbuject->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_showsbuject->Location = System::Drawing::Point(1008, 125);
			this->textBox_showsbuject->Margin = System::Windows::Forms::Padding(4);
			this->textBox_showsbuject->Name = L"textBox_showsbuject";
			this->textBox_showsbuject->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_showsbuject->Size = System::Drawing::Size(195, 30);
			this->textBox_showsbuject->TabIndex = 262;
			this->textBox_showsbuject->Tag = L"";
			this->textBox_showsbuject->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(873, 125);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 23);
			this->label9->TabIndex = 261;
			this->label9->Text = L"Asunto:";
			// 
			// textBox_showname
			// 
			this->textBox_showname->Enabled = false;
			this->textBox_showname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_showname->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_showname->Location = System::Drawing::Point(1008, 70);
			this->textBox_showname->Margin = System::Windows::Forms::Padding(4);
			this->textBox_showname->Name = L"textBox_showname";
			this->textBox_showname->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_showname->Size = System::Drawing::Size(195, 30);
			this->textBox_showname->TabIndex = 260;
			this->textBox_showname->Tag = L"";
			this->textBox_showname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(873, 77);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 23);
			this->label8->TabIndex = 259;
			this->label8->Text = L"Nombre:";
			// 
			// textBox_from
			// 
			this->textBox_from->Enabled = false;
			this->textBox_from->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_from->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_from->Location = System::Drawing::Point(1008, 28);
			this->textBox_from->Margin = System::Windows::Forms::Padding(4);
			this->textBox_from->Name = L"textBox_from";
			this->textBox_from->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_from->Size = System::Drawing::Size(195, 30);
			this->textBox_from->TabIndex = 257;
			this->textBox_from->Tag = L"";
			this->textBox_from->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(873, 30);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 23);
			this->label6->TabIndex = 258;
			this->label6->Text = L"De:";
			// 
			// richTextBox_showmessage
			// 
			this->richTextBox_showmessage->Enabled = false;
			this->richTextBox_showmessage->Location = System::Drawing::Point(834, 183);
			this->richTextBox_showmessage->Name = L"richTextBox_showmessage";
			this->richTextBox_showmessage->Size = System::Drawing::Size(264, 413);
			this->richTextBox_showmessage->TabIndex = 215;
			this->richTextBox_showmessage->Text = L"";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(17, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 246;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserMailBoxPage::comboBox1_SelectedIndexChanged);
			// 
			// dgv_mails
			// 
			this->dgv_mails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_mails->Location = System::Drawing::Point(17, 49);
			this->dgv_mails->Name = L"dgv_mails";
			this->dgv_mails->RowHeadersWidth = 51;
			this->dgv_mails->RowTemplate->Height = 24;
			this->dgv_mails->Size = System::Drawing::Size(776, 547);
			this->dgv_mails->TabIndex = 0;
			this->dgv_mails->SelectionChanged += gcnew System::EventHandler(this, &UserMailBoxPage::dgv_mails_SelectionChanged);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(928, 688);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(165, 44);
			this->button_exit->TabIndex = 214;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button_exit_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(1114, 343);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 186);
			this->button1->TabIndex = 263;
			this->button1->Tag = L"65";
			this->button1->Text = L"ACEPTO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button1_Click);
			// 
			// UserMailBoxPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1306, 745);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->tabControl1);
			this->Name = L"UserMailBoxPage";
			this->Text = L"Sección de Buzón";
			this->Load += gcnew System::EventHandler(this, &UserMailBoxPage::ClientMailBox_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage_Sendmessage->ResumeLayout(false);
			this->tabPage_Sendmessage->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage_Mailbox->ResumeLayout(false);
			this->tabPage_Mailbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_mails))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}

	private: System::Void button_clearall_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox_content->Clear();
	}


	private:

		void ClearTextBoxes() {

			textBox_enter_email->Clear();
			textBox_subject->Clear();
			richTextBox_content->Clear();
			textBox_name->Clear();
			textBox_surname->Clear();
			textBox_phone->Clear();
			textBox_dni->Clear();

		}


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
			MessageBox::Show("No existe el email ingresado");
		}
	}

	private: System::Void InitializeDataGridView() {
		// Configurar el DataGridView para no generar columnas automáticamente
		dgv_mails->AutoGenerateColumns = false;

		// Crear y agregar columnas manualmente
		DataGridViewTextBoxColumn^ idColumn = gcnew DataGridViewTextBoxColumn();
		idColumn->HeaderText = "ID";
		idColumn->DataPropertyName = "Id"; // Esto debe coincidir con el nombre de la propiedad en la clase de datos
		idColumn->Width = 25; // Ajustar el ancho de la columna
		dgv_mails->Columns->Add(idColumn);

		DataGridViewTextBoxColumn^ UserreceiverColumn = gcnew DataGridViewTextBoxColumn();
		UserreceiverColumn->HeaderText = "Propietario";
		UserreceiverColumn->DataPropertyName = "UsertransmitterName";
		UserreceiverColumn->Width = 80; // Ajustar el ancho de la columna
		dgv_mails->Columns->Add(UserreceiverColumn);

		DataGridViewTextBoxColumn^ SubjectColumn = gcnew DataGridViewTextBoxColumn();
		SubjectColumn->HeaderText = "Asunto";
		SubjectColumn->DataPropertyName = "Subject";
		SubjectColumn->Width = 180; // Ajustar el ancho de la columna
		dgv_mails->Columns->Add(SubjectColumn);

		DataGridViewTextBoxColumn^ MadeDateColumn = gcnew DataGridViewTextBoxColumn();
		MadeDateColumn->HeaderText = "Fecha de realización";
		MadeDateColumn->DataPropertyName = "MadeDate";
		MadeDateColumn->DefaultCellStyle->Format = "dd/MM/yyyy";
		idColumn->Width = 100; // Ajustar el ancho de la columna
		dgv_mails->Columns->Add(MadeDateColumn);
		// Puedes agregar más columnas según sea necesario
	}


	private: System::Void ClientMailBox_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Items->Add("Recibidos");
		comboBox1->Items->Add("Enviados");
		InitializeDataGridView();
		ClearTextBoxes();
	}

	private: System::Void button_send_message_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tenter_email = textBox_enter_email->Text;
		Mail^ mail = gcnew Mail();

		if (Confirmarexistencia()) {
			mail->Id = Controller::GenerateMailId();
			mail->Usertransmitter = Session::CurrentProprietor;

			if (Controller::QueryProprietorByEmail(textBox_enter_email->Text) != nullptr) {
				mail->Userreceiver = Controller::QueryProprietorByEmail(textBox_enter_email->Text);
			}
			else {
				if (Controller::QueryClientByEmail(textBox_enter_email->Text) != nullptr) {
					mail->Userreceiver = Controller::QueryClientByEmail(textBox_enter_email->Text);
				}
			}

			mail->Content = richTextBox_content->Text;
			mail->Subject = textBox_subject->Text;
			mail->MadeDate = System::DateTime::Now;//toma hora y fecha del sistema

			Controller::CreateMail(mail);

			Proprietor^ ProprietorP = Session::CurrentProprietor;
			ProprietorP->ListEmailSentProprietor->Add(mail);
			Controller::UpdateProprietor(ProprietorP);

			//Hacemos método de búsqueda
			List<Proprietor^>^ proprietors = Controller::QueryAllProprietors();
			List<Client^>^ clients = Controller::QueryAllClients();

			if ((clients != nullptr) && (proprietors != nullptr)) {
				for each (Proprietor ^ proprietor in proprietors) {
					if (proprietor->Email == tenter_email) {
						proprietor->ListEmailReceivedProprietor->Add(mail);
						Controller::UpdateProprietor(proprietor);
						break;
					}
				}
				for each (Client ^ client in clients) {
					if (client->Email == tenter_email) {
						client->ListEmailReceivedClient->Add(mail);
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
			MessageBox::Show("No se envió mensaje");
			ClearTextBoxes();
		}

	}


	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Establecer "Recibidos" como la opción seleccionada por defecto
			comboBox1->SelectedIndex = 0;

			// Llama a QueryAllMails y verifica que no devuelva null
			List<Mail^>^ mails = Controller::QueryAllMails();
			// Inicializa la lista de mails filtrados
			List<Mail^>^ m = gcnew List<Mail^>();
			// Filtra los mails

			if (mails != nullptr) {
				for each (Mail ^ ma in mails) {
					for each (Mail ^ mai in Session::CurrentProprietor->ListEmailReceivedProprietor) {
						if (ma->Id == mai->Id) {
							m->Add(ma);
							break;
						}
					}
				}
			}
			// Asigna la lista filtrada como fuente de datos
			dgv_mails->DataSource = m;
		}
		catch (Exception^ ex) {
			// Maneja la excepción, mostrando un mensaje al usuario
			MessageBox::Show("Error al cargar los mails: " + ex->Message);
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBox^ comboBox = dynamic_cast<ComboBox^>(sender);

		if (comboBox != nullptr) {
			String^ selectedOption = comboBox->SelectedItem->ToString();

			// Llama a QueryAllMails y verifica que no devuelva null
			List<Mail^>^ mails = Controller::QueryAllMails();

			if (comboBox->SelectedIndex == 0) {
				// Filtrar correos recibidos
				List<Mail^>^ filteredMails = gcnew List<Mail^>();

				if (mails != nullptr && Session::CurrentProprietor->ListEmailReceivedProprietor != nullptr) {
					for each (Mail ^ ma in mails) {
						for each (Mail ^ mai in Session::CurrentProprietor->ListEmailReceivedProprietor) {
							if (ma->Id == mai->Id) {
								filteredMails->Add(ma);
								break;
							}
						}
					}
				}
				// Asignar la lista filtrada como fuente de datos
				dgv_mails->DataSource = filteredMails;
			}
			else if (comboBox->SelectedIndex == 1) {
				// Filtrar correos enviados
				List<Mail^>^ filteredMails = gcnew List<Mail^>();

				if (mails != nullptr && Session::CurrentProprietor->ListEmailSentProprietor != nullptr) {
					for each (Mail ^ ma in mails) {
						for each (Mail ^ mai in Session::CurrentProprietor->ListEmailSentProprietor) {
							if (ma->Id == mai->Id) {
								filteredMails->Add(ma);
								break;
							}
						}
					}
				}
				// Asignar la lista filtrada como fuente de datos
				dgv_mails->DataSource = filteredMails;
			}
		}
	}

	private: System::Void dgv_mails_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		if (dgv_mails->SelectedRows->Count > 0) {
			// Obtener la fila seleccionada
			DataGridViewRow^ selectedRow = dgv_mails->SelectedRows[0];
			// Obtener el elemento de datos vinculado a la fila seleccionada y convertirlo a Vehicle^
			Mail^ selectedData = dynamic_cast<Mail^>(selectedRow->DataBoundItem);

			if (selectedData != nullptr) {
				// Mostrar los detalles del registro seleccionado en los TextBox
				textBox_from->Text = selectedData->Usertransmitter->Email; // Convertir entero a cadena
				textBox_showname->Text = selectedData->Usertransmitter->Name; // Convertir entero a cadena
				textBox_showsbuject->Text = selectedData->Subject;
				richTextBox_showmessage->Text = selectedData->Content;
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgv_mails->SelectedRows->Count > 0) {
			// Obtener la fila seleccionada
			DataGridViewRow^ selectedRow = dgv_mails->SelectedRows[0];
			// Obtener el elemento de datos vinculado a la fila seleccionada y convertirlo a Vehicle^
			Mail^ selectedData = dynamic_cast<Mail^>(selectedRow->DataBoundItem);

			if (selectedData != nullptr) {
				if (selectedData->vehicle != nullptr) {
					Vehicle^ v = Controller::QueryVehicleByPlate(selectedData->vehicle->Plate);
					Client^ c = Controller::QueryClientByEmail(selectedData->Usertransmitter->Email);

					v->VehicleAvailable = false;
					c->ListVehicleClient->Add(v);

					Controller::UpdateVehicle(v);
					Controller::UpdateClient(c);
					Controller::UpdateProprietor(Session::CurrentProprietor);

					MessageBox::Show("SE ACEPTÓ LA SOLICITUD CORRECTAMENTE");
				}
				else {
					MessageBox::Show("No hay un vehículo adjunto");
				}
			}
		}
	}
	};
}