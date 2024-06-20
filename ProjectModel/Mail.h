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

	};
};



