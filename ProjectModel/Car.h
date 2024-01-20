#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
	public ref class Car
	{

	public:
		property int Id;
		property int NumberOfSeats;   
		property String^ Color;
		property String^ CarModel;
		property String^ Brand;
		property String^ Plate;//placa de carro 
		property bool SpareTire; //llanta de repuesto
		property bool Opertive; //Indica el estado de operatividad del vehículo
		property array<Byte>^ Photo; // Matris de bytes
	};
}