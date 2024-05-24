#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdmNotifyPage
	/// </summary>
	public ref class AdmNotifyPage : public System::Windows::Forms::Form
	{
	public:
		AdmNotifyPage(void)
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
		~AdmNotifyPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_email;
	private: System::Windows::Forms::Label^ email;
	private: System::Windows::Forms::Label^ Notify;
	protected:



	private: System::Windows::Forms::Label^ description;

	private: System::Windows::Forms::TextBox^ textBox_description;

	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::Button^ buttonSend;
	private: System::Windows::Forms::Button^ buttonClean;


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
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::Label());
			this->Notify = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::Label());
			this->textBox_description = (gcnew System::Windows::Forms::TextBox());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->buttonSend = (gcnew System::Windows::Forms::Button());
			this->buttonClean = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_email
			// 
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_email->Location = System::Drawing::Point(92, 65);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(210, 26);
			this->textBox_email->TabIndex = 1;
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(39, 65);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(47, 19);
			this->email->TabIndex = 7;
			this->email->Text = L"Email";
			// 
			// Notify
			// 
			this->Notify->AutoSize = true;
			this->Notify->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Notify->Location = System::Drawing::Point(165, 20);
			this->Notify->Name = L"Notify";
			this->Notify->Size = System::Drawing::Size(127, 19);
			this->Notify->TabIndex = 8;
			this->Notify->Text = L"NOTIFICACION";
			// 
			// description
			// 
			this->description->AutoSize = true;
			this->description->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description->Location = System::Drawing::Point(39, 94);
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(88, 19);
			this->description->TabIndex = 9;
			this->description->Text = L"Descripcion";
			// 
			// textBox_description
			// 
			this->textBox_description->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_description->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_description->Location = System::Drawing::Point(43, 116);
			this->textBox_description->Multiline = true;
			this->textBox_description->Name = L"textBox_description";
			this->textBox_description->Size = System::Drawing::Size(473, 104);
			this->textBox_description->TabIndex = 2;
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(368, 238);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(148, 28);
			this->button_logout->TabIndex = 41;
			this->button_logout->Text = L"Cerrar";
			this->button_logout->UseVisualStyleBackColor = false;
			this->button_logout->Click += gcnew System::EventHandler(this, &AdmNotifyPage::button_logout_Click);
			// 
			// buttonSend
			// 
			this->buttonSend->BackColor = System::Drawing::Color::ForestGreen;
			this->buttonSend->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSend->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonSend->Location = System::Drawing::Point(214, 238);
			this->buttonSend->Name = L"buttonSend";
			this->buttonSend->Size = System::Drawing::Size(148, 28);
			this->buttonSend->TabIndex = 42;
			this->buttonSend->Text = L"Enviar";
			this->buttonSend->UseVisualStyleBackColor = false;
			// 
			// buttonClean
			// 
			this->buttonClean->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonClean->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClean->ForeColor = System::Drawing::Color::White;
			this->buttonClean->Location = System::Drawing::Point(60, 238);
			this->buttonClean->Name = L"buttonClean";
			this->buttonClean->Size = System::Drawing::Size(148, 28);
			this->buttonClean->TabIndex = 43;
			this->buttonClean->Text = L"Limpiar todo";
			this->buttonClean->UseVisualStyleBackColor = false;
			this->buttonClean->Click += gcnew System::EventHandler(this, &AdmNotifyPage::buttonClean_Click);
			// 
			// AdmNotifyPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 278);
			this->Controls->Add(this->buttonClean);
			this->Controls->Add(this->buttonSend);
			this->Controls->Add(this->button_logout);
			this->Controls->Add(this->description);
			this->Controls->Add(this->Notify);
			this->Controls->Add(this->email);
			this->Controls->Add(this->textBox_description);
			this->Controls->Add(this->textBox_email);
			this->Name = L"AdmNotifyPage";
			this->Text = L"AdmNotifyPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ClearTextBoxes() {
			//función para limpiar todas las textboxes
			textBox_description->Clear();
			textBox_email->Clear();
		}

	private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonClean_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearTextBoxes();
	}
	};
}
