#pragma once
#include "ClientMyStatisticsPage.h"
#include "ClientStateNotificationsPage.h"

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
	public ref class ClientMyVehiclePage : public System::Windows::Forms::Form
	{
	public:
		ClientMyVehiclePage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ClientMyVehiclePage()
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
	private: System::Windows::Forms::DataGridView^ dgv_vehicles;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::TextBox^ textBox_tspareTire;
	private: System::Windows::Forms::TextBox^ textBox_toperative;
	private: System::Windows::Forms::TextBox^ textBox_tcondition;










	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button_view_statistics;
	private: System::Windows::Forms::Button^ button_state_of_vehicle;













	protected:

	protected:

































































































































	private: System::ComponentModel::IContainer^ components;























	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->dgv_vehicles = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->textBox_tspareTire = (gcnew System::Windows::Forms::TextBox());
			this->textBox_toperative = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tcondition = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button_view_statistics = (gcnew System::Windows::Forms::Button());
			this->button_state_of_vehicle = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(728, 569);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 23);
			this->label10->TabIndex = 226;
			this->label10->Text = L"Condici�n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(665, 489);
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
			this->textBox_tid->Location = System::Drawing::Point(687, 136);
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
			this->notifyIcon1->BalloonTipTitle = L"Notificaci�n";
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(692, 415);
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
			this->label5->Location = System::Drawing::Point(616, 297);
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
			this->label4->Location = System::Drawing::Point(607, 263);
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
			this->label3->Location = System::Drawing::Point(619, 218);
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
			this->label2->Location = System::Drawing::Point(616, 139);
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
			this->textBox_tnumberseats->Location = System::Drawing::Point(687, 333);
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
			this->textBox_tcolor->Location = System::Drawing::Point(687, 293);
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
			this->textBox_tbrand->Location = System::Drawing::Point(687, 254);
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
			this->textBox_tmodel->Location = System::Drawing::Point(687, 175);
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
			this->textBox_tplate->Location = System::Drawing::Point(687, 215);
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
			this->pb_photo->Location = System::Drawing::Point(910, 130);
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
			this->label1->Location = System::Drawing::Point(413, 31);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(377, 51);
			this->label1->TabIndex = 214;
			this->label1->Text = L"MIS VEH�CULOS";
			// 
			// dgv_vehicles
			// 
			this->dgv_vehicles->AllowUserToAddRows = false;
			this->dgv_vehicles->AllowUserToDeleteRows = false;
			this->dgv_vehicles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_vehicles->Location = System::Drawing::Point(12, 138);
			this->dgv_vehicles->Margin = System::Windows::Forms::Padding(4);
			this->dgv_vehicles->Name = L"dgv_vehicles";
			this->dgv_vehicles->ReadOnly = true;
			this->dgv_vehicles->RowHeadersWidth = 51;
			this->dgv_vehicles->Size = System::Drawing::Size(554, 223);
			this->dgv_vehicles->TabIndex = 201;
			this->dgv_vehicles->SelectionChanged += gcnew System::EventHandler(this, &ClientMyVehiclePage::dgv_vehicles_SelectionChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(593, 334);
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
			this->label7->Location = System::Drawing::Point(597, 179);
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
			this->button_exit->Location = System::Drawing::Point(988, 582);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(165, 44);
			this->button_exit->TabIndex = 213;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &ClientMyVehiclePage::button_exit_Click);
			// 
			// textBox_tspareTire
			// 
			this->textBox_tspareTire->Enabled = false;
			this->textBox_tspareTire->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_tspareTire->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox_tspareTire->Location = System::Drawing::Point(679, 442);
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
			this->textBox_toperative->Location = System::Drawing::Point(679, 516);
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
			this->textBox_tcondition->Location = System::Drawing::Point(679, 596);
			this->textBox_tcondition->Margin = System::Windows::Forms::Padding(4);
			this->textBox_tcondition->Name = L"textBox_tcondition";
			this->textBox_tcondition->Size = System::Drawing::Size(195, 30);
			this->textBox_tcondition->TabIndex = 229;
			this->textBox_tcondition->Tag = L"";
			this->textBox_tcondition->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 394);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(553, 223);
			this->dataGridView1->TabIndex = 230;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Fecha de Adquisici�n";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 60;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Fecha de expiraci�n";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 60;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"D�as restantes";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 60;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(13, 111);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 23);
			this->label11->TabIndex = 231;
			this->label11->Text = L"Veh�culos activos";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(13, 367);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(191, 23);
			this->label12->TabIndex = 232;
			this->label12->Text = L"Historial de veh�culos";
			// 
			// button_view_statistics
			// 
			this->button_view_statistics->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_view_statistics->Location = System::Drawing::Point(953, 527);
			this->button_view_statistics->Margin = System::Windows::Forms::Padding(4);
			this->button_view_statistics->Name = L"button_view_statistics";
			this->button_view_statistics->Size = System::Drawing::Size(232, 37);
			this->button_view_statistics->TabIndex = 233;
			this->button_view_statistics->Tag = L"";
			this->button_view_statistics->Text = L"Ver estad�sticas";
			this->button_view_statistics->UseVisualStyleBackColor = true;
			this->button_view_statistics->Click += gcnew System::EventHandler(this, &ClientMyVehiclePage::button_view_statistics_Click);
			// 
			// button_state_of_vehicle
			// 
			this->button_state_of_vehicle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_state_of_vehicle->Location = System::Drawing::Point(953, 442);
			this->button_state_of_vehicle->Margin = System::Windows::Forms::Padding(4);
			this->button_state_of_vehicle->Name = L"button_state_of_vehicle";
			this->button_state_of_vehicle->Size = System::Drawing::Size(232, 70);
			this->button_state_of_vehicle->TabIndex = 234;
			this->button_state_of_vehicle->Tag = L"";
			this->button_state_of_vehicle->Text = L"Ver notificaciones de estado";
			this->button_state_of_vehicle->UseVisualStyleBackColor = true;
			this->button_state_of_vehicle->Click += gcnew System::EventHandler(this, &ClientMyVehiclePage::button_state_of_vehicle_Click);
			// 
			// ClientMyVehiclePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1234, 645);
			this->Controls->Add(this->button_state_of_vehicle);
			this->Controls->Add(this->button_view_statistics);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->dataGridView1);
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
			this->Controls->Add(this->dgv_vehicles);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ClientMyVehiclePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClientMyVehiclesPage";
			this->Load += gcnew System::EventHandler(this, &ClientMyVehiclePage::UserMyVehiclesPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_vehicles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}

	private:void ShowImage(array<System::Byte>^ imageBytes, PictureBox^ pictureBox) {
		if (imageBytes == nullptr || imageBytes->Length == 0 || pictureBox == nullptr) {
			// Verificar si la matriz de bytes es nula o vac�a, o si el PictureBox es nulo.
			// Puedes manejar esto de acuerdo a tus necesidades, por ejemplo, mostrar un mensaje de error.
			return;
		}

		// Crear un MemoryStream a partir de la matriz de bytes.
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(imageBytes);

		try {
			// Crear una imagen desde el MemoryStream.
			System::Drawing::Image^ image = System::Drawing::Image::FromStream(ms);

			// Mostrar la imagen en el PictureBox.
			pictureBox->Image = image;
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepci�n que pueda ocurrir al cargar la imagen.
			// Puedes mostrar un mensaje de error o realizar otra acci�n adecuada.
			MessageBox::Show("Error al cargar la imagen: " + ex->Message);
		}
	}

	private: System::Void DataGridView_Load(){
		// Obtener todos los veh�culos desde el controlador
		List<Vehicle^>^ vehicles = Controller::QueryAllVehicles();

		// Vincular los datos al DataGridView
		dgv_vehicles->DataSource = vehicles;
	}

	private: System::Void UserMyVehiclesPage_Load(System::Object^ sender, System::EventArgs^ e) {
		/*FillCombos();*/
		textBox_tid->Text = "ID";
		textBox_tmodel->Text = "Modelo";
		textBox_tplate->Text = "Placa";
		textBox_tbrand->Text = "Marca";
		textBox_tcolor->Text = "Color";
		textBox_tnumberseats->Text = "N�mero de asientos";
		textBox_tspareTire->Text = "Llanta de respuesto";
		textBox_toperative->Text = "Operativo";
		textBox_tcondition->Text = "Condicion";
		pb_photo->Image = nullptr;
		InitializeDataGridView();
		DataGridView_Load();
		this->dgv_vehicles->SelectionChanged += gcnew System::EventHandler(this, &ClientMyVehiclePage::dgv_vehicles_SelectionChanged);
	}
    void FillVehicleTextBoxes(Vehicle^ c) {
			   textBox_tid->Text = Convert::ToString(c->Id);
			   textBox_tmodel->Text = c->Model;
			   textBox_tplate->Text = c->Plate;
			   textBox_tbrand->Text = c->Brand;
			   textBox_tcolor->Text = c->Color;
			   textBox_tnumberseats->Text = Convert::ToString(c->NumberOfSeats);
			   textBox_tspareTire->Text = Convert::ToString(c->SpareTire);
			   textBox_toperative->Text = Convert::ToString(c->Operative);
			   textBox_tcondition->Text = Convert::ToString(c->Condition);

			   if (c->Photo != nullptr) {
				   ShowImage(c->Photo, pb_photo);
			   }
	}

    void ClearTextBoxes() {
		textBox_tid->Clear();
		textBox_tmodel->Clear();
		textBox_tplate->Clear();
		textBox_tbrand->Clear();
		textBox_tcolor->Clear();
		textBox_tnumberseats->Clear();
	}




private: System::Void dgv_vehicles_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {

	if (dgv_vehicles->SelectedRows->Count > 0){
		// Obtener la fila seleccionada
		DataGridViewRow^ selectedRow = dgv_vehicles->SelectedRows[0];
		// Obtener el elemento de datos vinculado a la fila seleccionada y convertirlo a Vehicle^
		Vehicle^ selectedData = dynamic_cast<Vehicle^>(selectedRow->DataBoundItem);
		
		if (selectedData != nullptr){
			// Mostrar los detalles del registro seleccionado en los TextBox
			textBox_tid->Text = selectedData->Id.ToString(); // Convertir entero a cadena
			textBox_tmodel->Text = selectedData->Model; // Asignar directamente si es cadena
			textBox_tplate->Text = selectedData->Plate;
			textBox_tbrand->Text = selectedData->Brand;
			textBox_tcolor->Text = selectedData->Color;
			textBox_tnumberseats->Text = selectedData->NumberOfSeats.ToString(); // Convertir entero a cadena si NumberSeats es entero
			textBox_tspareTire->Text = selectedData->SpareTire.ToString(); // Convertir booleano a cadena
			textBox_toperative->Text = selectedData->Operative.ToString(); // Convertir booleano a cadena
			textBox_tcondition->Text = selectedData->Condition; // Asignar directamente si es cadena
		}
	}
}

private: System::Void InitializeDataGridView(){
	// Configurar el DataGridView para no generar columnas autom�ticamente
	dgv_vehicles->AutoGenerateColumns = false;

	// Crear y agregar columnas manualmente
	DataGridViewTextBoxColumn^ idColumn = gcnew DataGridViewTextBoxColumn();
	idColumn->HeaderText = "ID";
	idColumn->DataPropertyName = "Id"; // Esto debe coincidir con el nombre de la propiedad en la clase de datos
	idColumn->Width = 25; // Ajustar el ancho de la columna
	dgv_vehicles->Columns->Add(idColumn);

	DataGridViewTextBoxColumn^ aquisitionDateColumn = gcnew DataGridViewTextBoxColumn();
	aquisitionDateColumn->HeaderText = "Fecha de adquisici�n";
	aquisitionDateColumn->DataPropertyName = "AquisitionDate";
	aquisitionDateColumn->DefaultCellStyle->Format = "dd/MM/yyyy";
	idColumn->Width = 100; // Ajustar el ancho de la columna
	dgv_vehicles->Columns->Add(aquisitionDateColumn);

	DataGridViewTextBoxColumn^ expirationDateColumn = gcnew DataGridViewTextBoxColumn();
	expirationDateColumn->HeaderText = "Fecha de expiraci�n";
	expirationDateColumn->DataPropertyName = "ExpirationDate";
	expirationDateColumn->DefaultCellStyle->Format = "dd/MM/yyyy";
	idColumn->Width = 100; // Ajustar el ancho de la columna
	dgv_vehicles->Columns->Add(expirationDateColumn);

	DataGridViewTextBoxColumn^ DaysremainingColumn = gcnew DataGridViewTextBoxColumn();
	DaysremainingColumn->HeaderText = "D�as restantes";
	DaysremainingColumn->DataPropertyName = "Plate";
	idColumn->Width = 25; // Ajustar el ancho de la columna
	dgv_vehicles->Columns->Add(DaysremainingColumn);

	// Puedes agregar m�s columnas seg�n sea necesario
}



	private: System::Void button_view_statistics_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientMyStatisticsPage^ clientMyStatisticsPage = gcnew ClientMyStatisticsPage();
		clientMyStatisticsPage->MdiParent = this->MdiParent;
		clientMyStatisticsPage->Show();
	}
	private: System::Void button_state_of_vehicle_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientStateNotificationsPage^ clientStateNotificationsPage = gcnew ClientStateNotificationsPage();
		clientStateNotificationsPage->MdiParent = this->MdiParent;
		clientStateNotificationsPage->Show();
	}
};
}
