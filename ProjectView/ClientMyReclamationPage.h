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
	/// Resumen de ClientMyReclamationPage
	/// </summary>
	public ref class ClientMyReclamationPage : public System::Windows::Forms::Form
	{
	public:
		ClientMyReclamationPage(void)
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
		~ClientMyReclamationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_status;

	private: System::Windows::Forms::ComboBox^ comboBox_status;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button_tittle;

	private: System::Windows::Forms::Button^ button_cattegory;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button_date;

	private: System::Windows::Forms::TextBox^ textBox_t;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox_type;
	private: System::Windows::Forms::ComboBox^ comboBox_category;


	private: System::Windows::Forms::DataGridView^ dgv_reclamation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Category;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ State;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SystemDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::TextBox^ textBox_carmodel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dtp_emisiondate;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox_tid;
	private: System::Windows::Forms::TextBox^ textBox_tstate;
	private: System::Windows::Forms::DateTimePicker^ dtp_msgdate;
	private: System::Windows::Forms::TextBox^ textBox_tcategory;
	private: System::Windows::Forms::TextBox^ textBox_ttype;
	private: System::Windows::Forms::TextBox^ textBox_tdescription;
	private: System::Windows::Forms::TextBox^ textBox_ttitle;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_eliminate;
	private: System::Windows::Forms::Button^ button_exit;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_status = (gcnew System::Windows::Forms::Button());
			this->comboBox_status = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button_tittle = (gcnew System::Windows::Forms::Button());
			this->button_cattegory = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button_date = (gcnew System::Windows::Forms::Button());
			this->textBox_t = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox_type = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_category = (gcnew System::Windows::Forms::ComboBox());
			this->dgv_reclamation = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->State = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SystemDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox_carmodel = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtp_emisiondate = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_tid = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tstate = (gcnew System::Windows::Forms::TextBox());
			this->dtp_msgdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox_tcategory = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ttype = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tdescription = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ttitle = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_eliminate = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_reclamation))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(348, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 31);
			this->label1->TabIndex = 233;
			this->label1->Text = L"MIS CONSULTAS";
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->button_status);
			this->groupBox2->Controls->Add(this->comboBox_status);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button_tittle);
			this->groupBox2->Controls->Add(this->button_cattegory);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button_date);
			this->groupBox2->Controls->Add(this->textBox_t);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->comboBox_type);
			this->groupBox2->Controls->Add(this->comboBox_category);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(21, 47);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(396, 188);
			this->groupBox2->TabIndex = 235;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Búsqueda";
			// 
			// button_status
			// 
			this->button_status->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_status->Location = System::Drawing::Point(203, 89);
			this->button_status->Name = L"button_status";
			this->button_status->Size = System::Drawing::Size(79, 30);
			this->button_status->TabIndex = 25;
			this->button_status->Tag = L"";
			this->button_status->Text = L"BUSCAR";
			this->button_status->UseVisualStyleBackColor = true;
			this->button_status->Click += gcnew System::EventHandler(this, &ClientMyReclamationPage::button_status_Click);
			// 
			// comboBox_status
			// 
			this->comboBox_status->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_status->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_status->FormattingEnabled = true;
			this->comboBox_status->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"En proceso", L"Revisado" });
			this->comboBox_status->Location = System::Drawing::Point(91, 91);
			this->comboBox_status->Name = L"comboBox_status";
			this->comboBox_status->Size = System::Drawing::Size(106, 27);
			this->comboBox_status->TabIndex = 20;
			this->comboBox_status->Tag = L"40";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 19);
			this->label6->TabIndex = 216;
			this->label6->Text = L"Estado";
			// 
			// button_tittle
			// 
			this->button_tittle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_tittle->Location = System::Drawing::Point(297, 153);
			this->button_tittle->Name = L"button_tittle";
			this->button_tittle->Size = System::Drawing::Size(91, 30);
			this->button_tittle->TabIndex = 45;
			this->button_tittle->Tag = L"";
			this->button_tittle->Text = L"BUSCAR";
			this->button_tittle->UseVisualStyleBackColor = true;
			this->button_tittle->Click += gcnew System::EventHandler(this, &ClientMyReclamationPage::button_tittle_Click);
			// 
			// button_cattegory
			// 
			this->button_cattegory->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cattegory->Location = System::Drawing::Point(203, 55);
			this->button_cattegory->Name = L"button_cattegory";
			this->button_cattegory->Size = System::Drawing::Size(79, 30);
			this->button_cattegory->TabIndex = 15;
			this->button_cattegory->Tag = L"";
			this->button_cattegory->Text = L"BUSCAR";
			this->button_cattegory->UseVisualStyleBackColor = true;
			this->button_cattegory->Click += gcnew System::EventHandler(this, &ClientMyReclamationPage::button_cattegory_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(285, 22);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 97);
			this->button4->TabIndex = 186;
			this->button4->Tag = L"";
			this->button4->Text = L"Limpiar \r\ntodo y Actualizar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ClientMyReclamationPage::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(203, 22);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 30);
			this->button5->TabIndex = 5;
			this->button5->Tag = L"";
			this->button5->Text = L"BUSCAR";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ClientMyReclamationPage::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(5, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 19);
			this->label7->TabIndex = 198;
			this->label7->Text = L"Tipo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(7, 159);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 19);
			this->label8->TabIndex = 199;
			this->label8->Text = L"Título";
			// 
			// button_date
			// 
			this->button_date->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_date->Location = System::Drawing::Point(297, 120);
			this->button_date->Name = L"button_date";
			this->button_date->Size = System::Drawing::Size(91, 30);
			this->button_date->TabIndex = 35;
			this->button_date->Tag = L"";
			this->button_date->Text = L"BUSCAR";
			this->button_date->UseVisualStyleBackColor = true;
			this->button_date->Click += gcnew System::EventHandler(this, &ClientMyReclamationPage::button_date_Click);
			// 
			// textBox_t
			// 
			this->textBox_t->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_t->Location = System::Drawing::Point(60, 156);
			this->textBox_t->Name = L"textBox_t";
			this->textBox_t->Size = System::Drawing::Size(231, 26);
			this->textBox_t->TabIndex = 40;
			this->textBox_t->Tag = L"15";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarForeColor = System::Drawing::SystemColors::ControlLight;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::ControlLight;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::ControlLight;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::SystemColors::ControlLight;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlLight;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker1->Location = System::Drawing::Point(60, 122);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(231, 26);
			this->dateTimePicker1->TabIndex = 30;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(5, 62);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 19);
			this->label9->TabIndex = 201;
			this->label9->Text = L"Categoría";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(7, 128);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 19);
			this->label11->TabIndex = 210;
			this->label11->Text = L"Fecha";
			// 
			// comboBox_type
			// 
			this->comboBox_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_type->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_type->FormattingEnabled = true;
			this->comboBox_type->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"AYUDA", L"RECLAMO", L"SUGERENCIA", L"QUEJA" });
			this->comboBox_type->Location = System::Drawing::Point(91, 25);
			this->comboBox_type->Name = L"comboBox_type";
			this->comboBox_type->Size = System::Drawing::Size(106, 27);
			this->comboBox_type->TabIndex = 0;
			this->comboBox_type->Tag = L"0";
			// 
			// comboBox_category
			// 
			this->comboBox_category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_category->FormattingEnabled = true;
			this->comboBox_category->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Leve o Crítico", L"Moderado o Urgente",
					L"Grave o Emergente"
			});
			this->comboBox_category->Location = System::Drawing::Point(91, 56);
			this->comboBox_category->Name = L"comboBox_category";
			this->comboBox_category->Size = System::Drawing::Size(106, 27);
			this->comboBox_category->TabIndex = 10;
			this->comboBox_category->Tag = L"10";
			// 
			// dgv_reclamation
			// 
			this->dgv_reclamation->AllowUserToAddRows = false;
			this->dgv_reclamation->AllowUserToDeleteRows = false;
			this->dgv_reclamation->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_reclamation->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->Type,
					this->Category, this->State, this->SystemDate, this->Title
			});
			this->dgv_reclamation->Location = System::Drawing::Point(21, 255);
			this->dgv_reclamation->Name = L"dgv_reclamation";
			this->dgv_reclamation->ReadOnly = true;
			this->dgv_reclamation->RowHeadersWidth = 51;
			this->dgv_reclamation->Size = System::Drawing::Size(396, 179);
			this->dgv_reclamation->TabIndex = 236;
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 30;
			// 
			// Type
			// 
			this->Type->HeaderText = L"Tipo";
			this->Type->MinimumWidth = 6;
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			this->Type->Width = 60;
			// 
			// Category
			// 
			this->Category->HeaderText = L"Categoría";
			this->Category->MinimumWidth = 6;
			this->Category->Name = L"Category";
			this->Category->ReadOnly = true;
			this->Category->Width = 60;
			// 
			// State
			// 
			this->State->HeaderText = L"Estado";
			this->State->MinimumWidth = 6;
			this->State->Name = L"State";
			this->State->ReadOnly = true;
			this->State->Width = 60;
			// 
			// SystemDate
			// 
			this->SystemDate->HeaderText = L"Fecha";
			this->SystemDate->MinimumWidth = 6;
			this->SystemDate->Name = L"SystemDate";
			this->SystemDate->ReadOnly = true;
			this->SystemDate->Width = 90;
			// 
			// Title
			// 
			this->Title->HeaderText = L"Título";
			this->Title->MinimumWidth = 6;
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			this->Title->Width = 90;
			// 
			// textBox_carmodel
			// 
			this->textBox_carmodel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox_carmodel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_carmodel->Location = System::Drawing::Point(8, 22);
			this->textBox_carmodel->Multiline = true;
			this->textBox_carmodel->Name = L"textBox_carmodel";
			this->textBox_carmodel->Size = System::Drawing::Size(415, 317);
			this->textBox_carmodel->TabIndex = 206;
			this->textBox_carmodel->Tag = L"10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 19);
			this->label2->TabIndex = 203;
			this->label2->Text = L"Fecha de Emisión";
			// 
			// dtp_emisiondate
			// 
			this->dtp_emisiondate->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_emisiondate->CalendarForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_emisiondate->CalendarMonthBackground = System::Drawing::SystemColors::ControlLight;
			this->dtp_emisiondate->CalendarTitleBackColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_emisiondate->CalendarTitleForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_emisiondate->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_emisiondate->Enabled = false;
			this->dtp_emisiondate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_emisiondate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtp_emisiondate->Location = System::Drawing::Point(171, 344);
			this->dtp_emisiondate->Name = L"dtp_emisiondate";
			this->dtp_emisiondate->Size = System::Drawing::Size(252, 26);
			this->dtp_emisiondate->TabIndex = 205;
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->textBox_carmodel);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->dtp_emisiondate);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(473, 47);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(428, 375);
			this->groupBox1->TabIndex = 237;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Retroalimentación";
			// 
			// textBox_tid
			// 
			this->textBox_tid->Enabled = false;
			this->textBox_tid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tid->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tid->Location = System::Drawing::Point(272, 470);
			this->textBox_tid->Name = L"textBox_tid";
			this->textBox_tid->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tid->Size = System::Drawing::Size(62, 26);
			this->textBox_tid->TabIndex = 238;
			this->textBox_tid->Tag = L"";
			this->textBox_tid->Text = L"ID";
			this->textBox_tid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tstate
			// 
			this->textBox_tstate->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox_tstate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_tstate->Enabled = false;
			this->textBox_tstate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic));
			this->textBox_tstate->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_tstate->Location = System::Drawing::Point(272, 655);
			this->textBox_tstate->Name = L"textBox_tstate";
			this->textBox_tstate->Size = System::Drawing::Size(104, 26);
			this->textBox_tstate->TabIndex = 243;
			this->textBox_tstate->Tag = L"30";
			this->textBox_tstate->Text = L"Estado";
			this->textBox_tstate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dtp_msgdate
			// 
			this->dtp_msgdate->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_msgdate->CalendarForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_msgdate->CalendarMonthBackground = System::Drawing::SystemColors::ControlLight;
			this->dtp_msgdate->CalendarTitleBackColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_msgdate->CalendarTitleForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_msgdate->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_msgdate->Enabled = false;
			this->dtp_msgdate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_msgdate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtp_msgdate->Location = System::Drawing::Point(412, 655);
			this->dtp_msgdate->Name = L"dtp_msgdate";
			this->dtp_msgdate->Size = System::Drawing::Size(246, 26);
			this->dtp_msgdate->TabIndex = 244;
			// 
			// textBox_tcategory
			// 
			this->textBox_tcategory->Enabled = false;
			this->textBox_tcategory->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tcategory->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tcategory->Location = System::Drawing::Point(511, 502);
			this->textBox_tcategory->Name = L"textBox_tcategory";
			this->textBox_tcategory->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tcategory->Size = System::Drawing::Size(147, 26);
			this->textBox_tcategory->TabIndex = 241;
			this->textBox_tcategory->Tag = L"";
			this->textBox_tcategory->Text = L"Categoría";
			this->textBox_tcategory->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_ttype
			// 
			this->textBox_ttype->Enabled = false;
			this->textBox_ttype->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_ttype->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_ttype->Location = System::Drawing::Point(272, 502);
			this->textBox_ttype->Name = L"textBox_ttype";
			this->textBox_ttype->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_ttype->Size = System::Drawing::Size(147, 26);
			this->textBox_ttype->TabIndex = 240;
			this->textBox_ttype->Tag = L"";
			this->textBox_ttype->Text = L"Tipo";
			this->textBox_ttype->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tdescription
			// 
			this->textBox_tdescription->Enabled = false;
			this->textBox_tdescription->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tdescription->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tdescription->Location = System::Drawing::Point(272, 534);
			this->textBox_tdescription->Multiline = true;
			this->textBox_tdescription->Name = L"textBox_tdescription";
			this->textBox_tdescription->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tdescription->Size = System::Drawing::Size(386, 115);
			this->textBox_tdescription->TabIndex = 242;
			this->textBox_tdescription->Tag = L"";
			this->textBox_tdescription->Text = L"Mensaje";
			this->textBox_tdescription->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_ttitle
			// 
			this->textBox_ttitle->Enabled = false;
			this->textBox_ttitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_ttitle->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_ttitle->Location = System::Drawing::Point(353, 470);
			this->textBox_ttitle->Name = L"textBox_ttitle";
			this->textBox_ttitle->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_ttitle->Size = System::Drawing::Size(304, 26);
			this->textBox_ttitle->TabIndex = 239;
			this->textBox_ttitle->Tag = L"";
			this->textBox_ttitle->Text = L"Título";
			this->textBox_ttitle->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(214, 470);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 206);
			this->label3->TabIndex = 247;
			this->label3->Text = L"H   \r\nI     \r\nS    R\r\nT    E\r\nO   C\r\nR    L\r\nI     A\r\nA   M\r\nL    O\r\n      \r\nD\r\nE"
				L"";
			// 
			// button_eliminate
			// 
			this->button_eliminate->BackColor = System::Drawing::Color::Orange;
			this->button_eliminate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_eliminate->Location = System::Drawing::Point(46, 563);
			this->button_eliminate->Name = L"button_eliminate";
			this->button_eliminate->Size = System::Drawing::Size(130, 40);
			this->button_eliminate->TabIndex = 245;
			this->button_eliminate->Tag = L"";
			this->button_eliminate->Text = L"ELIMINAR";
			this->button_eliminate->UseVisualStyleBackColor = false;
			this->button_eliminate->Click += gcnew System::EventHandler(this, &ClientMyReclamationPage::button_eliminate_Click);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(716, 565);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(124, 36);
			this->button_exit->TabIndex = 246;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &ClientMyReclamationPage::button_exit_Click);
			// 
			// ClientMyReclamationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(952, 726);
			this->Controls->Add(this->textBox_tid);
			this->Controls->Add(this->textBox_tstate);
			this->Controls->Add(this->dtp_msgdate);
			this->Controls->Add(this->textBox_tcategory);
			this->Controls->Add(this->textBox_ttype);
			this->Controls->Add(this->textBox_tdescription);
			this->Controls->Add(this->textBox_ttitle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button_eliminate);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dgv_reclamation);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ClientMyReclamationPage";
			this->Text = L"ClientMyReclamationPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ClientMyReclamationPage::ClientMyReclamationPage_FormClosed);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_reclamation))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private:

		void ShowInitialDgvReclamation() {
			List<Reclamation^>^ reclamations = Controller::QueryAllReclamations();
			if (reclamations != nullptr) {
				dgv_reclamation->Rows->Clear();
				for (int i = 0; i < reclamations->Count; i++) {
					Reclamation^ c = reclamations[i];

					dgv_reclamation->Rows->Add(gcnew array<String^> {
						"" + c->Id,
							"" + c->Type,
							"" + c->Category,
							"" + c->State,
							"" + c->SystemDate,
							"" + c->Title,
					});
				}
					}
				else {
					MessageBox::Show("No hay reclamos disponibles para mostrar");
					}
				}


		void ShowSearchedReclamation(Reclamation^ c) {
			dgv_reclamation->Rows->Clear();
			dgv_reclamation->Rows->Add(gcnew array<String^> {
				"" + c->Id,
					"" + c->Type,
					"" + c->Category,
					"" + c->State,
					"" + c->SystemDate,
					"" + c->Title,
			});
		}


		void FillReclamationTextBoxes(Reclamation^ c) {

			textBox_tid->Text = Convert::ToString(c->Id);
			textBox_ttitle->Text = c->Title;
			textBox_ttype->Text = c->Type;
			textBox_tcategory->Text = c->Category;
			textBox_tdescription->Text = c->Description;
			textBox_tstate->Text = c->State;
			dtp_msgdate->Value = c->SystemDate;

		}


				void ClearTextBoxes() {
			//función para limpiar todas las textboxes
			/*comboBox_type->Items->Clear();
			comboBox_category->Items->Clear();
			comboBox_status->Items->Clear();*/
			textBox_t->Clear();

			textBox_tid->Clear();
			textBox_ttitle->Clear();
			textBox_ttype->Clear();
			textBox_tcategory->Clear();
			textBox_tdescription->Clear();
			textBox_tstate->Clear();
		}
	private: System::Void ClientMyReclamationPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button_eliminate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tid = textBox_tid->Text;
	if (String::IsNullOrWhiteSpace(tid)) {
		MessageBox::Show("No se ingresó ningún tipo de dato.\nPara eliminar un vehículo,\nse debe unicamente ingresar el ID\nde la zona de Criterio de Busqueda.");
		return;
	}

	int id = Int32::Parse(tid);
	Controller::DeleteReclamation(id);
	ClearTextBoxes();
	textBox_tid->Text = "ID";
	textBox_ttitle->Text = "Título";
	textBox_ttype->Text = "Tipo";
	textBox_tcategory->Text = "Categoría";
	textBox_tdescription->Text = "Mensaje";
	textBox_tstate->Text = "Estado";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	ShowInitialDgvReclamation();
	ClearTextBoxes();
	textBox_tid->Text = "ID";
	textBox_ttitle->Text = "Título";
	textBox_ttype->Text = "Tipo";
	textBox_tcategory->Text = "Categoría";
	textBox_tdescription->Text = "Mensaje";
	textBox_tstate->Text = "Estado";

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ ttype = comboBox_type->Text;
	if (String::IsNullOrWhiteSpace(ttype)) {
		MessageBox::Show("Ingrese el tipo de reclamo a buscar");
		return;
	}

	List<Reclamation^>^ cList = Controller::QueryListReclamationByType(ttype);
	if (cList->Count < 1) {
		MessageBox::Show("El tipo de reclamo ingresado no existe");
		return;
	}

	ShowSearchedReclamation(cList[0]);
	FillReclamationTextBoxes(cList[0]);
}
private: System::Void button_cattegory_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ tcategory = comboBox_category->Text;

	if (String::IsNullOrWhiteSpace(tcategory)) {
		MessageBox::Show("Ingrese el categoría de reclamo a buscar");
		return;
	}

	List<Reclamation^>^ cList = Controller::QueryListReclamationByCategory(tcategory);
	if (cList->Count < 1) {
		MessageBox::Show("El categoría de reclamo ingresado no existe");
		return;
	}

	ShowSearchedReclamation(cList[0]);
	FillReclamationTextBoxes(cList[0]);
}
private: System::Void button_status_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ tstate = comboBox_status->Text;

	if (String::IsNullOrWhiteSpace(tstate)) {
		MessageBox::Show("Ingrese el estado del reclamo a buscar");
		return;
	}

	List<Reclamation^>^ cList = Controller::QueryListReclamationByState(tstate);
	if (cList->Count < 1) {
		MessageBox::Show("El estado del reclamo ingresado no existe");
		return;
	}

	ShowSearchedReclamation(cList[0]);
	FillReclamationTextBoxes(cList[0]);
}
private: System::Void button_tittle_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ ttitle = textBox_t->Text;
	if (String::IsNullOrWhiteSpace(ttitle)) {
		MessageBox::Show("Ingrese el título del reclama a buscar");
		return;
	}

	Reclamation^ c = Controller::QueryReclamationByTitle(ttitle);
	if (c == nullptr) {
		MessageBox::Show("El título del reclama no existe");
		return;
	}

	ShowSearchedReclamation(c);
	FillReclamationTextBoxes(c);
}
private: System::Void button_date_Click(System::Object^ sender, System::EventArgs^ e) {

	DateTime tsystemdate = dateTimePicker1->Value;


	List<Reclamation^>^ cList = Controller::QueryListReclamationByDate(tsystemdate);
	if (cList->Count < 1) {
		MessageBox::Show("La fecha del reclamo ingresado no existe");
		return;
	}

	ShowSearchedReclamation(cList[0]);
	FillReclamationTextBoxes(cList[0]);
}
	private: System::Void ClientMyReclamationPage_Load(System::Object^ sender, System::EventArgs^ e) {

		ShowInitialDgvReclamation();

	}

};
}
