#pragma once
#include "ShowVehiclePage.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}
	private: System::Windows::Forms::Button^ button_reply_message;
	private: System::Windows::Forms::TextBox^ textBox_days;
	private: System::Windows::Forms::Label^ label6;
	public:

		static ShowVehiclePage^ showVehiclePage;

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Label^ label_from_to;
	private: System::Windows::Forms::Button^ button_accept;


	private: System::Windows::Forms::Button^ button_showvehicle;













































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->textBox_days = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button_reply_message = (gcnew System::Windows::Forms::Button());
			this->button_showvehicle = (gcnew System::Windows::Forms::Button());
			this->button_accept = (gcnew System::Windows::Forms::Button());
			this->textBox_showsbuject = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_showname = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_from = (gcnew System::Windows::Forms::TextBox());
			this->label_from_to = (gcnew System::Windows::Forms::Label());
			this->richTextBox_showmessage = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dgv_mails = (gcnew System::Windows::Forms::DataGridView());
			this->button_exit = (gcnew System::Windows::Forms::Button());
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
			this->notifyIcon1->BalloonTipTitle = L"Notificaci�n";
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage_Sendmessage);
			this->tabControl1->Controls->Add(this->tabPage_Mailbox);
			this->tabControl1->Location = System::Drawing::Point(10, 11);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(950, 543);
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
			this->tabPage_Sendmessage->Location = System::Drawing::Point(4, 22);
			this->tabPage_Sendmessage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage_Sendmessage->Name = L"tabPage_Sendmessage";
			this->tabPage_Sendmessage->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage_Sendmessage->Size = System::Drawing::Size(942, 517);
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
			this->groupBox2->Location = System::Drawing::Point(607, 28);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(251, 170);
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
			this->textBox_name->Location = System::Drawing::Point(84, 30);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_name->Size = System::Drawing::Size(147, 26);
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
			this->label2->Location = System::Drawing::Point(19, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 19);
			this->label2->TabIndex = 247;
			this->label2->Text = L"Apellido";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 19);
			this->label4->TabIndex = 245;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 19);
			this->label3->TabIndex = 244;
			this->label3->Text = L"Tel�fono";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 19);
			this->label5->TabIndex = 246;
			this->label5->Text = L"Nombre";
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
			this->button_logout->Text = L"Cerrar sesi�n";
			this->button_logout->UseVisualStyleBackColor = false;
			// 
			// button_confirmexistence
			// 
			this->button_confirmexistence->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_confirmexistence->Location = System::Drawing::Point(324, 76);
			this->button_confirmexistence->Name = L"button_confirmexistence";
			this->button_confirmexistence->Size = System::Drawing::Size(153, 30);
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
			this->label7->Location = System::Drawing::Point(62, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 19);
			this->label7->TabIndex = 243;
			this->label7->Text = L"Asunto";
			// 
			// textBox_subject
			// 
			this->textBox_subject->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_subject->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_subject->Location = System::Drawing::Point(149, 106);
			this->textBox_subject->Name = L"textBox_subject";
			this->textBox_subject->Size = System::Drawing::Size(147, 26);
			this->textBox_subject->TabIndex = 242;
			this->textBox_subject->Tag = L"";
			this->textBox_subject->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_enter_email
			// 
			this->textBox_enter_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_enter_email->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_enter_email->Location = System::Drawing::Point(149, 49);
			this->textBox_enter_email->Name = L"textBox_enter_email";
			this->textBox_enter_email->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_enter_email->Size = System::Drawing::Size(147, 26);
			this->textBox_enter_email->TabIndex = 239;
			this->textBox_enter_email->Tag = L"";
			this->textBox_enter_email->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 19);
			this->label1->TabIndex = 240;
			this->label1->Text = L"Para(e-mail)";
			// 
			// button_send_message
			// 
			this->button_send_message->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_send_message->Location = System::Drawing::Point(511, 388);
			this->button_send_message->Name = L"button_send_message";
			this->button_send_message->Size = System::Drawing::Size(108, 30);
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
			this->button_clearall->Location = System::Drawing::Point(188, 388);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(108, 30);
			this->button_clearall->TabIndex = 167;
			this->button_clearall->Tag = L"55";
			this->button_clearall->Text = L"Limpiar todo";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button_clearall_Click);
			// 
			// richTextBox_content
			// 
			this->richTextBox_content->Location = System::Drawing::Point(46, 231);
			this->richTextBox_content->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox_content->Name = L"richTextBox_content";
			this->richTextBox_content->Size = System::Drawing::Size(746, 144);
			this->richTextBox_content->TabIndex = 1;
			this->richTextBox_content->Text = L"";
			// 
			// tabPage_Mailbox
			// 
			this->tabPage_Mailbox->Controls->Add(this->textBox_days);
			this->tabPage_Mailbox->Controls->Add(this->label6);
			this->tabPage_Mailbox->Controls->Add(this->button_reply_message);
			this->tabPage_Mailbox->Controls->Add(this->button_showvehicle);
			this->tabPage_Mailbox->Controls->Add(this->button_accept);
			this->tabPage_Mailbox->Controls->Add(this->textBox_showsbuject);
			this->tabPage_Mailbox->Controls->Add(this->label9);
			this->tabPage_Mailbox->Controls->Add(this->textBox_showname);
			this->tabPage_Mailbox->Controls->Add(this->label8);
			this->tabPage_Mailbox->Controls->Add(this->textBox_from);
			this->tabPage_Mailbox->Controls->Add(this->label_from_to);
			this->tabPage_Mailbox->Controls->Add(this->richTextBox_showmessage);
			this->tabPage_Mailbox->Controls->Add(this->comboBox1);
			this->tabPage_Mailbox->Controls->Add(this->dgv_mails);
			this->tabPage_Mailbox->Location = System::Drawing::Point(4, 22);
			this->tabPage_Mailbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage_Mailbox->Name = L"tabPage_Mailbox";
			this->tabPage_Mailbox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage_Mailbox->Size = System::Drawing::Size(942, 517);
			this->tabPage_Mailbox->TabIndex = 1;
			this->tabPage_Mailbox->Text = L"Buz�n de entrada";
			this->tabPage_Mailbox->UseVisualStyleBackColor = true;
			// 
			// textBox_days
			// 
			this->textBox_days->Enabled = false;
			this->textBox_days->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_days->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_days->Location = System::Drawing::Point(782, 166);
			this->textBox_days->Name = L"textBox_days";
			this->textBox_days->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_days->Size = System::Drawing::Size(147, 26);
			this->textBox_days->TabIndex = 267;
			this->textBox_days->Tag = L"";
			this->textBox_days->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(808, 144);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 19);
			this->label6->TabIndex = 266;
			this->label6->Text = L"Dias solicitados";
			// 
			// button_reply_message
			// 
			this->button_reply_message->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_reply_message->Location = System::Drawing::Point(793, 375);
			this->button_reply_message->Name = L"button_reply_message";
			this->button_reply_message->Size = System::Drawing::Size(136, 38);
			this->button_reply_message->TabIndex = 265;
			this->button_reply_message->Tag = L"";
			this->button_reply_message->Text = L"Responder mensaje";
			this->button_reply_message->UseVisualStyleBackColor = true;
			this->button_reply_message->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button_reply_message_Click);
			// 
			// button_showvehicle
			// 
			this->button_showvehicle->BackColor = System::Drawing::Color::Maroon;
			this->button_showvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_showvehicle->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_showvehicle->Location = System::Drawing::Point(793, 304);
			this->button_showvehicle->Name = L"button_showvehicle";
			this->button_showvehicle->Size = System::Drawing::Size(129, 44);
			this->button_showvehicle->TabIndex = 264;
			this->button_showvehicle->Tag = L"65";
			this->button_showvehicle->Text = L"Ver veh�culo adjunto";
			this->button_showvehicle->UseVisualStyleBackColor = false;
			this->button_showvehicle->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button_showvehicle_Click);
			// 
			// button_accept
			// 
			this->button_accept->BackColor = System::Drawing::Color::Maroon;
			this->button_accept->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_accept->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_accept->Location = System::Drawing::Point(793, 219);
			this->button_accept->Name = L"button_accept";
			this->button_accept->Size = System::Drawing::Size(119, 56);
			this->button_accept->TabIndex = 263;
			this->button_accept->Tag = L"65";
			this->button_accept->Text = L"ACEPTAR SOLICITUD";
			this->button_accept->UseVisualStyleBackColor = false;
			this->button_accept->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button1_Click);
			// 
			// textBox_showsbuject
			// 
			this->textBox_showsbuject->Enabled = false;
			this->textBox_showsbuject->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_showsbuject->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_showsbuject->Location = System::Drawing::Point(630, 105);
			this->textBox_showsbuject->Name = L"textBox_showsbuject";
			this->textBox_showsbuject->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_showsbuject->Size = System::Drawing::Size(147, 26);
			this->textBox_showsbuject->TabIndex = 262;
			this->textBox_showsbuject->Tag = L"";
			this->textBox_showsbuject->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(529, 105);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 19);
			this->label9->TabIndex = 261;
			this->label9->Text = L"Asunto:";
			// 
			// textBox_showname
			// 
			this->textBox_showname->Enabled = false;
			this->textBox_showname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_showname->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_showname->Location = System::Drawing::Point(630, 59);
			this->textBox_showname->Name = L"textBox_showname";
			this->textBox_showname->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_showname->Size = System::Drawing::Size(147, 26);
			this->textBox_showname->TabIndex = 260;
			this->textBox_showname->Tag = L"";
			this->textBox_showname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(529, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 19);
			this->label8->TabIndex = 259;
			this->label8->Text = L"Nombre:";
			// 
			// textBox_from
			// 
			this->textBox_from->Enabled = false;
			this->textBox_from->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_from->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_from->Location = System::Drawing::Point(630, 25);
			this->textBox_from->Name = L"textBox_from";
			this->textBox_from->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_from->Size = System::Drawing::Size(147, 26);
			this->textBox_from->TabIndex = 257;
			this->textBox_from->Tag = L"";
			this->textBox_from->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_from_to
			// 
			this->label_from_to->AutoSize = true;
			this->label_from_to->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_from_to->Location = System::Drawing::Point(529, 27);
			this->label_from_to->Name = L"label_from_to";
			this->label_from_to->Size = System::Drawing::Size(34, 19);
			this->label_from_to->TabIndex = 258;
			this->label_from_to->Text = L"De:";
			// 
			// richTextBox_showmessage
			// 
			this->richTextBox_showmessage->Enabled = false;
			this->richTextBox_showmessage->Location = System::Drawing::Point(560, 148);
			this->richTextBox_showmessage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox_showmessage->Name = L"richTextBox_showmessage";
			this->richTextBox_showmessage->Size = System::Drawing::Size(199, 336);
			this->richTextBox_showmessage->TabIndex = 215;
			this->richTextBox_showmessage->Text = L"";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(13, 15);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(92, 21);
			this->comboBox1->TabIndex = 246;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserMailBoxPage::comboBox1_SelectedIndexChanged);
			// 
			// dgv_mails
			// 
			this->dgv_mails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_mails->Location = System::Drawing::Point(13, 40);
			this->dgv_mails->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgv_mails->Name = L"dgv_mails";
			this->dgv_mails->RowHeadersWidth = 51;
			this->dgv_mails->RowTemplate->Height = 24;
			this->dgv_mails->Size = System::Drawing::Size(498, 444);
			this->dgv_mails->TabIndex = 0;
			this->dgv_mails->SelectionChanged += gcnew System::EventHandler(this, &UserMailBoxPage::dgv_mails_SelectionChanged);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(696, 559);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(124, 36);
			this->button_exit->TabIndex = 214;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &UserMailBoxPage::button_exit_Click);
			// 
			// UserMailBoxPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Peru;
			this->ClientSize = System::Drawing::Size(980, 605);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UserMailBoxPage";
			this->Text = L"Secci�n de Buz�n";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserMailBoxPage::UserMailBoxPage_FormClosed);
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

		void ClearTextBoxes_Mail() {
			textBox_from->Clear();
			textBox_showname->Clear();
			textBox_showsbuject->Clear();
			richTextBox_showmessage->Clear();
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
		// Configurar el DataGridView para no generar columnas autom�ticamente
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
		MadeDateColumn->HeaderText = "Fecha de realizaci�n";
		MadeDateColumn->DataPropertyName = "MadeDate";
		MadeDateColumn->DefaultCellStyle->Format = "dd/MM/yyyy";
		MadeDateColumn->Width = 100; // Ajustar el ancho de la columna
		dgv_mails->Columns->Add(MadeDateColumn);
		// Puedes agregar m�s columnas seg�n sea necesario
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
			mail->Id = Controller::GenerateMailId(); //extrae el atributo Id para que se guarde uno nuevo
			mail->Usertransmitter = Session::CurrentProprietor; // extrae el atributo Usertransmitter para que se pueda almacenar 

			if (Controller::QueryProprietorByEmail(textBox_enter_email->Text) != nullptr) { //verifica si email ingresado coinside con el respectivo propietario existe
				mail->Userreceiver = Controller::QueryProprietorByEmail(textBox_enter_email->Text);
			}
			else {
				if (Controller::QueryClientByEmail(textBox_enter_email->Text) != nullptr) { //verifica si email ingresado coinside con el respectivo cliente existe
					mail->Userreceiver = Controller::QueryClientByEmail(textBox_enter_email->Text);
				}
			}

			mail->Content = richTextBox_content->Text;
			mail->Subject = textBox_subject->Text;
			mail->MadeDate = System::DateTime::Now;//toma hora y fecha del sistema
			mail->vehicle = gcnew Vehicle();
			mail->vehicle->Selected = false;

			Controller::CreateMail(mail);

			Proprietor^ ProprietorP = Session::CurrentProprietor;
			ProprietorP->ListEmailSentProprietor->Add(mail);
			Controller::UpdateProprietor(ProprietorP);

			//Hacemos m�todo de b�squeda
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
			MessageBox::Show("El mensaje se envi� correctamente");
			ClearTextBoxes();
		}
		else {
			MessageBox::Show("No se envi� mensaje");
			ClearTextBoxes();
		}

	}


	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			// Establecer "Recibidos" como la opci�n seleccionada por defecto
			comboBox1->SelectedIndex = 0;
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBox^ comboBox = dynamic_cast<ComboBox^>(sender);

		if (comboBox != nullptr) {
			String^ selectedOption = comboBox->SelectedItem->ToString();

			// Llama a QueryAllMails y verifica que no devuelva null
			List<Mail^>^ mails = Controller::QueryAllMails();

			if (comboBox->SelectedIndex == 0) {
				button_accept->Enabled = true;
				ClearTextBoxes_Mail();
				// Filtrar correos recibidos
				List<Mail^>^ filteredMails = gcnew List<Mail^>();
				label_from_to->Text = "De: ";
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
				ClearTextBoxes_Mail();
				button_accept->Enabled = false;
				// Filtrar correos enviados
				List<Mail^>^ filteredMails = gcnew List<Mail^>();
				label_from_to->Text = "Para: ";
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
		// Inicializar los mails selected
		List<Mail^>^ MailList = Controller::QueryAllMails();
		for each (Mail ^ mail in MailList) {
			mail->MailSelected = false;
			Controller::UpdateMail(mail);
		}

		if (dgv_mails->SelectedRows->Count > 0) {
			// Obtener la fila seleccionada
			DataGridViewRow^ selectedRow = dgv_mails->SelectedRows[0];
			// Obtener el elemento de datos vinculado a la fila seleccionada y convertirlo a Mail^
			Mail^ selectedData = dynamic_cast<Mail^>(selectedRow->DataBoundItem);

			if (selectedData != nullptr) {
				// Mostrar los detalles del registro seleccionado en los TextBox

				if (comboBox1->Text == "Recibidos") {
					textBox_from->Text = selectedData->Usertransmitter->Email;
					textBox_showname->Text = selectedData->Usertransmitter->Name;
				}
				else {
					textBox_from->Text = selectedData->Userreceiver->Email;
					textBox_showname->Text = selectedData->Userreceiver->Name;
				}
				textBox_showsbuject->Text = selectedData->Subject;
				richTextBox_showmessage->Text = selectedData->Content;

				// Verificar si selectedData->vehicle y selectedData->vehicle->Plate no son nulos
				if (selectedData->vehicle != nullptr && selectedData->vehicle->Plate != nullptr) {
					button_showvehicle->Enabled = true;
					if (!(Controller::QueryVehicleByPlate(selectedData->vehicle->Plate)->VehicleAvailable)) {
						button_accept->Enabled = false;
					}
					else {
						button_accept->Enabled = true;
					}
					textBox_days->Text = selectedData->DaysAgreed.ToString();
				}
				else {
					button_showvehicle->Enabled = false;
					button_accept->Enabled = false;
					textBox_days->Text = "No hay veh�culo adjunto";
				}

				// Actualizar el estado de MailSelected para el mail seleccionado
				selectedData->MailSelected = true;
				Controller::UpdateMail(selectedData);
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
				if (selectedData->vehicle != nullptr){
					if (selectedData->vehicle->VehicleAvailable){
						Vehicle^ v = Controller::QueryVehicleByPlate(selectedData->vehicle->Plate);
						Client^ c = Controller::QueryClientByEmail(selectedData->Usertransmitter->Email);

						v->AquisitionDate = System::DateTime::Now;
						v->ExpirationDate = System::DateTime::Now.AddDays(selectedData->DaysAgreed);
						v->VehicleAvailable = false;
						c->ListVehicleClient->Add(v);

						Controller::UpdateVehicle(v);
						Controller::UpdateClient(c);
						Controller::UpdateMail(selectedData);
						Controller::UpdateProprietor(Session::CurrentProprietor);

						MessageBox::Show("SE ACEPT� LA SOLICITUD CORRECTAMENTE");
					}
					else {
						button_accept->Enabled = false;
					}
				}
				else {
					MessageBox::Show("No hay un veh�culo adjunto");
				}
			}
		}
	}
	private: System::Void button_showvehicle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (showVehiclePage == nullptr) {
			showVehiclePage = gcnew ShowVehiclePage();
			showVehiclePage->MdiParent = this->MdiParent;
			this->Hide();
			if (showVehiclePage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				showVehiclePage = nullptr;
			}
		}
		return;
	}
	private: System::Void button_reply_message_Click(System::Object^ sender, System::EventArgs^ e){
		// Cambia a la pesta�a "Sendmessage"
		this->tabControl1->SelectedTab = this->tabPage_Sendmessage;

		// Consulta todos los correos
		List<Mail^>^ MailList = Controller::QueryAllMails();
		Mail^ mailselected = nullptr;

		// Encuentra el correo seleccionado
		for each (Mail ^ mail in MailList) {
			if (mail->MailSelected) {
				mailselected = mail;
				break;
			}
		}

		// Si se encuentra un correo seleccionado
		if (mailselected != nullptr) {
			if (mailselected->Usertransmitter->Email == Session::CurrentProprietor->Email) {
				textBox_enter_email->Text = mailselected->Userreceiver->Email;

				textBox_name->Text = mailselected->Userreceiver->Name;
				textBox_surname->Text = mailselected->Userreceiver->Lastname;
				textBox_phone->Text = mailselected->Userreceiver->Phone.ToString();
				textBox_dni->Text = mailselected->Userreceiver->Dni.ToString();
			}
			else {
				textBox_enter_email->Text = mailselected->Usertransmitter->Email;

				textBox_name->Text = mailselected->Usertransmitter->Name;
				textBox_surname->Text = mailselected->Usertransmitter->Lastname;
				textBox_phone->Text = mailselected->Usertransmitter->Phone.ToString();
				textBox_dni->Text = mailselected->Usertransmitter->Dni.ToString();
			}
			// Desmarca el correo seleccionado
			mailselected->MailSelected = false;
			Controller::UpdateMail(mailselected);
		}
	}

	private: System::Void UserMailBoxPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
};
}