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
	/// Resumen de ClientMailBox
	/// </summary>
	public ref class ClientMailBox : public System::Windows::Forms::Form
	{
	public:
		ClientMailBox(void)
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
		~ClientMailBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;

	protected:



























	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage_Sendmessage;
	private: System::Windows::Forms::TabPage^ tabPage_Mailbox;
	private: System::Windows::Forms::Button^ button_exit;

































	private: System::ComponentModel::IContainer^ components;

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
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_Sendmessage = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_Mailbox = (gcnew System::Windows::Forms::TabPage());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipTitle = L"Notificación";
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage_Sendmessage);
			this->tabControl1->Controls->Add(this->tabPage_Mailbox);
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1080, 499);
			this->tabControl1->TabIndex = 209;
			// 
			// tabPage_Sendmessage
			// 
			this->tabPage_Sendmessage->Location = System::Drawing::Point(4, 25);
			this->tabPage_Sendmessage->Name = L"tabPage_Sendmessage";
			this->tabPage_Sendmessage->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Sendmessage->Size = System::Drawing::Size(1072, 470);
			this->tabPage_Sendmessage->TabIndex = 0;
			this->tabPage_Sendmessage->Text = L"Escribir mensaje";
			this->tabPage_Sendmessage->UseVisualStyleBackColor = true;
			// 
			// tabPage_Mailbox
			// 
			this->tabPage_Mailbox->Location = System::Drawing::Point(4, 25);
			this->tabPage_Mailbox->Name = L"tabPage_Mailbox";
			this->tabPage_Mailbox->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Mailbox->Size = System::Drawing::Size(1072, 470);
			this->tabPage_Mailbox->TabIndex = 1;
			this->tabPage_Mailbox->Text = L"Buzón de entrada";
			this->tabPage_Mailbox->UseVisualStyleBackColor = true;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Maroon;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(902, 527);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(165, 44);
			this->button_exit->TabIndex = 214;
			this->button_exit->Tag = L"65";
			this->button_exit->Text = L"SALIR";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &ClientMailBox::button_exit_Click);
			// 
			// ClientMailBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1105, 584);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ClientMailBox";
			this->Text = L"Sección de Buzón";
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
};
}