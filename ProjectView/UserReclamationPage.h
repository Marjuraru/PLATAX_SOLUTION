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
	/// Resumen de UserReclamationPage
	/// </summary>
	public ref class UserReclamationPage : public System::Windows::Forms::Form
	{
	public:
		UserReclamationPage(void)
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
		~UserReclamationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_cancel;
	protected:
	private: System::Windows::Forms::Button^ button_send;
	private: System::Windows::Forms::Button^ button_clearall;
	private: System::Windows::Forms::Button^ button_insertphoto;
	private: System::Windows::Forms::ComboBox^ comboBox_category;
	private: System::Windows::Forms::ComboBox^ comboBox_type;
	private: System::Windows::Forms::TextBox^ textBox_description;
	private: System::Windows::Forms::PictureBox^ pb_photo;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_title;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

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
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_send = (gcnew System::Windows::Forms::Button());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->button_insertphoto = (gcnew System::Windows::Forms::Button());
			this->comboBox_category = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_type = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_description = (gcnew System::Windows::Forms::TextBox());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_title = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->SuspendLayout();
			// 
			// button_cancel
			// 
			this->button_cancel->BackColor = System::Drawing::Color::Maroon;
			this->button_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_cancel->Location = System::Drawing::Point(376, 361);
			this->button_cancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(140, 38);
			this->button_cancel->TabIndex = 174;
			this->button_cancel->Tag = L"65";
			this->button_cancel->Text = L"CANCELAR";
			this->button_cancel->UseVisualStyleBackColor = false;
			this->button_cancel->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_cancel_Click);
			// 
			// button_send
			// 
			this->button_send->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_send->Location = System::Drawing::Point(376, 300);
			this->button_send->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_send->Name = L"button_send";
			this->button_send->Size = System::Drawing::Size(137, 37);
			this->button_send->TabIndex = 167;
			this->button_send->Tag = L"60";
			this->button_send->Text = L"ENVIAR";
			this->button_send->UseVisualStyleBackColor = true;
			this->button_send->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_send_Click);
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(209, 300);
			this->button_clearall->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(144, 37);
			this->button_clearall->TabIndex = 166;
			this->button_clearall->Tag = L"55";
			this->button_clearall->Text = L"Limpiar todo";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_clearall_Click);
			// 
			// button_insertphoto
			// 
			this->button_insertphoto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_insertphoto->Location = System::Drawing::Point(661, 53);
			this->button_insertphoto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_insertphoto->Name = L"button_insertphoto";
			this->button_insertphoto->Size = System::Drawing::Size(232, 37);
			this->button_insertphoto->TabIndex = 165;
			this->button_insertphoto->Tag = L"50";
			this->button_insertphoto->Text = L"Adjuntar imagen";
			this->button_insertphoto->UseVisualStyleBackColor = true;
			this->button_insertphoto->Click += gcnew System::EventHandler(this, &UserReclamationPage::button_insertphoto_Click);
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
			this->comboBox_category->Location = System::Drawing::Point(375, 57);
			this->comboBox_category->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox_category->Name = L"comboBox_category";
			this->comboBox_category->Size = System::Drawing::Size(140, 30);
			this->comboBox_category->TabIndex = 162;
			this->comboBox_category->Tag = L"5";
			// 
			// comboBox_type
			// 
			this->comboBox_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_type->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_type->FormattingEnabled = true;
			this->comboBox_type->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"AYUDA", L"RECLAMO", L"SUGERENCIA", L"QUEJA" });
			this->comboBox_type->Location = System::Drawing::Point(85, 57);
			this->comboBox_type->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox_type->Name = L"comboBox_type";
			this->comboBox_type->Size = System::Drawing::Size(140, 30);
			this->comboBox_type->TabIndex = 161;
			this->comboBox_type->Tag = L"0";
			// 
			// textBox_description
			// 
			this->textBox_description->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_description->Location = System::Drawing::Point(27, 160);
			this->textBox_description->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_description->Multiline = true;
			this->textBox_description->Name = L"textBox_description";
			this->textBox_description->Size = System::Drawing::Size(488, 101);
			this->textBox_description->TabIndex = 164;
			this->textBox_description->Tag = L"20";
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Location = System::Drawing::Point(563, 97);
			this->pb_photo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(429, 165);
			this->pb_photo->TabIndex = 173;
			this->pb_photo->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(271, 62);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 23);
			this->label10->TabIndex = 172;
			this->label10->Text = L"Categoría";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 133);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 23);
			this->label5->TabIndex = 171;
			this->label5->Text = L"Descripción";
			// 
			// textBox_title
			// 
			this->textBox_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_title->Location = System::Drawing::Point(85, 97);
			this->textBox_title->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox_title->Name = L"textBox_title";
			this->textBox_title->Size = System::Drawing::Size(429, 30);
			this->textBox_title->TabIndex = 163;
			this->textBox_title->Tag = L"15";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 102);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 23);
			this->label4->TabIndex = 170;
			this->label4->Text = L"Título";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 57);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 23);
			this->label3->TabIndex = 169;
			this->label3->Text = L"Tipo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(225, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(588, 38);
			this->label1->TabIndex = 168;
			this->label1->Text = L"FORMULARIO DE RECLAMACIÓN";
			// 
			// UserReclamationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1013, 409);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->button_send);
			this->Controls->Add(this->button_clearall);
			this->Controls->Add(this->button_insertphoto);
			this->Controls->Add(this->comboBox_category);
			this->Controls->Add(this->comboBox_type);
			this->Controls->Add(this->textBox_description);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_title);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"UserReclamationPage";
			this->Text = L"UserReclamationPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserReclamationPage::UserReclamationPage_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

		void FillCombos() {
			comboBox_type->Items->Clear();
			comboBox_category->Items->Clear();
			comboBox_type->Items->Add("Ayuda");
			comboBox_type->Items->Add("Reclamo");
			comboBox_type->Items->Add("Sugerencia");
			comboBox_type->Items->Add("Queja");
			comboBox_category->Items->Add("Leve o Crítico");
			comboBox_category->Items->Add("Moderado o Urgente");
			comboBox_category->Items->Add("Grave o Emergente");
		}

		void ClearTextBoxes() {
			//función para limpiar todas las textboxes
			comboBox_type->Items->Clear();
			comboBox_category->Items->Clear();
			textBox_title->Clear();
			textBox_description->Clear();
			pb_photo->Image = nullptr;
		}

	private: System::Void button_clearall_Click(System::Object^ sender, System::EventArgs^ e) {

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
	private: System::Void button_send_Click(System::Object^ sender, System::EventArgs^ e) {

		Reclamation^ r = gcnew Reclamation();

		String^ description = textBox_description->Text;
		String^ title = textBox_title->Text;
		String^ type = comboBox_type->Text;
		String^ category = comboBox_category->Text;



		if (String::IsNullOrWhiteSpace(description) || String::IsNullOrWhiteSpace(title) || String::IsNullOrWhiteSpace(type) ||
			String::IsNullOrWhiteSpace(category)) {
			MessageBox::Show("Es necesario que se completen todos los datos de registro");
			return;
		}

		r->Id = Controller::GenerateReclamationId();
		r->SystemDate = System::DateTime::Now;
		r->Description = description;
		r->Title = title;
		r->Type = type;
		r->Category = category;


		//Este es un paso a relacionar Admin con User
		/*if (Admin responde){

			status="Respondido"

			}
			else if (Admin no responde){}

			status="En proceso..."

			}
			else if (No enviado al Admin){}
			status="".

		*/

		//r-> Status = status; status cambia con la respuesta de de la retroalimentación

		if (pb_photo->Image != nullptr) {

			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pb_photo->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			r->Photo = ms->ToArray();
			ms->Close();
		}

		Controller::CreateReclamation(r);
		MessageBox::Show("Se ha agregado un nuevo reclamo");

		this->Close();

	}
	private: System::Void button_cancel_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
	private: System::Void UserReclamationPage_Load(System::Object^ sender, System::EventArgs^ e) {

		FillCombos();

	}

	private: System::Void UserReclamationPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
};
}
