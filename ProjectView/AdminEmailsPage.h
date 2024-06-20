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
	/// Resumen de AdminEmailsPage
	/// </summary>
	public ref class AdminEmailsPage : public System::Windows::Forms::Form
	{
	public:
		AdminEmailsPage(void)
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
		~AdminEmailsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_emissor;
	private: System::Windows::Forms::TextBox^ textBox_receptor;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_subject;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_madedate;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_plate;

	private: System::Windows::Forms::RichTextBox^ richTextBox_content;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_brand;


	private: System::Windows::Forms::TextBox^ textBox_model;

	private: System::Windows::Forms::DataGridView^ dgv_emails_admin;
	private: System::Windows::Forms::Label^ label9;
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
			this->textBox_emissor = (gcnew System::Windows::Forms::TextBox());
			this->textBox_receptor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_subject = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_madedate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_plate = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox_content = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_brand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_model = (gcnew System::Windows::Forms::TextBox());
			this->dgv_emails_admin = (gcnew System::Windows::Forms::DataGridView());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_emails_admin))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(275, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 40);
			this->label1->TabIndex = 281;
			this->label1->Text = L"Emails enviados";
			// 
			// textBox_emissor
			// 
			this->textBox_emissor->Enabled = false;
			this->textBox_emissor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_emissor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_emissor->Location = System::Drawing::Point(303, 266);
			this->textBox_emissor->Name = L"textBox_emissor";
			this->textBox_emissor->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_emissor->Size = System::Drawing::Size(147, 26);
			this->textBox_emissor->TabIndex = 282;
			this->textBox_emissor->Tag = L"";
			this->textBox_emissor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_receptor
			// 
			this->textBox_receptor->Enabled = false;
			this->textBox_receptor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_receptor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_receptor->Location = System::Drawing::Point(303, 301);
			this->textBox_receptor->Name = L"textBox_receptor";
			this->textBox_receptor->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_receptor->Size = System::Drawing::Size(147, 26);
			this->textBox_receptor->TabIndex = 283;
			this->textBox_receptor->Tag = L"";
			this->textBox_receptor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(177, 273);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 19);
			this->label2->TabIndex = 284;
			this->label2->Text = L"Emisor:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(177, 304);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->TabIndex = 285;
			this->label3->Text = L"Receptor:";
			// 
			// textBox_subject
			// 
			this->textBox_subject->Enabled = false;
			this->textBox_subject->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_subject->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_subject->Location = System::Drawing::Point(303, 336);
			this->textBox_subject->Name = L"textBox_subject";
			this->textBox_subject->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_subject->Size = System::Drawing::Size(147, 26);
			this->textBox_subject->TabIndex = 286;
			this->textBox_subject->Tag = L"";
			this->textBox_subject->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(177, 339);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 19);
			this->label4->TabIndex = 287;
			this->label4->Text = L"Asunto:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(177, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 19);
			this->label5->TabIndex = 289;
			this->label5->Text = L"Fecha de envio:";
			// 
			// textBox_madedate
			// 
			this->textBox_madedate->Enabled = false;
			this->textBox_madedate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_madedate->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_madedate->Location = System::Drawing::Point(303, 368);
			this->textBox_madedate->Name = L"textBox_madedate";
			this->textBox_madedate->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_madedate->Size = System::Drawing::Size(147, 26);
			this->textBox_madedate->TabIndex = 288;
			this->textBox_madedate->Tag = L"";
			this->textBox_madedate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(609, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 19);
			this->label6->TabIndex = 290;
			this->label6->Text = L"VEHICULO";
			// 
			// textBox_plate
			// 
			this->textBox_plate->Enabled = false;
			this->textBox_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_plate->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_plate->Location = System::Drawing::Point(632, 155);
			this->textBox_plate->Name = L"textBox_plate";
			this->textBox_plate->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_plate->Size = System::Drawing::Size(147, 26);
			this->textBox_plate->TabIndex = 291;
			this->textBox_plate->Tag = L"";
			this->textBox_plate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// richTextBox_content
			// 
			this->richTextBox_content->Enabled = false;
			this->richTextBox_content->Location = System::Drawing::Point(487, 244);
			this->richTextBox_content->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox_content->Name = L"richTextBox_content";
			this->richTextBox_content->Size = System::Drawing::Size(341, 118);
			this->richTextBox_content->TabIndex = 292;
			this->richTextBox_content->Text = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(531, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 19);
			this->label7->TabIndex = 293;
			this->label7->Text = L"Modelo:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(531, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 19);
			this->label8->TabIndex = 294;
			this->label8->Text = L"Marca:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(540, 155);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 19);
			this->label10->TabIndex = 295;
			this->label10->Text = L"Placa:";
			// 
			// textBox_brand
			// 
			this->textBox_brand->Enabled = false;
			this->textBox_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_brand->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_brand->Location = System::Drawing::Point(632, 110);
			this->textBox_brand->Name = L"textBox_brand";
			this->textBox_brand->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_brand->Size = System::Drawing::Size(147, 26);
			this->textBox_brand->TabIndex = 297;
			this->textBox_brand->Tag = L"";
			this->textBox_brand->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_model
			// 
			this->textBox_model->Enabled = false;
			this->textBox_model->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_model->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_model->Location = System::Drawing::Point(632, 66);
			this->textBox_model->Name = L"textBox_model";
			this->textBox_model->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_model->Size = System::Drawing::Size(147, 26);
			this->textBox_model->TabIndex = 298;
			this->textBox_model->Tag = L"";
			this->textBox_model->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dgv_emails_admin
			// 
			this->dgv_emails_admin->AllowUserToAddRows = false;
			this->dgv_emails_admin->AllowUserToDeleteRows = false;
			this->dgv_emails_admin->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_emails_admin->Location = System::Drawing::Point(12, 51);
			this->dgv_emails_admin->Name = L"dgv_emails_admin";
			this->dgv_emails_admin->ReadOnly = true;
			this->dgv_emails_admin->RowHeadersWidth = 51;
			this->dgv_emails_admin->Size = System::Drawing::Size(456, 178);
			this->dgv_emails_admin->TabIndex = 299;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(483, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 19);
			this->label9->TabIndex = 300;
			this->label9->Text = L"Asunto:";
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(642, 384);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(137, 36);
			this->button_exit->TabIndex = 301;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &AdminEmailsPage::button_exit_Click);
			// 
			// AdminEmailsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 432);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->dgv_emails_admin);
			this->Controls->Add(this->textBox_model);
			this->Controls->Add(this->textBox_brand);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->richTextBox_content);
			this->Controls->Add(this->textBox_plate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_madedate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_subject);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_receptor);
			this->Controls->Add(this->textBox_emissor);
			this->Controls->Add(this->label1);
			this->Name = L"AdminEmailsPage";
			this->Text = L"AdminEmailsPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_emails_admin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			  private: System::Void InitializeDataGridView() {
				  // Configurar el DataGridView para no generar columnas automáticamente
				  dgv_emails_admin->AutoGenerateColumns = false;

				  // Crear y agregar columnas manualmente
				  DataGridViewTextBoxColumn^ UsertransmitterColumn = gcnew DataGridViewTextBoxColumn();
				  UsertransmitterColumn->HeaderText = "Emisor";
				  UsertransmitterColumn->DataPropertyName = "Id"; // Esto debe coincidir con el nombre de la propiedad en la clase de datos
				  UsertransmitterColumn->Width = 25; // Ajustar el ancho de la columna
				  dgv_emails_admin->Columns->Add(UsertransmitterColumn);

				  DataGridViewTextBoxColumn^ UserreceiverColumn = gcnew DataGridViewTextBoxColumn();
				  UserreceiverColumn->HeaderText = "Receptor";
				  UserreceiverColumn->DataPropertyName = "Phone";
				  UserreceiverColumn->Width = 25; // Ajustar el ancho de la columna
				  dgv_emails_admin->Columns->Add(UserreceiverColumn);

				  DataGridViewTextBoxColumn^ SubjectColumn = gcnew DataGridViewTextBoxColumn();
				  SubjectColumn->HeaderText = "Asunto";
				  SubjectColumn->DataPropertyName = "Dni";
				  SubjectColumn->Width = 25; // Ajustar el ancho de la columna
				  dgv_emails_admin->Columns->Add(SubjectColumn);

				  DataGridViewTextBoxColumn^ MadeDateColumn = gcnew DataGridViewTextBoxColumn();
				  MadeDateColumn->HeaderText = "Fecha";
				  MadeDateColumn->DataPropertyName = "Name";
				  MadeDateColumn->Width = 25; // Ajustar el ancho de la columna
				  dgv_emails_admin->Columns->Add(MadeDateColumn);

				  DataGridViewTextBoxColumn^ vehiclePlateColumn = gcnew DataGridViewTextBoxColumn();
				  vehiclePlateColumn->HeaderText = "Placa";
				  vehiclePlateColumn->DataPropertyName = "Plate";
				  vehiclePlateColumn->Width = 25; // Ajustar el ancho de la columna
				  dgv_emails_admin->Columns->Add(vehiclePlateColumn);

				  // Puedes agregar más columnas según sea necesario
			  }

	private:
	void ShowInitialdgv_emails_admin() {
				List<Mail^>^ mails = Controller::QueryAllMails();
				// Vincular los datos al DataGridView
				dgv_emails_admin->DataSource = mails;
			}

	void ClearTextBoxes() {
				//función para limpiar todas las textboxes
				textBox_emissor->Clear();
				textBox_receptor->Clear();
				textBox_subject->Clear();
				textBox_madedate->Clear();
				textBox_model->Clear();
				textBox_brand->Clear();
				textBox_plate->Clear();
			}

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
				this->Close();
			}


	private: System::Void AdminEmailsPage_Load(System::Object^ sender, System::EventArgs^ e) {
		InitializeDataGridView();

		textBox_emissor->Text = "Emisor";
		textBox_receptor->Text = "Receptor";
		textBox_subject->Text = "Asunto";
		textBox_madedate->Text = "Fecha";
		textBox_model->Text = "Modelo";
		textBox_brand->Text = "Marca";
		textBox_plate->Text = "Placa";
		

		List<Mail^>^ mails = Controller::QueryAllMails();

		// Vincular los datos al DataGridView
		dgv_emails_admin->DataSource = mails;

	}

	private: System::Void dgv_mails_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si hay al menos una fila seleccionada en el DataGridView de mails
		if (dgv_emails_admin->SelectedRows->Count > 0) {
			// Obtener el índice de la fila seleccionada
			int selectedRowIndex = dgv_emails_admin->SelectedRows[0]->Index;

			// Obtener el cliente seleccionado en la fila
			Mail^ selectedEmail = dynamic_cast<Mail^>(dgv_emails_admin->Rows[selectedRowIndex]->DataBoundItem);

			// Obtener todos los clientes desde el controlador
			//List<Client^>^ clients = Controller::QueryAllClients(); //no

			textBox_emissor->Text = selectedEmail->Usertransmitter->Name;
			textBox_receptor->Text = selectedEmail->Userreceiver->Name;
			textBox_subject->Text = selectedEmail->Subject;
			textBox_madedate->Text = selectedEmail->MadeDate.ToString("dd/MM/yyyy");
			textBox_model->Text = selectedEmail->vehicle->Model;
			textBox_brand->Text = selectedEmail->vehicle->Brand;
			textBox_plate->Text = selectedEmail->vehicle->Plate;
			
		}
		else {
			// Limpiar los TextBoxes si no hay filas seleccionadas en el DataGridView

			textBox_emissor->Text = "Emisor";
			textBox_receptor->Text = "Receptor";
			textBox_subject->Text = "Asunto";
			textBox_madedate->Text = "Fecha";
			textBox_model->Text = "Modelo";
			textBox_brand->Text = "Marca";
			textBox_plate->Text = "Placa";
			
			//definir esto
		}
	}




};
}
