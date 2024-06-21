#pragma once

#include "User.h"
#include "Vehicle.h"

using namespace System;

namespace ProjectModel {
	[Serializable]
		public ref class Mail
	{
	public:
		property int Id;
		property User^ Usertransmitter;
		property User^ Userreceiver;
		property String^ Content;
		property String^ Subject;
		property DateTime MadeDate;
		property Vehicle^ vehicle;
		property bool MailSelected;
		property int DaysAgreed;

		property String^ UsertransmitterName {
			String^ get() {
				return Usertransmitter != nullptr ? Usertransmitter->Name : String::Empty;
			}
		}
		property String^ UserreceiverName {
			String^ get() {
				return Userreceiver != nullptr ? Userreceiver->Name : String::Empty;
			}
		}

		String^ GetFormattedDate() {
			return MadeDate.ToString("dd/MM/yyyy");
		}

		property String^ vehiclePlate {
			String^ get() {
				return vehicle != nullptr ? vehicle->Plate : String::Empty;
			}
		}

	};
};



