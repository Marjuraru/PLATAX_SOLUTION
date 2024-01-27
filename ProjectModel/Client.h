#pragma once

#include "User.h"
#include "Commendation.h"
#include "Car.h"

using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Client : public User {
		
		public:
			property int id;
			property int Experience;// años de experiencia del cliente
			property String^ Licensetype;// tipo de lincencia que tiene
			property String^ Licensename;
			property Commendation^ recommend;
			property Car^ Car;		

	};
};
