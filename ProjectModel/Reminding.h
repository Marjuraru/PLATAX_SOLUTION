#pragma once 


using namespace System;

namespace ProjectModel {
	[Serializable]
		public ref class Reminding
	{
	public:
		property int id;
		property double Amount;
		property String^ Type;	//preventivo, como cuando ya venció la fecha de pago 		
		property String^ Title;
		property String^ Description;
		property String^ Category; //urgente, importante, //comboo		
		property String^ Feedback;
		property bool Send;//Pendiente y Resuelto
		property DateTime PaymentDate; //fecha de pago
		property DateTime Date; //fecha de envío
	};
};