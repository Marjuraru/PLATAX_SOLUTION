#pragma once
#include "AdmInfoUserPage.h"
#include "AdminEmailsPage.h"

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdminFeedPage
	/// </summary>
	public ref class AdminFeedPage : public System::Windows::Forms::Form
	{
	public:
		AdminFeedPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		static AdmInfoUserPage^ admInfoUserPage;
		static AdminEmailsPage^ adminEmailsPage; 
	private: System::Windows::Forms::Button^ button_emails;
	public:

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AdminFeedPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBoxx;
	protected:
	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::Button^ button_usersinfo;


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
			this->groupBoxx = (gcnew System::Windows::Forms::GroupBox());
			this->button_emails = (gcnew System::Windows::Forms::Button());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_usersinfo = (gcnew System::Windows::Forms::Button());
			this->groupBoxx->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxx
			// 
			this->groupBoxx->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBoxx->Controls->Add(this->button_emails);
			this->groupBoxx->Controls->Add(this->button_logout);
			this->groupBoxx->Controls->Add(this->button_usersinfo);
			this->groupBoxx->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBoxx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxx->Location = System::Drawing::Point(12, 25);
			this->groupBoxx->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxx->Name = L"groupBoxx";
			this->groupBoxx->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxx->Size = System::Drawing::Size(709, 202);
			this->groupBoxx->TabIndex = 48;
			this->groupBoxx->TabStop = false;
			this->groupBoxx->Text = L"Seleccione opcion";
			// 
			// button_emails
			// 
			this->button_emails->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_emails->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_emails->Location = System::Drawing::Point(47, 48);
			this->button_emails->Name = L"button_emails";
			this->button_emails->Size = System::Drawing::Size(137, 91);
			this->button_emails->TabIndex = 41;
			this->button_emails->Text = L"Emails";
			this->button_emails->UseVisualStyleBackColor = false;
			this->button_emails->Click += gcnew System::EventHandler(this, &AdminFeedPage::button_emails_Click);
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(260, 169);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(148, 28);
			this->button_logout->TabIndex = 40;
			this->button_logout->Text = L"CERRAR SESIÓN";
			this->button_logout->UseVisualStyleBackColor = false;
			this->button_logout->Click += gcnew System::EventHandler(this, &AdminFeedPage::button_logout_Click);
			// 
			// button_usersinfo
			// 
			this->button_usersinfo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_usersinfo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_usersinfo->Location = System::Drawing::Point(286, 48);
			this->button_usersinfo->Name = L"button_usersinfo";
			this->button_usersinfo->Size = System::Drawing::Size(122, 91);
			this->button_usersinfo->TabIndex = 15;
			this->button_usersinfo->Text = L"Informacion de usuario";
			this->button_usersinfo->UseVisualStyleBackColor = false;
			this->button_usersinfo->Click += gcnew System::EventHandler(this, &AdminFeedPage::button_usersinfo_Click);
			// 
			// AdminFeedPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 238);
			this->Controls->Add(this->groupBoxx);
			this->Name = L"AdminFeedPage";
			this->Text = L"AdminFeedPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AdminFeedPage::AdminFeedPage_FormClosed);
			this->groupBoxx->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_notifyusers_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void button_usersinfo_Click(System::Object^ sender, System::EventArgs^ e) {

		if (admInfoUserPage == nullptr) {
			admInfoUserPage = gcnew AdmInfoUserPage();
			admInfoUserPage->MdiParent = this->MdiParent;
			this->Hide();
			if (admInfoUserPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				admInfoUserPage = nullptr;
			}
		}
		return;
	}
	private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	
	private: System::Void AdminFeedPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
private: System::Void button_emails_Click(System::Object^ sender, System::EventArgs^ e) {//boton email
	if (adminEmailsPage == nullptr) {
		adminEmailsPage = gcnew AdminEmailsPage();
		adminEmailsPage->MdiParent = this->MdiParent;
		this->Hide();
		if (adminEmailsPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->Show();
			adminEmailsPage = nullptr;
		}
	}
	return;
}
};
}
