#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdmInfoUserPage
	/// </summary>
	public ref class AdmInfoUserPage : public System::Windows::Forms::Form
	{
	public:
		AdmInfoUserPage(void)
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
		~AdmInfoUserPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Notify;
	private: System::Windows::Forms::TextBox^ textBox_email;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;






	private: System::Windows::Forms::Label^ Name;
	private: System::Windows::Forms::Label^ Id;




	private: System::Windows::Forms::Label^ Dni;
	private: System::Windows::Forms::Label^ Phone;
	private: System::Windows::Forms::Label^ Lastname;
	private: System::Windows::Forms::Label^ Adress;
	private: System::Windows::Forms::PictureBox^ pb_photo;
	private: System::Windows::Forms::Label^ Foto;
	private: System::Windows::Forms::Button^ button_logout;










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
			this->Notify = (gcnew System::Windows::Forms::Label());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::Label());
			this->Dni = (gcnew System::Windows::Forms::Label());
			this->Phone = (gcnew System::Windows::Forms::Label());
			this->Lastname = (gcnew System::Windows::Forms::Label());
			this->Adress = (gcnew System::Windows::Forms::Label());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->Foto = (gcnew System::Windows::Forms::Label());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->SuspendLayout();
			// 
			// Notify
			// 
			this->Notify->AutoSize = true;
			this->Notify->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Notify->Location = System::Drawing::Point(438, 42);
			this->Notify->Name = L"Notify";
			this->Notify->Size = System::Drawing::Size(211, 120);
			this->Notify->TabIndex = 9;
			this->Notify->Text = L"Informacion \r\nde \r\nusuario";
			this->Notify->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_email
			// 
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_email->Location = System::Drawing::Point(462, 252);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(152, 26);
			this->textBox_email->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(461, 215);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 26);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->Location = System::Drawing::Point(168, 218);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 26);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox3->Location = System::Drawing::Point(168, 250);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 26);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox4->Location = System::Drawing::Point(168, 282);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 26);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox5->Location = System::Drawing::Point(462, 284);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 26);
			this->textBox5->TabIndex = 15;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->Location = System::Drawing::Point(49, 221);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(49, 19);
			this->Name->TabIndex = 22;
			this->Name->Text = L"Name";
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Id->Location = System::Drawing::Point(49, 250);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(23, 19);
			this->Id->TabIndex = 23;
			this->Id->Text = L"Id";
			// 
			// Dni
			// 
			this->Dni->AutoSize = true;
			this->Dni->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dni->Location = System::Drawing::Point(49, 282);
			this->Dni->Name = L"Dni";
			this->Dni->Size = System::Drawing::Size(33, 19);
			this->Dni->TabIndex = 24;
			this->Dni->Text = L"Dni";
			// 
			// Phone
			// 
			this->Phone->AutoSize = true;
			this->Phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phone->Location = System::Drawing::Point(399, 218);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(50, 19);
			this->Phone->TabIndex = 25;
			this->Phone->Text = L"Phone";
			// 
			// Lastname
			// 
			this->Lastname->AutoSize = true;
			this->Lastname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lastname->Location = System::Drawing::Point(381, 255);
			this->Lastname->Name = L"Lastname";
			this->Lastname->Size = System::Drawing::Size(75, 19);
			this->Lastname->TabIndex = 26;
			this->Lastname->Text = L"Lastname";
			// 
			// Adress
			// 
			this->Adress->AutoSize = true;
			this->Adress->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adress->Location = System::Drawing::Point(385, 291);
			this->Adress->Name = L"Adress";
			this->Adress->Size = System::Drawing::Size(64, 19);
			this->Adress->TabIndex = 27;
			this->Adress->Text = L"Address";
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Location = System::Drawing::Point(177, 12);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(143, 174);
			this->pb_photo->TabIndex = 216;
			this->pb_photo->TabStop = false;
			// 
			// Foto
			// 
			this->Foto->AutoSize = true;
			this->Foto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Foto->Location = System::Drawing::Point(49, 66);
			this->Foto->Name = L"Foto";
			this->Foto->Size = System::Drawing::Size(39, 19);
			this->Foto->TabIndex = 217;
			this->Foto->Text = L"Foto";
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(466, 165);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(148, 28);
			this->button_logout->TabIndex = 218;
			this->button_logout->Text = L"CERRAR SESIÓN";
			this->button_logout->UseVisualStyleBackColor = false;
			this->button_logout->Click += gcnew System::EventHandler(this, &AdmInfoUserPage::button_logout_Click);
			// 
			// AdmInfoUserPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(682, 331);
			this->Controls->Add(this->button_logout);
			this->Controls->Add(this->Foto);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->Adress);
			this->Controls->Add(this->Lastname);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->Dni);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->Name);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox_email);
			this->Controls->Add(this->Notify);
			this->Text = L"AdmInfoUserPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
