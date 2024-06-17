#pragma once

#include "User.h"

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

		property String^ UserreceiverName {
			String^ get() {
				return Userreceiver != nullptr ? Userreceiver->Name : String::Empty;
			}
		}

	};
};



