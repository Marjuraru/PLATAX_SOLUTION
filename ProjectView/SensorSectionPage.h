#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ Title;
	protected:
	private: System::Windows::Forms::Button^ button_brand;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_pie;
	private: System::Windows::Forms::ProgressBar^ progressBar1;

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
			this->Title = (gcnew System::Windows::Forms::Label());
			this->button_brand = (gcnew System::Windows::Forms::Button());
			this->chart_pie = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_pie))->BeginInit();
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->Title->Location = System::Drawing::Point(204, 86);
			this->Title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(74, 26);
			this->Title->TabIndex = 59;
			this->Title->Text = L"Título";
			this->Title->Visible = false;
			// 
			// button_brand
			// 
			this->button_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_brand->Location = System::Drawing::Point(18, 7);
			this->button_brand->Name = L"button_brand";
			this->button_brand->Size = System::Drawing::Size(183, 32);
			this->button_brand->TabIndex = 58;
			this->button_brand->Text = L"Vehículos - Marca";
			this->button_brand->UseVisualStyleBackColor = true;
			// 
			// chart_pie
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_pie->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart_pie->Legends->Add(legend2);
			this->chart_pie->Location = System::Drawing::Point(40, 104);
			this->chart_pie->Name = L"chart_pie";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->Name = L"serie";
			this->chart_pie->Series->Add(series2);
			this->chart_pie->Size = System::Drawing::Size(458, 356);
			this->chart_pie->TabIndex = 57;
			this->chart_pie->Text = L"chart1";
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar1->ForeColor = System::Drawing::Color::Red;
			this->progressBar1->Location = System::Drawing::Point(642, 285);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 60;
			// 
			// SensorSectionPage
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 474);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->button_brand);
			this->Controls->Add(this->chart_pie);
			this->Name = L"SensorSectionPage";
			this->Text = L"SensorSectionPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_pie))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	};
}
