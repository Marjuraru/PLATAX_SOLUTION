#pragma once
#include "UserProfilePage.h"

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UserFeedPage
	/// </summary>
	public ref class UserFeedPage : public System::Windows::Forms::Form
	{
	public:
		UserFeedPage(void)
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
		~UserFeedPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Button^ button_mycomplains;
	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::Button^ button_donations;
	private: System::Windows::Forms::Button^ button_editprofile;
	private: System::Windows::Forms::Button^ button_statistics;
	private: System::Windows::Forms::Button^ button_complains;
	private: System::Windows::Forms::Button^ button_donate;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_mycomplains = (gcnew System::Windows::Forms::Button());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_donations = (gcnew System::Windows::Forms::Button());
			this->button_editprofile = (gcnew System::Windows::Forms::Button());
			this->button_statistics = (gcnew System::Windows::Forms::Button());
			this->button_complains = (gcnew System::Windows::Forms::Button());
			this->button_donate = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->button_mycomplains);
			this->groupBox2->Controls->Add(this->button_logout);
			this->groupBox2->Controls->Add(this->button_donations);
			this->groupBox2->Controls->Add(this->button_editprofile);
			this->groupBox2->Controls->Add(this->button_statistics);
			this->groupBox2->Controls->Add(this->button_complains);
			this->groupBox2->Controls->Add(this->button_donate);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(31, 11);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(850, 45);
			this->groupBox2->TabIndex = 47;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ir a";
			// 
			// button_mycomplains
			// 
			this->button_mycomplains->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mycomplains->Location = System::Drawing::Point(598, 17);
			this->button_mycomplains->Name = L"button_mycomplains";
			this->button_mycomplains->Size = System::Drawing::Size(113, 23);
			this->button_mycomplains->TabIndex = 35;
			this->button_mycomplains->Text = L"Mis reclamos";
			this->button_mycomplains->UseVisualStyleBackColor = true;
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(727, 16);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(113, 23);
			this->button_logout->TabIndex = 40;
			this->button_logout->Text = L"Cerrar sesión";
			this->button_logout->UseVisualStyleBackColor = false;
			// 
			// button_donations
			// 
			this->button_donations->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_donations->Location = System::Drawing::Point(2, 16);
			this->button_donations->Name = L"button_donations";
			this->button_donations->Size = System::Drawing::Size(113, 23);
			this->button_donations->TabIndex = 10;
			this->button_donations->Text = L"Mis donaciones";
			this->button_donations->UseVisualStyleBackColor = true;
			// 
			// button_editprofile
			// 
			this->button_editprofile->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_editprofile->Location = System::Drawing::Point(122, 16);
			this->button_editprofile->Name = L"button_editprofile";
			this->button_editprofile->Size = System::Drawing::Size(113, 23);
			this->button_editprofile->TabIndex = 15;
			this->button_editprofile->Text = L"Editar perfil";
			this->button_editprofile->UseVisualStyleBackColor = true;
			this->button_editprofile->Click += gcnew System::EventHandler(this, &UserFeedPage::button_editprofile_Click);
			// 
			// button_statistics
			// 
			this->button_statistics->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_statistics->Location = System::Drawing::Point(241, 16);
			this->button_statistics->Name = L"button_statistics";
			this->button_statistics->Size = System::Drawing::Size(113, 23);
			this->button_statistics->TabIndex = 20;
			this->button_statistics->Text = L"Mis estadísticas";
			this->button_statistics->UseVisualStyleBackColor = true;
			// 
			// button_complains
			// 
			this->button_complains->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_complains->Location = System::Drawing::Point(479, 16);
			this->button_complains->Name = L"button_complains";
			this->button_complains->Size = System::Drawing::Size(113, 23);
			this->button_complains->TabIndex = 30;
			this->button_complains->Text = L"Reclamar";
			this->button_complains->UseVisualStyleBackColor = true;
			// 
			// button_donate
			// 
			this->button_donate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_donate->Location = System::Drawing::Point(360, 16);
			this->button_donate->Name = L"button_donate";
			this->button_donate->Size = System::Drawing::Size(113, 23);
			this->button_donate->TabIndex = 25;
			this->button_donate->Text = L"Donar";
			this->button_donate->UseVisualStyleBackColor = true;
			// 
			// UserFeedPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(945, 623);
			this->Controls->Add(this->groupBox2);
			this->Name = L"UserFeedPage";
			this->Text = L"UserFeedPage";
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_editprofile_Click(System::Object^ sender, System::EventArgs^ e) {
		UserProfilePage^ userProfilePage = gcnew UserProfilePage();
		userProfilePage->MdiParent = this->MdiParent;
		userProfilePage->Show();
	}
};
}
