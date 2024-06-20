#pragma once

using namespace System;

namespace ProjectModel {
	[Serializable]
		public ref class Measurement
	{
	public:
		property int Id;
		property double ValueMeasure;
		property String^ TypeOfMeasure;
		property DateTime MadeDate;

	};
};




