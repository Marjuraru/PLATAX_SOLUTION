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
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// Resumen de ClientMyStatisticsPage
	/// </summary>
	public ref class ClientMyStatisticsPage : public System::Windows::Forms::Form
	{
	public:
		ClientMyStatisticsPage(void)
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
		~ClientMyStatisticsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_pie_vehicle;
	private: System::Windows::Forms::Button^ button_vehicle_model;
	private: System::Windows::Forms::Button^ button_vehicle_marca;
	protected:

	protected:



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart_pie_vehicle = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_vehicle_model = (gcnew System::Windows::Forms::Button());
			this->button_vehicle_marca = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_pie_vehicle))->BeginInit();
			this->SuspendLayout();
			// 
			// chart_pie_vehicle
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart_pie_vehicle->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart_pie_vehicle->Legends->Add(legend1);
			this->chart_pie_vehicle->Location = System::Drawing::Point(457, 38);
			this->chart_pie_vehicle->Margin = System::Windows::Forms::Padding(4);
			this->chart_pie_vehicle->Name = L"chart_pie_vehicle";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Variable";
			this->chart_pie_vehicle->Series->Add(series1);
			this->chart_pie_vehicle->Size = System::Drawing::Size(438, 362);
			this->chart_pie_vehicle->TabIndex = 2;
			this->chart_pie_vehicle->Text = L"chart1";
			// 
			// button_vehicle_model
			// 
			this->button_vehicle_model->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_vehicle_model->Location = System::Drawing::Point(57, 165);
			this->button_vehicle_model->Margin = System::Windows::Forms::Padding(4);
			this->button_vehicle_model->Name = L"button_vehicle_model";
			this->button_vehicle_model->Size = System::Drawing::Size(244, 39);
			this->button_vehicle_model->TabIndex = 35;
			this->button_vehicle_model->Text = L"Vehículos - Modelos";
			this->button_vehicle_model->UseVisualStyleBackColor = true;
			this->button_vehicle_model->Click += gcnew System::EventHandler(this, &ClientMyStatisticsPage::button_vehicle_model_Click);
			// 
			// button_vehicle_marca
			// 
			this->button_vehicle_marca->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_vehicle_marca->Location = System::Drawing::Point(57, 245);
			this->button_vehicle_marca->Margin = System::Windows::Forms::Padding(4);
			this->button_vehicle_marca->Name = L"button_vehicle_marca";
			this->button_vehicle_marca->Size = System::Drawing::Size(244, 39);
			this->button_vehicle_marca->TabIndex = 36;
			this->button_vehicle_marca->Text = L"Vehículos - Marca";
			this->button_vehicle_marca->UseVisualStyleBackColor = true;
			this->button_vehicle_marca->Click += gcnew System::EventHandler(this, &ClientMyStatisticsPage::button_vehicle_marca_Click);
			// 
			// ClientMyStatisticsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 441);
			this->Controls->Add(this->button_vehicle_marca);
			this->Controls->Add(this->button_vehicle_model);
			this->Controls->Add(this->chart_pie_vehicle);
			this->Name = L"ClientMyStatisticsPage";
			this->Text = L"ClientMyStatisticsPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_pie_vehicle))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private:
		System::Void CleanSeries() {
			// Iterar a través de todas las series del gráfico
			for each (System::Windows::Forms::DataVisualization::Charting::Series ^ series in chart_pie_vehicle->Series) {
				// Limpiar los puntos de la serie actual
				series->Points->Clear();
			}
		}

		void ShowVehiclesByBrandPieChart(){
			{
				List<Vehicle^>^ vehicles = nullptr; // Asegúrate de inicializar donations como nullptr

				try {
					vehicles = Controller::Controller::QueryAllVehicles();
				}
				catch (Exception^ ex) {
					// Maneja la excepción aquí, como mostrar un mensaje de error o realizar alguna acción apropiada.
						// Puedes usar ex->Message para obtener el mensaje de excepción.
					MessageBox::Show("Error al cargar vehículos: " + ex->Message);
				}

				if (vehicles->Count == 0) {
					chart_pie_vehicle->Visible = false;
					MessageBox::Show("No hay vehículos que mostrar");
					return;
				}

				// procedemos a analizar los datos -filtrar
				Dictionary<String^, int> categoryCounts;

				//recorremos todos los objetos de la clase car para extraer o filtrar todas las marcas existentes
				for each (Vehicle ^ c in vehicles) {
					String^ brand = c->Brand;
					if (categoryCounts.ContainsKey(brand)) {
						categoryCounts[brand] = 0;
					}
					else {
						// Si la categoría no existe en el diccionario, agrégala con una cuenta de 1
						categoryCounts[brand] = 0;
					}
				}


				// Recorre la lista de productos y cuenta la cantidad en cada categoría
				for each (Vehicle ^ c in vehicles) {
					String^ brand = c->Brand;
					//analizar qué parámetros o condiciones se deben cumplir para que consideres la cuenta de un carro con
					//la marca correspondiente
					//if (c->Operative != false) {
						//if (c->Color == "Verde") {
					if (categoryCounts.ContainsKey(brand)) {
						categoryCounts[brand]++;
					}
					//}
				//}
				}

				chart_pie_vehicle->Series["Variable"]->Points->Clear();
				// Agrega los datos al gráfico de barras
				for each (KeyValuePair<String^, int> categoryCount in categoryCounts) {
					String^ categoryName = categoryCount.Key;
					int count = categoryCount.Value;

					chart_pie_vehicle->Series["Variable"]->Points->AddXY(categoryName, count);
				}
			}
		}

		void ShowVehiclesByModelPieChart() {
			List<Vehicle^>^ vehicles = nullptr; // Asegúrate de inicializar donations como nullptr

			try {
				vehicles = Controller::Controller::QueryAllVehicles();
			}
			catch (Exception^ ex) {
				// Maneja la excepción aquí, como mostrar un mensaje de error o realizar alguna acción apropiada.
					// Puedes usar ex->Message para obtener el mensaje de excepción.
				MessageBox::Show("Error al cargar vehículos: " + ex->Message);
			}

			if (vehicles->Count == 0) {
				chart_pie_vehicle->Visible = false;
				MessageBox::Show("No hay vehículos que mostrar");
				return;
			}

			// procedemos a analizar los datos -filtrar
			Dictionary<String^, int> categoryCounts;

			//recorremos todos los objetos de la clase car para extraer o filtrar todas las marcas existentes
			for each (Vehicle ^ c in vehicles) {
				String^ model = c->Model;
				if (categoryCounts.ContainsKey(model)) {
					categoryCounts[model] = 0;
				}
				else {
					// Si la categoría no existe en el diccionario, agrégala con una cuenta de 1
					categoryCounts[model] = 0;
				}
			}


			// Recorre la lista de productos y cuenta la cantidad en cada categoría
			for each (Vehicle ^ c in vehicles) {
				String^ model = c->Model;
				//analizar qué parámetros o condiciones se deben cumplir para que consideres la cuenta de un carro con
				//la marca correspondiente
				//if (c->Operative != false) {
					//if (c->Color == "Verde") {
				if (categoryCounts.ContainsKey(model)) {
					categoryCounts[model]++;
				}
				//}
			//}
			}

			chart_pie_vehicle->Series["Variable"]->Points->Clear();
			// Agrega los datos al gráfico de barras
			for each (KeyValuePair<String^, int> categoryCount in categoryCounts) {
				String^ categoryName = categoryCount.Key;
				int count = categoryCount.Value;

				chart_pie_vehicle->Series["Variable"]->Points->AddXY(categoryName, count);
			}
		}

	private: System::Void button_vehicle_marca_Click(System::Object^ sender, System::EventArgs^ e) {
		chart_pie_vehicle->Visible = true;
		ShowVehiclesByBrandPieChart();
	}

	private: System::Void button_vehicle_model_Click(System::Object^ sender, System::EventArgs^ e) {
		chart_pie_vehicle->Visible = true;
		ShowVehiclesByModelPieChart();
	}
};
}
