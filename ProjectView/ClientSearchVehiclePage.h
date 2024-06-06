#pragma once

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Plate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Operative;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Condition;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_tid;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_tnumberseats;
	private: System::Windows::Forms::TextBox^ textBox_tcolor;
	private: System::Windows::Forms::TextBox^ textBox_tbrand;
	private: System::Windows::Forms::TextBox^ textBox_tmodel;
	private: System::Windows::Forms::TextBox^ textBox_tplate;
	private: System::Windows::Forms::PictureBox^ pb_photo;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pb_photocar;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_Deals_completed;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_Recommendations;
	private: System::Windows::Forms::Button^ button_Send_message;









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
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Plate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Operative = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Condition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_tid = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_tnumberseats = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tcolor = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tbrand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tmodel = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tplate = (gcnew System::Windows::Forms::TextBox());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pb_photocar = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_Recommendations = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_Deals_completed = (gcnew System::Windows::Forms::TextBox());
			this->button_Send_message = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
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
			this->dgv_vehicles->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->Plate,
					this->Brand, this->Color, this->Operative, this->Condition
			});
			this->dgv_vehicles->Location = System::Drawing::Point(23, 414);
			this->dgv_vehicles->Margin = System::Windows::Forms::Padding(4);
			this->dgv_vehicles->Name = L"dgv_vehicles";
			this->dgv_vehicles->ReadOnly = true;
			this->dgv_vehicles->RowHeadersWidth = 51;
			this->dgv_vehicles->Size = System::Drawing::Size(579, 354);
			this->dgv_vehicles->TabIndex = 225;
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 30;
			// 
			// Plate
			// 
			this->Plate->HeaderText = L"Placa";
			this->Plate->MinimumWidth = 6;
			this->Plate->Name = L"Plate";
			this->Plate->ReadOnly = true;
			this->Plate->Width = 60;
			// 
			// Brand
			// 
			this->Brand->HeaderText = L"Marca";
			this->Brand->MinimumWidth = 6;
			this->Brand->Name = L"Brand";
			this->Brand->ReadOnly = true;
			this->Brand->Width = 60;
			// 
			// Color
			// 
			this->Color->HeaderText = L"Color";
			this->Color->MinimumWidth = 6;
			this->Color->Name = L"Color";
			this->Color->ReadOnly = true;
			this->Color->Width = 60;
			// 
			// Operative
			// 
			this->Operative->HeaderText = L"Estado de Operatividad";
			this->Operative->MinimumWidth = 6;
			this->Operative->Name = L"Operative";
			this->Operative->ReadOnly = true;
			this->Operative->Width = 90;
			// 
			// Condition
			// 
			this->Condition->HeaderText = L"Condición";
			this->Condition->MinimumWidth = 6;
			this->Condition->Name = L"Condition";
			this->Condition->ReadOnly = true;
			this->Condition->Width = 90;
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
			// textBox_tid
			// 
			this->textBox_tid->Enabled = false;
			this->textBox_tid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tid->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tid->Location = System::Drawing::Point(736, 95);
			this->textBox_tid->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tid->Name = L"textBox_tid";
			this->textBox_tid->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tid->Size = System::Drawing::Size(195, 30);
			this->textBox_tid->TabIndex = 227;
			this->textBox_tid->Tag = L"";
			this->textBox_tid->Text = L"ID";
			this->textBox_tid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// textBox_tnumberseats
			// 
			this->textBox_tnumberseats->Enabled = false;
			this->textBox_tnumberseats->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tnumberseats->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tnumberseats->Location = System::Drawing::Point(736, 302);
			this->textBox_tnumberseats->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tnumberseats->Name = L"textBox_tnumberseats";
			this->textBox_tnumberseats->Size = System::Drawing::Size(195, 30);
			this->textBox_tnumberseats->TabIndex = 232;
			this->textBox_tnumberseats->Tag = L"";
			this->textBox_tnumberseats->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tcolor
			// 
			this->textBox_tcolor->Enabled = false;
			this->textBox_tcolor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tcolor->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tcolor->Location = System::Drawing::Point(736, 259);
			this->textBox_tcolor->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tcolor->Name = L"textBox_tcolor";
			this->textBox_tcolor->Size = System::Drawing::Size(195, 30);
			this->textBox_tcolor->TabIndex = 231;
			this->textBox_tcolor->Tag = L"";
			this->textBox_tcolor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tbrand
			// 
			this->textBox_tbrand->Enabled = false;
			this->textBox_tbrand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tbrand->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tbrand->Location = System::Drawing::Point(736, 216);
			this->textBox_tbrand->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tbrand->Name = L"textBox_tbrand";
			this->textBox_tbrand->Size = System::Drawing::Size(195, 30);
			this->textBox_tbrand->TabIndex = 230;
			this->textBox_tbrand->Tag = L"";
			this->textBox_tbrand->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tmodel
			// 
			this->textBox_tmodel->Enabled = false;
			this->textBox_tmodel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tmodel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tmodel->Location = System::Drawing::Point(736, 134);
			this->textBox_tmodel->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tmodel->Name = L"textBox_tmodel";
			this->textBox_tmodel->Size = System::Drawing::Size(195, 30);
			this->textBox_tmodel->TabIndex = 228;
			this->textBox_tmodel->Tag = L"";
			this->textBox_tmodel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tplate
			// 
			this->textBox_tplate->Enabled = false;
			this->textBox_tplate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tplate->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tplate->Location = System::Drawing::Point(736, 174);
			this->textBox_tplate->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tplate->Name = L"textBox_tplate";
			this->textBox_tplate->Size = System::Drawing::Size(195, 30);
			this->textBox_tplate->TabIndex = 229;
			this->textBox_tplate->Tag = L"";
			this->textBox_tplate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Enabled = false;
			this->pb_photo->Location = System::Drawing::Point(964, 85);
			this->pb_photo->Margin = System::Windows::Forms::Padding(4);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(285, 260);
			this->pb_photo->TabIndex = 233;
			this->pb_photo->TabStop = false;
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
			// button_Send_message
			// 
			this->button_Send_message->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Send_message->Location = System::Drawing::Point(834, 731);
			this->button_Send_message->Margin = System::Windows::Forms::Padding(4);
			this->button_Send_message->Name = L"button_Send_message";
			this->button_Send_message->Size = System::Drawing::Size(232, 37);
			this->button_Send_message->TabIndex = 179;
			this->button_Send_message->Tag = L"";
			this->button_Send_message->Text = L"Enviar mensaje";
			this->button_Send_message->UseVisualStyleBackColor = true;
			// 
			// ClientSearchVehiclePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1283, 811);
			this->Controls->Add(this->button_Send_message);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox_tid);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_tnumberseats);
			this->Controls->Add(this->textBox_tcolor);
			this->Controls->Add(this->textBox_tbrand);
			this->Controls->Add(this->textBox_tmodel);
			this->Controls->Add(this->textBox_tplate);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgv_vehicles);
			this->Controls->Add(this->groupBox2);
			this->Name = L"ClientSearchVehiclePage";
			this->Text = L"ClientSearchVehiclePage";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photocar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
