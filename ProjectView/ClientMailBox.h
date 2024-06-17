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
	public ref class ClientMailBox : public System::Windows::Forms::Form
	{
	public:
		ClientMailBox(void)
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
		~ClientMailBox()
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


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox_model;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox_color;

	private: System::Windows::Forms::TextBox^ textBox_brand;
	private: System::Windows::Forms::TextBox^ textBox_plate;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox_condition;

	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox_operative;
	private: System::Windows::Forms::TextBox^ textBox_available;
	private: System::Windows::Forms::Button^ button_request_vehicle;



















































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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_condition = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_operative = (gcnew System::Windows::Forms::TextBox());
			this->textBox_available = (gcnew System::Windows::Forms::TextBox());
			this->textBox_model = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox_color = (gcnew System::Windows::Forms::TextBox());
			this->textBox_brand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_plate = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->button_request_vehicle = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage_Sendmessage->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			this->tabControl1->Size = System::Drawing::Size(1296, 668);
			this->tabControl1->TabIndex = 209;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientMailBox::tabControl1_SelectedIndexChanged);
			// 
			// tabPage_Sendmessage
			// 
			this->tabPage_Sendmessage->Controls->Add(this->groupBox1);
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
			this->tabPage_Sendmessage->Size = System::Drawing::Size(1288, 639);
			this->tabPage_Sendmessage->TabIndex = 0;
			this->tabPage_Sendmessage->Text = L"Escribir mensaje";
			this->tabPage_Sendmessage->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->button_request_vehicle);
			this->groupBox1->Controls->Add(this->textBox_condition);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->textBox_operative);
			this->groupBox1->Controls->Add(this->textBox_available);
			this->groupBox1->Controls->Add(this->textBox_model);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox_color);
			this->groupBox1->Controls->Add(this->textBox_brand);
			this->groupBox1->Controls->Add(this->textBox_plate);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(898, 14);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(368, 500);
			this->groupBox1->TabIndex = 248;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vehículo";
			// 
			// textBox_condition
			// 
			this->textBox_condition->Enabled = false;
			this->textBox_condition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_condition->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_condition->Location = System::Drawing::Point(154, 196);
			this->textBox_condition->Margin = System::Windows::Forms::Padding(4);
			this->textBox_condition->Name = L"textBox_condition";
			this->textBox_condition->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_condition->Size = System::Drawing::Size(195, 30);
			this->textBox_condition->TabIndex = 248;
			this->textBox_condition->Tag = L"";
			this->textBox_condition->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(13, 242);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(121, 23);
			this->label10->TabIndex = 255;
			this->label10->Text = L"Operatividad";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(13, 277);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(127, 23);
			this->label16->TabIndex = 252;
			this->label16->Text = L"Disponibilidad";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(21, 203);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(93, 23);
			this->label17->TabIndex = 254;
			this->label17->Text = L"Condición";
			// 
			// textBox_operative
			// 
			this->textBox_operative->Enabled = false;
			this->textBox_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_operative->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_operative->Location = System::Drawing::Point(154, 235);
			this->textBox_operative->Margin = System::Windows::Forms::Padding(4);
			this->textBox_operative->Name = L"textBox_operative";
			this->textBox_operative->Size = System::Drawing::Size(195, 30);
			this->textBox_operative->TabIndex = 249;
			this->textBox_operative->Tag = L"";
			this->textBox_operative->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_available
			// 
			this->textBox_available->Enabled = false;
			this->textBox_available->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_available->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_available->Location = System::Drawing::Point(154, 275);
			this->textBox_available->Margin = System::Windows::Forms::Padding(4);
			this->textBox_available->Name = L"textBox_available";
			this->textBox_available->Size = System::Drawing::Size(195, 30);
			this->textBox_available->TabIndex = 250;
			this->textBox_available->Tag = L"";
			this->textBox_available->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_model
			// 
			this->textBox_model->Enabled = false;
			this->textBox_model->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_model->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_model->Location = System::Drawing::Point(154, 37);
			this->textBox_model->Margin = System::Windows::Forms::Padding(4);
			this->textBox_model->Name = L"textBox_model";
			this->textBox_model->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_model->Size = System::Drawing::Size(195, 30);
			this->textBox_model->TabIndex = 240;
			this->textBox_model->Tag = L"";
			this->textBox_model->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(39, 83);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 23);
			this->label11->TabIndex = 247;
			this->label11->Text = L"Marca";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(47, 160);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 23);
			this->label12->TabIndex = 245;
			this->label12->Text = L"Color";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(47, 119);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 23);
			this->label13->TabIndex = 244;
			this->label13->Text = L"Placa";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(31, 44);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(73, 23);
			this->label14->TabIndex = 246;
			this->label14->Text = L"Modelo";
			// 
			// textBox_color
			// 
			this->textBox_color->Enabled = false;
			this->textBox_color->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_color->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_color->Location = System::Drawing::Point(154, 158);
			this->textBox_color->Margin = System::Windows::Forms::Padding(4);
			this->textBox_color->Name = L"textBox_color";
			this->textBox_color->Size = System::Drawing::Size(195, 30);
			this->textBox_color->TabIndex = 243;
			this->textBox_color->Tag = L"";
			this->textBox_color->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_brand
			// 
			this->textBox_brand->Enabled = false;
			this->textBox_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_brand->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_brand->Location = System::Drawing::Point(154, 76);
			this->textBox_brand->Margin = System::Windows::Forms::Padding(4);
			this->textBox_brand->Name = L"textBox_brand";
			this->textBox_brand->Size = System::Drawing::Size(195, 30);
			this->textBox_brand->TabIndex = 241;
			this->textBox_brand->Tag = L"";
			this->textBox_brand->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_plate
			// 
			this->textBox_plate->Enabled = false;
			this->textBox_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_plate->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_plate->Location = System::Drawing::Point(154, 116);
			this->textBox_plate->Margin = System::Windows::Forms::Padding(4);
			this->textBox_plate->Name = L"textBox_plate";
			this->textBox_plate->Size = System::Drawing::Size(195, 30);
			this->textBox_plate->TabIndex = 242;
			this->textBox_plate->Tag = L"";
			this->textBox_plate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(956, 74);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 30);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Cerrar sesión";
			this->button1->UseVisualStyleBackColor = false;
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
			this->groupBox2->Location = System::Drawing::Point(531, 14);
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
			this->button_confirmexistence->Location = System::Drawing::Point(363, 28);
			this->button_confirmexistence->Margin = System::Windows::Forms::Padding(4);
			this->button_confirmexistence->Name = L"button_confirmexistence";
			this->button_confirmexistence->Size = System::Drawing::Size(130, 74);
			this->button_confirmexistence->TabIndex = 244;
			this->button_confirmexistence->Tag = L"55";
			this->button_confirmexistence->Text = L"Confirmar existencia";
			this->button_confirmexistence->UseVisualStyleBackColor = true;
			this->button_confirmexistence->Click += gcnew System::EventHandler(this, &ClientMailBox::button_confirmexistence_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(65, 79);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 23);
			this->label7->TabIndex = 243;
			this->label7->Text = L"Asunto:";
			// 
			// textBox_subject
			// 
			this->textBox_subject->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_subject->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_subject->Location = System::Drawing::Point(156, 72);
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
			this->textBox_enter_email->Location = System::Drawing::Point(156, 28);
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
			this->label1->Location = System::Drawing::Point(18, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 23);
			this->label1->TabIndex = 240;
			this->label1->Text = L"Para(e-mail):";
			// 
			// button_send_message
			// 
			this->button_send_message->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_send_message->Location = System::Drawing::Point(349, 477);
			this->button_send_message->Margin = System::Windows::Forms::Padding(4);
			this->button_send_message->Name = L"button_send_message";
			this->button_send_message->Size = System::Drawing::Size(144, 37);
			this->button_send_message->TabIndex = 168;
			this->button_send_message->Tag = L"55";
			this->button_send_message->Text = L"Enviar mensaje";
			this->button_send_message->UseVisualStyleBackColor = true;
			this->button_send_message->Click += gcnew System::EventHandler(this, &ClientMailBox::button_send_message_Click);
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(40, 477);
			this->button_clearall->Margin = System::Windows::Forms::Padding(4);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(144, 37);
			this->button_clearall->TabIndex = 167;
			this->button_clearall->Tag = L"55";
			this->button_clearall->Text = L"Limpiar todo";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &ClientMailBox::button_clearall_Click);
			// 
			// richTextBox_content
			// 
			this->richTextBox_content->Location = System::Drawing::Point(40, 129);
			this->richTextBox_content->Name = L"richTextBox_content";
			this->richTextBox_content->Size = System::Drawing::Size(453, 320);
			this->richTextBox_content->TabIndex = 1;
			this->richTextBox_content->Text = L"";
			// 
			// tabPage_Mailbox
			// 
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
			this->tabPage_Mailbox->Size = System::Drawing::Size(1264, 639);
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
			this->textBox_showsbuject->Location = System::Drawing::Point(1002, 136);
			this->textBox_showsbuject->Margin = System::Windows::Forms::Padding(4);
			this->textBox_showsbuject->Name = L"textBox_showsbuject";
			this->textBox_showsbuject->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_showsbuject->Size = System::Drawing::Size(195, 30);
			this->textBox_showsbuject->TabIndex = 256;
			this->textBox_showsbuject->Tag = L"";
			this->textBox_showsbuject->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(867, 136);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 23);
			this->label9->TabIndex = 255;
			this->label9->Text = L"Asunto:";
			// 
			// textBox_showname
			// 
			this->textBox_showname->Enabled = false;
			this->textBox_showname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_showname->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_showname->Location = System::Drawing::Point(1002, 81);
			this->textBox_showname->Margin = System::Windows::Forms::Padding(4);
			this->textBox_showname->Name = L"textBox_showname";
			this->textBox_showname->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_showname->Size = System::Drawing::Size(195, 30);
			this->textBox_showname->TabIndex = 254;
			this->textBox_showname->Tag = L"";
			this->textBox_showname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(867, 88);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 23);
			this->label8->TabIndex = 253;
			this->label8->Text = L"Nombre:";
			// 
			// textBox_from
			// 
			this->textBox_from->Enabled = false;
			this->textBox_from->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_from->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_from->Location = System::Drawing::Point(1002, 39);
			this->textBox_from->Margin = System::Windows::Forms::Padding(4);
			this->textBox_from->Name = L"textBox_from";
			this->textBox_from->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_from->Size = System::Drawing::Size(195, 30);
			this->textBox_from->TabIndex = 251;
			this->textBox_from->Tag = L"";
			this->textBox_from->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(867, 41);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 23);
			this->label6->TabIndex = 252;
			this->label6->Text = L"De:";
			// 
			// richTextBox_showmessage
			// 
			this->richTextBox_showmessage->Enabled = false;
			this->richTextBox_showmessage->Location = System::Drawing::Point(822, 207);
			this->richTextBox_showmessage->Name = L"richTextBox_showmessage";
			this->richTextBox_showmessage->Size = System::Drawing::Size(411, 389);
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
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientMailBox::comboBox1_SelectedIndexChanged);
			// 
			// dgv_mails
			// 
			this->dgv_mails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_mails->Location = System::Drawing::Point(17, 49);
			this->dgv_mails->Name = L"dgv_mails";
			this->dgv_mails->RowHeadersWidth = 51;
			this->dgv_mails->RowTemplate->Height = 24;
			this->dgv_mails->Size = System::Drawing::Size(768, 547);
			this->dgv_mails->TabIndex = 0;
			this->dgv_mails->SelectionChanged += gcnew System::EventHandler(this, &ClientMailBox::dgv_mails_SelectionChanged);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(1085, 688);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(165, 44);
			this->button_exit->TabIndex = 214;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &ClientMailBox::button_exit_Click);
			// 
			// button_request_vehicle
			// 
			this->button_request_vehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_request_vehicle->Location = System::Drawing::Point(112, 398);
			this->button_request_vehicle->Margin = System::Windows::Forms::Padding(4);
			this->button_request_vehicle->Name = L"button_request_vehicle";
			this->button_request_vehicle->Size = System::Drawing::Size(175, 37);
			this->button_request_vehicle->TabIndex = 249;
			this->button_request_vehicle->Tag = L"55";
			this->button_request_vehicle->Text = L"Solicitar vehículo";
			this->button_request_vehicle->UseVisualStyleBackColor = true;
			this->button_request_vehicle->Click += gcnew System::EventHandler(this, &ClientMailBox::button_request_vehicle_Click);
			// 
			// ClientMailBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1333, 745);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ClientMailBox";
			this->Text = L"Sección de Buzón";
			this->Load += gcnew System::EventHandler(this, &ClientMailBox::ClientMailBox_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage_Sendmessage->ResumeLayout(false);
			this->tabPage_Sendmessage->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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

			if (Session::CurrentClient != nullptr && enteredEmail == Session::CurrentClient->Email) {
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

		if (Session::CurrentClient != nullptr && tenter_email == Session::CurrentClient->Email) {
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
		Proprietor^ p = Controller::QueryProprietorByVehicleSelected();

		if (p != nullptr) {
			List<Proprietor^>^ ProprietorList = Controller::QueryAllProprietors();
			List<Vehicle^>^ VehicleList = Controller::QueryAllVehicles();
			Proprietor^ vehicleowner = gcnew Proprietor();

			for each (Proprietor ^ proprietor in ProprietorList) {
				for each (Vehicle ^ vehicle in proprietor->ListVehicleProprietor) {
					if (vehicle->Selected) {
						textBox_enter_email->Text = proprietor->Email;
						textBox_name->Text = proprietor->Name;
						textBox_surname->Text = proprietor->Lastname;
						textBox_phone->Text = proprietor->Phone.ToString();
						textBox_dni->Text = proprietor->Dni.ToString();

						textBox_model->Text = vehicle->Model;
						textBox_brand->Text = vehicle->Brand;
						textBox_plate->Text = vehicle->Plate;
						textBox_color->Text = vehicle->Color;
						textBox_condition->Text = vehicle->Condition;
						textBox_operative->Text = vehicle->Operative.ToString();
						textBox_available->Text = vehicle->VehicleAvailable.ToString();


						vehicle->Selected = false;
						Controller::UpdateProprietor(proprietor);
						Controller::UpdateVehicle(vehicle);
					}
				}
			}
		}
		else {
			textBox_model->Text = "Model";
			textBox_brand->Text = "Marca";
			textBox_plate->Text = "Placa";
			textBox_color->Text = "Color";
			textBox_condition->Text = "Condición";
			textBox_operative->Text = "Operatividad";
			textBox_available->Text = "Disponibilidad";
		}

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
			mail->Usertransmitter = Session::CurrentClient;

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
			mail->vehicle = gcnew Vehicle();

			Controller::CreateMail(mail);

			Client^ clientp = Session::CurrentClient;
			clientp->ListEmailSentClient->Add(mail);
			Controller::UpdateClient(clientp);

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

			textBox_enter_email->Clear();
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
					for each (Mail ^ mai in Session::CurrentClient->ListEmailReceivedClient) {
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

				if (mails != nullptr && Session::CurrentClient->ListEmailReceivedClient != nullptr) {
					for each (Mail ^ ma in mails) {
						for each (Mail ^ mai in Session::CurrentClient->ListEmailReceivedClient) {
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

				if (mails != nullptr && Session::CurrentClient->ListEmailSentClient != nullptr) {
					for each (Mail ^ ma in mails) {
						for each (Mail ^ mai in Session::CurrentClient->ListEmailSentClient) {
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
		else {
			// Si comboBox es nullptr (lo cual no debería ocurrir si se maneja correctamente)
			comboBox->SelectedIndex = 0;
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
	private: System::Void button_request_vehicle_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tenter_email = textBox_enter_email->Text;
		Mail^ mail = gcnew Mail();

		if (Confirmarexistencia() && (textBox_plate->Text != "Placa")) {
			mail->Id = Controller::GenerateMailId();
			mail->Usertransmitter = Session::CurrentClient;

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
			mail->vehicle = Controller::QueryVehicleByPlate(textBox_plate->Text);

			Controller::CreateMail(mail);

			Client^ clientp = Session::CurrentClient;
			clientp->ListEmailSentClient->Add(mail);
			Controller::UpdateClient(clientp);

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

			MessageBox::Show("La solicitud se envió correctamente");
			textBox_enter_email->Clear();
			ClearTextBoxes();
		}
		else {
			MessageBox::Show("No se envió la solicitud");
			ClearTextBoxes();
		}
	}
	};
}