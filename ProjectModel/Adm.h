#pragma once

#include "User.h"

using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Adm : public User {

		public:
			property int Experience;// años de experiencia del admin
			property int AccessLevel;			
	};
};