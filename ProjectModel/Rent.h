#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
	public ref class Rent
	{

	public:
		property int id;
		property double Amount;
		property String^ PaymentMode;
		property DateTime InitDate;//Fecha y hora de inicio de contrato		
		property array<Byte>^ Voucher;
		property array<Byte>^ Contract; //puede ser una clase completa
		// se puede agregar que ingrese el numero de transacción, el nombre de la entidad bancaria y demás
		//acceso para el adm
	};
};