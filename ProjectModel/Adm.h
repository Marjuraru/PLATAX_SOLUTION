#pragma once

#include "User.h"

using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Adm : public User {

		public:
			property int Experience;// a�os de experiencia del admin
			property int AccessLevel;			
	};
};