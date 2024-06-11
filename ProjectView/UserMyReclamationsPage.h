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
	/// Resumen de UserMyReclamationsPage
	/// </summary>
	public ref class UserMyReclamationsPage : public System::Windows::Forms::Form
	{
	public:
		UserMyReclamationsPage(void)
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
		~UserMyReclamationsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_tid;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox_status;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SystemDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ State;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Category;
	private: System::Windows::Forms::TextBox^ textBox_tstate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DateTimePicker^ dtp_msgdate;
	private: System::Windows::Forms::TextBox^ textBox_tcategory;
	private: System::Windows::Forms::TextBox^ textBox_ttype;
	private: System::Windows::Forms::TextBox^ textBox_tdescription;
	private: System::Windows::Forms::TextBox^ textBox_ttitle;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dgv_reclamation;
	private: System::Windows::Forms::Button^ button_status;
	private: System::Windows::Forms::Button^ button_eliminate;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_title;
	private: System::Windows::Forms::Button^ button_category;
	private: System::Windows::Forms::Button^ button_clearall;
	private: System::Windows::Forms::Button^ button_type;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button_date;
	private: System::Windows::Forms::TextBox^ textBox_title;
	private: System::Windows::Forms::DateTimePicker^ dtp_date;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox_type;
	private: System::Windows::Forms::ComboBox^ comboBox_category;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dtp_emisiondate;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox_carmodel;
	private: System::Windows::Forms::Label^ label1;

	protected:







































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
			this->textBox_tid = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_status = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SystemDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->State = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox_tstate = (gcnew System::Windows::Forms::TextBox());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dtp_msgdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox_tcategory = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ttype = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tdescription = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ttitle = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dgv_reclamation = (gcnew System::Windows::Forms::DataGridView());
			this->button_status = (gcnew System::Windows::Forms::Button());
			this->button_eliminate = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_title = (gcnew System::Windows::Forms::Button());
			this->button_category = (gcnew System::Windows::Forms::Button());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->button_type = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_date = (gcnew System::Windows::Forms::Button());
			this->textBox_title = (gcnew System::Windows::Forms::TextBox());
			this->dtp_date = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox_type = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_category = (gcnew System::Windows::Forms::ComboBox());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dtp_emisiondate = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_carmodel = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_reclamation))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_tid
			// 
			this->textBox_tid->Enabled = false;
			this->textBox_tid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tid->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tid->Location = System::Drawing::Point(372, 546);
			this->textBox_tid->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tid->Name = L"textBox_tid";
			this->textBox_tid->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tid->Size = System::Drawing::Size(81, 30);
			this->textBox_tid->TabIndex = 223;
			this->textBox_tid->Tag = L"";
			this->textBox_tid->Text = L"ID";
			this->textBox_tid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox_status
			// 
			this->comboBox_status->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_status->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_status->FormattingEnabled = true;
			this->comboBox_status->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"En proceso", L"Revisado" });
			this->comboBox_status->Location = System::Drawing::Point(121, 112);
			this->comboBox_status->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_status->Name = L"comboBox_status";
			this->comboBox_status->Size = System::Drawing::Size(140, 30);
			this->comboBox_status->TabIndex = 20;
			this->comboBox_status->Tag = L"40";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 117);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 23);
			this->label5->TabIndex = 216;
			this->label5->Text = L"Estado";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(7, 76);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 23);
			this->label10->TabIndex = 201;
			this->label10->Text = L"Categoría";
			// 
			// Title
			// 
			this->Title->HeaderText = L"Título";
			this->Title->MinimumWidth = 6;
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			this->Title->Width = 90;
			// 
			// SystemDate
			// 
			this->SystemDate->HeaderText = L"Fecha";
			this->SystemDate->MinimumWidth = 6;
			this->SystemDate->Name = L"SystemDate";
			this->SystemDate->ReadOnly = true;
			this->SystemDate->Width = 90;
			// 
			// State
			// 
			this->State->HeaderText = L"Estado";
			this->State->MinimumWidth = 6;
			this->State->Name = L"State";
			this->State->ReadOnly = true;
			this->State->Width = 60;
			// 
			// Category
			// 
			this->Category->HeaderText = L"Categoría";
			this->Category->MinimumWidth = 6;
			this->Category->Name = L"Category";
			this->Category->ReadOnly = true;
			this->Category->Width = 60;
			// 
			// textBox_tstate
			// 
			this->textBox_tstate->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox_tstate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_tstate->Enabled = false;
			this->textBox_tstate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic));
			this->textBox_tstate->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_tstate->Location = System::Drawing::Point(372, 774);
			this->textBox_tstate->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tstate->Name = L"textBox_tstate";
			this->textBox_tstate->Size = System::Drawing::Size(138, 30);
			this->textBox_tstate->TabIndex = 228;
			this->textBox_tstate->Tag = L"30";
			this->textBox_tstate->Text = L"Estado";
			this->textBox_tstate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Type
			// 
			this->Type->HeaderText = L"Tipo";
			this->Type->MinimumWidth = 6;
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			this->Type->Width = 60;
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 30;
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
			this->dtp_msgdate->Location = System::Drawing::Point(559, 774);
			this->dtp_msgdate->Margin = System::Windows::Forms::Padding(4);
			this->dtp_msgdate->Name = L"dtp_msgdate";
			this->dtp_msgdate->Size = System::Drawing::Size(327, 30);
			this->dtp_msgdate->TabIndex = 229;
			// 
			// textBox_tcategory
			// 
			this->textBox_tcategory->Enabled = false;
			this->textBox_tcategory->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tcategory->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tcategory->Location = System::Drawing::Point(691, 586);
			this->textBox_tcategory->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tcategory->Name = L"textBox_tcategory";
			this->textBox_tcategory->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tcategory->Size = System::Drawing::Size(195, 30);
			this->textBox_tcategory->TabIndex = 226;
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
			this->textBox_ttype->Location = System::Drawing::Point(372, 586);
			this->textBox_ttype->Margin = System::Windows::Forms::Padding(4);
			this->textBox_ttype->Name = L"textBox_ttype";
			this->textBox_ttype->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_ttype->Size = System::Drawing::Size(195, 30);
			this->textBox_ttype->TabIndex = 225;
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
			this->textBox_tdescription->Location = System::Drawing::Point(372, 625);
			this->textBox_tdescription->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tdescription->Multiline = true;
			this->textBox_tdescription->Name = L"textBox_tdescription";
			this->textBox_tdescription->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tdescription->Size = System::Drawing::Size(513, 141);
			this->textBox_tdescription->TabIndex = 227;
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
			this->textBox_ttitle->Location = System::Drawing::Point(481, 546);
			this->textBox_ttitle->Margin = System::Windows::Forms::Padding(4);
			this->textBox_ttitle->Name = L"textBox_ttitle";
			this->textBox_ttitle->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_ttitle->Size = System::Drawing::Size(404, 30);
			this->textBox_ttitle->TabIndex = 224;
			this->textBox_ttitle->Tag = L"";
			this->textBox_ttitle->Text = L"Título";
			this->textBox_ttitle->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(295, 546);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 266);
			this->label8->TabIndex = 235;
			this->label8->Text = L"H   \r\nI     \r\nS    R\r\nT    E\r\nO   C\r\nR    L\r\nI     A\r\nA   M\r\nL    O\r\n      \r\nD\r\nE"
				L"";
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
			this->dgv_reclamation->Location = System::Drawing::Point(33, 288);
			this->dgv_reclamation->Margin = System::Windows::Forms::Padding(4);
			this->dgv_reclamation->Name = L"dgv_reclamation";
			this->dgv_reclamation->ReadOnly = true;
			this->dgv_reclamation->RowHeadersWidth = 51;
			this->dgv_reclamation->Size = System::Drawing::Size(528, 220);
			this->dgv_reclamation->TabIndex = 222;
			// 
			// button_status
			// 
			this->button_status->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_status->Location = System::Drawing::Point(271, 110);
			this->button_status->Margin = System::Windows::Forms::Padding(4);
			this->button_status->Name = L"button_status";
			this->button_status->Size = System::Drawing::Size(105, 37);
			this->button_status->TabIndex = 25;
			this->button_status->Tag = L"";
			this->button_status->Text = L"BUSCAR";
			this->button_status->UseVisualStyleBackColor = true;
			this->button_status->Click += gcnew System::EventHandler(this, &UserMyReclamationsPage::button_status_Click);
			// 
			// button_eliminate
			// 
			this->button_eliminate->BackColor = System::Drawing::Color::Orange;
			this->button_eliminate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_eliminate->Location = System::Drawing::Point(71, 661);
			this->button_eliminate->Margin = System::Windows::Forms::Padding(4);
			this->button_eliminate->Name = L"button_eliminate";
			this->button_eliminate->Size = System::Drawing::Size(173, 49);
			this->button_eliminate->TabIndex = 230;
			this->button_eliminate->Tag = L"";
			this->button_eliminate->Text = L"ELIMINAR";
			this->button_eliminate->UseVisualStyleBackColor = false;
			this->button_eliminate->Click += gcnew System::EventHandler(this, &UserMyReclamationsPage::button_eliminate_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->button_status);
			this->groupBox1->Controls->Add(this->comboBox_status);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button_title);
			this->groupBox1->Controls->Add(this->button_category);
			this->groupBox1->Controls->Add(this->button_clearall);
			this->groupBox1->Controls->Add(this->button_type);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button_date);
			this->groupBox1->Controls->Add(this->textBox_title);
			this->groupBox1->Controls->Add(this->dtp_date);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox_type);
			this->groupBox1->Controls->Add(this->comboBox_category);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(33, 47);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(528, 231);
			this->groupBox1->TabIndex = 234;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// button_title
			// 
			this->button_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_title->Location = System::Drawing::Point(396, 188);
			this->button_title->Margin = System::Windows::Forms::Padding(4);
			this->button_title->Name = L"button_title";
			this->button_title->Size = System::Drawing::Size(121, 37);
			this->button_title->TabIndex = 45;
			this->button_title->Tag = L"";
			this->button_title->Text = L"BUSCAR";
			this->button_title->UseVisualStyleBackColor = true;
			this->button_title->Click += gcnew System::EventHandler(this, &UserMyReclamationsPage::button_title_Click);
			// 
			// button_category
			// 
			this->button_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_category->Location = System::Drawing::Point(271, 68);
			this->button_category->Margin = System::Windows::Forms::Padding(4);
			this->button_category->Name = L"button_category";
			this->button_category->Size = System::Drawing::Size(105, 37);
			this->button_category->TabIndex = 15;
			this->button_category->Tag = L"";
			this->button_category->Text = L"BUSCAR";
			this->button_category->UseVisualStyleBackColor = true;
			this->button_category->Click += gcnew System::EventHandler(this, &UserMyReclamationsPage::button_category_Click);
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(380, 27);
			this->button_clearall->Margin = System::Windows::Forms::Padding(4);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(137, 119);
			this->button_clearall->TabIndex = 186;
			this->button_clearall->Tag = L"";
			this->button_clearall->Text = L"Limpiar \r\ntodo y Actualizar";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &UserMyReclamationsPage::button_clearall_Click);
			// 
			// button_type
			// 
			this->button_type->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_type->Location = System::Drawing::Point(271, 27);
			this->button_type->Margin = System::Windows::Forms::Padding(4);
			this->button_type->Name = L"button_type";
			this->button_type->Size = System::Drawing::Size(105, 37);
			this->button_type->TabIndex = 5;
			this->button_type->Tag = L"";
			this->button_type->Text = L"BUSCAR";
			this->button_type->UseVisualStyleBackColor = true;
			this->button_type->Click += gcnew System::EventHandler(this, &UserMyReclamationsPage::button_type_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 34);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 23);
			this->label3->TabIndex = 198;
			this->label3->Text = L"Tipo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 196);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 23);
			this->label4->TabIndex = 199;
			this->label4->Text = L"Título";
			// 
			// button_date
			// 
			this->button_date->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_date->Location = System::Drawing::Point(396, 148);
			this->button_date->Margin = System::Windows::Forms::Padding(4);
			this->button_date->Name = L"button_date";
			this->button_date->Size = System::Drawing::Size(121, 37);
			this->button_date->TabIndex = 35;
			this->button_date->Tag = L"";
			this->button_date->Text = L"BUSCAR";
			this->button_date->UseVisualStyleBackColor = true;
			this->button_date->Click += gcnew System::EventHandler(this, &UserMyReclamationsPage::button_date_Click);
			// 
			// textBox_title
			// 
			this->textBox_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_title->Location = System::Drawing::Point(80, 192);
			this->textBox_title->Margin = System::Windows::Forms::Padding(4);
			this->textBox_title->Name = L"textBox_title";
			this->textBox_title->Size = System::Drawing::Size(307, 30);
			this->textBox_title->TabIndex = 40;
			this->textBox_title->Tag = L"15";
			// 
			// dtp_date
			// 
			this->dtp_date->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_date->CalendarForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_date->CalendarMonthBackground = System::Drawing::SystemColors::ControlLight;
			this->dtp_date->CalendarTitleBackColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_date->CalendarTitleForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_date->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlLight;
			this->dtp_date->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_date->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtp_date->Location = System::Drawing::Point(80, 150);
			this->dtp_date->Margin = System::Windows::Forms::Padding(4);
			this->dtp_date->Name = L"dtp_date";
			this->dtp_date->Size = System::Drawing::Size(307, 30);
			this->dtp_date->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 158);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 23);
			this->label2->TabIndex = 210;
			this->label2->Text = L"Fecha";
			// 
			// comboBox_type
			// 
			this->comboBox_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_type->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_type->FormattingEnabled = true;
			this->comboBox_type->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"AYUDA", L"RECLAMO", L"SUGERENCIA", L"QUEJA" });
			this->comboBox_type->Location = System::Drawing::Point(121, 31);
			this->comboBox_type->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_type->Name = L"comboBox_type";
			this->comboBox_type->Size = System::Drawing::Size(140, 30);
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
			this->comboBox_category->Location = System::Drawing::Point(121, 69);
			this->comboBox_category->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_category->Name = L"comboBox_category";
			this->comboBox_category->Size = System::Drawing::Size(140, 30);
			this->comboBox_category->TabIndex = 10;
			this->comboBox_category->Tag = L"10";
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(964, 663);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(165, 44);
			this->button_exit->TabIndex = 231;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &UserMyReclamationsPage::button_exit_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 427);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 23);
			this->label6->TabIndex = 203;
			this->label6->Text = L"Fecha de Emisión";
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
			this->dtp_emisiondate->Location = System::Drawing::Point(228, 423);
			this->dtp_emisiondate->Margin = System::Windows::Forms::Padding(4);
			this->dtp_emisiondate->Name = L"dtp_emisiondate";
			this->dtp_emisiondate->Size = System::Drawing::Size(335, 30);
			this->dtp_emisiondate->TabIndex = 205;
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->textBox_carmodel);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->dtp_emisiondate);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(603, 47);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(571, 462);
			this->groupBox2->TabIndex = 233;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Retroalimentación";
			// 
			// textBox_carmodel
			// 
			this->textBox_carmodel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox_carmodel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_carmodel->Location = System::Drawing::Point(11, 27);
			this->textBox_carmodel->Margin = System::Windows::Forms::Padding(4);
			this->textBox_carmodel->Multiline = true;
			this->textBox_carmodel->Name = L"textBox_carmodel";
			this->textBox_carmodel->Size = System::Drawing::Size(552, 389);
			this->textBox_carmodel->TabIndex = 206;
			this->textBox_carmodel->Tag = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(425, 6);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 38);
			this->label1->TabIndex = 232;
			this->label1->Text = L"MIS RECLAMOS";
			// 
			// UserMyReclamationsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1185, 827);
			this->Controls->Add(this->textBox_tid);
			this->Controls->Add(this->textBox_tstate);
			this->Controls->Add(this->dtp_msgdate);
			this->Controls->Add(this->textBox_tcategory);
			this->Controls->Add(this->textBox_ttype);
			this->Controls->Add(this->textBox_tdescription);
			this->Controls->Add(this->textBox_ttitle);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dgv_reclamation);
			this->Controls->Add(this->button_eliminate);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UserMyReclamationsPage";
			this->Text = L"UserMyReclamationsPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserMyReclamationsPage::UserMyReclamationsPage_FormClosed);
			this->Load += gcnew System::EventHandler(this, &UserMyReclamationsPage::UserMyReclamationsPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_reclamation))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

		void ShowInitialDgvReclamation() {
			List<Reclamation^>^ reclamations = Controller::QueryAllReclamations();
			if (reclamations->Count != 0) {
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

		/*	void FillCombos() {
				comboBox_type->Items->Clear();
				comboBox_category->Items->Clear();
				comboBox_type->Items->Add("Ayuda");
				comboBox_type->Items->Add("Reclamo");
				comboBox_type->Items->Add("Sugerencia");
				comboBox_type->Items->Add("Queja");
				comboBox_category->Items->Add("Leve o Crítico");
				comboBox_category->Items->Add("Moderado o Urgente");
				comboBox_category->Items->Add("Grave o Emergente");
				comboBox_status->Items->Add("En proceso...");
				comboBox_status->Items->Add("Respondido");

			}*/


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
			textBox_title->Clear();

			textBox_tid->Clear();
			textBox_ttitle->Clear();
			textBox_ttype->Clear();
			textBox_tcategory->Clear();
			textBox_tdescription->Clear();
			textBox_tstate->Clear();
		}

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}

	private: System::Void button_clearall_Click(System::Object^ sender, System::EventArgs^ e) {

		ShowInitialDgvReclamation();
		ClearTextBoxes();
		textBox_tid->Text = "ID";
		textBox_ttitle->Text = "Título";
		textBox_ttype->Text = "Tipo";
		textBox_tcategory->Text = "Categoría";
		textBox_tdescription->Text = "Mensaje";
		textBox_tstate->Text = "Estado";



	}
	private: System::Void button_type_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ ttype = comboBox_type->Items[comboBox_type->SelectedIndex]->ToString();
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

	private: System::Void button_category_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tcategory = comboBox_category->Items[comboBox_category->SelectedIndex]->ToString();

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

		String^ tstate = comboBox_status->Items[comboBox_status->SelectedIndex]->ToString();

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
	private: System::Void button_title_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ ttitle = textBox_title->Text;
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

		DateTime tsystemdate = dtp_date->Value;


		List<Reclamation^>^ cList = Controller::QueryListReclamationByDate(tsystemdate);
		if (cList->Count < 1) {
			MessageBox::Show("La fecha del reclamo ingresado no existe");
			return;
		}

		ShowSearchedReclamation(cList[0]);
		FillReclamationTextBoxes(cList[0]);

	}
	private: System::Void button_eliminate_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Int32::Parse(textBox_tid->Text);
		Controller::DeleteReclamation(id);
		ClearTextBoxes();
		textBox_tid->Text = "ID";
		textBox_ttitle->Text = "Título";
		textBox_ttype->Text = "Tipo";
		textBox_tcategory->Text = "Categoría";
		textBox_tdescription->Text = "Mensaje";
		textBox_tstate->Text = "Estado";


	}


	private: System::Void UserMyReclamationsPage_Load(System::Object^ sender, System::EventArgs^ e) {

		ShowInitialDgvReclamation();

	}
	private: System::Void UserMyReclamationsPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
};
}
