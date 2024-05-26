#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdmInfoUserPage
	/// </summary>
	public ref class AdmInfoUserPage : public System::Windows::Forms::Form
	{
	public:
		AdmInfoUserPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~AdmInfoUserPage()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ button_notify;
    protected:
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::CheckBox^ checkBox_women;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::CheckBox^ checkBox3;
    private: System::Windows::Forms::CheckBox^ checkBox4;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Button^ button_eliminate;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::CheckBox^ checkBox_men;
    private: System::Windows::Forms::Button^ button_sex;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TextBox^ textBox_lastname;
    private: System::Windows::Forms::TextBox^ textBox_email;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Button^ button_logout;
    private: System::Windows::Forms::Button^ button_email;
    private: System::Windows::Forms::Button^ button_name;
    private: System::Windows::Forms::Button^ button_lastname;
    private: System::Windows::Forms::Button^ button_phone;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Button^ button_dni;
    private: System::Windows::Forms::TextBox^ textBox_id;
    private: System::Windows::Forms::Button^ button_id;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TextBox^ textBox_phone;
    private: System::Windows::Forms::Button^ button_clearall;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::TextBox^ textBox_dni;
    private: System::Windows::Forms::TextBox^ textBox_name;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
    private: System::Windows::Forms::DataGridView^ dgv_vehicles;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dni;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lastname;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ BirthDate;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ SignDate;
    private: System::Windows::Forms::Button^ button_exit;
    private: System::Windows::Forms::PictureBox^ pb_photo;

    protected:





























































    private: System::ComponentModel::IContainer^ components;




































	protected:

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdmInfoUserPage::typeid));
            this->button_notify = (gcnew System::Windows::Forms::Button());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->checkBox_women = (gcnew System::Windows::Forms::CheckBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->button_eliminate = (gcnew System::Windows::Forms::Button());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->checkBox_men = (gcnew System::Windows::Forms::CheckBox());
            this->button_sex = (gcnew System::Windows::Forms::Button());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox_lastname = (gcnew System::Windows::Forms::TextBox());
            this->textBox_email = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->button_logout = (gcnew System::Windows::Forms::Button());
            this->button_email = (gcnew System::Windows::Forms::Button());
            this->button_name = (gcnew System::Windows::Forms::Button());
            this->button_lastname = (gcnew System::Windows::Forms::Button());
            this->button_phone = (gcnew System::Windows::Forms::Button());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->button_dni = (gcnew System::Windows::Forms::Button());
            this->textBox_id = (gcnew System::Windows::Forms::TextBox());
            this->button_id = (gcnew System::Windows::Forms::Button());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox_phone = (gcnew System::Windows::Forms::TextBox());
            this->button_clearall = (gcnew System::Windows::Forms::Button());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->textBox_dni = (gcnew System::Windows::Forms::TextBox());
            this->textBox_name = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
            this->dgv_vehicles = (gcnew System::Windows::Forms::DataGridView());
            this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->BirthDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->SignDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button_exit = (gcnew System::Windows::Forms::Button());
            this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
            this->groupBox2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
            this->SuspendLayout();
            // 
            // button_notify
            // 
            this->button_notify->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_notify->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_notify->Location = System::Drawing::Point(808, 322);
            this->button_notify->Name = L"button_notify";
            this->button_notify->Size = System::Drawing::Size(137, 38);
            this->button_notify->TabIndex = 287;
            this->button_notify->Tag = L"";
            this->button_notify->Text = L"Notificar";
            this->button_notify->UseVisualStyleBackColor = false;
            // 
            // textBox10
            // 
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->Location = System::Drawing::Point(638, 294);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(104, 26);
            this->textBox10->TabIndex = 267;
            this->textBox10->Tag = L"";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(490, 329);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(131, 19);
            this->label9->TabIndex = 286;
            this->label9->Text = L"Fecha de Registro";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(483, 294);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(149, 19);
            this->label8->TabIndex = 285;
            this->label8->Text = L"Fecha de Nacimiento";
            // 
            // textBox8
            // 
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->Location = System::Drawing::Point(638, 255);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(104, 26);
            this->textBox8->TabIndex = 266;
            this->textBox8->Tag = L"";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(540, 255);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(73, 19);
            this->label18->TabIndex = 284;
            this->label18->Text = L"Direccion";
            // 
            // checkBox_women
            // 
            this->checkBox_women->AutoSize = true;
            this->checkBox_women->Location = System::Drawing::Point(119, 259);
            this->checkBox_women->Name = L"checkBox_women";
            this->checkBox_women->Size = System::Drawing::Size(70, 23);
            this->checkBox_women->TabIndex = 70;
            this->checkBox_women->Text = L"Mujer";
            this->checkBox_women->UseVisualStyleBackColor = true;
            // 
            // textBox11
            // 
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->Location = System::Drawing::Point(638, 329);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(104, 26);
            this->textBox11->TabIndex = 268;
            this->textBox11->Tag = L"";
            // 
            // checkBox3
            // 
            this->checkBox3->AutoSize = true;
            this->checkBox3->Location = System::Drawing::Point(857, 303);
            this->checkBox3->Name = L"checkBox3";
            this->checkBox3->Size = System::Drawing::Size(52, 17);
            this->checkBox3->TabIndex = 277;
            this->checkBox3->Text = L"Mujer";
            this->checkBox3->UseVisualStyleBackColor = true;
            // 
            // checkBox4
            // 
            this->checkBox4->AutoSize = true;
            this->checkBox4->Location = System::Drawing::Point(857, 274);
            this->checkBox4->Name = L"checkBox4";
            this->checkBox4->Size = System::Drawing::Size(63, 17);
            this->checkBox4->TabIndex = 276;
            this->checkBox4->Text = L"Hombre";
            this->checkBox4->UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(804, 282);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(42, 19);
            this->label2->TabIndex = 275;
            this->label2->Text = L"Sexo";
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(638, 184);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(104, 26);
            this->textBox2->TabIndex = 264;
            this->textBox2->Tag = L"";
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(638, 220);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(104, 26);
            this->textBox3->TabIndex = 265;
            this->textBox3->Tag = L"";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(565, 223);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(47, 19);
            this->label3->TabIndex = 274;
            this->label3->Text = L"Email";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(587, 54);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(27, 19);
            this->label4->TabIndex = 269;
            this->label4->Text = L"ID";
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(638, 54);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(104, 26);
            this->textBox4->TabIndex = 260;
            this->textBox4->Tag = L"";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(548, 88);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(67, 19);
            this->label5->TabIndex = 270;
            this->label5->Text = L"Telefono";
            // 
            // textBox5
            // 
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(638, 88);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(104, 26);
            this->textBox5->TabIndex = 261;
            this->textBox5->Tag = L"";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(573, 120);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(39, 19);
            this->label6->TabIndex = 271;
            this->label6->Text = L"DNI";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(550, 152);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(63, 19);
            this->label7->TabIndex = 272;
            this->label7->Text = L"Nombre";
            // 
            // button_eliminate
            // 
            this->button_eliminate->BackColor = System::Drawing::Color::Orange;
            this->button_eliminate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_eliminate->Location = System::Drawing::Point(808, 425);
            this->button_eliminate->Name = L"button_eliminate";
            this->button_eliminate->Size = System::Drawing::Size(137, 38);
            this->button_eliminate->TabIndex = 283;
            this->button_eliminate->Tag = L"";
            this->button_eliminate->Text = L"ELIMINAR";
            this->button_eliminate->UseVisualStyleBackColor = false;
            // 
            // textBox6
            // 
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->Location = System::Drawing::Point(638, 119);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(104, 26);
            this->textBox6->TabIndex = 262;
            this->textBox6->Tag = L"";
            // 
            // textBox7
            // 
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->Location = System::Drawing::Point(638, 152);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(104, 26);
            this->textBox7->TabIndex = 263;
            this->textBox7->Tag = L"";
            // 
            // groupBox2
            // 
            this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->groupBox2->Controls->Add(this->checkBox_women);
            this->groupBox2->Controls->Add(this->checkBox_men);
            this->groupBox2->Controls->Add(this->button_sex);
            this->groupBox2->Controls->Add(this->label11);
            this->groupBox2->Controls->Add(this->textBox_lastname);
            this->groupBox2->Controls->Add(this->textBox_email);
            this->groupBox2->Controls->Add(this->label13);
            this->groupBox2->Controls->Add(this->button_logout);
            this->groupBox2->Controls->Add(this->button_email);
            this->groupBox2->Controls->Add(this->button_name);
            this->groupBox2->Controls->Add(this->button_lastname);
            this->groupBox2->Controls->Add(this->button_phone);
            this->groupBox2->Controls->Add(this->label19);
            this->groupBox2->Controls->Add(this->button_dni);
            this->groupBox2->Controls->Add(this->textBox_id);
            this->groupBox2->Controls->Add(this->button_id);
            this->groupBox2->Controls->Add(this->label17);
            this->groupBox2->Controls->Add(this->textBox_phone);
            this->groupBox2->Controls->Add(this->button_clearall);
            this->groupBox2->Controls->Add(this->label16);
            this->groupBox2->Controls->Add(this->label15);
            this->groupBox2->Controls->Add(this->textBox_dni);
            this->groupBox2->Controls->Add(this->textBox_name);
            this->groupBox2->Controls->Add(this->label12);
            this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->groupBox2->Location = System::Drawing::Point(31, 9);
            this->groupBox2->Margin = System::Windows::Forms::Padding(2);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Padding = System::Windows::Forms::Padding(2);
            this->groupBox2->Size = System::Drawing::Size(444, 339);
            this->groupBox2->TabIndex = 282;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Criterio de B�squeda";
            // 
            // checkBox_men
            // 
            this->checkBox_men->AutoSize = true;
            this->checkBox_men->Location = System::Drawing::Point(119, 230);
            this->checkBox_men->Name = L"checkBox_men";
            this->checkBox_men->Size = System::Drawing::Size(82, 23);
            this->checkBox_men->TabIndex = 65;
            this->checkBox_men->Text = L"Hombre";
            this->checkBox_men->UseVisualStyleBackColor = true;
            // 
            // button_sex
            // 
            this->button_sex->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_sex->Location = System::Drawing::Point(224, 238);
            this->button_sex->Name = L"button_sex";
            this->button_sex->Size = System::Drawing::Size(174, 30);
            this->button_sex->TabIndex = 75;
            this->button_sex->Tag = L"";
            this->button_sex->Text = L"BUSCAR";
            this->button_sex->UseVisualStyleBackColor = true;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(66, 238);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(42, 19);
            this->label11->TabIndex = 186;
            this->label11->Text = L"Sexo";
            // 
            // textBox_lastname
            // 
            this->textBox_lastname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_lastname->Location = System::Drawing::Point(114, 157);
            this->textBox_lastname->Name = L"textBox_lastname";
            this->textBox_lastname->Size = System::Drawing::Size(104, 26);
            this->textBox_lastname->TabIndex = 45;
            this->textBox_lastname->Tag = L"";
            // 
            // textBox_email
            // 
            this->textBox_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_email->Location = System::Drawing::Point(114, 192);
            this->textBox_email->Name = L"textBox_email";
            this->textBox_email->Size = System::Drawing::Size(104, 26);
            this->textBox_email->TabIndex = 55;
            this->textBox_email->Tag = L"";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(61, 199);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(47, 19);
            this->label13->TabIndex = 179;
            this->label13->Text = L"Email";
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
            // button_email
            // 
            this->button_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_email->Location = System::Drawing::Point(227, 196);
            this->button_email->Name = L"button_email";
            this->button_email->Size = System::Drawing::Size(174, 30);
            this->button_email->TabIndex = 60;
            this->button_email->Tag = L"";
            this->button_email->Text = L"BUSCAR";
            this->button_email->UseVisualStyleBackColor = true;
            // 
            // button_name
            // 
            this->button_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_name->Location = System::Drawing::Point(224, 123);
            this->button_name->Name = L"button_name";
            this->button_name->Size = System::Drawing::Size(174, 30);
            this->button_name->TabIndex = 40;
            this->button_name->Tag = L"";
            this->button_name->Text = L"BUSCAR";
            this->button_name->UseVisualStyleBackColor = true;
            // 
            // button_lastname
            // 
            this->button_lastname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_lastname->Location = System::Drawing::Point(224, 157);
            this->button_lastname->Name = L"button_lastname";
            this->button_lastname->Size = System::Drawing::Size(174, 30);
            this->button_lastname->TabIndex = 50;
            this->button_lastname->Tag = L"";
            this->button_lastname->Text = L"BUSCAR";
            this->button_lastname->UseVisualStyleBackColor = true;
            // 
            // button_phone
            // 
            this->button_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_phone->Location = System::Drawing::Point(225, 59);
            this->button_phone->Name = L"button_phone";
            this->button_phone->Size = System::Drawing::Size(174, 30);
            this->button_phone->TabIndex = 20;
            this->button_phone->Tag = L"";
            this->button_phone->Text = L"BUSCAR";
            this->button_phone->UseVisualStyleBackColor = true;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(83, 30);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(27, 19);
            this->label19->TabIndex = 162;
            this->label19->Text = L"ID";
            // 
            // button_dni
            // 
            this->button_dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_dni->Location = System::Drawing::Point(225, 90);
            this->button_dni->Name = L"button_dni";
            this->button_dni->Size = System::Drawing::Size(174, 30);
            this->button_dni->TabIndex = 30;
            this->button_dni->Tag = L"";
            this->button_dni->Text = L"BUSCAR";
            this->button_dni->UseVisualStyleBackColor = true;
            // 
            // textBox_id
            // 
            this->textBox_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_id->Location = System::Drawing::Point(114, 27);
            this->textBox_id->Name = L"textBox_id";
            this->textBox_id->Size = System::Drawing::Size(104, 26);
            this->textBox_id->TabIndex = 5;
            this->textBox_id->Tag = L"";
            // 
            // button_id
            // 
            this->button_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_id->Location = System::Drawing::Point(225, 26);
            this->button_id->Name = L"button_id";
            this->button_id->Size = System::Drawing::Size(174, 30);
            this->button_id->TabIndex = 10;
            this->button_id->Tag = L"";
            this->button_id->Text = L"BUSCAR";
            this->button_id->UseVisualStyleBackColor = true;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(44, 64);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(67, 19);
            this->label17->TabIndex = 165;
            this->label17->Text = L"Telefono";
            // 
            // textBox_phone
            // 
            this->textBox_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_phone->Location = System::Drawing::Point(114, 61);
            this->textBox_phone->Name = L"textBox_phone";
            this->textBox_phone->Size = System::Drawing::Size(104, 26);
            this->textBox_phone->TabIndex = 15;
            this->textBox_phone->Tag = L"";
            // 
            // button_clearall
            // 
            this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_clearall->Location = System::Drawing::Point(227, 291);
            this->button_clearall->Name = L"button_clearall";
            this->button_clearall->Size = System::Drawing::Size(186, 30);
            this->button_clearall->TabIndex = 80;
            this->button_clearall->Tag = L"";
            this->button_clearall->Text = L"Limpiar todo y/o Actualizar";
            this->button_clearall->UseVisualStyleBackColor = true;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(69, 96);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(39, 19);
            this->label16->TabIndex = 167;
            this->label16->Text = L"DNI";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(46, 128);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(63, 19);
            this->label15->TabIndex = 169;
            this->label15->Text = L"Nombre";
            // 
            // textBox_dni
            // 
            this->textBox_dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_dni->Location = System::Drawing::Point(114, 91);
            this->textBox_dni->Name = L"textBox_dni";
            this->textBox_dni->Size = System::Drawing::Size(104, 26);
            this->textBox_dni->TabIndex = 25;
            this->textBox_dni->Tag = L"";
            // 
            // textBox_name
            // 
            this->textBox_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_name->Location = System::Drawing::Point(114, 123);
            this->textBox_name->Name = L"textBox_name";
            this->textBox_name->Size = System::Drawing::Size(104, 26);
            this->textBox_name->TabIndex = 35;
            this->textBox_name->Tag = L"";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(44, 164);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(64, 19);
            this->label12->TabIndex = 176;
            this->label12->Text = L"Apellido";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(548, 188);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(64, 19);
            this->label14->TabIndex = 273;
            this->label14->Text = L"Apellido";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(575, 8);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(340, 40);
            this->label1->TabIndex = 280;
            this->label1->Text = L"Buscador de usuarios";
            // 
            // notifyIcon1
            // 
            this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
            this->notifyIcon1->BalloonTipTitle = L"Notificaci�n";
            this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
            this->notifyIcon1->Text = L"notifyIcon1";
            this->notifyIcon1->Visible = true;
            // 
            // dgv_vehicles
            // 
            this->dgv_vehicles->AllowUserToAddRows = false;
            this->dgv_vehicles->AllowUserToDeleteRows = false;
            this->dgv_vehicles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgv_vehicles->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
                this->Id, this->Phone,
                    this->Dni, this->Name, this->Lastname, this->Email, this->Address, this->BirthDate, this->SignDate
            });
            this->dgv_vehicles->Location = System::Drawing::Point(32, 363);
            this->dgv_vehicles->Name = L"dgv_vehicles";
            this->dgv_vehicles->ReadOnly = true;
            this->dgv_vehicles->RowHeadersWidth = 51;
            this->dgv_vehicles->Size = System::Drawing::Size(744, 171);
            this->dgv_vehicles->TabIndex = 278;
            // 
            // Id
            // 
            this->Id->HeaderText = L"ID";
            this->Id->MinimumWidth = 6;
            this->Id->Name = L"Id";
            this->Id->ReadOnly = true;
            this->Id->Width = 30;
            // 
            // Phone
            // 
            this->Phone->HeaderText = L"Telefono";
            this->Phone->MinimumWidth = 6;
            this->Phone->Name = L"Phone";
            this->Phone->ReadOnly = true;
            this->Phone->Width = 60;
            // 
            // Dni
            // 
            this->Dni->HeaderText = L"DNI";
            this->Dni->MinimumWidth = 6;
            this->Dni->Name = L"Dni";
            this->Dni->ReadOnly = true;
            this->Dni->Width = 60;
            // 
            // Name
            // 
            this->Name->HeaderText = L"Nombre";
            this->Name->MinimumWidth = 6;
            this->Name->Name = L"Name";
            this->Name->ReadOnly = true;
            this->Name->Width = 60;
            // 
            // Lastname
            // 
            this->Lastname->HeaderText = L"Apellido";
            this->Lastname->MinimumWidth = 6;
            this->Lastname->Name = L"Lastname";
            this->Lastname->ReadOnly = true;
            this->Lastname->Width = 90;
            // 
            // Email
            // 
            this->Email->HeaderText = L"Email";
            this->Email->MinimumWidth = 6;
            this->Email->Name = L"Email";
            this->Email->ReadOnly = true;
            this->Email->Width = 90;
            // 
            // Address
            // 
            this->Address->HeaderText = L"Direccion";
            this->Address->Name = L"Address";
            this->Address->ReadOnly = true;
            // 
            // BirthDate
            // 
            this->BirthDate->HeaderText = L"Fecha de Nacimiento";
            this->BirthDate->Name = L"BirthDate";
            this->BirthDate->ReadOnly = true;
            // 
            // SignDate
            // 
            this->SignDate->HeaderText = L"Fecha de Registro";
            this->SignDate->Name = L"SignDate";
            this->SignDate->ReadOnly = true;
            // 
            // button_exit
            // 
            this->button_exit->BackColor = System::Drawing::Color::Maroon;
            this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->button_exit->Location = System::Drawing::Point(856, 507);
            this->button_exit->Name = L"button_exit";
            this->button_exit->Size = System::Drawing::Size(137, 36);
            this->button_exit->TabIndex = 279;
            this->button_exit->Tag = L"65";
            this->button_exit->Text = L"SALIR";
            this->button_exit->UseVisualStyleBackColor = false;
            this->button_exit->Click += gcnew System::EventHandler(this, &AdmInfoUserPage::button_exit_Click);
            // 
            // pb_photo
            // 
            this->pb_photo->BackColor = System::Drawing::Color::White;
            this->pb_photo->Location = System::Drawing::Point(769, 55);
            this->pb_photo->Name = L"pb_photo";
            this->pb_photo->Size = System::Drawing::Size(214, 211);
            this->pb_photo->TabIndex = 281;
            this->pb_photo->TabStop = false;
            // 
            // AdmInfoUserPage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->ClientSize = System::Drawing::Size(1024, 551);
            this->Controls->Add(this->button_notify);
            this->Controls->Add(this->textBox10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->textBox11);
            this->Controls->Add(this->checkBox3);
            this->Controls->Add(this->checkBox4);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button_eliminate);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->dgv_vehicles);
            this->Controls->Add(this->button_exit);
            this->Controls->Add(this->pb_photo);
    //        this->Name = L"AdmInfoUserPage";
            this->Text = L"AdmInfoUserPage";
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
    private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
};
}
