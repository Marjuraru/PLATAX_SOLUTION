#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
	public ref class Help
	{

	public:
		property int id; 
		property String^ Type;
		property String^ Description; //detalles del tipo de ayuda que se necesita
		property String^ Feedback; //respuesta del personal de ayuda
		property String^ Status; //estado de respuesta: en camino, pendiente, proceso, etc
		property bool Checked;  //ha sido revisado por el administrador
		property DateTime RequestDate; //Fecha y hora de inicio de contrato	 
		property array<Byte>^ Photo; //que tenga la posibilidad de agregar una foto		 
	};
};