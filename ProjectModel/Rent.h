#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
	public ref class Rent
	{

	public:
		property double Amount;
		property DateTime^ Duration;//Fecha y hora de inicio de contrato
		property String^ DepositMode;

		//acceso para el adm
	};
};