#pragma once

using namespace System;
using namespace ProjectModel;
using namespace ProjectPersistance;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

namespace ProjectController {
	public ref class Controller
	{
	public:

		static bool validateAccess(String^ email, String^ password);
		static int GenerateClientId();


		static void CreateClient(Client^ c);
		static void UpdateClient(Client^ c);
		static void DeleteClient(int id);

		//busqueda de una clase mediante su atributo
		static List<Client^>^ QueryAllClients();
		static Client^ QueryClientById(int id);
		static List<Client^>^ QueryListClientByName(String^ name);

	};
}
