#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_exit;

	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button1_search;

	private: System::Windows::Forms::Button^ button_insertphoto;










	private: System::Windows::Forms::PictureBox^ pb_photo;






	private: System::Windows::Forms::TextBox^ textBox_id;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox_conditionmycars;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox_operativemycars;

	private: System::Windows::Forms::Label^ label12;





	private: System::Windows::Forms::TextBox^ textBox_colormycars;

	private: System::Windows::Forms::TextBox^ textBox_brandmycard;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox_platemycars;

	private: System::Windows::Forms::Label^ label17;








	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_clearall;

	private: System::Windows::Forms::TextBox^ textBox_idmycars;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_logout;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button1_search = (gcnew System::Windows::Forms::Button());
			this->button_insertphoto = (gcnew System::Windows::Forms::Button());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_conditionmycars = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox_operativemycars = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_colormycars = (gcnew System::Windows::Forms::TextBox());
			this->textBox_brandmycard = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox_platemycars = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->textBox_idmycars = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Plate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Operative = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Condition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->Plate,
					this->Brand, this->Color, this->Operative, this->Condition
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 337);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(433, 181);
			this->dataGridView1->TabIndex = 110;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(605, 413);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(124, 36);
			this->button_exit->TabIndex = 115;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &UserMyCarsPage::button_exit_Click);
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(689, 293);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(158, 38);
			this->button_add->TabIndex = 105;
			this->button_add->Tag = L"";
			this->button_add->Text = L"Guardar y Actualizar";
			this->button_add->UseVisualStyleBackColor = true;
			// 
			// button1_search
			// 
			this->button1_search->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_search->Location = System::Drawing::Point(227, 68);
			this->button1_search->Name = L"button1_search";
			this->button1_search->Size = System::Drawing::Size(174, 30);
			this->button1_search->TabIndex = 50;
			this->button1_search->Tag = L"";
			this->button1_search->Text = L"BUSCAR";
			this->button1_search->UseVisualStyleBackColor = true;
			// 
			// button_insertphoto
			// 
			this->button_insertphoto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_insertphoto->Location = System::Drawing::Point(681, 260);
			this->button_insertphoto->Name = L"button_insertphoto";
			this->button_insertphoto->Size = System::Drawing::Size(174, 30);
			this->button_insertphoto->TabIndex = 100;
			this->button_insertphoto->Tag = L"";
			this->button_insertphoto->Text = L"Cambiar imagen";
			this->button_insertphoto->UseVisualStyleBackColor = true;
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
			// textBox_id
			// 
			this->textBox_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_id->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_id->Location = System::Drawing::Point(488, 49);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(147, 26);
			this->textBox_id->TabIndex = 55;
			this->textBox_id->Tag = L"";
			this->textBox_id->Text = L"ID";
			this->textBox_id->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// comboBox_conditionmycars
			// 
			this->comboBox_conditionmycars->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox_conditionmycars->FormattingEnabled = true;
			this->comboBox_conditionmycars->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nuevo", L"Usado", L"Antiguo" });
			this->comboBox_conditionmycars->Location = System::Drawing::Point(117, 197);
			this->comboBox_conditionmycars->Name = L"comboBox_conditionmycars";
			this->comboBox_conditionmycars->Size = System::Drawing::Size(106, 27);
			this->comboBox_conditionmycars->TabIndex = 40;
			this->comboBox_conditionmycars->Tag = L"";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(37, 201);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 17);
			this->label11->TabIndex = 178;
			this->label11->Text = L"Condición";
			// 
			// comboBox_operativemycars
			// 
			this->comboBox_operativemycars->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox_operativemycars->FormattingEnabled = true;
			this->comboBox_operativemycars->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Operativo", L"Inoperativo" });
			this->comboBox_operativemycars->Location = System::Drawing::Point(117, 166);
			this->comboBox_operativemycars->Name = L"comboBox_operativemycars";
			this->comboBox_operativemycars->Size = System::Drawing::Size(106, 27);
			this->comboBox_operativemycars->TabIndex = 35;
			this->comboBox_operativemycars->Tag = L"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(24, 161);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 34);
			this->label12->TabIndex = 176;
			this->label12->Text = L"   Estado de\r\nOperatividad";
			// 
			// textBox_colormycars
			// 
			this->textBox_colormycars->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_colormycars->Location = System::Drawing::Point(117, 134);
			this->textBox_colormycars->Name = L"textBox_colormycars";
			this->textBox_colormycars->Size = System::Drawing::Size(104, 26);
			this->textBox_colormycars->TabIndex = 25;
			this->textBox_colormycars->Tag = L"";
			// 
			// textBox_brandmycard
			// 
			this->textBox_brandmycard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_brandmycard->Location = System::Drawing::Point(117, 101);
			this->textBox_brandmycard->Name = L"textBox_brandmycard";
			this->textBox_brandmycard->Size = System::Drawing::Size(104, 26);
			this->textBox_brandmycard->TabIndex = 20;
			this->textBox_brandmycard->Tag = L"";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(69, 138);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 17);
			this->label15->TabIndex = 169;
			this->label15->Text = L"Color";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(64, 106);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 17);
			this->label16->TabIndex = 167;
			this->label16->Text = L"Marca";
			// 
			// textBox_platemycars
			// 
			this->textBox_platemycars->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_platemycars->Location = System::Drawing::Point(117, 70);
			this->textBox_platemycars->Name = L"textBox_platemycars";
			this->textBox_platemycars->Size = System::Drawing::Size(104, 26);
			this->textBox_platemycars->TabIndex = 15;
			this->textBox_platemycars->Tag = L"";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(72, 74);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(42, 17);
			this->label17->TabIndex = 165;
			this->label17->Text = L"Placa";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(89, 40);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(25, 17);
			this->label19->TabIndex = 162;
			this->label19->Text = L"ID";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox7->Location = System::Drawing::Point(488, 81);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(147, 26);
			this->textBox7->TabIndex = 60;
			this->textBox7->Tag = L"";
			this->textBox7->Text = L"Modelo de Auto";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox8->Location = System::Drawing::Point(488, 113);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(147, 26);
			this->textBox8->TabIndex = 65;
			this->textBox8->Tag = L"";
			this->textBox8->Text = L"Placa";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox9->Location = System::Drawing::Point(488, 145);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(147, 26);
			this->textBox9->TabIndex = 70;
			this->textBox9->Tag = L"";
			this->textBox9->Text = L"Marca";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox10->Location = System::Drawing::Point(488, 177);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(147, 26);
			this->textBox10->TabIndex = 75;
			this->textBox10->Tag = L"";
			this->textBox10->Text = L"Color";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox11->Location = System::Drawing::Point(488, 209);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(147, 26);
			this->textBox11->TabIndex = 80;
			this->textBox11->Tag = L"";
			this->textBox11->Text = L"Número de Asientos";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Sí", L"No" });
			this->comboBox4->Location = System::Drawing::Point(457, 241);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox4->Size = System::Drawing::Size(178, 27);
			this->comboBox4->TabIndex = 85;
			this->comboBox4->Tag = L"";
			this->comboBox4->Text = L"Llantas de Repuesto";
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Sí", L"No" });
			this->comboBox5->Location = System::Drawing::Point(457, 273);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox5->Size = System::Drawing::Size(178, 27);
			this->comboBox5->TabIndex = 90;
			this->comboBox5->Tag = L"";
			this->comboBox5->Text = L"Estado de Operatividad";
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->ForeColor = System::Drawing::SystemColors::GrayText;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Sí", L"No" });
			this->comboBox6->Location = System::Drawing::Point(457, 304);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox6->Size = System::Drawing::Size(178, 27);
			this->comboBox6->TabIndex = 95;
			this->comboBox6->Tag = L"";
			this->comboBox6->Text = L"Condición";
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
			this->button_clearall->Location = System::Drawing::Point(131, 233);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(174, 30);
			this->button_clearall->TabIndex = 45;
			this->button_clearall->Tag = L"";
			this->button_clearall->Text = L"Limpiar todo";
			this->button_clearall->UseVisualStyleBackColor = true;
			// 
			// textBox_idmycars
			// 
			this->textBox_idmycars->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_idmycars->Location = System::Drawing::Point(117, 36);
			this->textBox_idmycars->Name = L"textBox_idmycars";
			this->textBox_idmycars->Size = System::Drawing::Size(104, 26);
			this->textBox_idmycars->TabIndex = 5;
			this->textBox_idmycars->Tag = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(227, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 30);
			this->button1->TabIndex = 191;
			this->button1->Tag = L"";
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(227, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 30);
			this->button2->TabIndex = 192;
			this->button2->Tag = L"";
			this->button2->Text = L"BUSCAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(226, 132);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 30);
			this->button3->TabIndex = 193;
			this->button3->Tag = L"";
			this->button3->Text = L"BUSCAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(226, 166);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 30);
			this->button4->TabIndex = 194;
			this->button4->Tag = L"";
			this->button4->Text = L"BUSCAR";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(226, 197);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(174, 30);
			this->button5->TabIndex = 195;
			this->button5->Tag = L"";
			this->button5->Text = L"BUSCAR";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->button_logout);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button1_search);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox_idmycars);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->textBox_platemycars);
			this->groupBox2->Controls->Add(this->button_clearall);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->textBox_brandmycard);
			this->groupBox2->Controls->Add(this->textBox_colormycars);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->comboBox_operativemycars);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->comboBox_conditionmycars);
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
			// UserMyCarsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(881, 524);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_insertphoto);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->textBox_id);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"UserMyCarsPage";
			this->Text = L"UserMyCarsPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();

}
};
}
