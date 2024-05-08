#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
	public ref class Vehicle
	{

	public:
		property int Id;
		property int NumberOfSeats;   
		property String^ Color;
		property String^ Model;
		property String^ Brand;
		property String^ Plate;//placa de carro 
		property String^ Condition;// Condición del auto
		property bool Operative; //Indica el estado de operatividad del vehículo
		property bool SpareTire; //llanta de repuesto
		property array<Byte>^ Photo; // Matris de bytes
	};
}