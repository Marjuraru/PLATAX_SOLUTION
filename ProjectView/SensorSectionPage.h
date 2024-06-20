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
			rowIndex = 0; // Inicializar el contador de filas
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

	protected:
	private: System::Windows::Forms::Timer^ timer;  /*<< 3 */




	private: String^ ultimaLectura; // Variable para almacenar la última lectura




	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: int rowIndex; // Contador de filas

	protected:




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea2->AxisY->Maximum = 500;
			chartArea2->AxisY->Minimum = 0;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(279, 43);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(419, 386);
			this->chart1->TabIndex = 203;
			this->chart1->Text = L"chart1";
			// 
			// SensorSectionPage
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1235, 474);
			this->Controls->Add(this->chart1);
			this->Name = L"SensorSectionPage";
			this->Text = L"SensorSectionPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SensorSectionPage::SensorSectionPage_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
		try {
			SerialPort^ PuertoDelArduino = gcnew SerialPort("COM8", 9600);
			PuertoDelArduino->Open();
			String^ Lectura = PuertoDelArduino->ReadLine();
			PuertoDelArduino->Close();
			//textBox_lectura->Text = "Distancia:  " + Lectura + " cm";
			ultimaLectura = Lectura; // Almacenar la última lectura


			//// Agregar o actualizar la fila en el DataGridView
			//String^ timestamp = DateTime::Now.ToString();
			//dgv->Rows[rowIndex]->Cells[0]->Value = timestamp;
			//dgv->Rows[rowIndex]->Cells[1]->Value = Lectura;

			//// Incrementar el contador de filas y reiniciarlo si llega a 10
			//rowIndex = (rowIndex + 1) % 10;

						// Actualizar el Chart con la nueva lectura
			String^ timestamp = DateTime::Now.ToString();
			chart1->Series[L"Series1"]->Points->AddXY(timestamp, Convert::ToDouble(Lectura));

			// Mantener solo las últimas 10 lecturas en el Chart
			if (chart1->Series[L"Series1"]->Points->Count > 5) {
				chart1->Series[L"Series1"]->Points->RemoveAt(0);
			}

		}
		catch (Exception^ ex) {
			// Manejar la excepción si es necesario
			//textBox_lectura->Text = "Error al leer datos";

		}
	}

	private: System::Void SensorSectionPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {


		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		timer->Stop();

	}



	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!String::IsNullOrEmpty(ultimaLectura)) {
			//textBox_lectura2->Text = "Lectura anterior: " + ultimaLectura + " cm";
		}


	}



};
}
