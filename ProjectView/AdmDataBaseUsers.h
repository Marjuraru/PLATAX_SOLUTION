#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdmDataBaseUsers
	/// </summary>
	public ref class AdmDataBaseUsers : public System::Windows::Forms::Form
	{
	public:
		AdmDataBaseUsers(void)
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
		~AdmDataBaseUsers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ DataBase;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Password;
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
			this->DataBase = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// DataBase
			// 
			this->DataBase->AutoSize = true;
			this->DataBase->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DataBase->Location = System::Drawing::Point(229, 33);
			this->DataBase->Name = L"DataBase";
			this->DataBase->Size = System::Drawing::Size(183, 19);
			this->DataBase->TabIndex = 9;
			this->DataBase->Text = L"Base de datos de usuarios";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Id, this->Phone,
					this->Dni, this->Name, this->Lastname, this->Address, this->Email, this->Password
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 167);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(741, 150);
			this->dataGridView1->TabIndex = 10;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Phone
			// 
			this->Phone->HeaderText = L"Phone";
			this->Phone->Name = L"Phone";
			// 
			// Dni
			// 
			this->Dni->HeaderText = L"Dni";
			this->Dni->Name = L"Dni";
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->Name = L"Name";
			// 
			// Lastname
			// 
			this->Lastname->HeaderText = L"Lastname";
			this->Lastname->Name = L"Lastname";
			// 
			// Address
			// 
			this->Address->HeaderText = L"Address";
			this->Address->Name = L"Address";
			// 
			// Email
			// 
			this->Email->HeaderText = L"Email";
			this->Email->Name = L"Email";
			// 
			// Password
			// 
			this->Password->HeaderText = L"Password";
			this->Password->Name = L"Password";
			// 
			// AdmDataBaseUsers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 357);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->DataBase);
			this->Text = L"AdmDataBaseUsers";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};//gaaaaaaaa
}//comentario23
