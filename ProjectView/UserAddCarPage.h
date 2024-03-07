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
	/// Resumen de UserAddCarPage
	/// </summary>
	public ref class UserAddCarPage : public System::Windows::Forms::Form
	{
	public:
		UserAddCarPage(void)
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
		~UserAddCarPage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::PictureBox^ pb_photo;



	private: System::Windows::Forms::Label^ label10;









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_plate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_carmodel;

	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_brand;
	private: System::Windows::Forms::TextBox^ textBox_color;
	private: System::Windows::Forms::TextBox^ textBox_numberofseats;




	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox_sparetire;
	private: System::Windows::Forms::ComboBox^ comboBox_operative;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox_condition;
	private: System::Windows::Forms::Button^ button_insertphoto;
	private: System::Windows::Forms::Button^ button_clearall;








	private: System::Windows::Forms::Button^ button_cancel;
	private: System::Windows::Forms::Button^ button_add;




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
			this->pb_photo = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_plate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_carmodel = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_brand = (gcnew System::Windows::Forms::TextBox());
			this->textBox_color = (gcnew System::Windows::Forms::TextBox());
			this->textBox_numberofseats = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox_sparetire = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_operative = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox_condition = (gcnew System::Windows::Forms::ComboBox());
			this->button_insertphoto = (gcnew System::Windows::Forms::Button());
			this->button_clearall = (gcnew System::Windows::Forms::Button());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->BeginInit();
			this->SuspendLayout();
			// 
			// pb_photo
			// 
			this->pb_photo->BackColor = System::Drawing::Color::White;
			this->pb_photo->Location = System::Drawing::Point(276, 55);
			this->pb_photo->Name = L"pb_photo";
			this->pb_photo->Size = System::Drawing::Size(214, 211);
			this->pb_photo->TabIndex = 105;
			this->pb_photo->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(100, 158);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 19);
			this->label10->TabIndex = 103;
			this->label10->Text = L"Color";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(95, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 19);
			this->label5->TabIndex = 97;
			this->label5->Text = L"Marca";
			// 
			// textBox_plate
			// 
			this->textBox_plate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_plate->Location = System::Drawing::Point(148, 90);
			this->textBox_plate->Name = L"textBox_plate";
			this->textBox_plate->Size = System::Drawing::Size(104, 26);
			this->textBox_plate->TabIndex = 15;
			this->textBox_plate->Tag = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(103, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 19);
			this->label4->TabIndex = 95;
			this->label4->Text = L"Placa";
			// 
			// textBox_carmodel
			// 
			this->textBox_carmodel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_carmodel->Location = System::Drawing::Point(148, 57);
			this->textBox_carmodel->Name = L"textBox_carmodel";
			this->textBox_carmodel->Size = System::Drawing::Size(104, 26);
			this->textBox_carmodel->TabIndex = 10;
			this->textBox_carmodel->Tag = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 19);
			this->label3->TabIndex = 94;
			this->label3->Text = L"Modelo de Auto";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 31);
			this->label1->TabIndex = 91;
			this->label1->Text = L"AGREGANDO CARRO";
			// 
			// textBox_brand
			// 
			this->textBox_brand->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_brand->Location = System::Drawing::Point(148, 121);
			this->textBox_brand->Name = L"textBox_brand";
			this->textBox_brand->Size = System::Drawing::Size(104, 26);
			this->textBox_brand->TabIndex = 20;
			this->textBox_brand->Tag = L"";
			// 
			// textBox_color
			// 
			this->textBox_color->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_color->Location = System::Drawing::Point(148, 154);
			this->textBox_color->Name = L"textBox_color";
			this->textBox_color->Size = System::Drawing::Size(104, 26);
			this->textBox_color->TabIndex = 25;
			this->textBox_color->Tag = L"";
			// 
			// textBox_numberofseats
			// 
			this->textBox_numberofseats->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_numberofseats->Location = System::Drawing::Point(148, 186);
			this->textBox_numberofseats->Name = L"textBox_numberofseats";
			this->textBox_numberofseats->Size = System::Drawing::Size(104, 26);
			this->textBox_numberofseats->TabIndex = 30;
			this->textBox_numberofseats->Tag = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 19);
			this->label7->TabIndex = 120;
			this->label7->Text = L"Numero de Asientos";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(72, 220);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 38);
			this->label8->TabIndex = 122;
			this->label8->Text = L"Llanta de \r\nRepuesto";
			// 
			// comboBox_sparetire
			// 
			this->comboBox_sparetire->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_sparetire->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_sparetire->FormattingEnabled = true;
			this->comboBox_sparetire->Location = System::Drawing::Point(146, 225);
			this->comboBox_sparetire->Name = L"comboBox_sparetire";
			this->comboBox_sparetire->Size = System::Drawing::Size(106, 27);
			this->comboBox_sparetire->TabIndex = 35;
			this->comboBox_sparetire->Tag = L"35";
			// 
			// comboBox_operative
			// 
			this->comboBox_operative->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_operative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_operative->FormattingEnabled = true;
			this->comboBox_operative->Location = System::Drawing::Point(146, 266);
			this->comboBox_operative->Name = L"comboBox_operative";
			this->comboBox_operative->Size = System::Drawing::Size(106, 27);
			this->comboBox_operative->TabIndex = 40;
			this->comboBox_operative->Tag = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(52, 259);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 38);
			this->label6->TabIndex = 124;
			this->label6->Text = L"Estado de\r\nOperatividad";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(66, 312);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 19);
			this->label9->TabIndex = 126;
			this->label9->Text = L"Condición";
			// 
			// comboBox_condition
			// 
			this->comboBox_condition->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_condition->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_condition->FormattingEnabled = true;
			this->comboBox_condition->Location = System::Drawing::Point(146, 308);
			this->comboBox_condition->Name = L"comboBox_condition";
			this->comboBox_condition->Size = System::Drawing::Size(106, 27);
			this->comboBox_condition->TabIndex = 45;
			this->comboBox_condition->Tag = L"";
			// 
			// button_insertphoto
			// 
			this->button_insertphoto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_insertphoto->Location = System::Drawing::Point(297, 272);
			this->button_insertphoto->Name = L"button_insertphoto";
			this->button_insertphoto->Size = System::Drawing::Size(174, 30);
			this->button_insertphoto->TabIndex = 50;
			this->button_insertphoto->Tag = L"";
			this->button_insertphoto->Text = L"Adjuntar imagen";
			this->button_insertphoto->UseVisualStyleBackColor = true;
			this->button_insertphoto->Click += gcnew System::EventHandler(this, &UserAddCarPage::button_insertphoto_Click);
			// 
			// button_clearall
			// 
			this->button_clearall->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clearall->Location = System::Drawing::Point(330, 308);
			this->button_clearall->Name = L"button_clearall";
			this->button_clearall->Size = System::Drawing::Size(108, 30);
			this->button_clearall->TabIndex = 55;
			this->button_clearall->Tag = L"";
			this->button_clearall->Text = L"Limpiar todo";
			this->button_clearall->UseVisualStyleBackColor = true;
			this->button_clearall->Click += gcnew System::EventHandler(this, &UserAddCarPage::button_clearall_Click);
			// 
			// button_cancel
			// 
			this->button_cancel->BackColor = System::Drawing::Color::Maroon;
			this->button_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_cancel->Location = System::Drawing::Point(384, 344);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(105, 31);
			this->button_cancel->TabIndex = 65;
			this->button_cancel->Tag = L"";
			this->button_cancel->Text = L"CANCELAR";
			this->button_cancel->UseVisualStyleBackColor = false;
			this->button_cancel->Click += gcnew System::EventHandler(this, &UserAddCarPage::button_cancel_Click_1);
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(276, 345);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(103, 30);
			this->button_add->TabIndex = 60;
			this->button_add->Tag = L"";
			this->button_add->Text = L"AÑADIR";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &UserAddCarPage::button_add_Click);
			// 
			// UserAddCarPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(520, 386);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_clearall);
			this->Controls->Add(this->button_insertphoto);
			this->Controls->Add(this->comboBox_condition);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox_operative);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox_sparetire);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox_numberofseats);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox_color);
			this->Controls->Add(this->textBox_brand);
			this->Controls->Add(this->pb_photo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_plate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_carmodel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"UserAddCarPage";
			this->Text = L"UserAddCarPage";
			this->Load += gcnew System::EventHandler(this, &UserAddCarPage::UserAddCarPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_photo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:  
		
		void ClearTextBoxes() {

			textBox_carmodel->Clear();
			textBox_plate->Clear();
			textBox_brand->Clear();
			textBox_color->Clear();
			textBox_numberofseats->Clear();
			comboBox_sparetire->Items->Clear();
			comboBox_operative->Items->Clear();
			comboBox_condition->Items->Clear();
			pb_photo->Image = nullptr;

		}

		void FillCombos() {
			comboBox_operative->Items->Clear();
			comboBox_condition->Items->Clear();
			comboBox_sparetire->Items->Add("Sí");
			comboBox_sparetire->Items->Add("No");
			comboBox_operative->Items->Add("Operativo");
			comboBox_operative->Items->Add("Inoperativo");
			comboBox_condition->Items->Add("Nuevo");
			comboBox_condition->Items->Add("Usado");
			comboBox_condition->Items->Add("Antiguo");


		}

	private: System::Void button_cancel_Click_1(System::Object^ sender, System::EventArgs^ e) {

			this->Close();

	}
	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {

		Car^ car = gcnew Car();

		String^ carmodel = textBox_carmodel->Text;
		String^ plate = textBox_plate->Text;
		String^ brand = textBox_brand->Text;
		String^ color = textBox_color->Text;
		String^ _numberofseats = textBox_numberofseats->Text;
		String^ sparetire = comboBox_sparetire->Text;
		String^ operative = comboBox_operative->Text;
		String^ condition = comboBox_condition->Text;


		if (sparetire == "Sí") {

			car->SpareTire = true;

		}
		else if (sparetire == "No") {

			car->SpareTire = false;

		}


		if (operative == "Operativo") {

			car->Operative = true;

		}
		else if (operative == "Inoperativo") {

			car->Operative = false;

		}

		if (String::IsNullOrWhiteSpace(carmodel) || String::IsNullOrWhiteSpace(plate) || String::IsNullOrWhiteSpace(brand) ||
			String::IsNullOrWhiteSpace(color) || String::IsNullOrWhiteSpace(_numberofseats) || String::IsNullOrWhiteSpace(sparetire)
			|| String::IsNullOrWhiteSpace(operative) || String::IsNullOrWhiteSpace(condition)) {
			MessageBox::Show("Es necesario que se completen todos los datos de registro");
			return;
		}

		int numberofseats = 0;
		if (plate->Length != 7) {
			MessageBox::Show("La placa del vehículo ingresado debe tener 7 dígitos");
			return;
		}

		if (!Int32::TryParse(_numberofseats, numberofseats)) {
			MessageBox::Show("Ingrese solo números para la cantidad asientos");
			return;
		}

		car->Id = Controller::GenerateCarId();
		car->NumberOfSeats = numberofseats;
		car->Color = color;
		car->CarModel = carmodel;
		car->Brand = brand;
		car->Plate = plate;
		car->Condition = condition;
		
		if (pb_photo->Image != nullptr) {

			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pb_photo->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			car->Photo = ms->ToArray();
			ms->Close();
		}

		Controller::CreateCar(car);
		MessageBox::Show("Se ha agregado un nuevo vehículo");
		
		this->Close();

	   /*
		property int Id;
		property int NumberOfSeats;
		property String^ Color;
		property String^ CarModel;
		property String^ Brand;
		property String^ Plate;//placa de carro
		property String^ Condition;// Condición del auto
		property bool Operative; //Indica el estado de operatividad del vehículo
		property bool SpareTire; //llanta de repuesto
		property array<Byte>^ Photo; // Matris de bytes
		*/

		/*UserFeedPage^ userFeedPage = gcnew UserFeedPage();
		userFeedPage->MdiParent = this->MdiParent;
		userFeedPage->Show();*///se quiere hacer una referencia circular
}
private: System::Void button_insertphoto_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pb_photo->Image = gcnew Bitmap(opnfd->FileName);
	}
}
private: System::Void button_clearall_Click(System::Object^ sender, System::EventArgs^ e) {


	ClearTextBoxes();
	FillCombos();
 // limpia la imagen

	/*String^ carmodel = textBox_carmodel->Text;
	String^ plate = textBox_plate->Text;
	String^ brand = textBox_brand->Text;
	String^ color = textBox_color->Text;
	String^ _numberofseats = textBox_numberofseats->Text;
	String^ sparetire = comboBox_sparetire->Text;
	String^ operative = comboBox_operative->Text;
	String^ condition = comboBox_condition->Text;*/

}
	private: System::Void UserAddCarPage_Load(System::Object^ sender, System::EventArgs^ e) {

		FillCombos();

	}
};
}
