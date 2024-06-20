#pragma once
#include "AdmNotifyPage.h" 

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
    /// Resumen de AdmInfoUserPage
    /// </summary>
    public ref class AdmInfoUserPage : public System::Windows::Forms::Form
    {
    public:
        AdmInfoUserPage(void)
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
        ~AdmInfoUserPage()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button_notify;
    protected:

    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label8;

    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::CheckBox^ checkBox_women;

    private: System::Windows::Forms::CheckBox^ checkBox3;
    private: System::Windows::Forms::CheckBox^ checkBox4;
    private: System::Windows::Forms::Label^ label2;


    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;

    private: System::Windows::Forms::Label^ label5;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Button^ button_eliminate;


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
    private: System::Windows::Forms::DataGridView^ dgv_clients;










    private: System::Windows::Forms::Button^ button_exit;
    private: System::Windows::Forms::PictureBox^ pb_photo_user;

    private: System::Windows::Forms::TextBox^ textBox_tid;
    private: System::Windows::Forms::TextBox^ textBox_temail;
    private: System::Windows::Forms::TextBox^ textBox_tsurname;
    private: System::Windows::Forms::TextBox^ textBox_tname;
    private: System::Windows::Forms::TextBox^ textBox_tphone;
    private: System::Windows::Forms::TextBox^ textBox_tdni;
    private: System::Windows::Forms::TextBox^ textBox_taddress;
    private: System::Windows::Forms::TextBox^ textBox_tborndate;
    private: System::Windows::Forms::TextBox^ textBox_tregisterdate;
    private: System::Windows::Forms::Button^ button_stats;
    private: System::Windows::Forms::DataGridView^ dgv_proprietors;














    protected:









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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdmInfoUserPage::typeid));
            this->button_notify = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->checkBox_women = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->button_eliminate = (gcnew System::Windows::Forms::Button());
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
            this->dgv_clients = (gcnew System::Windows::Forms::DataGridView());
            this->button_exit = (gcnew System::Windows::Forms::Button());
            this->pb_photo_user = (gcnew System::Windows::Forms::PictureBox());
            this->textBox_tid = (gcnew System::Windows::Forms::TextBox());
            this->textBox_temail = (gcnew System::Windows::Forms::TextBox());
            this->textBox_tsurname = (gcnew System::Windows::Forms::TextBox());
            this->textBox_tname = (gcnew System::Windows::Forms::TextBox());
            this->textBox_tphone = (gcnew System::Windows::Forms::TextBox());
            this->textBox_tdni = (gcnew System::Windows::Forms::TextBox());
            this->textBox_taddress = (gcnew System::Windows::Forms::TextBox());
            this->textBox_tborndate = (gcnew System::Windows::Forms::TextBox());
            this->textBox_tregisterdate = (gcnew System::Windows::Forms::TextBox());
            this->button_stats = (gcnew System::Windows::Forms::Button());
            this->dgv_proprietors = (gcnew System::Windows::Forms::DataGridView());
            this->groupBox2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_clients))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo_user))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_proprietors))->BeginInit();
            this->SuspendLayout();
            // 
            // button_notify
            // 
            this->button_notify->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_notify->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_notify->Location = System::Drawing::Point(827, 496);
            this->button_notify->Name = L"button_notify";
            this->button_notify->Size = System::Drawing::Size(137, 38);
            this->button_notify->TabIndex = 287;
            this->button_notify->Tag = L"";
            this->button_notify->Text = L"Notificar";
            this->button_notify->UseVisualStyleBackColor = false;
            this->button_notify->Click += gcnew System::EventHandler(this, &AdmInfoUserPage::button_notify_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(464, 326);
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
            this->label8->Location = System::Drawing::Point(457, 291);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(149, 19);
            this->label8->TabIndex = 285;
            this->label8->Text = L"Fecha de Nacimiento";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(514, 252);
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
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(539, 220);
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
            this->label4->Location = System::Drawing::Point(561, 51);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(27, 19);
            this->label4->TabIndex = 269;
            this->label4->Text = L"ID";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(522, 85);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(67, 19);
            this->label5->TabIndex = 270;
            this->label5->Text = L"Telefono";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(547, 117);
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
            this->label7->Location = System::Drawing::Point(524, 149);
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
            this->button_eliminate->Location = System::Drawing::Point(827, 617);
            this->button_eliminate->Name = L"button_eliminate";
            this->button_eliminate->Size = System::Drawing::Size(137, 38);
            this->button_eliminate->TabIndex = 283;
            this->button_eliminate->Tag = L"";
            this->button_eliminate->Text = L"ELIMINAR";
            this->button_eliminate->UseVisualStyleBackColor = false;
            this->button_eliminate->Click += gcnew System::EventHandler(this, &AdmInfoUserPage::button_eliminate_Click);
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
            this->groupBox2->Text = L"Criterio de Búsqueda";
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
            this->button_logout->Text = L"Cerrar sesión";
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
            this->label14->Location = System::Drawing::Point(522, 185);
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
            this->notifyIcon1->BalloonTipTitle = L"Notificación";
            this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
            this->notifyIcon1->Text = L"notifyIcon1";
            this->notifyIcon1->Visible = true;
            // 
            // dgv_clients
            // 
            this->dgv_clients->AllowUserToAddRows = false;
            this->dgv_clients->AllowUserToDeleteRows = false;
            this->dgv_clients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgv_clients->Location = System::Drawing::Point(32, 363);
            this->dgv_clients->Name = L"dgv_clients";
            this->dgv_clients->ReadOnly = true;
            this->dgv_clients->RowHeadersWidth = 51;
            this->dgv_clients->Size = System::Drawing::Size(744, 171);
            this->dgv_clients->TabIndex = 278;
            this->dgv_clients->SelectionChanged += gcnew System::EventHandler(this, &AdmInfoUserPage::dgv_clients_SelectionChanged);
            // 
            // button_exit
            // 
            this->button_exit->BackColor = System::Drawing::Color::Maroon;
            this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->button_exit->Location = System::Drawing::Point(875, 681);
            this->button_exit->Name = L"button_exit";
            this->button_exit->Size = System::Drawing::Size(137, 36);
            this->button_exit->TabIndex = 279;
            this->button_exit->Tag = L"65";
            this->button_exit->Text = L"SALIR";
            this->button_exit->UseVisualStyleBackColor = false;
            this->button_exit->Click += gcnew System::EventHandler(this, &AdmInfoUserPage::button_exit_Click);
            // 
            // pb_photo_user
            // 
            this->pb_photo_user->BackColor = System::Drawing::Color::White;
            this->pb_photo_user->Location = System::Drawing::Point(769, 55);
            this->pb_photo_user->Name = L"pb_photo_user";
            this->pb_photo_user->Size = System::Drawing::Size(214, 211);
            this->pb_photo_user->TabIndex = 281;
            this->pb_photo_user->TabStop = false;
            // 
            // textBox_tid
            // 
            this->textBox_tid->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->textBox_tid->Enabled = false;
            this->textBox_tid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_tid->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_tid->Location = System::Drawing::Point(604, 51);
            this->textBox_tid->Name = L"textBox_tid";
            this->textBox_tid->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
            this->textBox_tid->Size = System::Drawing::Size(147, 26);
            this->textBox_tid->TabIndex = 288;
            this->textBox_tid->Tag = L"";
            this->textBox_tid->Text = L"ID";
            this->textBox_tid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox_temail
            // 
            this->textBox_temail->Enabled = false;
            this->textBox_temail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_temail->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_temail->Location = System::Drawing::Point(604, 211);
            this->textBox_temail->Name = L"textBox_temail";
            this->textBox_temail->Size = System::Drawing::Size(147, 26);
            this->textBox_temail->TabIndex = 293;
            this->textBox_temail->Tag = L"";
            this->textBox_temail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox_tsurname
            // 
            this->textBox_tsurname->Enabled = false;
            this->textBox_tsurname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_tsurname->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_tsurname->Location = System::Drawing::Point(604, 179);
            this->textBox_tsurname->Name = L"textBox_tsurname";
            this->textBox_tsurname->Size = System::Drawing::Size(147, 26);
            this->textBox_tsurname->TabIndex = 292;
            this->textBox_tsurname->Tag = L"";
            this->textBox_tsurname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox_tname
            // 
            this->textBox_tname->Enabled = false;
            this->textBox_tname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_tname->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_tname->Location = System::Drawing::Point(604, 147);
            this->textBox_tname->Name = L"textBox_tname";
            this->textBox_tname->Size = System::Drawing::Size(147, 26);
            this->textBox_tname->TabIndex = 291;
            this->textBox_tname->Tag = L"";
            this->textBox_tname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox_tphone
            // 
            this->textBox_tphone->Enabled = false;
            this->textBox_tphone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_tphone->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_tphone->Location = System::Drawing::Point(604, 83);
            this->textBox_tphone->Name = L"textBox_tphone";
            this->textBox_tphone->Size = System::Drawing::Size(147, 26);
            this->textBox_tphone->TabIndex = 289;
            this->textBox_tphone->Tag = L"";
            this->textBox_tphone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox_tdni
            // 
            this->textBox_tdni->Enabled = false;
            this->textBox_tdni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_tdni->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_tdni->Location = System::Drawing::Point(604, 115);
            this->textBox_tdni->Name = L"textBox_tdni";
            this->textBox_tdni->Size = System::Drawing::Size(147, 26);
            this->textBox_tdni->TabIndex = 290;
            this->textBox_tdni->Tag = L"";
            this->textBox_tdni->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox_taddress
            // 
            this->textBox_taddress->Enabled = false;
            this->textBox_taddress->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_taddress->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_taddress->Location = System::Drawing::Point(604, 247);
            this->textBox_taddress->Name = L"textBox_taddress";
            this->textBox_taddress->Size = System::Drawing::Size(147, 26);
            this->textBox_taddress->TabIndex = 294;
            this->textBox_taddress->Tag = L"";
            this->textBox_taddress->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox_tborndate
            // 
            this->textBox_tborndate->Enabled = false;
            this->textBox_tborndate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_tborndate->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_tborndate->Location = System::Drawing::Point(604, 284);
            this->textBox_tborndate->Name = L"textBox_tborndate";
            this->textBox_tborndate->Size = System::Drawing::Size(147, 26);
            this->textBox_tborndate->TabIndex = 295;
            this->textBox_tborndate->Tag = L"";
            this->textBox_tborndate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox_tregisterdate
            // 
            this->textBox_tregisterdate->Enabled = false;
            this->textBox_tregisterdate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_tregisterdate->ForeColor = System::Drawing::SystemColors::GrayText;
            this->textBox_tregisterdate->Location = System::Drawing::Point(604, 322);
            this->textBox_tregisterdate->Name = L"textBox_tregisterdate";
            this->textBox_tregisterdate->Size = System::Drawing::Size(147, 26);
            this->textBox_tregisterdate->TabIndex = 296;
            this->textBox_tregisterdate->Tag = L"";
            this->textBox_tregisterdate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button_stats
            // 
            this->button_stats->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_stats->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_stats->Location = System::Drawing::Point(827, 555);
            this->button_stats->Name = L"button_stats";
            this->button_stats->Size = System::Drawing::Size(137, 38);
            this->button_stats->TabIndex = 297;
            this->button_stats->Tag = L"";
            this->button_stats->Text = L"Stats";
            this->button_stats->UseVisualStyleBackColor = false;
        //    this->button_stats->Click += gcnew System::EventHandler(this, &AdmInfoUserPage::button_stats_Click);
            // 
            // dgv_proprietors
            // 
            this->dgv_proprietors->AllowUserToAddRows = false;
            this->dgv_proprietors->AllowUserToDeleteRows = false;
            this->dgv_proprietors->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgv_proprietors->Location = System::Drawing::Point(31, 584);
            this->dgv_proprietors->Name = L"dgv_proprietors";
            this->dgv_proprietors->ReadOnly = true;
            this->dgv_proprietors->RowHeadersWidth = 51;
            this->dgv_proprietors->Size = System::Drawing::Size(744, 171);
            this->dgv_proprietors->TabIndex = 298;
            this->dgv_proprietors->SelectionChanged += gcnew System::EventHandler(this, &AdmInfoUserPage::dgv_proprietors_SelectionChanged);
            // 
            // AdmInfoUserPage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->ClientSize = System::Drawing::Size(1024, 749);
            this->Controls->Add(this->dgv_proprietors);
            this->Controls->Add(this->button_stats);
            this->Controls->Add(this->textBox_tregisterdate);
            this->Controls->Add(this->textBox_tborndate);
            this->Controls->Add(this->textBox_taddress);
            this->Controls->Add(this->textBox_tid);
            this->Controls->Add(this->textBox_temail);
            this->Controls->Add(this->textBox_tsurname);
            this->Controls->Add(this->textBox_tname);
            this->Controls->Add(this->textBox_tphone);
            this->Controls->Add(this->textBox_tdni);
            this->Controls->Add(this->button_notify);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->checkBox3);
            this->Controls->Add(this->checkBox4);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button_eliminate);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->dgv_clients);
            this->Controls->Add(this->button_exit);
            this->Controls->Add(this->pb_photo_user);
            this->Name = L"AdmInfoUserPage";
            this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AdmInfoUserPage::AdmInfoUserPage_FormClosed);
            this->Load += gcnew System::EventHandler(this, &AdmInfoUserPage::AdmInfoUserPage_Load);
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_clients))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo_user))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_proprietors))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

               private: System::Void InitializeDataGridView() {
               // Configurar el DataGridView para no generar columnas automáticamente
               dgv_proprietors->AutoGenerateColumns = false;

               // Crear y agregar columnas manualmente
               DataGridViewTextBoxColumn^ idColumn = gcnew DataGridViewTextBoxColumn();
               idColumn->HeaderText = "ID";
               idColumn->DataPropertyName = "Id"; // Esto debe coincidir con el nombre de la propiedad en la clase de datos
               idColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(idColumn);

               DataGridViewTextBoxColumn^ PhoneColumn = gcnew DataGridViewTextBoxColumn();
               PhoneColumn->HeaderText = "Telefono";
               PhoneColumn->DataPropertyName = "Phone";
               PhoneColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(PhoneColumn);

               DataGridViewTextBoxColumn^ DniColumn = gcnew DataGridViewTextBoxColumn();
               DniColumn->HeaderText = "DNI";
               DniColumn->DataPropertyName = "Dni";
               DniColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(DniColumn);

               DataGridViewTextBoxColumn^ NameColumn = gcnew DataGridViewTextBoxColumn();
               NameColumn->HeaderText = "Nombre";
               NameColumn->DataPropertyName = "Name";
               NameColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(NameColumn);

               DataGridViewTextBoxColumn^ LastnameColumn = gcnew DataGridViewTextBoxColumn();
               LastnameColumn->HeaderText = "Apellido";
               LastnameColumn->DataPropertyName = "Lastname";
               LastnameColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(LastnameColumn);

               DataGridViewTextBoxColumn^ EmailColumn = gcnew DataGridViewTextBoxColumn();
               EmailColumn->HeaderText = "Email";
               EmailColumn->DataPropertyName = "Email";
               EmailColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(EmailColumn);

               DataGridViewTextBoxColumn^ AddressColumn = gcnew DataGridViewTextBoxColumn();
               AddressColumn->HeaderText = "Direccion";
               AddressColumn->DataPropertyName = "AddressColumn";
               AddressColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(AddressColumn);

               DataGridViewTextBoxColumn^ BirthDateColumn = gcnew DataGridViewTextBoxColumn();
               BirthDateColumn->HeaderText = "Fecha de nacimiento";
               BirthDateColumn->DataPropertyName = "BirthDate";
               BirthDateColumn->DefaultCellStyle->Format = "dd/MM/yyyy";
               BirthDateColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(BirthDateColumn);

               DataGridViewTextBoxColumn^ SignDateColumn = gcnew DataGridViewTextBoxColumn();
               SignDateColumn->HeaderText = "Fecha de registro";
               SignDateColumn->DataPropertyName = "SignDate";
               SignDateColumn->DefaultCellStyle->Format = "dd/MM/yyyy";
               SignDateColumn->Width = 25; // Ajustar el ancho de la columna
               dgv_proprietors->Columns->Add(SignDateColumn);

               // Puedes agregar más columnas según sea necesario
           }

        private: System::Void InitializeDataGridView_clients1() {
             // Configurar el DataGridView para no generar columnas automáticamente
             dgv_clients->AutoGenerateColumns = false;

             // Crear y agregar columnas manualmente
             DataGridViewTextBoxColumn^ idColumn = gcnew DataGridViewTextBoxColumn();
             idColumn->HeaderText = "ID";
             idColumn->DataPropertyName = "Id"; // Esto debe coincidir con el nombre de la propiedad en la clase de datos
             idColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(idColumn);

             DataGridViewTextBoxColumn^ PhoneColumn = gcnew DataGridViewTextBoxColumn();
             PhoneColumn->HeaderText = "Telefono";
             PhoneColumn->DataPropertyName = "Phone";
             PhoneColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(PhoneColumn);

             DataGridViewTextBoxColumn^ DniColumn = gcnew DataGridViewTextBoxColumn();
             DniColumn->HeaderText = "DNI";
             DniColumn->DataPropertyName = "Dni";
             DniColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(DniColumn);

             DataGridViewTextBoxColumn^ NameColumn = gcnew DataGridViewTextBoxColumn();
             NameColumn->HeaderText = "Nombre";
             NameColumn->DataPropertyName = "Name";
             NameColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(NameColumn);

             DataGridViewTextBoxColumn^ LastnameColumn = gcnew DataGridViewTextBoxColumn();
             LastnameColumn->HeaderText = "Apellido";
             LastnameColumn->DataPropertyName = "Lastname";
             LastnameColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(LastnameColumn);

             DataGridViewTextBoxColumn^ EmailColumn = gcnew DataGridViewTextBoxColumn();
             EmailColumn->HeaderText = "Email";
             EmailColumn->DataPropertyName = "Email";
             EmailColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(EmailColumn);

             DataGridViewTextBoxColumn^ AddressColumn = gcnew DataGridViewTextBoxColumn();
             AddressColumn->HeaderText = "Direccion";
             AddressColumn->DataPropertyName = "AddressColumn";
             AddressColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(AddressColumn);

             DataGridViewTextBoxColumn^ BirthDateColumn = gcnew DataGridViewTextBoxColumn();
             BirthDateColumn->HeaderText = "Fecha de nacimiento";
             BirthDateColumn->DataPropertyName = "BirthDate";
             BirthDateColumn->DefaultCellStyle->Format = "dd/MM/yyyy";
             BirthDateColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(BirthDateColumn);

             DataGridViewTextBoxColumn^ SignDateColumn = gcnew DataGridViewTextBoxColumn();
             SignDateColumn->HeaderText = "Fecha de registro";
             SignDateColumn->DataPropertyName = "SignDate";
             SignDateColumn->DefaultCellStyle->Format = "dd/MM/yyyy";
             SignDateColumn->Width = 25; // Ajustar el ancho de la columna
             dgv_clients->Columns->Add(SignDateColumn);

             // Puedes agregar más columnas según sea necesario
         }//aca

    private:
        void ShowInitialDgvClients() {
        List<Client^>^ clients = Controller::QueryAllClients();

        // Vincular los datos al DataGridView
        dgv_clients->DataSource = clients;
        }

        void ShowInitialDgvProprietors() {
            List<Proprietor^>^ proprietors = Controller::QueryAllProprietors();

            // Vincular los datos al DataGridView
            dgv_proprietors->DataSource = proprietors;
        }
        void ClearTextBoxes() {
            //función para limpiar todas las textboxes

            textBox_id->Clear();
            textBox_tphone->Clear();
            textBox_tdni->Clear();
            textBox_tname->Clear();
            textBox_tsurname->Clear();
            textBox_temail->Clear();
            textBox_taddress->Clear();
            textBox_tborndate->Clear();
            textBox_tregisterdate->Clear();
            //Falta que a la hora de limpiar se elimine el item seleccionando en el combo

        }

    private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    private: System::Void button_notify_Click(System::Object^ sender, System::EventArgs^ e) {
        AdmNotifyPage^ admnotifypage = gcnew AdmNotifyPage();
        admnotifypage->MdiParent = this->MdiParent;
        admnotifypage->Show();
    }
    private: System::Void AdmInfoUserPage_Load(System::Object^ sender, System::EventArgs^ e) {
        InitializeDataGridView();
        InitializeDataGridView_clients1();

        textBox_tid->Text = "ID";
        textBox_tphone->Text = "Teléfono";
        textBox_tdni->Text = "DNI";
        textBox_tname->Text = "Nombre";
        textBox_tsurname->Text = "Apellido";
        textBox_temail->Text = "Email";
        textBox_taddress->Text = "Dirección";
        textBox_tborndate->Text = "Fecha de nacimiento";
        textBox_tregisterdate->Text = "Fecha de registro";
        pb_photo_user->Image = nullptr;

        List<Client^>^ clients = Controller::QueryAllClients();

        // Vincular los datos al DataGridView
        dgv_clients->DataSource = clients;

        List<Proprietor^>^ proprietors = Controller::QueryAllProprietors();

        // Vincular los datos al DataGridView
        dgv_proprietors->DataSource = proprietors;

        //ShowInitialDgvClients();
        //ShowInitialDgvProprietors();

    }

    private: System::Void AdmInfoUserPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
        this->DialogResult = System::Windows::Forms::DialogResult::OK;
    }
private: System::Void dgv_clients_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
    // Verificar si hay al menos una fila seleccionada en el DataGridView de clientes
    if (dgv_clients->SelectedRows->Count > 0) {
        // Obtener el índice de la fila seleccionada
        int selectedRowIndex = dgv_clients->SelectedRows[0]->Index;

        // Obtener el cliente seleccionado en la fila
        Client^ selectedClient = dynamic_cast<Client^>(dgv_clients->Rows[selectedRowIndex]->DataBoundItem);

        // Obtener todos los clientes desde el controlador
        //List<Client^>^ clients = Controller::QueryAllClients(); //no

        textBox_tid->Text = selectedClient->Id.ToString(); 
        textBox_tphone->Text = selectedClient->Phone.ToString();
        textBox_tdni->Text = selectedClient->Dni.ToString();
        textBox_tname->Text = selectedClient->Name;
        textBox_tsurname->Text = selectedClient->Lastname;
        textBox_temail->Text = selectedClient->Email;
        textBox_taddress->Text = selectedClient->Address;
        textBox_tborndate->Text = selectedClient->BirthDate.ToString();
        textBox_tregisterdate->Text = selectedClient->SignDate.ToString();
        pb_photo_user->Image = nullptr;
    }
    else {
        // Limpiar los TextBoxes si no hay filas seleccionadas en el DataGridView
      
        textBox_tid->Text = "ID";
        textBox_tphone->Text = "Telefono";
        textBox_tdni->Text = "DNI";
        textBox_tname->Text = "Nombre";
        textBox_tsurname->Text = "Apellido";
        textBox_temail->Text = "Email";
        textBox_taddress->Text = "Direccion";
        textBox_tborndate->Text = "Fecha de Nacimiento";
        textBox_tregisterdate->Text = "Fecha de Registro";
        //definir esto
        pb_photo_user->Image = nullptr;
    }
}
private: System::Void dgv_proprietors_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {//para proiertors
    // Verificar si hay al menos una fila seleccionada en el DataGridView de proprietors
    if (dgv_proprietors->SelectedRows->Count > 0) {
        // Obtener el índice de la fila seleccionada
        int selectedRowIndex = dgv_proprietors->SelectedRows[0]->Index;

        // Obtener el cliente seleccionado en la fila
        Proprietor^ selectedProprietor = dynamic_cast<Proprietor^>(dgv_proprietors->Rows[selectedRowIndex]->DataBoundItem);

        // Obtener todos los clientes desde el controlador
        
       //List<Proprietor^>^ propiertors = Controller::QueryAllProprietors();

        textBox_tid->Text = selectedProprietor->Id.ToString();
        textBox_tphone->Text = selectedProprietor->Phone.ToString();
        textBox_tdni->Text = selectedProprietor->Dni.ToString();
        textBox_tname->Text = selectedProprietor->Name;
        textBox_tsurname->Text = selectedProprietor->Lastname;
        textBox_temail->Text = selectedProprietor->Email;
        textBox_taddress->Text = selectedProprietor->Address;
        textBox_tborndate->Text = selectedProprietor->BirthDate.ToString();
        textBox_tregisterdate->Text = selectedProprietor->SignDate.ToString();
        pb_photo_user->Image = nullptr;
    }
    else {
        // Limpiar los TextBoxes si no hay filas seleccionadas en el DataGridView

        textBox_tid->Text = "ID";
        textBox_tphone->Text = "Telefono";
        textBox_tdni->Text = "DNI";
        textBox_tname->Text = "Nombre";
        textBox_tsurname->Text = "Apellido";
        textBox_temail->Text = "Email";
        textBox_taddress->Text = "Direccion";
        textBox_tborndate->Text = "Fecha de Nacimiento";
        textBox_tregisterdate->Text = "Fecha de Registro";
        //definir esto
        pb_photo_user->Image = nullptr;
    }
}
private: System::Void button_eliminate_Click(System::Object^ sender, System::EventArgs^ e) {

    String^ tid = textBox_id->Text;

    if (String::IsNullOrWhiteSpace(tid)) {
        MessageBox::Show("No se ingresó ningún tipo de dato.\nPara eliminar un vehículo,\nse debe unicamente ingresar el ID\nde la zona de Criterio de Busqueda.");
        return;
    }

    int id = Int32::Parse(tid);
    List<Client^>^ ClientsList = Controller::QueryAllClients();
    for each (Client ^ c in ClientsList) {
        if (c->Id == id) {
            Controller::DeleteClient(id);
            MessageBox::Show("¡Se eliminó exitosamente el siguiente ID: " + tid + " !");
            ShowInitialDgvClients();
            ClearTextBoxes();
            return;
        }
    }
    MessageBox::Show("El ID ingresado no existe");
}
};
}
