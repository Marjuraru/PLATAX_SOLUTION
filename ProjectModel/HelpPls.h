#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
	[Serializable]
		public ref class HelpPls
	{

	public:
		property int Id;
		property String^ Comment; //detalles del tipo de ayuda que se necesita
		property String^ Feedback; //respuesta del personal de ayuda
		property DateTime CommentDate;//Fecha de comentario
	};
};

