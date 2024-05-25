#pragma once
#include "AdmNotifyPage.h"
#include"AdmInfoUserPage.h"
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
	private: System::Windows::Forms::Button^ button_notifyusers;

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
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_usersinfo = (gcnew System::Windows::Forms::Button());
			this->button_notifyusers = (gcnew System::Windows::Forms::Button());
			this->groupBoxx->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxx
			// 
			this->groupBoxx->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBoxx->Controls->Add(this->button_logout);
			this->groupBoxx->Controls->Add(this->button_usersinfo);
			this->groupBoxx->Controls->Add(this->button_notifyusers);
			this->groupBoxx->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBoxx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxx->Location = System::Drawing::Point(16, 31);
			this->groupBoxx->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBoxx->Name = L"groupBoxx";
			this->groupBoxx->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBoxx->Size = System::Drawing::Size(663, 249);
			this->groupBoxx->TabIndex = 48;
			this->groupBoxx->TabStop = false;
			this->groupBoxx->Text = L"Seleccione opcion";
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(425, 208);
			this->button_logout->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(197, 34);
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
			this->button_usersinfo->Location = System::Drawing::Point(160, 46);
			this->button_usersinfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_usersinfo->Name = L"button_usersinfo";
			this->button_usersinfo->Size = System::Drawing::Size(163, 112);
			this->button_usersinfo->TabIndex = 15;
			this->button_usersinfo->Text = L"Informacion de usuario";
			this->button_usersinfo->UseVisualStyleBackColor = false;
			this->button_usersinfo->Click += gcnew System::EventHandler(this, &AdminFeedPage::button_usersinfo_Click);
			// 
			// button_notifyusers
			// 
			this->button_notifyusers->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_notifyusers->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_notifyusers->Location = System::Drawing::Point(401, 46);
			this->button_notifyusers->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_notifyusers->Name = L"button_notifyusers";
			this->button_notifyusers->Size = System::Drawing::Size(183, 112);
			this->button_notifyusers->TabIndex = 20;
			this->button_notifyusers->Text = L"Notificar";
			this->button_notifyusers->UseVisualStyleBackColor = false;
			this->button_notifyusers->Click += gcnew System::EventHandler(this, &AdminFeedPage::button_notifyusers_Click);
			// 
			// AdminFeedPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 293);
			this->Controls->Add(this->groupBoxx);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"AdminFeedPage";
			this->Text = L"AdminFeedPage";
			this->groupBoxx->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_notifyusers_Click(System::Object^ sender, System::EventArgs^ e) {

		AdmNotifyPage^ admnotifypage = gcnew AdmNotifyPage();
		admnotifypage->MdiParent = this->MdiParent;
		admnotifypage->Show();

	}
	private: System::Void button_usersinfo_Click(System::Object^ sender, System::EventArgs^ e) {
		AdmInfoUserPage^ admInfoUserPage = gcnew AdmInfoUserPage();
		admInfoUserPage->MdiParent = this->MdiParent;
		admInfoUserPage->Show();
	}
	private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
