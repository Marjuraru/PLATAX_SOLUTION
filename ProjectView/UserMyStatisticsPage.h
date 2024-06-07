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
	private: System::Windows::Forms::Button^ button_color;

	private: System::Windows::Forms::Button^ button_brand;

	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Label^ Title_2;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart_column = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_pie = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_color = (gcnew System::Windows::Forms::Button());
			this->button_brand = (gcnew System::Windows::Forms::Button());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->Title_2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_column))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_pie))->BeginInit();
			this->SuspendLayout();
			// 
			// chart_column
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart_column->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart_column->Legends->Add(legend3);
			this->chart_column->Location = System::Drawing::Point(673, 168);
			this->chart_column->Margin = System::Windows::Forms::Padding(4);
			this->chart_column->Name = L"chart_column";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"car_category";
			series6->ChartArea = L"ChartArea1";
			series6->Legend = L"Legend1";
			series6->Name = L"car_color";
			series7->ChartArea = L"ChartArea1";
			series7->Legend = L"Legend1";
			series7->Name = L"car_operativ";
			this->chart_column->Series->Add(series5);
			this->chart_column->Series->Add(series6);
			this->chart_column->Series->Add(series7);
			this->chart_column->Size = System::Drawing::Size(700, 438);
			this->chart_column->TabIndex = 0;
			this->chart_column->Text = L"chart1";
			// 
			// chart_pie
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart_pie->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart_pie->Legends->Add(legend4);
			this->chart_pie->Location = System::Drawing::Point(29, 168);
			this->chart_pie->Margin = System::Windows::Forms::Padding(4);
			this->chart_pie->Name = L"chart_pie";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series8->Legend = L"Legend1";
			series8->Name = L"serie";
			this->chart_pie->Series->Add(series8);
			this->chart_pie->Size = System::Drawing::Size(611, 438);
			this->chart_pie->TabIndex = 1;
			this->chart_pie->Text = L"chart1";
			// 
			// button_color
			// 
			this->button_color->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_color->Location = System::Drawing::Point(302, 13);
			this->button_color->Margin = System::Windows::Forms::Padding(4);
			this->button_color->Name = L"button_color";
			this->button_color->Size = System::Drawing::Size(244, 39);
			this->button_color->TabIndex = 35;
			this->button_color->Text = L"Vehículos - Color";
			this->button_color->UseVisualStyleBackColor = true;
			this->button_color->Click += gcnew System::EventHandler(this, &UserMyStatisticsPage::button_color_Click);
			// 
			// button_brand
			// 
			this->button_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_brand->Location = System::Drawing::Point(13, 13);
			this->button_brand->Margin = System::Windows::Forms::Padding(4);
			this->button_brand->Name = L"button_brand";
			this->button_brand->Size = System::Drawing::Size(244, 39);
			this->button_brand->TabIndex = 34;
			this->button_brand->Text = L"Vehículos - Marca";
			this->button_brand->UseVisualStyleBackColor = true;
			this->button_brand->Click += gcnew System::EventHandler(this, &UserMyStatisticsPage::button_brand_Click);
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->Title->Location = System::Drawing::Point(261, 111);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(92, 35);
			this->Title->TabIndex = 56;
			this->Title->Text = L"Título";
			this->Title->Visible = false;
			// 
			// Title_2
			// 
			this->Title_2->AutoSize = true;
			this->Title_2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_2->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->Title_2->Location = System::Drawing::Point(745, 111);
			this->Title_2->Name = L"Title_2";
			this->Title_2->Size = System::Drawing::Size(92, 35);
			this->Title_2->TabIndex = 57;
			this->Title_2->Text = L"Título";
			this->Title_2->Visible = false;
			// 
			// UserMyStatisticsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1395, 634);
			this->Controls->Add(this->Title_2);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->button_color);
			this->Controls->Add(this->button_brand);
			this->Controls->Add(this->chart_pie);
			this->Controls->Add(this->chart_column);
			this->Margin = System::Windows::Forms::Padding(4);
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
					//if (c->Color == "Amarillo") {
						if (categoryCounts.ContainsKey(brand)) {
							categoryCounts[brand]++;
						}
					//}
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

		void ShowCarsByColorColumnChart() {
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
				String^ color = c->Color;
				if (categoryCounts.ContainsKey(color)) {
					categoryCounts[color] = 0;
				}
				else {
					// Si la categoría no existe en el diccionario, agrégala con una cuenta de 1
					categoryCounts[color] = 0;
				}
			}


			// Recorre la lista de productos y cuenta la cantidad en cada categoría
			for each (Vehicle ^ c in vehicles) {
				String^ color = c->Color;
				//analizar qué parámetros o condiciones se deben cumplir para que consideres la cuenta de un carro con
				//la marca correspondiente
				if (c->Operative != false) {
					//if (c->Color == "Amarillo") {
					if (categoryCounts.ContainsKey(color)) {
						categoryCounts[color]++;
					}
					//}
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
				//if (c->Operative != false) {
					//if (c->Color == "Verde") {
						if (categoryCounts.ContainsKey(brand)) {
							categoryCounts[brand]++;
						}
					//}
				//}
			}

			chart_pie->Series["serie"]->Points->Clear();
			// Agrega los datos al gráfico de barras
			for each (KeyValuePair<String^, int> categoryCount in categoryCounts) {
				String^ categoryName = categoryCount.Key;
				int count = categoryCount.Value;

				chart_pie->Series["serie"]->Points->AddXY(categoryName, count);
			}
		}

		void ShowCarsByColorPieChart() {
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
				String^ color = c->Color;
				if (categoryCounts.ContainsKey(color)) {
					categoryCounts[color] = 0;
				}
				else {
					// Si la categoría no existe en el diccionario, agrégala con una cuenta de 1
					categoryCounts[color] = 0;
				}
			}


			// Recorre la lista de productos y cuenta la cantidad en cada categoría
			for each (Vehicle ^ c in vehicles) {
				String^ color = c->Color;
				//analizar qué parámetros o condiciones se deben cumplir para que consideres la cuenta de un carro con
				//la marca correspondiente
				//if (c->Operative != false) {
					//if (c->Color == "Verde") {
					if (categoryCounts.ContainsKey(color)) {
						categoryCounts[color]++;
					}
					//}
				//}
			}

			chart_pie->Series["serie"]->Points->Clear();
			// Agrega los datos al gráfico de barras
			for each (KeyValuePair<String^, int> categoryCount in categoryCounts) {
				String^ categoryName = categoryCount.Key;
				int count = categoryCount.Value;

				chart_pie->Series["serie"]->Points->AddXY(categoryName, count);
			}
		}

	private: System::Void button_brand_Click(System::Object^ sender, System::EventArgs^ e) {
		chart_column->Visible = true;
		Title->Visible = true;
		Title->Text = "Vehículos - Marca";

		Title_2->Visible = true;
		Title_2->Text = "Vehículos - Marca (SOLO OPERATIVOS)";

		ShowCarsByCategoryColumnChart();
		ShowCarsByCategoryPieChart();
	}
	private: System::Void button_color_Click(System::Object^ sender, System::EventArgs^ e) {
		chart_column->Visible = true;
		Title->Visible = true;
		Title->Text = "Vehículos - Color";

		Title_2->Visible = true;
		Title_2->Text = "Vehículos - Color (SOLO OPERATIVOS)";

		ShowCarsByColorColumnChart();
		ShowCarsByColorPieChart();
	}
};
}
