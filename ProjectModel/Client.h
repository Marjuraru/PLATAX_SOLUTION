#pragma once

#include "User.h"
#include "Car.h"

using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Client
	{
		public ref class Client : public User {

		public:
			property int Experience;// años de experiencia del cliente
			property bool Infractions;// tiene infracciones?
			property String^ LicenseType;// tipo de lincencia que tiene
			property bool Recomendation;
			property Car^ Car;

		};
	};
}
//hola
//acesso para taxi, licensia, añodeexperiencia, recomendaciones, infracciones
