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
	public ref class ClientStateNotificationsPage : public System::Windows::Forms::Form
	{
	public:
		ClientStateNotificationsPage(void)
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
		~ClientStateNotificationsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_notifications;
	private: System::Windows::Forms::Button^ button_humidity;
	private: System::Windows::Forms::Button^ button_speed;

	protected:



	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button_distance;
	private: System::Windows::Forms::Button^ button_weight;


	protected:

	protected:



	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart_notifications = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_humidity = (gcnew System::Windows::Forms::Button());
			this->button_speed = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button_distance = (gcnew System::Windows::Forms::Button());
			this->button_weight = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_notifications))->BeginInit();
			this->SuspendLayout();
			// 
			// chart_notifications
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_notifications->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart_notifications->Legends->Add(legend2);
			this->chart_notifications->Location = System::Drawing::Point(457, 38);
			this->chart_notifications->Margin = System::Windows::Forms::Padding(4);
			this->chart_notifications->Name = L"chart_notifications";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Variable";
			this->chart_notifications->Series->Add(series2);
			this->chart_notifications->Size = System::Drawing::Size(438, 362);
			this->chart_notifications->TabIndex = 2;
			this->chart_notifications->Text = L"chart_notifications";
			// 
			// button_humidity
			// 
			this->button_humidity->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_humidity->Location = System::Drawing::Point(66, 90);
			this->button_humidity->Margin = System::Windows::Forms::Padding(4);
			this->button_humidity->Name = L"button_humidity";
			this->button_humidity->Size = System::Drawing::Size(244, 39);
			this->button_humidity->TabIndex = 35;
			this->button_humidity->Text = L"Gráfica Humedad";
			this->button_humidity->UseVisualStyleBackColor = true;
//			this->button_humidity->Click += gcnew System::EventHandler(this, &ClientStateNotificationsPage::button_vehicle_model_Click);
			// 
			// button_speed
			// 
			this->button_speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_speed->Location = System::Drawing::Point(66, 159);
			this->button_speed->Margin = System::Windows::Forms::Padding(4);
			this->button_speed->Name = L"button_speed";
			this->button_speed->Size = System::Drawing::Size(244, 39);
			this->button_speed->TabIndex = 36;
			this->button_speed->Text = L"Registro de velocidades";
			this->button_speed->UseVisualStyleBackColor = true;
//			this->button_speed->Click += gcnew System::EventHandler(this, &ClientStateNotificationsPage::button_vehicle_marca_Click);
			// 
			// button_distance
			// 
			this->button_distance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_distance->Location = System::Drawing::Point(66, 229);
			this->button_distance->Margin = System::Windows::Forms::Padding(4);
			this->button_distance->Name = L"button_distance";
			this->button_distance->Size = System::Drawing::Size(244, 39);
			this->button_distance->TabIndex = 37;
			this->button_distance->Text = L"Registro de distancias";
			this->button_distance->UseVisualStyleBackColor = true;
			// 
			// button_weight
			// 
			this->button_weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_weight->Location = System::Drawing::Point(66, 292);
			this->button_weight->Margin = System::Windows::Forms::Padding(4);
			this->button_weight->Name = L"button_weight";
			this->button_weight->Size = System::Drawing::Size(244, 39);
			this->button_weight->TabIndex = 38;
			this->button_weight->Text = L"Registro de carga";
			this->button_weight->UseVisualStyleBackColor = true;
			// 
			// ClientStateNotificationsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 420);
			this->Controls->Add(this->button_weight);
			this->Controls->Add(this->button_distance);
			this->Controls->Add(this->button_speed);
			this->Controls->Add(this->button_humidity);
			this->Controls->Add(this->chart_notifications);
			this->Name = L"ClientStateNotificationsPage";
			this->Text = L"ClientMynotifaicion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_notifications))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	};
}
