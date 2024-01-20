#pragma once


using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Infringement
	{
		public:
			property int id;
			property double price;
			property String^ Name;
			property String^ Type;	//grave, leve, simple, etc	
			property DateTime Date; //día que se puso la infracción
			
	};
};
