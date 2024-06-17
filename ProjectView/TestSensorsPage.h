#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports; /*<<< 1*/
	using namespace ProjectController; //<---
	using namespace ProjectModel; //<---
	

	/// <summary>
	/// Resumen de TestSensorsPage
	/// </summary>
	public ref class TestSensorsPage : public System::Windows::Forms::Form
	{
	public:
		TestSensorsPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//

			/* <Temporizar para refrezcar> 2*/
			timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 100; // Intervalo de 1 segundo
			timer->Tick += gcnew System::EventHandler(this, &TestSensorsPage::OnTimerTick);
			timer->Start();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~TestSensorsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_lectura;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::ComboBox^ comboBox;
	private: System::Windows::Forms::Button^ button;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->textBox_lectura->Location = System::Drawing::Point(76, 43);
			this->textBox_lectura->Name = L"textBox_lectura";
			this->textBox_lectura->Size = System::Drawing::Size(137, 20);
			this->textBox_lectura->TabIndex = 0;
			// 
			// comboBox
			// 
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Location = System::Drawing::Point(85, 103);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(121, 21);
			this->comboBox->TabIndex = 1;
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(111, 159);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(75, 23);
			this->button->TabIndex = 2;
			this->button->Text = L"button1";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &TestSensorsPage::button_Click_1);
			// 
			// TestSensorsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button);
			this->Controls->Add(this->comboBox);
			this->Controls->Add(this->textBox_lectura);
			this->Name = L"TestSensorsPage";
			this->Text = L"TestSensorsPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TestSensorsPage::TestSensorsPage_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*<> 3*/


	private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
		try {
			SerialPort^ PuertoDelArduino = gcnew SerialPort("COM8", 9600);
			PuertoDelArduino->Open();
			String^ Lectura = PuertoDelArduino->ReadLine();
			PuertoDelArduino->Close();
			textBox_lectura->Text = "Distancia:  " + Lectura + " cm";
		}
		catch (Exception^ ex) {
			// Manejar la excepci�n si es necesario
			textBox_lectura->Text = "Error al leer datos";
		}
	}


	private: System::Void TestSensorsPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		timer->Stop();


	}

		   /*<> Fin aqu�, ir a UserLogin */



////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*********************************** Arduino y Visual *****************************************************/
							//Esto se debe hacer en el dise�o

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


		   /* Siguiente: Ir a ProjectController.h*/

	private: System::Void button_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (comboBox->SelectedIndex >= 0) {
			int robotID = Convert::ToInt32(comboBox->Items[comboBox->SelectedIndex]->ToString());
			Ejecutar(robotID, 1);
		}
		else {
			MessageBox::Show("Debe seleccionar un robot.");
		}

	}
};
}