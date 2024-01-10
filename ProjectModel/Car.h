#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
	public ref class Car
	{

	public:
		property int Id;
		property String^ Brand;
		property String^ Plate;//placa de carro
		property DateTime^ StartDate;//Fecha y hora de inicio de contrato
		property DateTime^ DeathLine;//Fecha y hora de fin de contrato
		property double PayRent;//Pago del Taxi por la renta
		property double Speed; 
		property String^ Color;
		property String^ CarModel; 
		property bool Opertive; //Indica el estado de operatividad del vehículo
		property array<Byte>^ Photo; // Matris de bytes
		property List<int>^ Ids; // Lista de ids


		, NumeroDeAsientos, Maletera,LlantaDeRepuesto, ModelodelMotor, size, wight
	};
}