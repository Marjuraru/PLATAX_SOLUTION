#pragma once

using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Commendation
	{
	public:
		property bool YNCommendation;
		property array<Byte>^ ScannedCommendation;
		property String^ CommendatorName;

	};
};