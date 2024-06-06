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
	/// Resumen de UserMyStatisticsPage
	/// </summary>
	public ref class UserMyStatisticsPage : public System::Windows::Forms::Form
	{
	public:
		UserMyStatisticsPage(void)
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
		~UserMyStatisticsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_column;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_pie;
	private: System::Windows::Forms::Button^ button_status;
	private: System::Windows::Forms::Button^ button_category;
	private: System::Windows::Forms::Label^ Title;
	protected:


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart_column = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_pie = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_status = (gcnew System::Windows::Forms::Button());
			this->button_category = (gcnew System::Windows::Forms::Button());
			this->Title = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_column))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_pie))->BeginInit();
			this->SuspendLayout();
			// 
			// chart_column
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart_column->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart_column->Legends->Add(legend1);
			this->chart_column->Location = System::Drawing::Point(688, 151);
			this->chart_column->Name = L"chart_column";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"car_category";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"car_color";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"car_operativ";
			this->chart_column->Series->Add(series1);
			this->chart_column->Series->Add(series2);
			this->chart_column->Series->Add(series3);
			this->chart_column->Size = System::Drawing::Size(525, 356);
			this->chart_column->TabIndex = 0;
			this->chart_column->Text = L"chart1";
			// 
			// chart_pie
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_pie->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart_pie->Legends->Add(legend2);
			this->chart_pie->Location = System::Drawing::Point(85, 151);
			this->chart_pie->Name = L"chart_pie";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series4->Legend = L"Legend1";
			series4->Name = L"serie";
			this->chart_pie->Series->Add(series4);
			this->chart_pie->Size = System::Drawing::Size(458, 356);
			this->chart_pie->TabIndex = 1;
			this->chart_pie->Text = L"chart1";
			// 
			// button_status
			// 
			this->button_status->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_status->Location = System::Drawing::Point(449, 31);
			this->button_status->Name = L"button_status";
			this->button_status->Size = System::Drawing::Size(183, 32);
			this->button_status->TabIndex = 35;
			this->button_status->Text = L"Vehículos - Color";
			this->button_status->UseVisualStyleBackColor = true;
			// 
			// button_category
			// 
			this->button_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_category->Location = System::Drawing::Point(176, 31);
			this->button_category->Name = L"button_category";
			this->button_category->Size = System::Drawing::Size(183, 32);
			this->button_category->TabIndex = 34;
			this->button_category->Text = L"Vehículos - Marca";
			this->button_category->UseVisualStyleBackColor = true;
			this->button_category->Click += gcnew System::EventHandler(this, &UserMyStatisticsPage::button_category_Click);
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->Title->Location = System::Drawing::Point(599, 106);
			this->Title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(74, 26);
			this->Title->TabIndex = 56;
			this->Title->Text = L"Título";
			this->Title->Visible = false;
			// 
			// UserMyStatisticsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1370, 669);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->button_status);
			this->Controls->Add(this->button_category);
			this->Controls->Add(this->chart_pie);
			this->Controls->Add(this->chart_column);
			this->Name = L"UserMyStatisticsPage";
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_column))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_pie))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		void CleanSeries() {
			// Iterar a través de todas las series del gráfico
			for each (System::Windows::Forms::DataVisualization::Charting::Series ^ series in chart_column->Series) {
				// Limpiar los puntos de la serie actual
				series->Points->Clear();
			}
		}

		void ShowCarsByCategoryColumnChart() {
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
				chart_column->Visible = false;
				Title->Visible = false;
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
				if (c->Operative != false) {
					if (c->Color == "Amarillo") {
						if (categoryCounts.ContainsKey(brand)) {
							categoryCounts[brand]++;
						}
					}
				}
			}

			CleanSeries();
			// Agrega los datos al gráfico de barras
			for each (KeyValuePair<String^, int> categoryCount in categoryCounts) {
				String^ categoryName = categoryCount.Key;
				int count = categoryCount.Value;

				chart_column->Series["car_category"]->Points->AddXY(categoryName, count);
			}

		}

		void ShowCarsByCategoryPieChart() {
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
				chart_column->Visible = false;
				Title->Visible = false;
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
				if (c->Operative != false) {
					if (c->Color == "Verde") {
						if (categoryCounts.ContainsKey(brand)) {
							categoryCounts[brand]++;
						}
					}
				}
			}

			chart_pie->Series["serie"]->Points->Clear();
			// Agrega los datos al gráfico de barras
			for each (KeyValuePair<String^, int> categoryCount in categoryCounts) {
				String^ categoryName = categoryCount.Key;
				int count = categoryCount.Value;

				chart_pie->Series["serie"]->Points->AddXY(categoryName, count);
			}
		}

	private: System::Void button_category_Click(System::Object^ sender, System::EventArgs^ e) {
		chart_column->Visible = true;
		Title->Visible = true;
		Title->Text = "Vehículos - Categoría";
		ShowCarsByCategoryColumnChart();
		ShowCarsByCategoryPieChart();
	}
	};
}
