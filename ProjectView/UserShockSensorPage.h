#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectModel; //<<-- 1.-
	using namespace ProjectController; //<<-- 1.-
	using namespace System::IO::Ports;

	/// <summary>
	/// Resumen de UserShockSensorPage
	/// </summary>
	public ref class UserShockSensorPage : public System::Windows::Forms::Form
	{
	public:
		UserShockSensorPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 100; // Intervalo de 1 segundo
			timer->Tick += gcnew System::EventHandler(this, &UserShockSensorPage::OnTimerTick);
			timer->Start();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserShockSensorPage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::TextBox^ textBox_lectura;

	private: System::Windows::Forms::Timer^ timer;

	private: System::Windows::Forms::ComboBox^ comboBox;
	private: System::Windows::Forms::Button^ button;


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
			this->textBox_lectura = (gcnew System::Windows::Forms::TextBox());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_lectura
			// 
			this->textBox_lectura->Location = System::Drawing::Point(229, 33);
			this->textBox_lectura->Name = L"textBox_lectura";
			this->textBox_lectura->Size = System::Drawing::Size(100, 20);
			this->textBox_lectura->TabIndex = 65;
			// 
			// comboBox
			// 
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"2" });
			this->comboBox->Location = System::Drawing::Point(38, 32);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(121, 21);
			this->comboBox->TabIndex = 64;
			// 
			// button
			// 
			this->button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button->Location = System::Drawing::Point(12, 77);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(183, 32);
			this->button->TabIndex = 60;
			this->button->Text = L"Vehículos - Marca";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &UserShockSensorPage::button_Click);
			// 
			// UserShockSensorPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 121);
			this->Controls->Add(this->textBox_lectura);
			this->Controls->Add(this->comboBox);
			this->Controls->Add(this->button);
			this->Name = L"UserShockSensorPage";
			this->Text = L"UserShockSensorPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserShockSensorPage::UserShockSensorPage_FormClosed);
			this->Load += gcnew System::EventHandler(this, &UserShockSensorPage::UserShockSensorPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void UserShockSensorPage_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
	try {
		SerialPort^ PuertoDelArduino = gcnew SerialPort("COM8", 9600);
		PuertoDelArduino->Open();
		String^ Lectura = PuertoDelArduino->ReadLine();
		PuertoDelArduino->Close();
		textBox_lectura->Text = "Distancia:  " + Lectura + " cm";
	}
	catch (Exception^ ex) {
		// Manejar la excepción si es necesario
		textBox_lectura->Text = "Error al leer datos";
	}
}

private: System::Void UserShockSensorPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	timer -> Stop();

}



////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*********************************** Arduino y Visual *****************************************************/
							//Esto se debe hacer en el diseño

//1.- agregar: using namespace ProjectModel; using namespace ProjectController; -->>

//
	void Ejecutar(int robotID, int mesanum) {

		try {
			String^ result = Controller::EnviarRobotALaMesa(robotID, mesanum); //es controller no ProjectController

			if (result->Equals("")) {
				MessageBox::Show("JIJIJI");
			}
			else {
				MessageBox::Show("AJIOAJIO");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ha ocurrido un problema: " + ex->Message);
		}
	}
	//
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (comboBox->SelectedIndex >= 0) {
			int robotID = Convert::ToInt32(comboBox->Items[comboBox->SelectedIndex]->ToString());
			Ejecutar(robotID, 1);
		}
		else {
			MessageBox::Show("Debe seleccionar un robot.");
		}


	}


		   /* Siguiente: Ir a ProjectController.h*/



};
}
