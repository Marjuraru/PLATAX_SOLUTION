#pragma once


using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Infringement
	{
		public:
			property bool YNInfringement;// tiene infracciones?
			property String^ InfringementName;
	};
};
