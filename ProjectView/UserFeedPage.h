#pragma once
#include "UserProfilePage.h"
#include "UserAddVehiclePage.h"
#include "UserMyVehiclesPage.h"
#include "UserMyStatisticsPage.h"
#include "UserReclamationPage.h"
#include "UserMyReclamationsPage.h"
#include "UserHelpPage.h"
#include "UserMailBoxPage.h"
#include "SensorSectionPage.h"

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
		static UserAddVehiclePage^ userAddVehiclePage;
		static UserMyVehiclesPage^ userMyVehiclesPage;
		static UserProfilePage^ userProfilePage;
		static UserMyStatisticsPage^ userMyStatisticsPage;
		static UserHelpPage^ userHelpPage;
		static UserReclamationPage^ userReclamationPage;
		static UserMailBoxPage^ userMailBoxPage;
		static SensorSectionPage^ sensorSectionPage;

	private: System::Windows::Forms::Button^ button_mailbox;
	private: System::Windows::Forms::Button^ button;
	public:

	public:

	public:
		static UserMyReclamationsPage^ userMyReclamationsPage;

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
			this->button_help = (gcnew System::Windows::Forms::Button());
			this->button_myreclamations = (gcnew System::Windows::Forms::Button());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_myvehicle = (gcnew System::Windows::Forms::Button());
			this->button_editprofile = (gcnew System::Windows::Forms::Button());
			this->button_statistics = (gcnew System::Windows::Forms::Button());
			this->button_reclamation = (gcnew System::Windows::Forms::Button());
			this->button_addvehicle = (gcnew System::Windows::Forms::Button());
			this->button = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->button);
			this->groupBox2->Controls->Add(this->button_mailbox);
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
			this->groupBox2->Location = System::Drawing::Point(31, 11);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(949, 151);
			this->groupBox2->TabIndex = 47;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ir a";
			// 
			// button_mailbox
			// 
			this->button_mailbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mailbox->Location = System::Drawing::Point(412, 73);
			this->button_mailbox->Name = L"button_mailbox";
			this->button_mailbox->Size = System::Drawing::Size(118, 56);
			this->button_mailbox->TabIndex = 42;
			this->button_mailbox->Text = L"Buzón de Tratos";
			this->button_mailbox->UseVisualStyleBackColor = true;
			this->button_mailbox->Click += gcnew System::EventHandler(this, &UserFeedPage::button_mailbox_Click);
			// 
			// button_help
			// 
			this->button_help->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_help->Location = System::Drawing::Point(819, 24);
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(113, 26);
			this->button_help->TabIndex = 41;
			this->button_help->Text = L"Ayuda";
			this->button_help->UseVisualStyleBackColor = true;
			this->button_help->Click += gcnew System::EventHandler(this, &UserFeedPage::button_help_Click);
			// 
			// button_myreclamations
			// 
			this->button_myreclamations->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_myreclamations->Location = System::Drawing::Point(678, 24);
			this->button_myreclamations->Name = L"button_myreclamations";
			this->button_myreclamations->Size = System::Drawing::Size(124, 26);
			this->button_myreclamations->TabIndex = 35;
			this->button_myreclamations->Text = L"Mis Consultas";
			this->button_myreclamations->UseVisualStyleBackColor = true;
			this->button_myreclamations->Click += gcnew System::EventHandler(this, &UserFeedPage::button_myreclamations_Click);
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(796, 118);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(148, 28);
			this->button_logout->TabIndex = 40;
			this->button_logout->Text = L"CERRAR SESIÓN";
			this->button_logout->UseVisualStyleBackColor = false;
			this->button_logout->Click += gcnew System::EventHandler(this, &UserFeedPage::button_logout_Click);
			// 
			// button_myvehicle
			// 
			this->button_myvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_myvehicle->Location = System::Drawing::Point(280, 24);
			this->button_myvehicle->Name = L"button_myvehicle";
			this->button_myvehicle->Size = System::Drawing::Size(113, 26);
			this->button_myvehicle->TabIndex = 10;
			this->button_myvehicle->Text = L"Mis Vehículos";
			this->button_myvehicle->UseVisualStyleBackColor = true;
			this->button_myvehicle->Click += gcnew System::EventHandler(this, &UserFeedPage::button_myvehicle_Click);
			// 
			// button_editprofile
			// 
			this->button_editprofile->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_editprofile->Location = System::Drawing::Point(5, 24);
			this->button_editprofile->Name = L"button_editprofile";
			this->button_editprofile->Size = System::Drawing::Size(113, 26);
			this->button_editprofile->TabIndex = 15;
			this->button_editprofile->Text = L"Editar perfil";
			this->button_editprofile->UseVisualStyleBackColor = true;
			this->button_editprofile->Click += gcnew System::EventHandler(this, &UserFeedPage::button_editprofile_Click);
			// 
			// button_statistics
			// 
			this->button_statistics->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_statistics->Location = System::Drawing::Point(133, 24);
			this->button_statistics->Name = L"button_statistics";
			this->button_statistics->Size = System::Drawing::Size(128, 26);
			this->button_statistics->TabIndex = 20;
			this->button_statistics->Text = L"Mis estadísticas";
			this->button_statistics->UseVisualStyleBackColor = true;
			this->button_statistics->Click += gcnew System::EventHandler(this, &UserFeedPage::button_statistics_Click);
			// 
			// button_reclamation
			// 
			this->button_reclamation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_reclamation->Location = System::Drawing::Point(550, 24);
			this->button_reclamation->Name = L"button_reclamation";
			this->button_reclamation->Size = System::Drawing::Size(113, 26);
			this->button_reclamation->TabIndex = 30;
			this->button_reclamation->Text = L"Consultar";
			this->button_reclamation->UseVisualStyleBackColor = true;
			this->button_reclamation->Click += gcnew System::EventHandler(this, &UserFeedPage::button_reclamation_Click);
			// 
			// button_addvehicle
			// 
			this->button_addvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_addvehicle->Location = System::Drawing::Point(412, 24);
			this->button_addvehicle->Name = L"button_addvehicle";
			this->button_addvehicle->Size = System::Drawing::Size(118, 26);
			this->button_addvehicle->TabIndex = 25;
			this->button_addvehicle->Text = L"Agregar Carro";
			this->button_addvehicle->UseVisualStyleBackColor = true;
			this->button_addvehicle->Click += gcnew System::EventHandler(this, &UserFeedPage::button_addvehicle_Click);
			// 
			// button
			// 
			this->button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button->Location = System::Drawing::Point(5, 90);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(118, 56);
			this->button->TabIndex = 43;
			this->button->Text = L"Sensores";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &UserFeedPage::button_Click);
			// 
			// UserFeedPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(991, 173);
			this->Controls->Add(this->groupBox2);
			this->Name = L"UserFeedPage";
			this->Text = L"UserFeedPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserFeedPage::UserFeedPage_FormClosed);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_editprofile_Click(System::Object^ sender, System::EventArgs^ e) {
		//UserProfilePage^ userProfilePage = gcnew UserProfilePage();
		//userProfilePage->MdiParent = this->MdiParent;
		//userProfilePage->Show();
		if (userProfilePage == nullptr) {
			userProfilePage = gcnew UserProfilePage();
			userProfilePage->MdiParent = this->MdiParent;
			this->Hide();
			if (userProfilePage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				userProfilePage = nullptr;
			}
		}
		return;
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
			this->Hide();
			if (userAddVehiclePage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				userAddVehiclePage = nullptr;
			}
			//userAddVehiclePage->Show();
		}
		/*else {
			userAddVehiclePage->BringToFront();
		}*/

		/*this->Hide(); */
		return;
	}
	private: System::Void button_myvehicle_Click(System::Object^ sender, System::EventArgs^ e) {

		if (userMyVehiclesPage == nullptr) {
			userMyVehiclesPage = gcnew UserMyVehiclesPage();
			userMyVehiclesPage->MdiParent = this->MdiParent;
			this->Hide();
			if (userMyVehiclesPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				userMyVehiclesPage = nullptr;
			}
			//userMyVehiclesPage->Show();

		}
		/*else {
			userMyVehiclesPage->BringToFront();
		}*/

		//this->Close();
		return;
	}

	private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e) {


		//this->Close();
		if (userHelpPage == nullptr) {
			userHelpPage = gcnew UserHelpPage();
			userHelpPage->MdiParent = this->MdiParent;
			this->Hide();
			if (userHelpPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				userHelpPage = nullptr;
			}
		}
		return;
	}
	private: System::Void button_statistics_Click(System::Object^ sender, System::EventArgs^ e) {

		//UserMyStatisticsPage^ userMyStatisticsPage = gcnew UserMyStatisticsPage();
		//userMyStatisticsPage->MdiParent = this->MdiParent;
		//userMyStatisticsPage->Show();
		if (userMyStatisticsPage == nullptr) {
			userMyStatisticsPage = gcnew UserMyStatisticsPage();
			userMyStatisticsPage->MdiParent = this->MdiParent;
			this->Hide();
			if (userMyStatisticsPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				userMyStatisticsPage = nullptr;
			}
		}
		return;
		//this->Close();
	}
	private: System::Void button_reclamation_Click(System::Object^ sender, System::EventArgs^ e) {


		//this->Close();
		if (userReclamationPage == nullptr) {
			userReclamationPage = gcnew UserReclamationPage();
			userReclamationPage->MdiParent = this->MdiParent;
			this->Hide();
			if (userReclamationPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				userReclamationPage = nullptr;
			}
		}
		return;
	}
	private: System::Void button_myreclamations_Click(System::Object^ sender, System::EventArgs^ e) {


		//this->Close();
		if (userMyReclamationsPage == nullptr) {
			userMyReclamationsPage = gcnew UserMyReclamationsPage();
			userMyReclamationsPage->MdiParent = this->MdiParent;
			this->Hide();
			if (userMyReclamationsPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				userMyReclamationsPage = nullptr;
			}
		}
		return;
	}
	private: System::Void UserFeedPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	private: System::Void button_mailbox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userMailBoxPage == nullptr) {
			userMailBoxPage = gcnew UserMailBoxPage();
			userMailBoxPage->MdiParent = this->MdiParent;
			this->Hide();
			if (userMailBoxPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				userMailBoxPage = nullptr;
			}
		}
		return;
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (sensorSectionPage == nullptr) {
			sensorSectionPage = gcnew SensorSectionPage();
			sensorSectionPage->MdiParent = this->MdiParent;
			this->Hide();
			if (sensorSectionPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Show();
				sensorSectionPage = nullptr;
			}
		}
		return;


	}
};
}
