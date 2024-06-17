#pragma once

#include "User.h"
#include "Commendation.h"
#include "Vehicle.h"
#include "Mail.h"

using namespace System;

namespace ProjectModel {
	[Serializable]
		public ref class Proprietor : public User {

		public:
			property int NumberofRecommendations;
			property int NumberofDeals;
			property double NumberOfRecommendationsStars;
			property int Experience;// años de experiencia del cliente
			property String^ Licensetype;// tipo de lincencia que tiene
			property String^ Licensename;
			property Commendation^ recommend;
			property List<Vehicle^>^ ListVehicleProprietor;
			property List<Mail^>^ ListEmailSentProprietor;
			property List<Mail^>^ ListEmailReceivedProprietor;
	};
};
