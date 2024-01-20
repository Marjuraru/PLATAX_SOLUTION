#pragma once

using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Commendation
	{
	public:
		property int Id;
		property String^ CommendatorName; // quien lo recomendó
		property DateTime Date; //fecha de la recomendación
		property array<Byte>^ ScannedCommendation; //scaneo del documento de recomendación
	};
};