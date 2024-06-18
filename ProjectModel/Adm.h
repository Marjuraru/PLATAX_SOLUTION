#pragma once

#include "User.h"
#include "Mail.h"
#include "Reclamation.h"


using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Adm : public User {

		public:
			//property List<Mail^>^ ListEmailSentAdm;
			//property List<Mail^>^ ListEmailReceivedAdm;
			property List<Reclamation^>^ ListReclamationSentAdm;
			property List<Reclamation^>^ ListReclamationReceivedAdm;
	};
};