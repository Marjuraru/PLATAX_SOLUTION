#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
	public ref class User
	{

	public:
		property int Id;
		property int Phone;
		property int Dni;
		property String^ Name;
		property String^ Lastname;
		property String^ Address;
		property String^ Email;
		property String^ Password;
		property bool male;
		property bool female;
		property bool client;
		property bool proprietor;
		property DateTime SignDate;//Fecha y hora de inicio de contrato
		property DateTime BirthDate;//Fecha y hora de fin de contrato
		property array<Byte>^ Photo; // Matris de bytes		
		

		// property List<int>^ Ids; // Lista de Ids solo ejemplo
		//acceso para al admin, variable crearpass
	};
}