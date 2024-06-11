#pragma once
#include "UserFeedPage.h"
#include "UserRegisterPage.h"
#include "ClientFeedPage.h"
#include "AdminFeedPage .h"

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
	//
	/*
	property List<int>^ ids;
	*/
	/// <summary>
	/// Resumen de UserLoginPage
	/// </summary>
	public ref class UserLoginPage : public System::Windows::Forms::Form
	{
	public:
		UserLoginPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		//static RegisterPage^ registerPage;
		static AdminFeedPage^ adminFeedPage;
		static UserFeedPage^ userFeedPage;
		static UserRegisterPage^ userRegisterPage;
		//static AdminMainControlPage^ adminMainControlPage;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserLoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_email;
	private: System::Windows::Forms::Button^ button_login;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Button^ button_register;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;



	private: System::ComponentModel::IContainer^ components;


	protected:





	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserLoginPage::typeid));
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->button_register = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->SuspendLayout();
			// 
			// textBox_email
			// 
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_email->Location = System::Drawing::Point(111, 178);
			this->textBox_email->Margin = System::Windows::Forms::Padding(4);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(279, 30);
			this->textBox_email->TabIndex = 0;
			// 
			// button_login
			// 
			this->button_login->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_login->Location = System::Drawing::Point(111, 318);
			this->button_login->Margin = System::Windows::Forms::Padding(4);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(280, 46);
			this->button_login->TabIndex = 10;
			this->button_login->Text = L"Iniciar sesión";
			this->button_login->UseVisualStyleBackColor = true;
			this->button_login->Click += gcnew System::EventHandler(this, &UserLoginPage::button_login_Click);
			// 
			// textBox_password
			// 
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_password->Location = System::Drawing::Point(111, 256);
			this->textBox_password->Margin = System::Windows::Forms::Padding(4);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(279, 30);
			this->textBox_password->TabIndex = 5;
			// 
			// button_register
			// 
			this->button_register->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_register->Location = System::Drawing::Point(111, 370);
			this->button_register->Margin = System::Windows::Forms::Padding(4);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(280, 46);
			this->button_register->TabIndex = 15;
			this->button_register->Text = L"Crear cuenta";
			this->button_register->UseVisualStyleBackColor = true;
			this->button_register->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &UserLoginPage::button_register_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 59);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 38);
			this->label1->TabIndex = 5;
			this->label1->Text = L"\"PLATAX\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(171, 155);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ingresa tu email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(152, 231);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 23);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ingresa tu contraseña";
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// UserLoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Peru;
			this->ClientSize = System::Drawing::Size(496, 434);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_register);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->textBox_email);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(514, 481);
			this->MinimumSize = System::Drawing::Size(514, 481);
			this->Name = L"UserLoginPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserLoginPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private:
		void ClearTextBoxes() {
			textBox_email->Clear();
			textBox_password->Clear();
		}
	/*
	private: System::Void button_login_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//String^ email = textBox_email->Text;
		//String^ password = textBox_password->Text;

		bool validated = Controller::validateAccess(textBox_email->Text, textBox_password->Text);
		if (validated) {
			UserFeedPage^ userFeedPage = gcnew UserFeedPage();
			userFeedPage->MdiParent = this->MdiParent;
			userFeedPage->Show();
		}
		else {
			MessageBox::Show("Datos incorrectas o falta completar");
		}
	}
	*/
	private: System::Void button_register_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

			if (userRegisterPage == nullptr) {
				userRegisterPage = gcnew UserRegisterPage();
				userRegisterPage->MdiParent = this->MdiParent;

				if (userRegisterPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // muestra a la hija y tambien manda un valor boleano
					this->Show();//Se muestra madre desde su código nuevamente
					userRegisterPage = nullptr;// que raro, pero bueno, funciona poner nulo a este puntero para que se vuelva usar cuantas veces la ventana adminFeedPage
					return;
				}
				return;
			}

	}
	private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = textBox_email->Text;
		String^ password = textBox_password->Text;

		//bool client = checkBox_client->Checked;
		//bool proprietor = checkBox_proprietor->Checked;

		if (String::IsNullOrWhiteSpace(email) || String::IsNullOrWhiteSpace(password)) {
			MessageBox::Show("Es necesario que se completen todos los datos de registro");
			return;
		}

		//if (!client && !proprietor) {
		//	MessageBox::Show("Seleccione su tipo de usuario");
		//	return;
		//}

		//analizar login




		if (email == "admin" && password == "admin") {

			/*Session::CurrentProprietor = p;*/

				
			notifyIcon1->BalloonTipText = "¡HAS DESBLOUEADO EL MODO ADMINISTRADOR!";
			notifyIcon1->ShowBalloonTip(2500);
			ClearTextBoxes();
				
			if (adminFeedPage == nullptr) { //al inicio del programa es nulo, pero a la segunda vez no lo es
				//AdminFeedPage^ adminFeedPage = gcnew AdminFeedPage();
				//adminFeedPage->MdiParent = this->MdiParent;
				//adminFeedPage->Show();

				adminFeedPage = gcnew AdminFeedPage();
				adminFeedPage->MdiParent = this->MdiParent;

				this->Hide();//oculta la ventana madre(Login page)

				if (adminFeedPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) { // muestra a la hija y tambien manda un valor boleano
					this->Show();//Se muestra madre desde su código nuevamente
					adminFeedPage = nullptr;// que raro, pero bueno, funciona poner nulo a este puntero para que se vuelva usar cuantas veces la ventana adminFeedPage
					return;
				}
					
				return;
			}
		}

		List<Proprietor^>^ countproprietor = Controller::QueryAllProprietors();
		List<Client^>^ countclient = Controller::QueryAllClients();

		if (countproprietor == nullptr && countclient == nullptr) {


			MessageBox::Show("El usuario ingresado no existe, registrese por favor.");


		}
		else {

			if (countproprietor != nullptr) {
				Proprietor^ p = Controller::QueryProprietorByEmail(email);
				if (p != nullptr) {
					if (p->Password == password && p->proprietor == true) {

						notifyIcon1->BalloonTipText = "Bienvenid@ a PlaTax estimado DUEÑO";
						notifyIcon1->ShowBalloonTip(2500);
						ClearTextBoxes();
						Session::CurrentProprietor = p;

						if (userFeedPage == nullptr) {
							userFeedPage = gcnew UserFeedPage();
							userFeedPage->MdiParent = this->MdiParent;
							this->Hide();
							if (userFeedPage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
								this->Show();
								userFeedPage = nullptr;
							}
						}
						return;
					}
					else {
						MessageBox::Show("Datos incorrectas o falta completar");
					}
				}
				else if (countclient != nullptr) {
					Client^ c = Controller::QueryClientByEmail(email);
					if (c != nullptr) {
						if (c->Password == password && c->client == true) {
							Session::CurrentClient = c;
							ClientFeedPage^ clientFeedPage = gcnew ClientFeedPage();
							clientFeedPage->MdiParent = this->MdiParent;
							clientFeedPage->Show();
							this->Hide();
							notifyIcon1->BalloonTipText = "Bienvenid@ a PlaTax estimado CLIENTE";
							notifyIcon1->ShowBalloonTip(2500);
							return;
						}
						else {
							MessageBox::Show("Datos incorrectas o falta completar");
						}

					}
					else {

						MessageBox::Show("El usuario ingresado no existe, registrese por favor.");

					}

				}

			} 
			
		}
		
		

		/*if (email == "user") {
			if (password == "user") {
				Session::CurrentProprietor = p;
				UserFeedPage^ userFeedPage = gcnew UserFeedPage();
				userFeedPage->MdiParent = this->MdiParent;
				userFeedPage->Show();
				notifyIcon1->BalloonTipText = "¡Has desbloqueado el modo Usuiario Maestro!";
				notifyIcon1->ShowBalloonTip(2500);
				return;
			}
			else {
				MessageBox::Show("Datos incorrectas o falta completar");
			}
		}
		else {
			MessageBox::Show("El email ingresado no existe");
		}*/

		/*
		if (email == "client") {
			if (password == "client") {
				Session::CurrentProprietor = p;

				ClientFeedPage^ clientFeedPage = gcnew ClientFeedPage();
				clientFeedPage->MdiParent = this->MdiParent;
				clientFeedPage->Show();

				notifyIcon1->BalloonTipText = "¡Has desbloqueado el modo USUARIO!";
				notifyIcon1->ShowBalloonTip(2500);
				return;
			}
			else {
				MessageBox::Show("Datos incorrectas o falta completar");
			}
		}
		else {
			MessageBox::Show("El email ingresado no existe");
		}
		*/
	}

};
}
