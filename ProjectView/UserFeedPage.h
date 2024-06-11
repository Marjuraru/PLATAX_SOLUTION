#pragma once
#include "UserProfilePage.h"
#include "UserAddVehiclePage.h"
#include "UserMyVehiclesPage.h"
#include "UserMyStatisticsPage.h"
#include "UserReclamationPage.h"
#include "UserMyReclamationsPage.h"
#include "UserHelpPage.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		static UserAddVehiclePage^ userAddVehiclePage;
		static UserMyVehiclesPage^ userMyVehiclesPage;

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~UserFeedPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_myreclamations;

	protected:

	private: System::Windows::Forms::Button^ button_logout;
	private: System::Windows::Forms::Button^ button_myvehicle;



	private: System::Windows::Forms::Button^ button_editprofile;
	private: System::Windows::Forms::Button^ button_statistics;
	private: System::Windows::Forms::Button^ button_reclamation;
	private: System::Windows::Forms::Button^ button_addvehicle;


	private: System::Windows::Forms::Button^ button_help;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_help = (gcnew System::Windows::Forms::Button());
			this->button_myreclamations = (gcnew System::Windows::Forms::Button());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_myvehicle = (gcnew System::Windows::Forms::Button());
			this->button_editprofile = (gcnew System::Windows::Forms::Button());
			this->button_statistics = (gcnew System::Windows::Forms::Button());
			this->button_reclamation = (gcnew System::Windows::Forms::Button());
			this->button_addvehicle = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->button_help);
			this->groupBox2->Controls->Add(this->button_myreclamations);
			this->groupBox2->Controls->Add(this->button_logout);
			this->groupBox2->Controls->Add(this->button_myvehicle);
			this->groupBox2->Controls->Add(this->button_editprofile);
			this->groupBox2->Controls->Add(this->button_statistics);
			this->groupBox2->Controls->Add(this->button_reclamation);
			this->groupBox2->Controls->Add(this->button_addvehicle);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(41, 14);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1265, 110);
			this->groupBox2->TabIndex = 47;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ir a";
			// 
			// button_help
			// 
			this->button_help->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_help->Location = System::Drawing::Point(1092, 30);
			this->button_help->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(151, 32);
			this->button_help->TabIndex = 41;
			this->button_help->Text = L"Ayuda";
			this->button_help->UseVisualStyleBackColor = true;
			this->button_help->Click += gcnew System::EventHandler(this, &UserFeedPage::button_help_Click);
			// 
			// button_myreclamations
			// 
			this->button_myreclamations->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_myreclamations->Location = System::Drawing::Point(904, 30);
			this->button_myreclamations->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_myreclamations->Name = L"button_myreclamations";
			this->button_myreclamations->Size = System::Drawing::Size(165, 32);
			this->button_myreclamations->TabIndex = 35;
			this->button_myreclamations->Text = L"Mis Reclamos";
			this->button_myreclamations->UseVisualStyleBackColor = true;
			this->button_myreclamations->Click += gcnew System::EventHandler(this, &UserFeedPage::button_myreclamations_Click);
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(1061, 69);
			this->button_logout->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(197, 34);
			this->button_logout->TabIndex = 40;
			this->button_logout->Text = L"CERRAR SESI�N";
			this->button_logout->UseVisualStyleBackColor = false;
			this->button_logout->Click += gcnew System::EventHandler(this, &UserFeedPage::button_logout_Click);
			// 
			// button_myvehicle
			// 
			this->button_myvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_myvehicle->Location = System::Drawing::Point(373, 30);
			this->button_myvehicle->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_myvehicle->Name = L"button_myvehicle";
			this->button_myvehicle->Size = System::Drawing::Size(151, 32);
			this->button_myvehicle->TabIndex = 10;
			this->button_myvehicle->Text = L"Mis Veh�culos";
			this->button_myvehicle->UseVisualStyleBackColor = true;
			this->button_myvehicle->Click += gcnew System::EventHandler(this, &UserFeedPage::button_myvehicle_Click);
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
			this->button_editprofile->Click += gcnew System::EventHandler(this, &UserFeedPage::button_editprofile_Click);
			// 
			// button_statistics
			// 
			this->button_statistics->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_statistics->Location = System::Drawing::Point(177, 30);
			this->button_statistics->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_statistics->Name = L"button_statistics";
			this->button_statistics->Size = System::Drawing::Size(171, 32);
			this->button_statistics->TabIndex = 20;
			this->button_statistics->Text = L"Mis estad�sticas";
			this->button_statistics->UseVisualStyleBackColor = true;
			this->button_statistics->Click += gcnew System::EventHandler(this, &UserFeedPage::button_statistics_Click);
			// 
			// button_reclamation
			// 
			this->button_reclamation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_reclamation->Location = System::Drawing::Point(733, 30);
			this->button_reclamation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_reclamation->Name = L"button_reclamation";
			this->button_reclamation->Size = System::Drawing::Size(151, 32);
			this->button_reclamation->TabIndex = 30;
			this->button_reclamation->Text = L"Reclamar";
			this->button_reclamation->UseVisualStyleBackColor = true;
			this->button_reclamation->Click += gcnew System::EventHandler(this, &UserFeedPage::button_reclamation_Click);
			// 
			// button_addvehicle
			// 
			this->button_addvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_addvehicle->Location = System::Drawing::Point(549, 30);
			this->button_addvehicle->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_addvehicle->Name = L"button_addvehicle";
			this->button_addvehicle->Size = System::Drawing::Size(157, 32);
			this->button_addvehicle->TabIndex = 25;
			this->button_addvehicle->Text = L"Agregar Carro";
			this->button_addvehicle->UseVisualStyleBackColor = true;
			this->button_addvehicle->Click += gcnew System::EventHandler(this, &UserFeedPage::button_addvehicle_Click);
			// 
			// UserFeedPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1321, 138);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"UserFeedPage";
			this->Text = L"UserFeedPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserFeedPage::UserFeedPage_FormClosed);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_editprofile_Click(System::Object^ sender, System::EventArgs^ e) {
		UserProfilePage^ userProfilePage = gcnew UserProfilePage();
		userProfilePage->MdiParent = this->MdiParent;
		userProfilePage->Show();
		//this->Close();
	}
	private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();

	}

	private: System::Void button_addvehicle_Click(System::Object^ sender, System::EventArgs^ e) {

		if (userAddVehiclePage == nullptr) {
			userAddVehiclePage = gcnew UserAddVehiclePage();
			userAddVehiclePage->MdiParent = this->MdiParent;
			userAddVehiclePage->Show();
		}
		else {
			userAddVehiclePage->BringToFront();
		}
		
		/*this->Hide(); */
	}
	private: System::Void button_myvehicle_Click(System::Object^ sender, System::EventArgs^ e) {

		if (userMyVehiclesPage == nullptr) {
			userMyVehiclesPage = gcnew UserMyVehiclesPage();
			userMyVehiclesPage->MdiParent = this->MdiParent;
			userMyVehiclesPage->Show();

		}
		else {
			userMyVehiclesPage->BringToFront();
		}
		
		//this->Close();

	}

private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e) {

		UserHelpPage^ userHelpPage = gcnew UserHelpPage();
		userHelpPage->MdiParent = this->MdiParent;
		userHelpPage->Show();
		//this->Close();
}
private: System::Void button_statistics_Click(System::Object^ sender, System::EventArgs^ e) {

		UserMyStatisticsPage^ userMyStatisticsPage = gcnew UserMyStatisticsPage();
		userMyStatisticsPage->MdiParent = this->MdiParent;
		userMyStatisticsPage->Show();
		//this->Close();
}
private: System::Void button_reclamation_Click(System::Object^ sender, System::EventArgs^ e) {

		UserReclamationPage^ userReclamationPage = gcnew UserReclamationPage();
		userReclamationPage->MdiParent = this->MdiParent;
		userReclamationPage->Show();
		//this->Close();
}
private: System::Void button_myreclamations_Click(System::Object^ sender, System::EventArgs^ e) {

		UserMyReclamationsPage^ userMyReclamationsPage = gcnew UserMyReclamationsPage();
		userMyReclamationsPage->MdiParent = this->MdiParent;
		userMyReclamationsPage->Show();
		//this->Close();
}
private: System::Void UserFeedPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
}
};
}
