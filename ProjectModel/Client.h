#pragma once

#include "User.h"
#include "Commendation.h"
#include "Vehicle.h"
#include "Mail.h"
#include "Reclamation.h"


using namespace System;

namespace ProjectModel {
	[Serializable]
		public ref class Client : public User {

		public:
			property int Experience;// años de experiencia del cliente
			property String^ Licensetype;// tipo de lincencia que tiene
			property String^ Licensename;
			property Commendation^ recommend;
			property List<Vehicle^>^ ListVehicleClient;
			property List<Mail^>^ ListEmailSentClient;
			property List<Mail^>^ ListEmailReceivedClient;
			property List<Reclamation^>^ ListReclamationSentClient;
			property List<Reclamation^>^ ListReclamationReceivedClient;
	};
};
