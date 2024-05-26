#pragma once
#include "ClientEditProfilePage.h"
#include "UserAddVehiclePage.h"
#include "ClientSearchVehiclePage.h"
#include "UserMyStatisticsPage.h"
#include "UserReclamationPage.h"
#include "UserMyReclamationsPage.h"
#include "ClientHelp.h"
#include "ClientMyVehiclePage.h"


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

	private: System::Windows::Forms::Button^ button_reclamation;



	private: System::Windows::Forms::Button^ button_help;
	private: System::Windows::Forms::Button^ button_myreclamations;
	private: System::Windows::Forms::Button^ button_searchvehicle;



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
			this->button_searchvehicle = (gcnew System::Windows::Forms::Button());
			this->button_myreclamations = (gcnew System::Windows::Forms::Button());
			this->button_help = (gcnew System::Windows::Forms::Button());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->button_myvehicle = (gcnew System::Windows::Forms::Button());
			this->button_editprofile = (gcnew System::Windows::Forms::Button());
			this->button_reclamation = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->button_searchvehicle);
			this->groupBox2->Controls->Add(this->button_myreclamations);
			this->groupBox2->Controls->Add(this->button_help);
			this->groupBox2->Controls->Add(this->button_logout);
			this->groupBox2->Controls->Add(this->button_myvehicle);
			this->groupBox2->Controls->Add(this->button_editprofile);
			this->groupBox2->Controls->Add(this->button_reclamation);
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
			// button_searchvehicle
			// 
			this->button_searchvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_searchvehicle->Location = System::Drawing::Point(439, 30);
			this->button_searchvehicle->Margin = System::Windows::Forms::Padding(4);
			this->button_searchvehicle->Name = L"button_searchvehicle";
			this->button_searchvehicle->Size = System::Drawing::Size(183, 32);
			this->button_searchvehicle->TabIndex = 43;
			this->button_searchvehicle->Text = L"Buscar Vehículos";
			this->button_searchvehicle->UseVisualStyleBackColor = true;
			this->button_searchvehicle->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_searchvehicle_Click);
			// 
			// button_myreclamations
			// 
			this->button_myreclamations->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_myreclamations->Location = System::Drawing::Point(881, 30);
			this->button_myreclamations->Margin = System::Windows::Forms::Padding(4);
			this->button_myreclamations->Name = L"button_myreclamations";
			this->button_myreclamations->Size = System::Drawing::Size(165, 32);
			this->button_myreclamations->TabIndex = 42;
			this->button_myreclamations->Text = L"Mis Reclamos";
			this->button_myreclamations->UseVisualStyleBackColor = true;
			// 
			// button_help
			// 
			this->button_help->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_help->Location = System::Drawing::Point(1085, 29);
			this->button_help->Margin = System::Windows::Forms::Padding(4);
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(151, 32);
			this->button_help->TabIndex = 41;
			this->button_help->Text = L"Ayuda";
			this->button_help->UseVisualStyleBackColor = true;
			this->button_help->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_help_Click);
			// 
			// button_logout
			// 
			this->button_logout->BackColor = System::Drawing::Color::Maroon;
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_logout->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_logout->Location = System::Drawing::Point(1061, 69);
			this->button_logout->Margin = System::Windows::Forms::Padding(4);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(197, 34);
			this->button_logout->TabIndex = 40;
			this->button_logout->Text = L"CERRAR SESIÓN";
			this->button_logout->UseVisualStyleBackColor = false;
			this->button_logout->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_logout_Click);
			// 
			// button_myvehicle
			// 
			this->button_myvehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_myvehicle->Location = System::Drawing::Point(229, 30);
			this->button_myvehicle->Margin = System::Windows::Forms::Padding(4);
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
			this->button_editprofile->Margin = System::Windows::Forms::Padding(4);
			this->button_editprofile->Name = L"button_editprofile";
			this->button_editprofile->Size = System::Drawing::Size(151, 32);
			this->button_editprofile->TabIndex = 15;
			this->button_editprofile->Text = L"Editar perfil";
			this->button_editprofile->UseVisualStyleBackColor = true;
			this->button_editprofile->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_editprofile_Click);
			// 
			// button_reclamation
			// 
			this->button_reclamation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_reclamation->Location = System::Drawing::Point(686, 30);
			this->button_reclamation->Margin = System::Windows::Forms::Padding(4);
			this->button_reclamation->Name = L"button_reclamation";
			this->button_reclamation->Size = System::Drawing::Size(151, 32);
			this->button_reclamation->TabIndex = 30;
			this->button_reclamation->Text = L"Reclamos";
			this->button_reclamation->UseVisualStyleBackColor = true;
			this->button_reclamation->Click += gcnew System::EventHandler(this, &ClientFeedPage::button_reclamation_Click);
			// 
			// ClientFeedPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1321, 138);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ClientFeedPage";
			this->Text = L"UserFeedPage";
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_editprofile_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientEditProfilePage^ clientEditProfilePage = gcnew ClientEditProfilePage();
		clientEditProfilePage->MdiParent = this->MdiParent;
		clientEditProfilePage->Show();
		//this->Close();
	}
	private: System::Void button_logout_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}

	private: System::Void button_addvehicle_Click(System::Object^ sender, System::EventArgs^ e) {

		UserAddVehiclePage^ userAddVehiclePage = gcnew UserAddVehiclePage();
		userAddVehiclePage->MdiParent = this->MdiParent;
		userAddVehiclePage->Show();
		/*this->Hide(); */
	}
	private: System::Void button_myvehicle_Click(System::Object^ sender, System::EventArgs^ e) {

		ClientMyVehiclePage^ clientMyVehiclePage = gcnew ClientMyVehiclePage();
		clientMyVehiclePage->MdiParent = this->MdiParent;
		clientMyVehiclePage->Show();
		//this->Close();

	}

	private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e) {

		ClientHelp^ clientHelp = gcnew ClientHelp();
		clientHelp->MdiParent = this->MdiParent;
		clientHelp->Show();
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

	private: System::Void button_searchvehicle_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientSearchVehiclePage^ clientSearchVehiclePage = gcnew ClientSearchVehiclePage();
		clientSearchVehiclePage->MdiParent = this->MdiParent;
		clientSearchVehiclePage->Show();
	}
};
}
