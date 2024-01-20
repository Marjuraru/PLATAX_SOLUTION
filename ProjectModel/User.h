#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
	public ref class User
	{

	public:
		property int Id;
		property String^ Name;
		property int Phone;
		property String^ Email;
		property String^ Password;
		property String^ Sex;
		property int Dni;
		property DateTime^ SignDate;//Fecha y hora de inicio de contrato
		property DateTime^ BirthDate;//Fecha y hora de fin de contrato
		property String^ Address;
		property array<Byte>^ Photo; // Matris de bytes
		property List<int>^ Ids; // Lista de Ids

		//acceso para al admin, variable crearpass
	};
}