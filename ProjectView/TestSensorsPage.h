#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports; /*<<< 1*/

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
			//TODO: agregar código de constructor aquí
			//

			/* <Temporizar para refrezcar> 2*/
			timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 100; // Intervalo de 1 segundo
			timer->Tick += gcnew System::EventHandler(this, &TestSensorsPage::OnTimerTick);
			timer->Start();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
			this->SuspendLayout();
			// 
			// textBox_lectura
			// 
			this->textBox_lectura->Location = System::Drawing::Point(144, 57);
			this->textBox_lectura->Name = L"textBox_lectura";
			this->textBox_lectura->Size = System::Drawing::Size(128, 20);
			this->textBox_lectura->TabIndex = 0;
			// 
			// TestSensorsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
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
			// Manejar la excepción si es necesario
			textBox_lectura->Text = "Error al leer datos";
		}
	}


	private: System::Void TestSensorsPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		timer->Stop();


	}

		   /*<> Fin aquí, ir a UserLogin */



	};
}