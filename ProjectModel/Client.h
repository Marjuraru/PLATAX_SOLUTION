#pragma once

#include "User.h"
#include "Car.h"

using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Client : public User {
		
		public:
			property int Experience;// años de experiencia del cliente
			property String^ LicenseType;// tipo de lincencia que tiene
			property Car^ Car;
			property String^ LicenseName;
	};
};
