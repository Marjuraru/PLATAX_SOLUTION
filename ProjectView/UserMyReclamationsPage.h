#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button_clearall;
	protected:














	private: System::Windows::Forms::Button^ button_exit;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DateTimePicker^ dtp_emisiondate;
	private: System::Windows::Forms::ComboBox^ comboBox_operative;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox_sparetire;

	private: System::Windows::Forms::TextBox^ textBox_plate;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox_numberofseats;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_carmodel;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label10;



















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
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dtp_emisiondate = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox_operative = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox_sparetire = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_plate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_numberofseats = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_carmodel = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(285, 42);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(103, 58);
			this->button_clearall->TabIndex = 186;
			this->button_clearall->Tag = L"";
			this->button_clearall->Text = L"Limpiar \r\ntodo";
			this->button_clearall->UseVisualStyleBackColor = true;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(574, 366);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(124, 36);
			this->button_exit->TabIndex = 189;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(7, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(381, 181);
			this->dataGridView1->TabIndex = 188;
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
			this->dtp_emisiondate->Location = System::Drawing::Point(139, 274);
			this->dtp_emisiondate->Name = L"dtp_emisiondate";
			this->dtp_emisiondate->Size = System::Drawing::Size(247, 26);
			this->dtp_emisiondate->TabIndex = 205;
			// 
			// comboBox_operative
			// 
			this->comboBox_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_operative->FormattingEnabled = true;
			this->comboBox_operative->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Operativo", L"Inoperativo" });
			this->comboBox_operative->Location = System::Drawing::Point(91, 56);
			this->comboBox_operative->Name = L"comboBox_operative";
			this->comboBox_operative->Size = System::Drawing::Size(106, 27);
			this->comboBox_operative->TabIndex = 204;
			this->comboBox_operative->Tag = L"40";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(9, 281);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 17);
			this->label6->TabIndex = 203;
			this->label6->Text = L"Fecha de Emisión";
			// 
			// comboBox_sparetire
			// 
			this->comboBox_sparetire->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_sparetire->FormattingEnabled = true;
			this->comboBox_sparetire->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Sí", L"No" });
			this->comboBox_sparetire->Location = System::Drawing::Point(91, 25);
			this->comboBox_sparetire->Name = L"comboBox_sparetire";
			this->comboBox_sparetire->Size = System::Drawing::Size(106, 27);
			this->comboBox_sparetire->TabIndex = 202;
			this->comboBox_sparetire->Tag = L"35";
			// 
			// textBox_plate
			// 
			this->textBox_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_plate->Location = System::Drawing::Point(60, 156);
			this->textBox_plate->Name = L"textBox_plate";
			this->textBox_plate->Size = System::Drawing::Size(231, 26);
			this->textBox_plate->TabIndex = 200;
			this->textBox_plate->Tag = L"15";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 17);
			this->label4->TabIndex = 199;
			this->label4->Text = L"Título";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 17);
			this->label3->TabIndex = 198;
			this->label3->Text = L"Tipo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(305, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 31);
			this->label1->TabIndex = 197;
			this->label1->Text = L"MIS RECLAMOS";
			// 
			// textBox_numberofseats
			// 
			this->textBox_numberofseats->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox_numberofseats->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_numberofseats->Enabled = false;
			this->textBox_numberofseats->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_numberofseats->Location = System::Drawing::Point(68, 235);
			this->textBox_numberofseats->Name = L"textBox_numberofseats";
			this->textBox_numberofseats->Size = System::Drawing::Size(104, 26);
			this->textBox_numberofseats->TabIndex = 208;
			this->textBox_numberofseats->Tag = L"30";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(9, 238);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 17);
			this->label7->TabIndex = 207;
			this->label7->Text = L"Estado";
			// 
			// textBox_carmodel
			// 
			this->textBox_carmodel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox_carmodel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_carmodel->Location = System::Drawing::Point(8, 22);
			this->textBox_carmodel->Multiline = true;
			this->textBox_carmodel->Name = L"textBox_carmodel";
			this->textBox_carmodel->Size = System::Drawing::Size(397, 200);
			this->textBox_carmodel->TabIndex = 206;
			this->textBox_carmodel->Tag = L"10";
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
			this->dateTimePicker1->TabIndex = 211;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 210;
			this->label2->Text = L"Fecha";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(297, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 30);
			this->button1->TabIndex = 212;
			this->button1->Tag = L"";
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(297, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 30);
			this->button2->TabIndex = 213;
			this->button2->Tag = L"";
			this->button2->Text = L"BUSCAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(203, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 30);
			this->button3->TabIndex = 214;
			this->button3->Tag = L"";
			this->button3->Text = L"BUSCAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(203, 55);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 30);
			this->button4->TabIndex = 215;
			this->button4->Tag = L"";
			this->button4->Text = L"BUSCAR";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->textBox_carmodel);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->dtp_emisiondate);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox_numberofseats);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(425, 42);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(414, 319);
			this->groupBox2->TabIndex = 216;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Retroalimentación";
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button_clearall);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox_plate);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox_sparetire);
			this->groupBox1->Controls->Add(this->comboBox_operative);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(11, 42);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(396, 378);
			this->groupBox1->TabIndex = 217;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(10, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 17);
			this->label10->TabIndex = 201;
			this->label10->Text = L"Categoría";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(10, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 17);
			this->label5->TabIndex = 216;
			this->label5->Text = L"Estado";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Operativo", L"Inoperativo" });
			this->comboBox1->Location = System::Drawing::Point(91, 91);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(106, 27);
			this->comboBox1->TabIndex = 217;
			this->comboBox1->Tag = L"40";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(203, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 30);
			this->button5->TabIndex = 218;
			this->button5->Tag = L"";
			this->button5->Text = L"BUSCAR";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// UserMyReclamationsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(848, 431);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_exit);
			this->Name = L"UserMyReclamationsPage";
			this->Text = L"UserMyReclamationsPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
