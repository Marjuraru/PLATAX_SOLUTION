#pragma once

#include "User.h";
using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Client
	{
		public ref class Client : public User {

		public:
			property int NumeroCarreras;
		};
	};
}

//acesso para taxi, licensia, añodeexperiencia, recomendaciones, infracciones
