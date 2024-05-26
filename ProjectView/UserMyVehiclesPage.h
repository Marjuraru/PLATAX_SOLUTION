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
	/// Resumen de UserMyVehcilesPage
	/// </summary>
	public ref class UserMyVehiclesPage : public System::Windows::Forms::Form
	{
	public:
		UserMyVehiclesPage(void)
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
		~UserMyVehiclesPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label10;
	protected:
	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::Button^ button_condition;
	private: System::Windows::Forms::Button^ button_color;
	private: System::Windows::Forms::Button^ button_operative;
	private: System::Windows::Forms::Button^ button_brand;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::Button^ button_id;
	private: System::Windows::Forms::Button^ button_clearall;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_tid;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_eliminate;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_plate;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox_plate;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox_brand;
	private: System::Windows::Forms::TextBox^ textBox_color;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox_operative;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox_condition;
	private: System::Windows::Forms::ComboBox^ comboBox_tcondition;
	private: System::Windows::Forms::ComboBox^ comboBox_toperative;
	private: System::Windows::Forms::ComboBox^ comboBox_tsparetire;
	private: System::Windows::Forms::TextBox^ textBox_tnumberseats;
	private: System::Windows::Forms::TextBox^ textBox_tcolor;
	private: System::Windows::Forms::TextBox^ textBox_tbrand;
	private: System::Windows::Forms::TextBox^ textBox_tmodel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Plate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Operative;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Condition;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_update;
	private: System::Windows::Forms::TextBox^ textBox_tplate;
	private: System::Windows::Forms::Button^ button_insertphoto;
	private: System::Windows::Forms::PictureBox^ pb_photo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgv_vehicles;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserMyVehiclesPage::typeid));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_condition = (gcnew System::Windows::Forms::Button());
			this->button_color = (gcnew System::Windows::Forms::Button());
			this->button_operative = (gcnew System::Windows::Forms::Button());
			this->button_brand = (gcnew System::Windows::Forms::Button());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->button_id = (gcnew System::Windows::Forms::Button());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_tid = (gcnew System::Windows::Forms::TextBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_eliminate = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_plate = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_plate = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox_brand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_color = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox_operative = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox_condition = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_tcondition = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_toperative = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_tsparetire = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_tnumberseats = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tcolor = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tbrand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tmodel = (gcnew System::Windows::Forms::TextBox());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Plate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Operative = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Condition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_update = (gcnew System::Windows::Forms::Button());
			this->textBox_tplate = (gcnew System::Windows::Forms::TextBox());
			this->button_insertphoto = (gcnew System::Windows::Forms::Button());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgv_vehicles = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(701, 454);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 23);
			this->label10->TabIndex = 226;
			this->label10->Text = L"Condición";
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
			this->button_condition->Location = System::Drawing::Point(301, 242);
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
			this->button_color->Location = System::Drawing::Point(301, 162);
			this->button_color->Margin = System::Windows::Forms::Padding(4);
			this->button_color->Name = L"button_color";
			this->button_color->Size = System::Drawing::Size(232, 37);
			this->button_color->TabIndex = 40;
			this->button_color->Tag = L"";
			this->button_color->Text = L"BUSCAR";
			this->button_color->UseVisualStyleBackColor = true;
			this->button_color->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_color_Click);
			// 
			// button_operative
			// 
			this->button_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_operative->Location = System::Drawing::Point(301, 204);
			this->button_operative->Margin = System::Windows::Forms::Padding(4);
			this->button_operative->Name = L"button_operative";
			this->button_operative->Size = System::Drawing::Size(232, 37);
			this->button_operative->TabIndex = 50;
			this->button_operative->Tag = L"";
			this->button_operative->Text = L"BUSCAR";
			this->button_operative->UseVisualStyleBackColor = true;
			this->button_operative->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_operative_Click);
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
			this->button_brand->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_brand_Click);
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
			this->button_id->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_id_Click);
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
			this->button_clearall->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_clearall_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(648, 384);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(209, 23);
			this->label9->TabIndex = 225;
			this->label9->Text = L"Estado de Operatividad";
			// 
			// textBox_tid
			// 
			this->textBox_tid->Enabled = false;
			this->textBox_tid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tid->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tid->Location = System::Drawing::Point(679, 63);
			this->textBox_tid->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tid->Name = L"textBox_tid";
			this->textBox_tid->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tid->Size = System::Drawing::Size(195, 30);
			this->textBox_tid->TabIndex = 202;
			this->textBox_tid->Tag = L"";
			this->textBox_tid->Text = L"ID";
			this->textBox_tid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(653, 311);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(182, 23);
			this->label8->TabIndex = 220;
			this->label8->Text = L"Llantas de Repuesto";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(589, 106);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 23);
			this->label7->TabIndex = 224;
			this->label7->Text = L"Modelo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(585, 261);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 23);
			this->label6->TabIndex = 219;
			this->label6->Text = L"Asientos";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(608, 224);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 23);
			this->label5->TabIndex = 218;
			this->label5->Text = L"Color";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(599, 190);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 23);
			this->label4->TabIndex = 217;
			this->label4->Text = L"Marca";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(611, 145);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 23);
			this->label3->TabIndex = 216;
			this->label3->Text = L"Placa";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(608, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 23);
			this->label2->TabIndex = 221;
			this->label2->Text = L"ID";
			// 
			// button_eliminate
			// 
			this->button_eliminate->BackColor = System::Drawing::Color::Orange;
			this->button_eliminate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_eliminate->Location = System::Drawing::Point(671, 566);
			this->button_eliminate->Margin = System::Windows::Forms::Padding(4);
			this->button_eliminate->Name = L"button_eliminate";
			this->button_eliminate->Size = System::Drawing::Size(173, 49);
			this->button_eliminate->TabIndex = 223;
			this->button_eliminate->Tag = L"";
			this->button_eliminate->Text = L"ELIMINAR";
			this->button_eliminate->UseVisualStyleBackColor = false;
			this->button_eliminate->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_eliminate_Click);
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
			this->groupBox2->Location = System::Drawing::Point(15, 42);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(556, 331);
			this->groupBox2->TabIndex = 222;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Criterio de Búsqueda";
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
			this->button_plate->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_plate_Click);
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
			// comboBox_tcondition
			// 
			this->comboBox_tcondition->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_tcondition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_tcondition->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox_tcondition->FormattingEnabled = true;
			this->comboBox_tcondition->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nuevo", L"Usado", L"Antiguo" });
			this->comboBox_tcondition->Location = System::Drawing::Point(636, 481);
			this->comboBox_tcondition->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_tcondition->Name = L"comboBox_tcondition";
			this->comboBox_tcondition->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox_tcondition->Size = System::Drawing::Size(236, 30);
			this->comboBox_tcondition->TabIndex = 210;
			this->comboBox_tcondition->Tag = L"";
			// 
			// comboBox_toperative
			// 
			this->comboBox_toperative->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_toperative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_toperative->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox_toperative->FormattingEnabled = true;
			this->comboBox_toperative->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Operativo", L"Inoperativo" });
			this->comboBox_toperative->Location = System::Drawing::Point(637, 411);
			this->comboBox_toperative->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_toperative->Name = L"comboBox_toperative";
			this->comboBox_toperative->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox_toperative->Size = System::Drawing::Size(236, 30);
			this->comboBox_toperative->TabIndex = 209;
			this->comboBox_toperative->Tag = L"";
			// 
			// comboBox_tsparetire
			// 
			this->comboBox_tsparetire->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_tsparetire->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_tsparetire->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox_tsparetire->FormattingEnabled = true;
			this->comboBox_tsparetire->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Sí", L"No" });
			this->comboBox_tsparetire->Location = System::Drawing::Point(637, 338);
			this->comboBox_tsparetire->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_tsparetire->Name = L"comboBox_tsparetire";
			this->comboBox_tsparetire->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox_tsparetire->Size = System::Drawing::Size(236, 30);
			this->comboBox_tsparetire->TabIndex = 208;
			this->comboBox_tsparetire->Tag = L"";
			// 
			// textBox_tnumberseats
			// 
			this->textBox_tnumberseats->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tnumberseats->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tnumberseats->Location = System::Drawing::Point(679, 260);
			this->textBox_tnumberseats->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tnumberseats->Name = L"textBox_tnumberseats";
			this->textBox_tnumberseats->Size = System::Drawing::Size(195, 30);
			this->textBox_tnumberseats->TabIndex = 207;
			this->textBox_tnumberseats->Tag = L"";
			this->textBox_tnumberseats->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tcolor
			// 
			this->textBox_tcolor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tcolor->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tcolor->Location = System::Drawing::Point(679, 220);
			this->textBox_tcolor->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tcolor->Name = L"textBox_tcolor";
			this->textBox_tcolor->Size = System::Drawing::Size(195, 30);
			this->textBox_tcolor->TabIndex = 206;
			this->textBox_tcolor->Tag = L"";
			this->textBox_tcolor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tbrand
			// 
			this->textBox_tbrand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tbrand->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tbrand->Location = System::Drawing::Point(679, 181);
			this->textBox_tbrand->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tbrand->Name = L"textBox_tbrand";
			this->textBox_tbrand->Size = System::Drawing::Size(195, 30);
			this->textBox_tbrand->TabIndex = 205;
			this->textBox_tbrand->Tag = L"";
			this->textBox_tbrand->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tmodel
			// 
			this->textBox_tmodel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tmodel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tmodel->Location = System::Drawing::Point(679, 102);
			this->textBox_tmodel->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tmodel->Name = L"textBox_tmodel";
			this->textBox_tmodel->Size = System::Drawing::Size(195, 30);
			this->textBox_tmodel->TabIndex = 203;
			this->textBox_tmodel->Tag = L"";
			this->textBox_tmodel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(952, 571);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(165, 44);
			this->button_exit->TabIndex = 213;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_exit_Click);
			// 
			// button_update
			// 
			this->button_update->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_update->Location = System::Drawing::Point(893, 402);
			this->button_update->Margin = System::Windows::Forms::Padding(4);
			this->button_update->Name = L"button_update";
			this->button_update->Size = System::Drawing::Size(285, 47);
			this->button_update->TabIndex = 212;
			this->button_update->Tag = L"";
			this->button_update->Text = L"Guardar y Actualizar";
			this->button_update->UseVisualStyleBackColor = true;
			this->button_update->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_update_Click);
			// 
			// textBox_tplate
			// 
			this->textBox_tplate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tplate->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tplate->Location = System::Drawing::Point(679, 142);
			this->textBox_tplate->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tplate->Name = L"textBox_tplate";
			this->textBox_tplate->Size = System::Drawing::Size(195, 30);
			this->textBox_tplate->TabIndex = 204;
			this->textBox_tplate->Tag = L"";
			this->textBox_tplate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_insertphoto
			// 
			this->button_insertphoto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_insertphoto->Location = System::Drawing::Point(920, 324);
			this->button_insertphoto->Margin = System::Windows::Forms::Padding(4);
			this->button_insertphoto->Name = L"button_insertphoto";
			this->button_insertphoto->Size = System::Drawing::Size(232, 37);
			this->button_insertphoto->TabIndex = 211;
			this->button_insertphoto->Tag = L"";
			this->button_insertphoto->Text = L"Cambiar imagen";
			this->button_insertphoto->UseVisualStyleBackColor = true;
			this->button_insertphoto->Click += gcnew System::EventHandler(this, &UserMyVehiclesPage::button_insertphoto_Click);
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Location = System::Drawing::Point(892, 57);
			this->pb_photo->Margin = System::Windows::Forms::Padding(4);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(285, 260);
			this->pb_photo->TabIndex = 215;
			this->pb_photo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(687, 4);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(377, 51);
			this->label1->TabIndex = 214;
			this->label1->Text = L"MIS VEHÍCULOS";
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
			this->dgv_vehicles->Location = System::Drawing::Point(20, 418);
			this->dgv_vehicles->Margin = System::Windows::Forms::Padding(4);
			this->dgv_vehicles->Name = L"dgv_vehicles";
			this->dgv_vehicles->ReadOnly = true;
			this->dgv_vehicles->RowHeadersWidth = 51;
			this->dgv_vehicles->Size = System::Drawing::Size(579, 223);
			this->dgv_vehicles->TabIndex = 201;
			// 
			// UserMyVehiclesPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1193, 645);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_tid);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_eliminate);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->comboBox_tcondition);
			this->Controls->Add(this->comboBox_toperative);
			this->Controls->Add(this->comboBox_tsparetire);
			this->Controls->Add(this->textBox_tnumberseats);
			this->Controls->Add(this->textBox_tcolor);
			this->Controls->Add(this->textBox_tbrand);
			this->Controls->Add(this->textBox_tmodel);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_update);
			this->Controls->Add(this->textBox_tplate);
			this->Controls->Add(this->button_insertphoto);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgv_vehicles);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UserMyVehiclesPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserMyVehiclesPage";
			this->Load += gcnew System::EventHandler(this, &UserMyVehiclesPage::UserMyVehiclesPage_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:void ShowImage(array<System::Byte>^ imageBytes, PictureBox^ pictureBox) {
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
		void ShowInitialDgvVehicles() {
			List<Vehicle^>^ vehicles = Controller::QueryAllVehicles();
			if (vehicles->Count != 0) {
				dgv_vehicles->Rows->Clear();
				for (int i = 0; i < vehicles->Count; i++) {
					Vehicle^ c = vehicles[i];
					String^ atributobooleanoYes;
					if (c->Operative == true) {
						atributobooleanoYes = "Operativo";
					}
					else {
						atributobooleanoYes = "Inoperativo";
					}
					dgv_vehicles->Rows->Add(gcnew array<String^> {
						"" + c->Id,
							"" + c->Plate,
							"" + c->Brand,
							"" + c->Color,
							"" + atributobooleanoYes,
							"" + c->Condition,
					});
				}
			}
			else {
				MessageBox::Show("No hay vehículos disponibles para mostrar");
			}
		}
		void ShowSearchedVehicle(Vehicle^ c) {
			dgv_vehicles->Rows->Clear();
			String^ atributobooleanoYes;
			if (c->Operative == true) {
				atributobooleanoYes = "Operativo";
			}
			else {
				atributobooleanoYes = "Inoperativo";
			}

			dgv_vehicles->Rows->Add(gcnew array<String^> {
				"" + c->Id,
					"" + c->Plate,
					"" + c->Brand,
					"" + c->Color,
					"" + atributobooleanoYes,
					"" + c->Condition,

			});
		}
		void ClearTextBoxes() {
			//función para limpiar todas las textboxes

			textBox_id->Clear();
			textBox_plate->Clear();
			textBox_brand->Clear();
			textBox_color->Clear();
			comboBox_operative->Items->Clear();
			comboBox_condition->Items->Clear();

			textBox_tid->Clear();
			textBox_tmodel->Clear();
			textBox_tplate->Clear();
			textBox_tbrand->Clear();
			textBox_tcolor->Clear();
			textBox_tnumberseats->Clear();

			//Falta que a la hora de limpiar se elimine el item seleccionando en el combo

		}

		//void FillCombos() {
		//	comboBox_operative->Items->Clear();//parte de una buena práctica...
		//	comboBox_condition->Items->Clear();
		//	comboBox_operative->Items->Add("Operativo");
		//	comboBox_operative->Items->Add("Inoperativo");
		//	comboBox_condition->Items->Add("Nuevo");
		//	comboBox_condition->Items->Add("Usado");
		//	comboBox_condition->Items->Add("Antiguo");
		//	comboBox_tsparetire->Items->Add("Sí");
		//	comboBox_tsparetire->Items->Add("No");
		//	comboBox_toperative->Items->Add("Operativa");
		//	comboBox_toperative->Items->Add("Inoperativa");
		//	comboBox_tcondition->Items->Add("Nuevo");
		//	comboBox_tcondition->Items->Add("Usado");
		//	comboBox_tcondition->Items->Add("Antiguo");
		//}

		void FillVehicleTextBoxes(Vehicle^ c) {

			textBox_tid->Text = Convert::ToString(c->Id);
			textBox_tmodel->Text = c->Model;
			textBox_tplate->Text = c->Plate;
			textBox_tbrand->Text = c->Brand;
			textBox_tcolor->Text = c->Color;
			textBox_tnumberseats->Text = Convert::ToString(c->NumberOfSeats);
			comboBox_tcondition->Text = Convert::ToString(c->Condition);
			//comboBox_tsparetire->Text = Convert::ToString(c->SpareTire);
			//comboBox_toperative->Text = Convert::ToString(c->Operative);

			String^ sparetire_ = Convert::ToString(c->SpareTire);
			if (sparetire_ == "True") {

				comboBox_tsparetire->Text = "Sí";

			}
			else if (sparetire_ == "False") {

				comboBox_tsparetire->Text = "No";

			}

			String^ operative_ = Convert::ToString(c->Operative);
			if (operative_ == "True") {

				comboBox_toperative->Text = "Operativo";

			}
			else if (operative_ == "False") {

				comboBox_toperative->Text = "Inoperativo";

			}


			if (c->Photo != nullptr) {
				ShowImage(c->Photo, pb_photo);
			}
		}


	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

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

		Vehicle^ c = Controller::QueryVehicleById(id);
		if (c == nullptr) {
			notifyIcon1->BalloonTipText = "El id del vehículo ingresado no existe.";
			notifyIcon1->ShowBalloonTip(2500);
			return;
		}

		FillVehicleTextBoxes(c);

		ShowSearchedVehicle(c);


	}

	private: System::Void button_plate_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tplate = textBox_plate->Text;
		if (String::IsNullOrWhiteSpace(tplate)) {
			MessageBox::Show("Ingrese la placa del vehículo a buscar");
			return;
		}
		List<Vehicle^>^ listVehicles = Controller::QueryListVehiclesByProprietorId(Session::CurrentProprietor->Id);
		List<Vehicle^>^ vehicleMatch = gcnew List<Vehicle^>();
		for each (Vehicle ^ c in listVehicles) {
			if (c->Plate == tplate) {

			}
		}
		Vehicle^ c = Controller::QueryVehicleByPlate(tplate);
		if (c == nullptr) {
			notifyIcon1->BalloonTipText = "La placa del vehículo ingresado no existe.";
			notifyIcon1->ShowBalloonTip(2500);
			return;
		}

		FillVehicleTextBoxes(c);

		ShowSearchedVehicle(c);

	}
	private: System::Void button_brand_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tbrand = textBox_brand->Text;
		if (String::IsNullOrWhiteSpace(tbrand)) {
			MessageBox::Show("Ingrese la marca del vehículo a buscar");
			return;
		}

		List<Vehicle^>^ cList = Controller::QueryListVehicleByBrand(tbrand);
		if (cList->Count < 1) {
			notifyIcon1->BalloonTipText = "La marca del vehículo ingresado no existe.";
			notifyIcon1->ShowBalloonTip(2500);
			return;
		}

		FillVehicleTextBoxes(cList[0]);//por el List<Car^>^

		ShowSearchedVehicle(cList[0]);

	}
	private: System::Void button_color_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tcolor = textBox_color->Text;
		if (String::IsNullOrWhiteSpace(tcolor)) {
			MessageBox::Show("Ingrese el color del vehículo a buscar");
			return;
		}

		List<Vehicle^>^ cList = Controller::QueryListVehicleByColor(tcolor);
		if (cList->Count < 1) {
			notifyIcon1->BalloonTipText = "El color del vehículo ingresado no existe.";
			notifyIcon1->ShowBalloonTip(2500);
			return;
		}

		FillVehicleTextBoxes(cList[0]);

		ShowSearchedVehicle(cList[0]);

	}
	private: System::Void button_operative_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ toperative = comboBox_operative->Text;
		if (String::IsNullOrWhiteSpace(toperative)) {
			MessageBox::Show("Ingrese la operatividad del vehículo a buscar");
			return;
		}
		bool toperative_bool;
		if (toperative == "Operativo") {
			toperative_bool = true;
		}
		else if (toperative == "Inoperativo") {
			toperative_bool = false;
		}

		List<Vehicle^>^ cList = Controller::QueryListVehicleByOperative(toperative_bool);
		if (cList->Count < 1) {
			notifyIcon1->BalloonTipText = "La operatividad del vehículo ingresado no existe.";
			notifyIcon1->ShowBalloonTip(2500);
			return;
		}

		FillVehicleTextBoxes(cList[0]);

		ShowSearchedVehicle(cList[0]);

	}

	private: System::Void button_condition_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tcondition = comboBox_condition->Text;
		if (String::IsNullOrWhiteSpace(tcondition)) {
			MessageBox::Show("Ingrese la condición del vehículo a buscar");
			return;
		}

		List<Vehicle^>^ cList = Controller::QueryListVehicleByCondition(tcondition);
		if (cList->Count < 1) {
			notifyIcon1->BalloonTipText = "La condición del vehículo ingresado no existe.";
			notifyIcon1->ShowBalloonTip(2500);
			return;
		}

		FillVehicleTextBoxes(cList[0]);

		ShowSearchedVehicle(cList[0]);

	}

	private: System::Void UserMyVehiclesPage_Load(System::Object^ sender, System::EventArgs^ e) {
		/*FillCombos();*/
		textBox_tid->Text = "ID";
		textBox_tmodel->Text = "Modelo";
		textBox_tplate->Text = "Placa";
		textBox_tbrand->Text = "Marca";
		textBox_tcolor->Text = "Color";
		textBox_tnumberseats->Text = "Número de Asientos";
		pb_photo->Image = nullptr;
		ShowInitialDgvVehicles();
	}

	private: System::Void dgv_vehicles_RowHeaderMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->RowIndex >= 0 && e->RowIndex < dgv_vehicles->Rows->Count) {
			DataGridViewRow^ selectedRow = dgv_vehicles->Rows[e->RowIndex];

			// Verifica si la celda seleccionada tiene datos antes de procesarla
			if (selectedRow->Cells["Id"]->Value != nullptr) {
				ClearTextBoxes();
				// Obtener los datos de id de la fila seleccionada			
				String^ id = selectedRow->Cells["Id"]->Value->ToString();
				if (!String::IsNullOrWhiteSpace(id)) {
					int IdToSearch = Convert::ToInt32(id);
					Vehicle^ c = Controller::QueryVehicleById(IdToSearch);
					FillVehicleTextBoxes(c);
				}
			}
		}
	}

	private: System::Void button_clearall_Click(System::Object^ sender, System::EventArgs^ e) {


		textBox_tid->Font = gcnew System::Drawing::Font(textBox_tid->Font, System::Drawing::FontStyle::Italic);

		ShowInitialDgvVehicles();
		ClearTextBoxes();
		textBox_tid->Text = "ID";
		textBox_tmodel->Text = "Modelo";
		textBox_tplate->Text = "Placa";
		textBox_tbrand->Text = "Marca";
		textBox_tcolor->Text = "Color";
		textBox_tnumberseats->Text = "Número de Asientos";
		pb_photo->Image = nullptr;



		/*FillCombos();*/

	}

	private: System::Void button_insertphoto_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ opnfd = gcnew OpenFileDialog();
		opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pb_photo->Image = gcnew Bitmap(opnfd->FileName);
		}

	}
	private: System::Void button_update_Click(System::Object^ sender, System::EventArgs^ e) {

		Vehicle^ vehicle = gcnew Vehicle();

		String^ _id = textBox_tid->Text;
		String^ model = textBox_tmodel->Text;
		String^ plate = textBox_tplate->Text;
		String^ brand = textBox_tbrand->Text;
		String^ color = textBox_tcolor->Text;
		String^ _numberofseats = textBox_tnumberseats->Text;

		if (_id == "ID") {
			MessageBox::Show("No se realizó ninguna modificación\ndebido a que no seleccionó ningún objeto.");
			return;
		}
		String^ sparetire = comboBox_tsparetire->Items[comboBox_tsparetire->SelectedIndex]->ToString();
		String^ operative = comboBox_toperative->Items[comboBox_toperative->SelectedIndex]->ToString();
		String^ condition = comboBox_tcondition->Items[comboBox_tcondition->SelectedIndex]->ToString();



		if (sparetire == "Sí") {

			vehicle->SpareTire = true;

		}
		else if (sparetire == "No") {

			vehicle->SpareTire = false;

		}


		if (operative == "Operativo") {

			vehicle->Operative = true;

		}
		else if (operative == "Inoperativo") {

			vehicle->Operative = false;

		}


		if (plate->Length != 7) {
			MessageBox::Show("La placa del vehículo ingresado debe tener 7 dígitos");
			return;
		}

		int numberofseats = 0;

		if (!Int32::TryParse(_numberofseats, numberofseats)) {
			MessageBox::Show("Ingrese solo números para la cantidad de asientos");
			return;
		}

		int id = 0;
		if (!Int32::TryParse(_id, id)) {

			MessageBox::Show("Si se desea agregar ir a la pestaña 'Agregar Vehículo'");
			return;
		}

		vehicle->Id = Int32::Parse(textBox_tid->Text);
		vehicle->NumberOfSeats = numberofseats;
		vehicle->Color = color;
		vehicle->Model = model;
		vehicle->Brand = brand;
		vehicle->Plate = plate;
		vehicle->Condition = condition;

		if (pb_photo->Image != nullptr) {

			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pb_photo->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			vehicle->Photo = ms->ToArray();
			ms->Close();
		}

		Controller::UpdateVehicle(vehicle);
		MessageBox::Show("¡Se actualizó correctamente!");

		ShowInitialDgvVehicles();
		textBox_tid->Text = "ID";
		textBox_tmodel->Text = "Modelo";
		textBox_tplate->Text = "Placa";
		textBox_tbrand->Text = "Marca";
		textBox_tcolor->Text = "Color";
		textBox_tnumberseats->Text = "Número de Asientos";
		pb_photo->Image = nullptr;

	}
	private: System::Void button_eliminate_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tid = textBox_id->Text;

		if (String::IsNullOrWhiteSpace(tid)) {
			MessageBox::Show("No se ingresó ningún tipo de dato.\nPara eliminar un vehículo,\nse debe unicamente ingresar el ID\nde la zona de Criterio de Busqueda.");
			return;
		}

		int id = Int32::Parse(tid);
		List<Vehicle^>^ VehicleList = Controller::QueryAllVehicles();
		for each (Vehicle ^ c in VehicleList) {
			if (c->Id == id) {
				Controller::DeleteVehicle(id);
				MessageBox::Show("¡Se eliminó exitosamente el siguiente ID: " + tid + " !");
				ShowInitialDgvVehicles();
				ClearTextBoxes();
				return;
			}
		}
		MessageBox::Show("El ID ingresado no existe");

	}
	};
}
