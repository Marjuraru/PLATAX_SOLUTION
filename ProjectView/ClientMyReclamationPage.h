#pragma once

namespace ProjectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ClientMyReclamationPage
	/// </summary>
	public ref class ClientMyReclamationPage : public System::Windows::Forms::Form
	{
	public:
		ClientMyReclamationPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ClientMyReclamationPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// ClientMyReclamationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"ClientMyReclamationPage";
			this->Text = L"ClientMyReclamationPage";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ClientMyReclamationPage::ClientMyReclamationPage_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ClientMyReclamationPage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	};
}
