#pragma once
#include "ClientEditProfilePage.h"
#include "ClientSearchVehiclePage.h"
#include "ClientMyVehiclePage.h"
#include "ClientMailBox.h"


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
	public ref class ClientFeedPage : public System::Windows::Forms::Form
	{
	public:
		ClientFeedPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		static ClientSearchVehiclePage^ clientSearchVehiclePage;
		static ClientEditProfilePage^ clientEditProfilePage;
		static ClientMyVehiclePage^ clientMyVehiclePage;
		static ClientMailBox^ clientMailBox;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ClientFeedPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;


	protected:

	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::Button^ button_myvehicle;



	private: System::Windows::Forms::Button^ button_editprofile;







	private: System::Windows::Forms::Button^ button_searchvehicle;
	private: System::Windows::Forms::Button^ button_mailbox;






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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_mailbox = (gcnew System::Windows::Forms::Button());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_searchvehicle = (gcnew System::Windows::Forms::Button());
			this->button_myvehicle = (gcnew System::Windows::Forms::Button());
			this->button_editprofile = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->button_mailbox);
			this->groupBox2->Controls->Add(this->button_logout);
			this->groupBox2->Controls->Add(this->button_searchvehicle);
			this->groupBox2->Controls->Add(this->button_myvehicle);
			this->groupBox2->Controls->Add(this->button_editprofile);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(41, 14);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(931, 151);
			this->groupBox2->TabIndex = 47;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ir a";
			// 
			// button_mailbox
			// 
			this->button_mailbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mailbox->Location = System::Drawing::Point(670, 29);
			this->button_mailbox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_mailbox->Name = L"button_mailbox";
			this->button_mailbox->Size = System::Drawing::Size(120, 65);
			this->button_mailbox->TabIndex = 44;
			this->button_mailbox->Text = L"Buzón de Tratos";
			this->button_mailbox->UseVisualStyleBackColor = true;
			this->button_mailbox->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_mailbox_Click);
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(719, 111);
			this->button_logout->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(197, 34);
			this->button_logout->TabIndex = 40;
			this->button_logout->Text = L"CERRAR SESIÓN";
			this->button_logout->UseVisualStyleBackColor = false;
			this->button_logout->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_logout_Click);
			// 
			// button_searchvehicle
			// 
			this->button_searchvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_searchvehicle->Location = System::Drawing::Point(371, 30);
			this->button_searchvehicle->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_searchvehicle->Name = L"button_searchvehicle";
			this->button_searchvehicle->Size = System::Drawing::Size(183, 32);
			this->button_searchvehicle->TabIndex = 43;
			this->button_searchvehicle->Text = L"Buscar Vehículos";
			this->button_searchvehicle->UseVisualStyleBackColor = true;
			this->button_searchvehicle->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_searchvehicle_Click);
			// 
			// button_myvehicle
			// 
			this->button_myvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_myvehicle->Location = System::Drawing::Point(187, 30);
			this->button_myvehicle->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_myvehicle->Name = L"button_myvehicle";
			this->button_myvehicle->Size = System::Drawing::Size(151, 32);
			this->button_myvehicle->TabIndex = 10;
			this->button_myvehicle->Text = L"Mis Vehículos";
			this->button_myvehicle->UseVisualStyleBackColor = true;
			this->button_myvehicle->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_myvehicle_Click);
			// 
			// button_editprofile
			// 
			this->button_editprofile->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_editprofile->Location = System::Drawing::Point(7, 30);
			this->button_editprofile->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_editprofile->Name = L"button_editprofile";
			this->button_editprofile->Size = System::Drawing::Size(151, 32);
			this->button_editprofile->TabIndex = 15;
			this->button_editprofile->Text = L"Editar perfil";
			this->button_editprofile->UseVisualStyleBackColor = true;
			this->button_editprofile->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_editprofile_Click);
			// 
			// ClientFeedPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(981, 178);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ClientFeedPage";
			this->Text = L"UserFeedPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ClientFeedPage::ClientFeedPage_FormClosed);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_editprofile_Click(System::Object^ sender, System::EventArgs^ e) {

		
		if (clientEditProfilePage == nullptr) {
			clientEditProfilePage = gcnew ClientEditProfilePage();
			clientEditProfilePage->MdiParent = this->MdiParent;
			this->Hide();
			if (clientEditProfilePage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				clientEditProfilePage = nullptr;
			}
		}
	return;
	}
	
	private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void button_myvehicle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientMyVehiclePage^ clientMyVehiclePage = gcnew ClientMyVehiclePage();
		clientMyVehiclePage->MdiParent = this->MdiParent;
		if (clientMyVehiclePage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->Show();
			return;
		}
		return;
	}

	

	private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	

	private: System::Void button_searchvehicle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientSearchVehiclePage^ clientSearchVehiclePage = gcnew ClientSearchVehiclePage();
		clientSearchVehiclePage->MdiParent = this->MdiParent;
		if (clientSearchVehiclePage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->Show();
			return;
		}
		return;
	}
	
	private: System::Void button_mailbox_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (clientMailBox == nullptr) {
			clientMailBox = gcnew ClientMailBox();
			clientMailBox->MdiParent = this->MdiParent;
			this->Hide();
			if (clientMailBox->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				clientMailBox = nullptr;
			}
		}
		return;
	}

	private: System::Void ClientFeedPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
private: System::Void button_myreclamations_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
