#pragma once
#include "ClientMailBox.h"

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ClientSearchVehiclePage
	/// </summary>
	public ref class ClientSearchVehiclePage : public System::Windows::Forms::Form
	{
	public:
		ClientSearchVehiclePage(void)
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
		~ClientSearchVehiclePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::Button^ button_condition;
	private: System::Windows::Forms::Button^ button_color;
	private: System::Windows::Forms::Button^ button_operative;
	private: System::Windows::Forms::Button^ button_plate;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button_brand;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::Button^ button_id;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox_plate;
	private: System::Windows::Forms::Button^ button_clearall;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox_brand;
	private: System::Windows::Forms::TextBox^ textBox_color;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox_operative;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox_condition;
	private: System::Windows::Forms::DataGridView^ dgv_vehicles;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_name;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_address;

	private: System::Windows::Forms::TextBox^ textBox_email;

	private: System::Windows::Forms::TextBox^ textBox_dni;

	private: System::Windows::Forms::TextBox^ textBox_surname;
	private: System::Windows::Forms::TextBox^ textBox_phone;
	private: System::Windows::Forms::PictureBox^ pb_photo_proprietor;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pb_photocar;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_Deals_completed;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_Recommendations;
	private: System::Windows::Forms::Button^ button_Send_message;
	private: System::Windows::Forms::Button^ button_exit;









	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_condition = (gcnew System::Windows::Forms::Button());
			this->button_color = (gcnew System::Windows::Forms::Button());
			this->button_operative = (gcnew System::Windows::Forms::Button());
			this->button_plate = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button_brand = (gcnew System::Windows::Forms::Button());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->button_id = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_plate = (gcnew System::Windows::Forms::TextBox());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox_brand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_color = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox_operative = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox_condition = (gcnew System::Windows::Forms::ComboBox());
			this->dgv_vehicles = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->textBox_dni = (gcnew System::Windows::Forms::TextBox());
			this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_phone = (gcnew System::Windows::Forms::TextBox());
			this->pb_photo_proprietor = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_Deals_completed = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pb_photocar = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_Recommendations = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_Send_message = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo_proprietor))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photocar))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->button_logout);
			this->groupBox2->Controls->Add(this->button_condition);
			this->groupBox2->Controls->Add(this->button_color);
			this->groupBox2->Controls->Add(this->button_operative);
			this->groupBox2->Controls->Add(this->button_plate);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->button_brand);
			this->groupBox2->Controls->Add(this->textBox_id);
			this->groupBox2->Controls->Add(this->button_id);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->textBox_plate);
			this->groupBox2->Controls->Add(this->button_clearall);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->textBox_brand);
			this->groupBox2->Controls->Add(this->textBox_color);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->comboBox_operative);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->comboBox_condition);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(36, 25);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(556, 331);
			this->groupBox2->TabIndex = 224;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Criterio de Búsqueda";
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
			// button_condition
			// 
			this->button_condition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_condition->Location = System::Drawing::Point(303, 242);
			this->button_condition->Margin = System::Windows::Forms::Padding(4);
			this->button_condition->Name = L"button_condition";
			this->button_condition->Size = System::Drawing::Size(232, 37);
			this->button_condition->TabIndex = 60;
			this->button_condition->Tag = L"";
			this->button_condition->Text = L"BUSCAR";
			this->button_condition->UseVisualStyleBackColor = true;
			// 
			// button_color
			// 
			this->button_color->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_color->Location = System::Drawing::Point(303, 163);
			this->button_color->Margin = System::Windows::Forms::Padding(4);
			this->button_color->Name = L"button_color";
			this->button_color->Size = System::Drawing::Size(232, 37);
			this->button_color->TabIndex = 40;
			this->button_color->Tag = L"";
			this->button_color->Text = L"BUSCAR";
			this->button_color->UseVisualStyleBackColor = true;
			this->button_color->Click += gcnew System::EventHandler(this, &ClientSearchVehiclePage::button_color_Click);
			// 
			// button_operative
			// 
			this->button_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_operative->Location = System::Drawing::Point(303, 204);
			this->button_operative->Margin = System::Windows::Forms::Padding(4);
			this->button_operative->Name = L"button_operative";
			this->button_operative->Size = System::Drawing::Size(232, 37);
			this->button_operative->TabIndex = 50;
			this->button_operative->Tag = L"";
			this->button_operative->Text = L"BUSCAR";
			this->button_operative->UseVisualStyleBackColor = true;
			// 
			// button_plate
			// 
			this->button_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plate->Location = System::Drawing::Point(303, 84);
			this->button_plate->Margin = System::Windows::Forms::Padding(4);
			this->button_plate->Name = L"button_plate";
			this->button_plate->Size = System::Drawing::Size(232, 37);
			this->button_plate->TabIndex = 20;
			this->button_plate->Tag = L"";
			this->button_plate->Text = L"BUSCAR";
			this->button_plate->UseVisualStyleBackColor = true;
			this->button_plate->Click += gcnew System::EventHandler(this, &ClientSearchVehiclePage::button_plate_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(119, 48);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(31, 23);
			this->label19->TabIndex = 162;
			this->label19->Text = L"ID";
			// 
			// button_brand
			// 
			this->button_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_brand->Location = System::Drawing::Point(303, 122);
			this->button_brand->Margin = System::Windows::Forms::Padding(4);
			this->button_brand->Name = L"button_brand";
			this->button_brand->Size = System::Drawing::Size(232, 37);
			this->button_brand->TabIndex = 30;
			this->button_brand->Tag = L"";
			this->button_brand->Text = L"BUSCAR";
			this->button_brand->UseVisualStyleBackColor = true;
			this->button_brand->Click += gcnew System::EventHandler(this, &ClientSearchVehiclePage::button_brand_Click);
			// 
			// textBox_id
			// 
			this->textBox_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_id->Location = System::Drawing::Point(156, 44);
			this->textBox_id->Margin = System::Windows::Forms::Padding(4);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(137, 30);
			this->textBox_id->TabIndex = 5;
			this->textBox_id->Tag = L"";
			// 
			// button_id
			// 
			this->button_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_id->Location = System::Drawing::Point(303, 43);
			this->button_id->Margin = System::Windows::Forms::Padding(4);
			this->button_id->Name = L"button_id";
			this->button_id->Size = System::Drawing::Size(232, 37);
			this->button_id->TabIndex = 10;
			this->button_id->Tag = L"";
			this->button_id->Text = L"BUSCAR";
			this->button_id->UseVisualStyleBackColor = true;
			this->button_id->Click += gcnew System::EventHandler(this, &ClientSearchVehiclePage::button_id_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(96, 90);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(56, 23);
			this->label17->TabIndex = 165;
			this->label17->Text = L"Placa";
			// 
			// textBox_plate
			// 
			this->textBox_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_plate->Location = System::Drawing::Point(156, 86);
			this->textBox_plate->Margin = System::Windows::Forms::Padding(4);
			this->textBox_plate->Name = L"textBox_plate";
			this->textBox_plate->Size = System::Drawing::Size(137, 30);
			this->textBox_plate->TabIndex = 15;
			this->textBox_plate->Tag = L"";
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(188, 283);
			this->button_clearall->Margin = System::Windows::Forms::Padding(4);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(248, 37);
			this->button_clearall->TabIndex = 65;
			this->button_clearall->Tag = L"";
			this->button_clearall->Text = L"Limpiar todo y/o Actualizar";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &ClientSearchVehiclePage::button_clearall_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(81, 129);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 23);
			this->label16->TabIndex = 167;
			this->label16->Text = L"Marca";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(92, 169);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 23);
			this->label15->TabIndex = 169;
			this->label15->Text = L"Color";
			// 
			// textBox_brand
			// 
			this->textBox_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_brand->Location = System::Drawing::Point(156, 124);
			this->textBox_brand->Margin = System::Windows::Forms::Padding(4);
			this->textBox_brand->Name = L"textBox_brand";
			this->textBox_brand->Size = System::Drawing::Size(137, 30);
			this->textBox_brand->TabIndex = 25;
			this->textBox_brand->Tag = L"";
			// 
			// textBox_color
			// 
			this->textBox_color->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_color->Location = System::Drawing::Point(156, 165);
			this->textBox_color->Margin = System::Windows::Forms::Padding(4);
			this->textBox_color->Name = L"textBox_color";
			this->textBox_color->Size = System::Drawing::Size(137, 30);
			this->textBox_color->TabIndex = 35;
			this->textBox_color->Tag = L"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(32, 197);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(121, 46);
			this->label12->TabIndex = 176;
			this->label12->Text = L"   Estado de\r\nOperatividad";
			// 
			// comboBox_operative
			// 
			this->comboBox_operative->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_operative->FormattingEnabled = true;
			this->comboBox_operative->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Operativo", L"Inoperativo" });
			this->comboBox_operative->Location = System::Drawing::Point(156, 204);
			this->comboBox_operative->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_operative->Name = L"comboBox_operative";
			this->comboBox_operative->Size = System::Drawing::Size(140, 30);
			this->comboBox_operative->TabIndex = 45;
			this->comboBox_operative->Tag = L"";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(49, 247);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 23);
			this->label11->TabIndex = 178;
			this->label11->Text = L"Condición";
			// 
			// comboBox_condition
			// 
			this->comboBox_condition->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_condition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_condition->FormattingEnabled = true;
			this->comboBox_condition->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nuevo", L"Usado", L"Antiguo" });
			this->comboBox_condition->Location = System::Drawing::Point(156, 242);
			this->comboBox_condition->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_condition->Name = L"comboBox_condition";
			this->comboBox_condition->Size = System::Drawing::Size(140, 30);
			this->comboBox_condition->TabIndex = 55;
			this->comboBox_condition->Tag = L"";
			// 
			// dgv_vehicles
			// 
			this->dgv_vehicles->AllowUserToAddRows = false;
			this->dgv_vehicles->AllowUserToDeleteRows = false;
			this->dgv_vehicles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_vehicles->Location = System::Drawing::Point(23, 414);
			this->dgv_vehicles->Margin = System::Windows::Forms::Padding(4);
			this->dgv_vehicles->Name = L"dgv_vehicles";
			this->dgv_vehicles->ReadOnly = true;
			this->dgv_vehicles->RowHeadersWidth = 51;
			this->dgv_vehicles->Size = System::Drawing::Size(579, 354);
			this->dgv_vehicles->TabIndex = 225;
			this->dgv_vehicles->SelectionChanged += gcnew System::EventHandler(this, &ClientSearchVehiclePage::dgv_vehicles_SelectionChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(640, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(594, 51);
			this->label1->TabIndex = 226;
			this->label1->Text = L"PERFIL DEL PROPIETARIO";
			// 
			// textBox_name
			// 
			this->textBox_name->Enabled = false;
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_name->Location = System::Drawing::Point(736, 95);
			this->textBox_name->Margin = System::Windows::Forms::Padding(4);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_name->Size = System::Drawing::Size(195, 30);
			this->textBox_name->TabIndex = 227;
			this->textBox_name->Tag = L"";
			this->textBox_name->Text = L"ID";
			this->textBox_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(649, 138);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 23);
			this->label7->TabIndex = 239;
			this->label7->Text = L"Apellido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(638, 304);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 23);
			this->label6->TabIndex = 237;
			this->label6->Text = L"Dirección";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(651, 261);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 23);
			this->label5->TabIndex = 236;
			this->label5->Text = L"E-mail";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(665, 218);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 23);
			this->label4->TabIndex = 235;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(646, 177);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 23);
			this->label3->TabIndex = 234;
			this->label3->Text = L"Teléfono";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(651, 97);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 23);
			this->label2->TabIndex = 238;
			this->label2->Text = L"Nombre";
			// 
			// textBox_address
			// 
			this->textBox_address->Enabled = false;
			this->textBox_address->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_address->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_address->Location = System::Drawing::Point(736, 302);
			this->textBox_address->Margin = System::Windows::Forms::Padding(4);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(195, 30);
			this->textBox_address->TabIndex = 232;
			this->textBox_address->Tag = L"";
			this->textBox_address->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_email
			// 
			this->textBox_email->Enabled = false;
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_email->Location = System::Drawing::Point(736, 259);
			this->textBox_email->Margin = System::Windows::Forms::Padding(4);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(195, 30);
			this->textBox_email->TabIndex = 231;
			this->textBox_email->Tag = L"";
			this->textBox_email->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_dni
			// 
			this->textBox_dni->Enabled = false;
			this->textBox_dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_dni->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_dni->Location = System::Drawing::Point(736, 216);
			this->textBox_dni->Margin = System::Windows::Forms::Padding(4);
			this->textBox_dni->Name = L"textBox_dni";
			this->textBox_dni->Size = System::Drawing::Size(195, 30);
			this->textBox_dni->TabIndex = 230;
			this->textBox_dni->Tag = L"";
			this->textBox_dni->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_surname
			// 
			this->textBox_surname->Enabled = false;
			this->textBox_surname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_surname->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_surname->Location = System::Drawing::Point(736, 134);
			this->textBox_surname->Margin = System::Windows::Forms::Padding(4);
			this->textBox_surname->Name = L"textBox_surname";
			this->textBox_surname->Size = System::Drawing::Size(195, 30);
			this->textBox_surname->TabIndex = 228;
			this->textBox_surname->Tag = L"";
			this->textBox_surname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_phone
			// 
			this->textBox_phone->Enabled = false;
			this->textBox_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_phone->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_phone->Location = System::Drawing::Point(736, 174);
			this->textBox_phone->Margin = System::Windows::Forms::Padding(4);
			this->textBox_phone->Name = L"textBox_phone";
			this->textBox_phone->Size = System::Drawing::Size(195, 30);
			this->textBox_phone->TabIndex = 229;
			this->textBox_phone->Tag = L"";
			this->textBox_phone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pb_photo_proprietor
			// 
			this->pb_photo_proprietor->BackColor = System::Drawing::Color::White;
			this->pb_photo_proprietor->Enabled = false;
			this->pb_photo_proprietor->Location = System::Drawing::Point(964, 85);
			this->pb_photo_proprietor->Margin = System::Windows::Forms::Padding(4);
			this->pb_photo_proprietor->Name = L"pb_photo_proprietor";
			this->pb_photo_proprietor->Size = System::Drawing::Size(285, 260);
			this->pb_photo_proprietor->TabIndex = 233;
			this->pb_photo_proprietor->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox_Deals_completed);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->pb_photocar);
			this->groupBox1->Controls->Add(this->textBox_Recommendations);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(669, 379);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(556, 331);
			this->groupBox1->TabIndex = 240;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vehículo";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(68, 272);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(186, 23);
			this->label9->TabIndex = 244;
			this->label9->Text = L"# Tratos concretados";
			// 
			// textBox_Deals_completed
			// 
			this->textBox_Deals_completed->Enabled = false;
			this->textBox_Deals_completed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Deals_completed->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_Deals_completed->Location = System::Drawing::Point(261, 270);
			this->textBox_Deals_completed->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Deals_completed->Name = L"textBox_Deals_completed";
			this->textBox_Deals_completed->Size = System::Drawing::Size(195, 30);
			this->textBox_Deals_completed->TabIndex = 243;
			this->textBox_Deals_completed->Tag = L"";
			this->textBox_Deals_completed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(93, 225);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 23);
			this->label8->TabIndex = 242;
			this->label8->Text = L"Recomendaciones";
			// 
			// pb_photocar
			// 
			this->pb_photocar->BackColor = System::Drawing::Color::White;
			this->pb_photocar->Enabled = false;
			this->pb_photocar->Location = System::Drawing::Point(74, 40);
			this->pb_photocar->Margin = System::Windows::Forms::Padding(4);
			this->pb_photocar->Name = L"pb_photocar";
			this->pb_photocar->Size = System::Drawing::Size(417, 165);
			this->pb_photocar->TabIndex = 241;
			this->pb_photocar->TabStop = false;
			// 
			// textBox_Recommendations
			// 
			this->textBox_Recommendations->Enabled = false;
			this->textBox_Recommendations->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Recommendations->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_Recommendations->Location = System::Drawing::Point(261, 223);
			this->textBox_Recommendations->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Recommendations->Name = L"textBox_Recommendations";
			this->textBox_Recommendations->Size = System::Drawing::Size(195, 30);
			this->textBox_Recommendations->TabIndex = 241;
			this->textBox_Recommendations->Tag = L"";
			this->textBox_Recommendations->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// button_Send_message
			// 
			this->button_Send_message->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Send_message->Location = System::Drawing::Point(713, 742);
			this->button_Send_message->Margin = System::Windows::Forms::Padding(4);
			this->button_Send_message->Name = L"button_Send_message";
			this->button_Send_message->Size = System::Drawing::Size(232, 37);
			this->button_Send_message->TabIndex = 179;
			this->button_Send_message->Tag = L"";
			this->button_Send_message->Text = L"Ir a buzón a notificar";
			this->button_Send_message->UseVisualStyleBackColor = true;
			this->button_Send_message->Click += gcnew System::EventHandler(this, &ClientSearchVehiclePage::button_Send_message_Click);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(992, 745);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(197, 34);
			this->button_exit->TabIndex = 241;
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &ClientSearchVehiclePage::button_exit_Click);
			// 
			// ClientSearchVehiclePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1283, 811);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_Send_message);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->textBox_email);
			this->Controls->Add(this->textBox_dni);
			this->Controls->Add(this->textBox_surname);
			this->Controls->Add(this->textBox_phone);
			this->Controls->Add(this->pb_photo_proprietor);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgv_vehicles);
			this->Controls->Add(this->groupBox2);
			this->Name = L"ClientSearchVehiclePage";
			this->Text = L"ClientSearchVehiclePage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ClientSearchVehiclePage::ClientSearchVehiclePage_FormClosed);
			this->Load += gcnew System::EventHandler(this, &ClientSearchVehiclePage::ClientSearchVehiclePage_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo_proprietor))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photocar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}

	private: System::Void button_Send_message_Click(System::Object^ sender, System::EventArgs^ e) {
		int selectedRowIndex = dgv_vehicles->SelectedRows[0]->Index;
		Vehicle^ selectedVehicle = dynamic_cast<Vehicle^>(dgv_vehicles->Rows[selectedRowIndex]->DataBoundItem);

		List<Proprietor^>^ ProprietorList = Controller::QueryAllProprietors();

		// Verificar que se haya seleccionado un vehículo válido
		if (selectedVehicle != nullptr) {
			for each (Proprietor ^ p in ProprietorList) {
				for each (Vehicle ^ v in p->ListVehicleProprietor) {
					if (selectedVehicle->Id == v->Id) {
						// Actualizar directamente el vehículo en la lista del propietario
						v->Selected = true;

						// Actualizar el vehículo en la base de datos
						Controller::UpdateProprietor(p);
						Controller::UpdateVehicle(v);
						break;
					}
				}
			}

			this->Hide();

			ClientMailBox^ clientMailBox = gcnew ClientMailBox();
			clientMailBox->MdiParent = this->MdiParent;

			if (clientMailBox->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				return;
			}
		}
	}



	private: System::Void InitializeDataGridView() {
		// Configurar el DataGridView para no generar columnas automáticamente
		dgv_vehicles->AutoGenerateColumns = false;

		// Crear y agregar columnas manualmente
		DataGridViewTextBoxColumn^ idColumn = gcnew DataGridViewTextBoxColumn();
		idColumn->HeaderText = "ID";
		idColumn->DataPropertyName = "Id"; // Esto debe coincidir con el nombre de la propiedad en la clase de datos
		idColumn->Width = 25; // Ajustar el ancho de la columna
		dgv_vehicles->Columns->Add(idColumn);

		DataGridViewTextBoxColumn^ ColorColumn = gcnew DataGridViewTextBoxColumn();
		ColorColumn->HeaderText = "Color";
		ColorColumn->DataPropertyName = "Color";
		idColumn->Width = 5; // Ajustar el ancho de la columna
		dgv_vehicles->Columns->Add(ColorColumn);

		DataGridViewTextBoxColumn^ ModelColumn = gcnew DataGridViewTextBoxColumn();
		ModelColumn->HeaderText = "Modelo";
		ModelColumn->DataPropertyName = "Model";
		idColumn->Width = 25; // Ajustar el ancho de la columna
		dgv_vehicles->Columns->Add(ModelColumn);

		DataGridViewTextBoxColumn^ BrandColumn = gcnew DataGridViewTextBoxColumn();
		BrandColumn->HeaderText = "Marca";
		BrandColumn->DataPropertyName = "Brand";
		idColumn->Width = 25; // Ajustar el ancho de la columna
		dgv_vehicles->Columns->Add(BrandColumn);

		DataGridViewTextBoxColumn^ PlateColumn = gcnew DataGridViewTextBoxColumn();
		PlateColumn->HeaderText = "Placa";
		PlateColumn->DataPropertyName = "Plate";
		idColumn->Width = 25; // Ajustar el ancho de la columna
		dgv_vehicles->Columns->Add(PlateColumn);

		// Puedes agregar más columnas según sea necesario
	}

	private: System::Void DataGridView_Load() {
		// Obtener todos los vehículos desde el controlador
		List<Vehicle^>^ vehicles = Controller::QueryAllVehicles();

		// Vincular los datos al DataGridView
		dgv_vehicles->DataSource = vehicles;
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

	private: System::Void dgv_vehicles_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si hay al menos una fila seleccionada en el DataGridView
		if (dgv_vehicles->SelectedRows->Count > 0) {
			// Obtener el índice de la fila seleccionada
			int selectedRowIndex = dgv_vehicles->SelectedRows[0]->Index;

			// Obtener el vehículo seleccionado en la fila
			Vehicle^ selectedVehicle = dynamic_cast<Vehicle^>(dgv_vehicles->Rows[selectedRowIndex]->DataBoundItem);

			// Obtener todos los propietarios desde el controlador
			List<Proprietor^>^ proprietors = Controller::QueryAllProprietors();

			// Encontrar el propietario del vehículo
			Proprietor^ vehicleOwner = nullptr;
			for each (Proprietor ^ proprietor in proprietors) {
				// Iterar sobre los vehículos de cada propietario
				for each (Vehicle ^ vehicle in proprietor->ListVehicleProprietor) {
					if (selectedVehicle->Plate == vehicle->Plate) {
						vehicleOwner = proprietor;
					}
				}
			}


			// Verificar si se encontró al propietario del vehículo
			if (vehicleOwner != nullptr) {
				// Llenar los TextBoxes con los datos del propietario
				textBox_name->Text = vehicleOwner->Name;
				textBox_surname->Text = vehicleOwner->Lastname;
				textBox_phone->Text = vehicleOwner->Phone.ToString();
				textBox_dni->Text = vehicleOwner->Dni.ToString();
				textBox_email->Text = vehicleOwner->Email;
				textBox_address->Text = vehicleOwner->Address;
				textBox_Recommendations->Text = vehicleOwner->NumberofRecommendations.ToString();
				textBox_Deals_completed->Text = vehicleOwner->NumberofDeals.ToString();
				pb_photo_proprietor->Image = nullptr;
				pb_photocar->Image = nullptr;
			}
			else {
				// Limpiar los TextBoxes si no se encontró al propietario
				textBox_name->Text = "Nombre";
				textBox_surname->Text = "Apellido";
				textBox_phone->Text = "Número de teléfono";
				textBox_dni->Text = "DNI";
				textBox_email->Text = "E-Mail";
				textBox_address->Text = "Dirección";
				textBox_Recommendations->Text = "#Recomendaciones";
				textBox_Deals_completed->Text = "#Tratos completados";
				pb_photo_proprietor->Image = nullptr;
				pb_photocar->Image = nullptr;
			}
		}
		else {
			// Limpiar los TextBoxes si no hay filas seleccionadas en el DataGridView
			textBox_name->Text = "Nombre";
			textBox_surname->Text = "Apellido";
			textBox_phone->Text = "Número de teléfono";
			textBox_dni->Text = "DNI";
			textBox_email->Text = "E-Mail";
			textBox_address->Text = "Dirección";
			textBox_Recommendations->Text = "#Recomendaciones";
			textBox_Deals_completed->Text = "#Tratos completados";
			pb_photo_proprietor->Image = nullptr;
			pb_photocar->Image = nullptr;
		}
	}

	private: System::Void ClientSearchVehiclePage_Load(System::Object^ sender, System::EventArgs^ e) {
		InitializeDataGridView();
		DataGridView_Load();
		this->dgv_vehicles->SelectionChanged += gcnew System::EventHandler(this, &ClientSearchVehiclePage::dgv_vehicles_SelectionChanged);
	}

	private: System::Void button_id_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tid = textBox_id->Text;
		if (String::IsNullOrWhiteSpace(tid)) {
			MessageBox::Show("Ingrese el id del vehículo a buscar");
			return;
		}
		int id = 0;
		if (!Int32::TryParse(tid, id)) {
			MessageBox::Show("El id deben ser dígitos");
			return;
		}

		List<Vehicle^>^ Vehicles = gcnew List<Vehicle^>();
		Vehicle^ v = Controller::QueryVehicleById(id);

		Vehicles->Add(v);

		dgv_vehicles->DataSource = Vehicles;
	}

	private: System::Void button_plate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tplate = textBox_plate->Text;
		if (String::IsNullOrWhiteSpace(tplate)) {
			MessageBox::Show("Ingrese la placa del vehículo a buscar");
			return;
		}
		List<Vehicle^>^ Vehicles = gcnew List<Vehicle^>();
		Vehicle^ v = Controller::QueryVehicleByPlate(tplate);

		Vehicles->Add(v);

		dgv_vehicles->DataSource = Vehicles;
	}




	private: System::Void button_brand_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tbrand = textBox_brand->Text;
		if (String::IsNullOrWhiteSpace(tbrand)) {
			MessageBox::Show("Ingrese la marca del vehículo a buscar");
			return;
		}

		List<Vehicle^>^ v = Controller::QueryListVehicleByBrand(tbrand);

		dgv_vehicles->DataSource = v;
	}
	private: System::Void button_color_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tcolor = textBox_color->Text;
		if (String::IsNullOrWhiteSpace(tcolor)) {
			MessageBox::Show("Ingrese el color del vehículo a buscar");
			return;
		}

		List<Vehicle^>^ v = Controller::QueryListVehicleByColor(tcolor);

		dgv_vehicles->DataSource = v;
	}
		   void ClearTextBoxes() {
			   textBox_id->Clear();
			   textBox_plate->Clear();
			   textBox_brand->Clear();
			   textBox_color->Clear();
			   comboBox_operative->Items->Clear();
			   comboBox_condition->Items->Clear();
		   }

	private: System::Void button_clearall_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearTextBoxes();
		DataGridView_Load();
	}




	private: System::Void ClientSearchVehiclePage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	};
}
