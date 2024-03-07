#pragma once


using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Reclamation
	{
	public:
		property int Id;
		property String^ Type;	//grave, leve, simple, etc			
		property String^ Title;
		property String^ Description;
		property String^ Category; //urgente, importante, //comboo
		property String^ State;//Pendiente y Resuelto
		property String^ Feedback;
		property DateTime SearchDate; //fecha de reclamo
		property DateTime SystemDate;
		property array<Byte>^ Photo;
	};
};
