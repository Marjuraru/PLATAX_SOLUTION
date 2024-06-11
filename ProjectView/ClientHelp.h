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
	/// Resumen de ClientHelp
	/// </summary>
	public ref class ClientHelp : public System::Windows::Forms::Form
	{
	public:
		ClientHelp(void)
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
		~ClientHelp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;

	protected:





	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_tcomment;
	private: System::Windows::Forms::DataGridView^ dgv_question;










	private: System::Windows::Forms::Button^ CleanAll;







	private: System::Windows::Forms::Button^ ADD;



	private: System::Windows::Forms::Button^ button_exit;









	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Comment;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CommentDate;
	private: System::Windows::Forms::DataGridView^ dgv_answer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;






































	private: System::ComponentModel::IContainer^ components;

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
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_tcomment = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dgv_question = (gcnew System::Windows::Forms::DataGridView());
			this->CleanAll = (gcnew System::Windows::Forms::Button());
			this->ADD = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Comment = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CommentDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_answer = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_question))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_answer))->BeginInit();
			this->SuspendLayout();
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 25);
			this->label1->TabIndex = 56;
			this->label1->Text = L"REGISTRAR NUEVA SOLICITUD";
			// 
			// textBox_tcomment
			// 
			this->textBox_tcomment->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tcomment->Location = System::Drawing::Point(14, 98);
			this->textBox_tcomment->Multiline = true;
			this->textBox_tcomment->Name = L"textBox_tcomment";
			this->textBox_tcomment->Size = System::Drawing::Size(327, 164);
			this->textBox_tcomment->TabIndex = 62;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(16, 65);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(197, 19);
			this->label10->TabIndex = 61;
			this->label10->Text = L"¿En qué podemos ayudarte\?";
			// 
			// dgv_question
			// 
			this->dgv_question->AllowUserToAddRows = false;
			this->dgv_question->AllowUserToDeleteRows = false;
			this->dgv_question->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_question->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Name,
					this->Lastname, this->Comment, this->CommentDate
			});
			this->dgv_question->Location = System::Drawing::Point(376, 58);
			this->dgv_question->Name = L"dgv_question";
			this->dgv_question->ReadOnly = true;
			this->dgv_question->RowHeadersWidth = 51;
			this->dgv_question->Size = System::Drawing::Size(434, 181);
			this->dgv_question->TabIndex = 202;
			// 
			// CleanAll
			// 
			this->CleanAll->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CleanAll->Location = System::Drawing::Point(178, 287);
			this->CleanAll->Name = L"CleanAll";
			this->CleanAll->Size = System::Drawing::Size(108, 30);
			this->CleanAll->TabIndex = 206;
			this->CleanAll->Tag = L"";
			this->CleanAll->Text = L"Limpiar todo";
			this->CleanAll->UseVisualStyleBackColor = true;
			this->CleanAll->Click += gcnew System::EventHandler(this, &ClientHelp::CleanAll_Click);
			// 
			// ADD
			// 
			this->ADD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ADD->Location = System::Drawing::Point(48, 287);
			this->ADD->Name = L"ADD";
			this->ADD->Size = System::Drawing::Size(108, 30);
			this->ADD->TabIndex = 208;
			this->ADD->Tag = L"";
			this->ADD->Text = L"Añadir";
			this->ADD->UseVisualStyleBackColor = true;
			this->ADD->Click += gcnew System::EventHandler(this, &ClientHelp::ADD_Click);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(112, 365);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(108, 24);
			this->button_exit->TabIndex = 214;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &ClientHelp::button_exit_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(554, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 19);
			this->label2->TabIndex = 216;
			this->label2->Text = L"RESPUESTAS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(502, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(212, 19);
			this->label3->TabIndex = 217;
			this->label3->Text = L"PREGUNTAS FRECUENTES";
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			this->Name->Width = 30;
			// 
			// Lastname
			// 
			this->Lastname->HeaderText = L"Apellido";
			this->Lastname->MinimumWidth = 6;
			this->Lastname->Name = L"Lastname";
			this->Lastname->ReadOnly = true;
			this->Lastname->Width = 60;
			// 
			// Comment
			// 
			this->Comment->HeaderText = L"Descripción";
			this->Comment->MinimumWidth = 6;
			this->Comment->Name = L"Comment";
			this->Comment->ReadOnly = true;
			this->Comment->Width = 125;
			// 
			// CommentDate
			// 
			this->CommentDate->HeaderText = L"Fecha";
			this->CommentDate->MinimumWidth = 6;
			this->CommentDate->Name = L"CommentDate";
			this->CommentDate->ReadOnly = true;
			this->CommentDate->Width = 125;
			// 
			// dgv_answer
			// 
			this->dgv_answer->AllowUserToAddRows = false;
			this->dgv_answer->AllowUserToDeleteRows = false;
			this->dgv_answer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_answer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dgv_answer->Location = System::Drawing::Point(376, 287);
			this->dgv_answer->Name = L"dgv_answer";
			this->dgv_answer->ReadOnly = true;
			this->dgv_answer->RowHeadersWidth = 51;
			this->dgv_answer->Size = System::Drawing::Size(434, 181);
			this->dgv_answer->TabIndex = 218;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 30;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Apellido";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 60;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Descripción";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Fecha";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// ClientHelp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(829, 474);
			this->Controls->Add(this->dgv_answer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->ADD);
			this->Controls->Add(this->CleanAll);
			this->Controls->Add(this->dgv_question);
			this->Controls->Add(this->textBox_tcomment);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text = L"Sección de Ayuda";
			this->Load += gcnew System::EventHandler(this, &ClientHelp::ClientHelp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_question))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_answer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void ClearTextBoxes() {
			//función para limpiar todas las textboxes


			textBox_tcomment->Clear();
			//Falta que a la hora de limpiar se elimine el item seleccionando en el combo

		}

		void ShowInitialDgvHelp() {
			/*List<User^>^ user = Controller::QueryAllUsers();*/
			List<Proprietor^>^ proprietor = Controller::QueryAllProprietors();
			List<Client^>^ client = Controller::QueryAllClients();
			List<HelpPls^>^ helpPls = Controller::QueryAllHelpsPls();

			//corregir el crasheo por base de dato nula
			if (client->Count != 0 && helpPls->Count != 0) {
				dgv_question->Rows->Clear();
				for (int i = 0; i < client->Count; i++) {
					for (int j = 0; j < helpPls->Count; j++) {
						Client^ c = client[i];
						/*if (user->Id == c) {*/
						HelpPls^ h = helpPls[j];
						dgv_question->Rows->Add(gcnew array<String^> {
							"" + c->Id,
								"" + c->Name,
								"" + c->Lastname,
								"" + h->Comment,
								"" + h->CommentDate,

						});
						//}
					}
				}
			}


			else if (proprietor->Count != 0 && helpPls->Count != 0) {
				dgv_question->Rows->Clear();
				for (int i = 0; i < proprietor->Count; i++) {
					for (int j = 0; j < helpPls->Count; j++) {
						Proprietor^ c = proprietor[i];
						/*if (user->Id == c) {*/
						HelpPls^ h = helpPls[j];
						dgv_question->Rows->Add(gcnew array<String^> {
							"" + c->Id,
								"" + c->Name,
								"" + c->Lastname,
								"" + h->Comment,
								"" + h->CommentDate,

						});
						//}
					}
				}
			}
			else {
				MessageBox::Show("No hay una nueva solicitud disponible para mostrar");
			}
		}

	private: System::Void ADD_Click(System::Object^ sender, System::EventArgs^ e) {

		HelpPls^ helpPls = gcnew HelpPls();


		String^ comment = textBox_tcomment->Text;


		if (String::IsNullOrWhiteSpace(comment)) {
			MessageBox::Show("Es necesario que se completen todos los datos de registro");
			return;
		}


		helpPls->Comment = comment;
		helpPls->CommentDate = System::DateTime::Now;

		Controller::CreateHelpPls(helpPls);
		MessageBox::Show("Se ha agregado un nuevo reclamo");

		ShowInitialDgvHelp();

	}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void CleanAll_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearTextBoxes();

	}
	private: System::Void ClientHelp_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Client^>^ client = Controller::QueryAllClients();
		List<HelpPls^>^ helpPls = Controller::QueryAllHelpsPls();
		if (client->Count == 0 && helpPls->Count == 0) {
			ShowInitialDgvHelp();
		}


	}
	};
}