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
	/// Resumen de UserMyCarsPage
	/// </summary>
	public ref class UserMyCarsPage : public System::Windows::Forms::Form
	{
	public:
		UserMyCarsPage(void)
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
		~UserMyCarsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_cars;
	protected:

	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_update;
	private: System::Windows::Forms::Button^ button_plate;




	private: System::Windows::Forms::Button^ button_insertphoto;










	private: System::Windows::Forms::PictureBox^ pb_photo;









	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox_condition;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox_operative;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox_color;








	private: System::Windows::Forms::TextBox^ textBox_brand;



	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox_plate;


	private: System::Windows::Forms::Label^ label17;








	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox_tmodel;
	private: System::Windows::Forms::TextBox^ textBox_tplate;

	private: System::Windows::Forms::TextBox^ textBox_tbrand;

	private: System::Windows::Forms::TextBox^ textBox_tcolor;

	private: System::Windows::Forms::TextBox^ textBox_tnumberseats;
	private: System::Windows::Forms::ComboBox^ comboBox_tsparetire;

	private: System::Windows::Forms::ComboBox^ comboBox_toperative;
	private: System::Windows::Forms::ComboBox^ comboBox_tcondition;








	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_clearall;
	private: System::Windows::Forms::TextBox^ textBox_id;


	private: System::Windows::Forms::Button^ button_id;
private: System::Windows::Forms::Button^ button_brand;
private: System::Windows::Forms::Button^ button_color;
private: System::Windows::Forms::Button^ button_operative;
private: System::Windows::Forms::Button^ button_condition;






	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_logout;






private: System::Windows::Forms::TextBox^ textBox_tid;
private: System::Windows::Forms::Button^ button_eliminate;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Plate;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Operative;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Condition;























	protected:

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
			this->dgv_cars = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Plate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Operative = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Condition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_update = (gcnew System::Windows::Forms::Button());
			this->button_plate = (gcnew System::Windows::Forms::Button());
			this->button_insertphoto = (gcnew System::Windows::Forms::Button());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_condition = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox_operative = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_color = (gcnew System::Windows::Forms::TextBox());
			this->textBox_brand = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox_plate = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox_tmodel = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tplate = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tbrand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tcolor = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tnumberseats = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_tsparetire = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_toperative = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_tcondition = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->button_id = (gcnew System::Windows::Forms::Button());
			this->button_brand = (gcnew System::Windows::Forms::Button());
			this->button_color = (gcnew System::Windows::Forms::Button());
			this->button_operative = (gcnew System::Windows::Forms::Button());
			this->button_condition = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->textBox_tid = (gcnew System::Windows::Forms::TextBox());
			this->button_eliminate = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_cars
			// 
			this->dgv_cars->AllowUserToAddRows = false;
			this->dgv_cars->AllowUserToDeleteRows = false;
			this->dgv_cars->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_cars->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->Plate,
					this->Brand, this->Color, this->Operative, this->Condition
			});
			this->dgv_cars->Location = System::Drawing::Point(12, 337);
			this->dgv_cars->Name = L"dgv_cars";
			this->dgv_cars->ReadOnly = true;
			this->dgv_cars->Size = System::Drawing::Size(434, 181);
			this->dgv_cars->TabIndex = 70;
			this->dgv_cars->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &UserMyCarsPage::dgv_cars_RowHeaderMouseClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 30;
			// 
			// Plate
			// 
			this->Plate->HeaderText = L"Placa";
			this->Plate->Name = L"Plate";
			this->Plate->ReadOnly = true;
			this->Plate->Width = 60;
			// 
			// Brand
			// 
			this->Brand->HeaderText = L"Marca";
			this->Brand->Name = L"Brand";
			this->Brand->ReadOnly = true;
			this->Brand->Width = 60;
			// 
			// Color
			// 
			this->Color->HeaderText = L"Color";
			this->Color->Name = L"Color";
			this->Color->ReadOnly = true;
			this->Color->Width = 60;
			// 
			// Operative
			// 
			this->Operative->HeaderText = L"Estado de Operatividad";
			this->Operative->Name = L"Operative";
			this->Operative->ReadOnly = true;
			this->Operative->Width = 90;
			// 
			// Condition
			// 
			this->Condition->HeaderText = L"Condición";
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
			this->button_exit->Location = System::Drawing::Point(714, 461);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(124, 36);
			this->button_exit->TabIndex = 130;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_exit_Click);
			// 
			// button_update
			// 
			this->button_update->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_update->Location = System::Drawing::Point(689, 293);
			this->button_update->Name = L"button_update";
			this->button_update->Size = System::Drawing::Size(158, 38);
			this->button_update->TabIndex = 125;
			this->button_update->Tag = L"";
			this->button_update->Text = L"Guardar y Actualizar";
			this->button_update->UseVisualStyleBackColor = true;
			this->button_update->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_update_Click);
			// 
			// button_plate
			// 
			this->button_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plate->Location = System::Drawing::Point(227, 68);
			this->button_plate->Name = L"button_plate";
			this->button_plate->Size = System::Drawing::Size(174, 30);
			this->button_plate->TabIndex = 20;
			this->button_plate->Tag = L"";
			this->button_plate->Text = L"BUSCAR";
			this->button_plate->UseVisualStyleBackColor = true;
			this->button_plate->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_plate_Click);
			// 
			// button_insertphoto
			// 
			this->button_insertphoto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_insertphoto->Location = System::Drawing::Point(681, 260);
			this->button_insertphoto->Name = L"button_insertphoto";
			this->button_insertphoto->Size = System::Drawing::Size(174, 30);
			this->button_insertphoto->TabIndex = 120;
			this->button_insertphoto->Tag = L"";
			this->button_insertphoto->Text = L"Cambiar imagen";
			this->button_insertphoto->UseVisualStyleBackColor = true;
			this->button_insertphoto->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_insertphoto_Click);
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Location = System::Drawing::Point(660, 43);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(214, 211);
			this->pb_photo->TabIndex = 146;
			this->pb_photo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(426, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 40);
			this->label1->TabIndex = 137;
			this->label1->Text = L"MIS AUTOS";
			// 
			// comboBox_condition
			// 
			this->comboBox_condition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_condition->FormattingEnabled = true;
			this->comboBox_condition->Location = System::Drawing::Point(117, 197);
			this->comboBox_condition->Name = L"comboBox_condition";
			this->comboBox_condition->Size = System::Drawing::Size(106, 27);
			this->comboBox_condition->TabIndex = 55;
			this->comboBox_condition->Tag = L"";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(37, 201);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 19);
			this->label11->TabIndex = 178;
			this->label11->Text = L"Condición";
			// 
			// comboBox_operative
			// 
			this->comboBox_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_operative->FormattingEnabled = true;
			this->comboBox_operative->Location = System::Drawing::Point(117, 166);
			this->comboBox_operative->Name = L"comboBox_operative";
			this->comboBox_operative->Size = System::Drawing::Size(106, 27);
			this->comboBox_operative->TabIndex = 45;
			this->comboBox_operative->Tag = L"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(24, 160);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 38);
			this->label12->TabIndex = 176;
			this->label12->Text = L"   Estado de\r\nOperatividad";
			// 
			// textBox_color
			// 
			this->textBox_color->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_color->Location = System::Drawing::Point(117, 134);
			this->textBox_color->Name = L"textBox_color";
			this->textBox_color->Size = System::Drawing::Size(104, 26);
			this->textBox_color->TabIndex = 35;
			this->textBox_color->Tag = L"";
			// 
			// textBox_brand
			// 
			this->textBox_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_brand->Location = System::Drawing::Point(117, 101);
			this->textBox_brand->Name = L"textBox_brand";
			this->textBox_brand->Size = System::Drawing::Size(104, 26);
			this->textBox_brand->TabIndex = 25;
			this->textBox_brand->Tag = L"";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(69, 137);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 19);
			this->label15->TabIndex = 169;
			this->label15->Text = L"Color";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(64, 105);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 19);
			this->label16->TabIndex = 167;
			this->label16->Text = L"Marca";
			// 
			// textBox_plate
			// 
			this->textBox_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_plate->Location = System::Drawing::Point(117, 70);
			this->textBox_plate->Name = L"textBox_plate";
			this->textBox_plate->Size = System::Drawing::Size(104, 26);
			this->textBox_plate->TabIndex = 15;
			this->textBox_plate->Tag = L"";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(72, 73);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 19);
			this->label17->TabIndex = 165;
			this->label17->Text = L"Placa";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(89, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(27, 19);
			this->label19->TabIndex = 162;
			this->label19->Text = L"ID";
			// 
			// textBox_tmodel
			// 
			this->textBox_tmodel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tmodel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tmodel->Location = System::Drawing::Point(488, 80);
			this->textBox_tmodel->Name = L"textBox_tmodel";
			this->textBox_tmodel->Size = System::Drawing::Size(147, 26);
			this->textBox_tmodel->TabIndex = 80;
			this->textBox_tmodel->Tag = L"";
			this->textBox_tmodel->Text = L"Modelo de Auto";
			this->textBox_tmodel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tplate
			// 
			this->textBox_tplate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tplate->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tplate->Location = System::Drawing::Point(488, 112);
			this->textBox_tplate->Name = L"textBox_tplate";
			this->textBox_tplate->Size = System::Drawing::Size(147, 26);
			this->textBox_tplate->TabIndex = 85;
			this->textBox_tplate->Tag = L"";
			this->textBox_tplate->Text = L"Placa";
			this->textBox_tplate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tbrand
			// 
			this->textBox_tbrand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tbrand->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tbrand->Location = System::Drawing::Point(488, 144);
			this->textBox_tbrand->Name = L"textBox_tbrand";
			this->textBox_tbrand->Size = System::Drawing::Size(147, 26);
			this->textBox_tbrand->TabIndex = 90;
			this->textBox_tbrand->Tag = L"";
			this->textBox_tbrand->Text = L"Marca";
			this->textBox_tbrand->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tcolor
			// 
			this->textBox_tcolor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tcolor->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tcolor->Location = System::Drawing::Point(488, 176);
			this->textBox_tcolor->Name = L"textBox_tcolor";
			this->textBox_tcolor->Size = System::Drawing::Size(147, 26);
			this->textBox_tcolor->TabIndex = 95;
			this->textBox_tcolor->Tag = L"";
			this->textBox_tcolor->Text = L"Color";
			this->textBox_tcolor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tnumberseats
			// 
			this->textBox_tnumberseats->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tnumberseats->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tnumberseats->Location = System::Drawing::Point(488, 208);
			this->textBox_tnumberseats->Name = L"textBox_tnumberseats";
			this->textBox_tnumberseats->Size = System::Drawing::Size(147, 26);
			this->textBox_tnumberseats->TabIndex = 100;
			this->textBox_tnumberseats->Tag = L"";
			this->textBox_tnumberseats->Text = L"Número de Asientos";
			this->textBox_tnumberseats->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox_tsparetire
			// 
			this->comboBox_tsparetire->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_tsparetire->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox_tsparetire->FormattingEnabled = true;
			this->comboBox_tsparetire->Location = System::Drawing::Point(457, 241);
			this->comboBox_tsparetire->Name = L"comboBox_tsparetire";
			this->comboBox_tsparetire->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox_tsparetire->Size = System::Drawing::Size(178, 27);
			this->comboBox_tsparetire->TabIndex = 105;
			this->comboBox_tsparetire->Tag = L"";
			this->comboBox_tsparetire->Text = L"Llantas de Repuesto";
			// 
			// comboBox_toperative
			// 
			this->comboBox_toperative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_toperative->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox_toperative->FormattingEnabled = true;
			this->comboBox_toperative->Location = System::Drawing::Point(457, 273);
			this->comboBox_toperative->Name = L"comboBox_toperative";
			this->comboBox_toperative->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox_toperative->Size = System::Drawing::Size(178, 27);
			this->comboBox_toperative->TabIndex = 110;
			this->comboBox_toperative->Tag = L"";
			this->comboBox_toperative->Text = L"Estado de Operatividad";
			// 
			// comboBox_tcondition
			// 
			this->comboBox_tcondition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_tcondition->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox_tcondition->FormattingEnabled = true;
			this->comboBox_tcondition->Location = System::Drawing::Point(457, 304);
			this->comboBox_tcondition->Name = L"comboBox_tcondition";
			this->comboBox_tcondition->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox_tcondition->Size = System::Drawing::Size(178, 27);
			this->comboBox_tcondition->TabIndex = 115;
			this->comboBox_tcondition->Tag = L"";
			this->comboBox_tcondition->Text = L"Condición";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(457, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 189);
			this->label2->TabIndex = 188;
			this->label2->Text = L"I\r\nN\r\nF\r\nO\r\nR\r\nM\r\nA\r\nC\r\nI\r\nÓ\r\nN";
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(141, 230);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(186, 30);
			this->button_clearall->TabIndex = 65;
			this->button_clearall->Tag = L"";
			this->button_clearall->Text = L"Limpiar todo y/o Actualizar";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_clearall_Click);
			// 
			// textBox_id
			// 
			this->textBox_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_id->Location = System::Drawing::Point(117, 36);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(104, 26);
			this->textBox_id->TabIndex = 5;
			this->textBox_id->Tag = L"";
			// 
			// button_id
			// 
			this->button_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_id->Location = System::Drawing::Point(227, 35);
			this->button_id->Name = L"button_id";
			this->button_id->Size = System::Drawing::Size(174, 30);
			this->button_id->TabIndex = 10;
			this->button_id->Tag = L"";
			this->button_id->Text = L"BUSCAR";
			this->button_id->UseVisualStyleBackColor = true;
			this->button_id->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_id_Click);
			// 
			// button_brand
			// 
			this->button_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_brand->Location = System::Drawing::Point(227, 99);
			this->button_brand->Name = L"button_brand";
			this->button_brand->Size = System::Drawing::Size(174, 30);
			this->button_brand->TabIndex = 30;
			this->button_brand->Tag = L"";
			this->button_brand->Text = L"BUSCAR";
			this->button_brand->UseVisualStyleBackColor = true;
			this->button_brand->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_brand_Click);
			// 
			// button_color
			// 
			this->button_color->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_color->Location = System::Drawing::Point(226, 132);
			this->button_color->Name = L"button_color";
			this->button_color->Size = System::Drawing::Size(174, 30);
			this->button_color->TabIndex = 40;
			this->button_color->Tag = L"";
			this->button_color->Text = L"BUSCAR";
			this->button_color->UseVisualStyleBackColor = true;
			this->button_color->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_color_Click);
			// 
			// button_operative
			// 
			this->button_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_operative->Location = System::Drawing::Point(226, 166);
			this->button_operative->Name = L"button_operative";
			this->button_operative->Size = System::Drawing::Size(174, 30);
			this->button_operative->TabIndex = 50;
			this->button_operative->Tag = L"";
			this->button_operative->Text = L"BUSCAR";
			this->button_operative->UseVisualStyleBackColor = true;
			this->button_operative->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_operative_Click);
			// 
			// button_condition
			// 
			this->button_condition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_condition->Location = System::Drawing::Point(226, 197);
			this->button_condition->Name = L"button_condition";
			this->button_condition->Size = System::Drawing::Size(174, 30);
			this->button_condition->TabIndex = 60;
			this->button_condition->Tag = L"";
			this->button_condition->Text = L"BUSCAR";
			this->button_condition->UseVisualStyleBackColor = true;
			this->button_condition->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_condition_Click);
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
			this->groupBox2->Location = System::Drawing::Point(8, 31);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(417, 269);
			this->groupBox2->TabIndex = 196;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Criterio de Búsqueda";
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
			// textBox_tid
			// 
			this->textBox_tid->Enabled = false;
			this->textBox_tid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tid->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tid->Location = System::Drawing::Point(488, 48);
			this->textBox_tid->Name = L"textBox_tid";
			this->textBox_tid->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tid->Size = System::Drawing::Size(147, 26);
			this->textBox_tid->TabIndex = 75;
			this->textBox_tid->Tag = L"";
			this->textBox_tid->Text = L"ID";
			this->textBox_tid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_eliminate
			// 
			this->button_eliminate->BackColor = System::Drawing::Color::Orange;
			this->button_eliminate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_eliminate->Location = System::Drawing::Point(583, 387);
			this->button_eliminate->Name = L"button_eliminate";
			this->button_eliminate->Size = System::Drawing::Size(130, 40);
			this->button_eliminate->TabIndex = 197;
			this->button_eliminate->Tag = L"";
			this->button_eliminate->Text = L"ELIMINAR";
			this->button_eliminate->UseVisualStyleBackColor = false;
			this->button_eliminate->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_eliminate_Click);
			// 
			// UserMyCarsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(881, 524);
			this->Controls->Add(this->button_eliminate);
			this->Controls->Add(this->textBox_tid);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox_tcondition);
			this->Controls->Add(this->comboBox_toperative);
			this->Controls->Add(this->comboBox_tsparetire);
			this->Controls->Add(this->textBox_tnumberseats);
			this->Controls->Add(this->textBox_tcolor);
			this->Controls->Add(this->textBox_tbrand);
			this->Controls->Add(this->textBox_tplate);
			this->Controls->Add(this->textBox_tmodel);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_update);
			this->Controls->Add(this->button_insertphoto);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgv_cars);
			this->Name = L"UserMyCarsPage";
			this->Text = L"UserMyCarsPage";
			this->Load += gcnew System::EventHandler(this, &UserMyCarsPage::UserMyCarsPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
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
		void ShowInitialDgvCars() {
			List<Car^>^ cars = Controller::QueryAllCars();
			if (cars->Count != 0) {
				dgv_cars->Rows->Clear();
				for (int i = 0; i < cars->Count; i++) {
					Car^ c = cars[i];
					String^ atributobooleanoYes;
					if (c->Operative == true) {
						atributobooleanoYes = "Operativo";
					}
					else {
						atributobooleanoYes = "Inoperativo";
					}
					dgv_cars->Rows->Add(gcnew array<String^> {
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
				MessageBox::Show("No hay carros disponibles para mostrar");
			}
		}
		void ShowSearchedCar(Car^ c) {
			dgv_cars->Rows->Clear();
			String^ atributobooleanoYes;
				if(c->Operative == true){
					atributobooleanoYes = "Operativo";
				}
				else{
					atributobooleanoYes = "Inoperativo";
				}
				
			dgv_cars->Rows->Add(gcnew array<String^> {
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
			//comboBox_operative->SelectedIndex  = -1;
			//Falta que a la hora de limpiar se elimine el item seleccionando en el combo

		}

		void FillCombos() {
			comboBox_operative->Items->Clear();//parte de una buena práctica...
			comboBox_condition->Items->Clear();
			comboBox_operative->Items->Add("Operativo");
			comboBox_operative->Items->Add("Inoperativo");
			comboBox_condition->Items->Add("Nuevo");
			comboBox_condition->Items->Add("Usado");
			comboBox_condition->Items->Add("Antiguo");
			comboBox_tsparetire->Items->Add("Sí");
			comboBox_tsparetire->Items->Add("No");
			comboBox_toperative->Items->Add("Operativa");
			comboBox_toperative->Items->Add("Inoperativa");
			comboBox_tcondition->Items->Add("Nuevo");
			comboBox_tcondition->Items->Add("Usado");
			comboBox_tcondition->Items->Add("Antiguo");
		}

		void FillCarTextBoxes(Car^ c) {

			textBox_tid->Text = Convert::ToString(c->Id);
			textBox_tmodel->Text = c->CarModel;
			textBox_tplate->Text = c->Plate;
			textBox_tbrand->Text = c->Brand;
			textBox_tcolor->Text = c->Color;
			textBox_tnumberseats->Text = Convert::ToString(c->NumberOfSeats);
			comboBox_tcondition->Text = Convert::ToString(c->Condition);
			String^ sparetire_ = Convert::ToString(c->SpareTire);
				if (sparetire_ == "True") {

					comboBox_tsparetire->Text = "Sí";

				}
				else if (sparetire_ == "False") {

					comboBox_tsparetire->Text = "No";

				}

			String^ operative_ = Convert::ToString(c->Operative);
				if (operative_ == "True") {

					comboBox_toperative->Text = "operativo";

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
			MessageBox::Show("Ingrese el id del carro a buscar");
			return;
		}
		int id = 0;
		if (!Int32::TryParse(tid, id)) {
			MessageBox::Show("El id deben ser dígitos");
			return;
		}

		Car^ c = Controller::QueryCarById(id);
		if (c == nullptr) {
			MessageBox::Show("El id del carro ingresado no existe");
			return;
		}	

		FillCarTextBoxes(c);

		ShowSearchedCar(c);


	}

	private: System::Void button_plate_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tplate = textBox_plate->Text;
		if (String::IsNullOrWhiteSpace(tplate)) {
			MessageBox::Show("Ingrese la placa del carro a buscar");
			return;
		}

		Car^ c = Controller::QueryCarByPlate(tplate);
		if (c == nullptr) {
			MessageBox::Show("La placa del carro ingresado no existe");
			return;
		}

		FillCarTextBoxes(c);

		ShowSearchedCar(c);

	}
	private: System::Void button_brand_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tbrand = textBox_brand->Text;
		if (String::IsNullOrWhiteSpace(tbrand)) {
			MessageBox::Show("Ingrese la marca del carro a buscar");
			return;
		}

		List<Car^>^ cList = Controller::QueryListCarByBrand(tbrand);
		if (cList -> Count < 1) {
			MessageBox::Show("La marca del carro ingresado no existe");
			return;
		}

		FillCarTextBoxes(cList[0]);//por el List<Car^>^

		ShowSearchedCar(cList[0]);

	}
	private: System::Void button_color_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tcolor = textBox_color->Text;
		if (String::IsNullOrWhiteSpace(tcolor)) {
			MessageBox::Show("Ingrese el color del carro a buscar");
			return;
		}

		List<Car^>^ cList = Controller::QueryListCarByColor(tcolor);
		if (cList->Count < 1) {
			MessageBox::Show("Lo color del carro ingresado no existe");
			return;
		}

		FillCarTextBoxes(cList[0]);

		ShowSearchedCar(cList[0]);

	}
	private: System::Void button_operative_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ toperative = comboBox_operative->Text;
		if (String::IsNullOrWhiteSpace(toperative)) {
			MessageBox::Show("Ingrese la operatividad del carro a buscar");
			return;
		}
		bool toperative_bool;
		if (toperative == "Operativo") {
			toperative_bool = true;
		}
		else if (toperative == "Inoperativo") {
			toperative_bool = false;
		}

		List<Car^>^ cList = Controller::QueryListCarByOperative(toperative_bool);
		if (cList -> Count < 1) {
			MessageBox::Show("La operatividad del carro ingresado no existe");
			return;
		}

		FillCarTextBoxes(cList[0]);

		ShowSearchedCar(cList[0]);

	}

	private: System::Void button_condition_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tcondition = comboBox_condition->Text;
		if (String::IsNullOrWhiteSpace(tcondition)) {
			MessageBox::Show("Ingrese la condición del carro a buscar");
			return;
		}

		List<Car^>^ cList = Controller::QueryListCarByCondition(tcondition);
		if (cList->Count < 1) {
			MessageBox::Show("La condición del carro ingresado no existe");
			return;
		}

		FillCarTextBoxes(cList[0]);

		ShowSearchedCar(cList[0]);

	}

	private: System::Void UserMyCarsPage_Load(System::Object^ sender, System::EventArgs^ e) {
		FillCombos();
		ShowInitialDgvCars();
	}

	private: System::Void dgv_cars_RowHeaderMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->RowIndex >= 0 && e->RowIndex < dgv_cars->Rows->Count) {
			DataGridViewRow^ selectedRow = dgv_cars->Rows[e->RowIndex];

			// Verifica si la celda seleccionada tiene datos antes de procesarla
			if (selectedRow->Cells["Id"]->Value != nullptr) {
				ClearTextBoxes();
				// Obtener los datos de id de la fila seleccionada			
				String^ id = selectedRow->Cells["Id"]->Value->ToString();
				if (!String::IsNullOrWhiteSpace(id)) {
					int IdToSearch = Convert::ToInt32(id);
					Car^ c = Controller::QueryCarById(IdToSearch);
					FillCarTextBoxes(c);
				}
			}
		}
	}

	private: System::Void button_clearall_Click(System::Object^ sender, System::EventArgs^ e) {
			
		ShowInitialDgvCars();
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
	private: System::Void button_update_Click(System::Object^ sender, System::EventArgs^ e) {

		Car^ car = gcnew Car();

		String^ _id = textBox_tid->Text;
		String^ carmodel = textBox_tmodel->Text;
		String^ plate = textBox_tplate->Text;
		String^ brand = textBox_tbrand->Text;
		String^ color = textBox_tcolor->Text;
		String^ _numberofseats = textBox_tnumberseats->Text;
		String^ sparetire = comboBox_tsparetire->Text;
		String^ operative = comboBox_toperative->Text;
		String^ condition = comboBox_tcondition->Text;

	

		if (sparetire == "Sí") {

			car->SpareTire = true;

		}
		else if (sparetire == "No") {

			car->SpareTire = false;

		}


		if (operative == "Operativo") {

			car->Operative = true;

		}
		else if (operative == "Inoperativo") {

			car->Operative = false;

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
			
			MessageBox::Show("Si se desea agregar ir a la pestaña 'Agregar Carro'");
			return;
		}

		car->Id = Int32::Parse(textBox_tid->Text);
		car->NumberOfSeats = numberofseats;
		car->Color = color;
		car->CarModel = carmodel;
		car->Brand = brand;
		car->Plate = plate;
		car->Condition = condition;

		if (pb_photo->Image != nullptr) {

			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pb_photo->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			car->Photo = ms->ToArray();
			ms->Close();
		}

		Controller::UpdateCar(car);
		MessageBox::Show("¡Se actualizó correctamente!");

	}
	private: System::Void button_eliminate_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Int32::Parse(textBox_id->Text);
		Controller::DeleteCar(id);

	}
};
}
