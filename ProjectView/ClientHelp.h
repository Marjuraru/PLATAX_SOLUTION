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
	private: System::Windows::Forms::TextBox^ textBox_tlastname;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_tname;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_comment;
	private: System::Windows::Forms::DataGridView^ dgv_help;








	private: System::Windows::Forms::Button^ CleanAll;







	private: System::Windows::Forms::Button^ ADD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lastname;
	private: System::Windows::Forms::Button^ button_exit;



























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
			this->textBox_tlastname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_tname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_comment = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dgv_help = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CleanAll = (gcnew System::Windows::Forms::Button());
			this->ADD = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_help))->BeginInit();
			this->SuspendLayout();
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// textBox_tlastname
			// 
			this->textBox_tlastname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tlastname->Location = System::Drawing::Point(25, 229);
			this->textBox_tlastname->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tlastname->Name = L"textBox_tlastname";
			this->textBox_tlastname->Size = System::Drawing::Size(279, 30);
			this->textBox_tlastname->TabIndex = 60;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 192);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 23);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Apellidos";
			// 
			// textBox_tname
			// 
			this->textBox_tname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tname->Location = System::Drawing::Point(25, 142);
			this->textBox_tname->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tname->Name = L"textBox_tname";
			this->textBox_tname->Size = System::Drawing::Size(279, 30);
			this->textBox_tname->TabIndex = 57;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 105);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 23);
			this->label2->TabIndex = 58;
			this->label2->Text = L"Nombres";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(441, 32);
			this->label1->TabIndex = 56;
			this->label1->Text = L"REGISTRAR NUEVA SOLICITUD";
			// 
			// textBox_comment
			// 
			this->textBox_comment->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_comment->Location = System::Drawing::Point(25, 337);
			this->textBox_comment->Margin = System::Windows::Forms::Padding(4);
			this->textBox_comment->Multiline = true;
			this->textBox_comment->Name = L"textBox_comment";
			this->textBox_comment->Size = System::Drawing::Size(334, 108);
			this->textBox_comment->TabIndex = 62;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(27, 296);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(245, 23);
			this->label10->TabIndex = 61;
			this->label10->Text = L"¿En qué podemos ayudarte\?";
			// 
			// dgv_help
			// 
			this->dgv_help->AllowUserToAddRows = false;
			this->dgv_help->AllowUserToDeleteRows = false;
			this->dgv_help->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_help->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id, this->Name,
					this->Lastname
			});
			this->dgv_help->Location = System::Drawing::Point(514, 96);
			this->dgv_help->Margin = System::Windows::Forms::Padding(4);
			this->dgv_help->Name = L"dgv_help";
			this->dgv_help->ReadOnly = true;
			this->dgv_help->RowHeadersWidth = 51;
			this->dgv_help->Size = System::Drawing::Size(578, 223);
			this->dgv_help->TabIndex = 202;
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 125;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombres";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			this->Name->Width = 30;
			// 
			// Lastname
			// 
			this->Lastname->HeaderText = L"Apellidos";
			this->Lastname->MinimumWidth = 6;
			this->Lastname->Name = L"Lastname";
			this->Lastname->ReadOnly = true;
			this->Lastname->Width = 60;
			// 
			// CleanAll
			// 
			this->CleanAll->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CleanAll->Location = System::Drawing::Point(199, 488);
			this->CleanAll->Margin = System::Windows::Forms::Padding(4);
			this->CleanAll->Name = L"CleanAll";
			this->CleanAll->Size = System::Drawing::Size(144, 37);
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
			this->ADD->Location = System::Drawing::Point(25, 488);
			this->ADD->Margin = System::Windows::Forms::Padding(4);
			this->ADD->Name = L"ADD";
			this->ADD->Size = System::Drawing::Size(144, 37);
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
			this->button_exit->Location = System::Drawing::Point(116, 541);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(144, 30);
			this->button_exit->TabIndex = 214;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &ClientHelp::button_exit_Click);
			// 
			// ClientHelp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1105, 584);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->ADD);
			this->Controls->Add(this->CleanAll);
			this->Controls->Add(this->dgv_help);
			this->Controls->Add(this->textBox_comment);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox_tlastname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_tname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Text = L"Sección de Ayuda";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_help))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void ClearTextBoxes() {
			//función para limpiar todas las textboxes

			textBox_tname->Clear();
			textBox_tlastname->Clear();
			//Falta que a la hora de limpiar se elimine el item seleccionando en el combo

		}

		void ShowInitialDgvHelp() {
			List<Client^>^ client = Controller::QueryAllClients();
			if (client->Count != 0) {
				dgv_help->Rows->Clear();
				for (int i = 0; i < client->Count; i++) {
					Client^ c = client[i];
					dgv_help->Rows->Add(gcnew array<String^> {
						"" + c->Id,
							"" + c->Name,
							"" + c->Lastname,

					});
				}
			}
			else {
				MessageBox::Show("No hay una nueva solicitud disponible para mostrar");
			}
		}

	private: System::Void ADD_Click(System::Object^ sender, System::EventArgs^ e) {

		Client^ client = gcnew Client();


		String^ name = textBox_tname->Text;
		String^ lastname = textBox_tlastname->Text;

		client->Name = name;
		client->Lastname = lastname;

	}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void CleanAll_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearTextBoxes();

	}
	};
}