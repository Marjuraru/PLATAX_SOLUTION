#pragma once

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

	/// <summary>
	/// Resumen de UserMyVehcilesPage
	/// </summary>
	public ref class ShowVehiclePage : public System::Windows::Forms::Form
	{
	public:
		ShowVehiclePage(void)
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
		~ShowVehiclePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label10;
	protected:








	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_tid;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

















	private: System::Windows::Forms::TextBox^ textBox_tnumberseats;
	private: System::Windows::Forms::TextBox^ textBox_tcolor;
	private: System::Windows::Forms::TextBox^ textBox_tbrand;
	private: System::Windows::Forms::TextBox^ textBox_tmodel;








	private: System::Windows::Forms::TextBox^ textBox_tplate;

	private: System::Windows::Forms::PictureBox^ pb_photo;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::TextBox^ textBox_tspareTire;
	private: System::Windows::Forms::TextBox^ textBox_toperative;
	private: System::Windows::Forms::TextBox^ textBox_tcondition;
































	protected:

	protected:

































































































































	private: System::ComponentModel::IContainer^ components;























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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_tid = (gcnew System::Windows::Forms::TextBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_tnumberseats = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tcolor = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tbrand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tmodel = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tplate = (gcnew System::Windows::Forms::TextBox());
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->textBox_tspareTire = (gcnew System::Windows::Forms::TextBox());
			this->textBox_toperative = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tcondition = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(182, 558);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 23);
			this->label10->TabIndex = 226;
			this->label10->Text = L"Condición";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(119, 478);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(209, 23);
			this->label9->TabIndex = 225;
			this->label9->Text = L"Estado de Operatividad";
			// 
			// textBox_tid
			// 
			this->textBox_tid->Enabled = false;
			this->textBox_tid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tid->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tid->Location = System::Drawing::Point(141, 125);
			this->textBox_tid->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tid->Name = L"textBox_tid";
			this->textBox_tid->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox_tid->Size = System::Drawing::Size(195, 30);
			this->textBox_tid->TabIndex = 202;
			this->textBox_tid->Tag = L"";
			this->textBox_tid->Text = L"ID";
			this->textBox_tid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(146, 404);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(182, 23);
			this->label8->TabIndex = 220;
			this->label8->Text = L"Llantas de Repuesto";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(70, 286);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 23);
			this->label5->TabIndex = 218;
			this->label5->Text = L"Color";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(61, 252);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 23);
			this->label4->TabIndex = 217;
			this->label4->Text = L"Marca";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(73, 207);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 23);
			this->label3->TabIndex = 216;
			this->label3->Text = L"Placa";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(70, 128);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 23);
			this->label2->TabIndex = 221;
			this->label2->Text = L"ID";
			// 
			// textBox_tnumberseats
			// 
			this->textBox_tnumberseats->Enabled = false;
			this->textBox_tnumberseats->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tnumberseats->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tnumberseats->Location = System::Drawing::Point(141, 322);
			this->textBox_tnumberseats->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tnumberseats->Name = L"textBox_tnumberseats";
			this->textBox_tnumberseats->Size = System::Drawing::Size(195, 30);
			this->textBox_tnumberseats->TabIndex = 207;
			this->textBox_tnumberseats->Tag = L"";
			this->textBox_tnumberseats->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tcolor
			// 
			this->textBox_tcolor->Enabled = false;
			this->textBox_tcolor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tcolor->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tcolor->Location = System::Drawing::Point(141, 282);
			this->textBox_tcolor->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tcolor->Name = L"textBox_tcolor";
			this->textBox_tcolor->Size = System::Drawing::Size(195, 30);
			this->textBox_tcolor->TabIndex = 206;
			this->textBox_tcolor->Tag = L"";
			this->textBox_tcolor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tbrand
			// 
			this->textBox_tbrand->Enabled = false;
			this->textBox_tbrand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tbrand->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tbrand->Location = System::Drawing::Point(141, 243);
			this->textBox_tbrand->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tbrand->Name = L"textBox_tbrand";
			this->textBox_tbrand->Size = System::Drawing::Size(195, 30);
			this->textBox_tbrand->TabIndex = 205;
			this->textBox_tbrand->Tag = L"";
			this->textBox_tbrand->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tmodel
			// 
			this->textBox_tmodel->Enabled = false;
			this->textBox_tmodel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tmodel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tmodel->Location = System::Drawing::Point(141, 164);
			this->textBox_tmodel->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tmodel->Name = L"textBox_tmodel";
			this->textBox_tmodel->Size = System::Drawing::Size(195, 30);
			this->textBox_tmodel->TabIndex = 203;
			this->textBox_tmodel->Tag = L"";
			this->textBox_tmodel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tplate
			// 
			this->textBox_tplate->Enabled = false;
			this->textBox_tplate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tplate->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tplate->Location = System::Drawing::Point(141, 204);
			this->textBox_tplate->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tplate->Name = L"textBox_tplate";
			this->textBox_tplate->Size = System::Drawing::Size(195, 30);
			this->textBox_tplate->TabIndex = 204;
			this->textBox_tplate->Tag = L"";
			this->textBox_tplate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Enabled = false;
			this->pb_photo->Location = System::Drawing::Point(364, 119);
			this->pb_photo->Margin = System::Windows::Forms::Padding(4);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(285, 260);
			this->pb_photo->TabIndex = 215;
			this->pb_photo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(221, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 51);
			this->label1->TabIndex = 214;
			this->label1->Text = L"VEHÍCULO";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(47, 323);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 23);
			this->label6->TabIndex = 219;
			this->label6->Text = L"Asientos";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 168);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 23);
			this->label7->TabIndex = 224;
			this->label7->Text = L"Modelo";
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(428, 496);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(165, 44);
			this->button_exit->TabIndex = 213;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &ShowVehiclePage::button_exit_Click);
			// 
			// textBox_tspareTire
			// 
			this->textBox_tspareTire->Enabled = false;
			this->textBox_tspareTire->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tspareTire->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tspareTire->Location = System::Drawing::Point(133, 431);
			this->textBox_tspareTire->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tspareTire->Name = L"textBox_tspareTire";
			this->textBox_tspareTire->Size = System::Drawing::Size(195, 30);
			this->textBox_tspareTire->TabIndex = 227;
			this->textBox_tspareTire->Tag = L"";
			this->textBox_tspareTire->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_toperative
			// 
			this->textBox_toperative->Enabled = false;
			this->textBox_toperative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_toperative->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_toperative->Location = System::Drawing::Point(133, 505);
			this->textBox_toperative->Margin = System::Windows::Forms::Padding(4);
			this->textBox_toperative->Name = L"textBox_toperative";
			this->textBox_toperative->Size = System::Drawing::Size(195, 30);
			this->textBox_toperative->TabIndex = 228;
			this->textBox_toperative->Tag = L"";
			this->textBox_toperative->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_tcondition
			// 
			this->textBox_tcondition->Enabled = false;
			this->textBox_tcondition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tcondition->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tcondition->Location = System::Drawing::Point(133, 585);
			this->textBox_tcondition->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tcondition->Name = L"textBox_tcondition";
			this->textBox_tcondition->Size = System::Drawing::Size(195, 30);
			this->textBox_tcondition->TabIndex = 229;
			this->textBox_tcondition->Tag = L"";
			this->textBox_tcondition->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ShowVehiclePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(693, 645);
			this->Controls->Add(this->textBox_tcondition);
			this->Controls->Add(this->textBox_toperative);
			this->Controls->Add(this->textBox_tspareTire);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_tid);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_tnumberseats);
			this->Controls->Add(this->textBox_tcolor);
			this->Controls->Add(this->textBox_tbrand);
			this->Controls->Add(this->textBox_tmodel);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->textBox_tplate);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ShowVehiclePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShowVehiclePage";
			this->Load += gcnew System::EventHandler(this, &ShowVehiclePage::ShowVehiclePage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShowVehiclePage_Load(System::Object^ sender, System::EventArgs^ e) {
		List <Mail^>^ MailList = Controller::QueryAllMails();
		Mail^ mailselected = gcnew Mail();

		for each (Mail ^ mail in MailList) {
			if (mail->MailSelected) {
				mailselected = mail;
				break;
			}
		}

		if (mailselected != nullptr) {
			if (mailselected->MailSelected) {
				if (mailselected->vehicle->Plate != nullptr) {
					textBox_tid->Text = mailselected->vehicle->Id.ToString();
					textBox_tmodel->Text = mailselected->vehicle->Model;
					textBox_tplate->Text = mailselected->vehicle->Plate;
					textBox_tbrand->Text = mailselected->vehicle->Brand;
					textBox_tcolor->Text = mailselected->vehicle->Color;
					textBox_tnumberseats->Text = mailselected->vehicle->NumberOfSeats.ToString();
					textBox_tspareTire->Text = mailselected->vehicle->SpareTire.ToString();
					textBox_toperative->Text = mailselected->vehicle->Operative.ToString();
					textBox_tcondition->Text = mailselected->vehicle->Condition;
				}
				else {
					MessageBox::Show("1");
					this->DialogResult = System::Windows::Forms::DialogResult::OK;
					this->Close();
				}
			}
			else {
				MessageBox::Show("2");
				this->DialogResult = System::Windows::Forms::DialogResult::OK;
				this->Close();
			}
			mailselected->MailSelected = false;
			Controller::UpdateMail(mailselected);
		}
		else {
			MessageBox::Show("3");
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}

	};
}
