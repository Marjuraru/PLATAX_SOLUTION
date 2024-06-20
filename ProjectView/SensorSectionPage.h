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
	/// Resumen de SensorSectionPage
	/// </summary>
	public ref class SensorSectionPage : public System::Windows::Forms::Form
	{
	public:
		SensorSectionPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			/* <Temporizar para refrezcar> 2*/
			timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 1000; // Intervalo de 1 segundo
			timer->Tick += gcnew System::EventHandler(this, &SensorSectionPage::OnTimerTick);
			timer->Start();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SensorSectionPage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TextBox^ textBox_lectura;
	private: System::Windows::Forms::Button^ button;
	private: System::Windows::Forms::Timer^ timer;  /*<< 3 */
	private: System::Windows::Forms::TextBox^ textBox_lectura2;
	private: String^ ultimaLectura; // Variable para almacenar la última lectura


	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_lectura = (gcnew System::Windows::Forms::TextBox());
			this->button = (gcnew System::Windows::Forms::Button());
			this->textBox_lectura2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox_lectura
			// 
			this->textBox_lectura->Location = System::Drawing::Point(506, 58);
			this->textBox_lectura->Name = L"textBox_lectura";
			this->textBox_lectura->Size = System::Drawing::Size(126, 20);
			this->textBox_lectura->TabIndex = 60;
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(536, 114);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(75, 33);
			this->button->TabIndex = 61;
			this->button->Text = L"button1";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &SensorSectionPage::button_Click);
			// 
			// textBox_lectura2
			// 
			this->textBox_lectura2->Location = System::Drawing::Point(506, 182);
			this->textBox_lectura2->Name = L"textBox_lectura2";
			this->textBox_lectura2->Size = System::Drawing::Size(126, 20);
			this->textBox_lectura2->TabIndex = 62;
			// 
			// SensorSectionPage
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 474);
			this->Controls->Add(this->textBox_lectura2);
			this->Controls->Add(this->button);
			this->Controls->Add(this->textBox_lectura);
			this->Name = L"SensorSectionPage";
			this->Text = L"SensorSectionPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
		try {
			SerialPort^ PuertoDelArduino = gcnew SerialPort("COM8", 9600);
			PuertoDelArduino->Open();
			String^ Lectura = PuertoDelArduino->ReadLine();
			PuertoDelArduino->Close();
			textBox_lectura->Text = "Distancia:  " + Lectura + " cm";
			ultimaLectura = Lectura; // Almacenar la última lectura
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

	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!String::IsNullOrEmpty(ultimaLectura)) {
			textBox_lectura2->Text = "Lectura anterior: " + ultimaLectura + " cm";
		}

	}
};
}
