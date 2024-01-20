#pragma once

using namespace System;

namespace ProjectModel {
	[Serializable]
	public ref class Commendation
	{
	public:
		property int Id;
		property String^ CommendatorName; // quien lo recomend�
		property DateTime Date; //fecha de la recomendaci�n
		property array<Byte>^ ScannedCommendation; //scaneo del documento de recomendaci�n
	};
};