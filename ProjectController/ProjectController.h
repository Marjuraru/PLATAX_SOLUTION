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
		
		//Generar Id para Cada clase
		static int GenerateClientId();
		static int GenerateCarId();
		static int GenerateReclamationId();
		static int GenerateHelpId();

		//Mantenimiento de las Clases
			//Mantenimiento de Client
		static void CreateClient(Client^ c);
		static void UpdateClient(Client^ c);
		static void DeleteClient(int id);
			//Mantenimiento de Car
		static void CreateCar(Car^ c);
		static void UpdateCar(Car^ c);
		static void DeleteCar(int id);
			// Metodos de mantenimiento del Reclamation - CRUD
		static void CreateReclamation(Reclamation^ c);
		static void UpdateReclamation(Reclamation^ c);
		static void DeleteReclamation(int id);
			//Método de mantenimiento del Help - CRUD
		static void CreateHelp(Help^ c);
		static void UpdateHelp(Help^ c);
		static void DeleteHelp(int id);

		//Búsqueda de una clase mediante su atributo
			//Bússqueda de Cliente
		static List<Client^>^ QueryAllClients();
		static Client^ QueryClientById(int id);
		static Client^ QueryClientByDni(int dni);
		static Client^ QueryClientByEmail(String^ email);
		static Client^ QueryClientByLicenseName(String^ licensename);

		static List<Client^>^ QueryListClientByName(String^ name);
		static List<Client^>^ QueryListClientByLastname(String^ lastname);
		static List<Client^>^ QueryListClientByLicensetype(String^ licensetype);
			//Búsqueda de Car
		static List<Car^>^ QueryAllCars();
		static Car^ QueryCarById(int id);
		static Car^ QueryCarByPlate(String^ plate);

		static List<Car^>^ QueryListCarByBrand(String^ brand);
		static List<Car^>^ QueryListCarByColor(String^ color);
		static List<Car^>^ QueryListCarByCondition(String^ condition);
		static List<Car^>^ QueryListCarByOperative(bool operative);
			//Búsqueda de Reclamation
		static List<Reclamation^>^ QueryAllReclamations();
		static Reclamation^ QueryReclamationById(int id);
		static Reclamation^ QueryReclamationByTitle(String^ title);
		
		static List<Reclamation^>^ QueryListReclamationByType(String^ type);
		static List<Reclamation^>^ QueryListReclamationByCategory(String^ category);
		static List<Reclamation^>^ QueryListReclamationByState(String^ state);
		static List<Reclamation^>^ QueryListReclamationByDate(DateTime date); 
			//Búsqueda de Help
		static List<Help^>^ QueryAllHelps();
		static Help^ QueryHelpById(int id);

		static List<Help^>^ QueryListHelpByType(String^ type);
		static List<Help^>^ QueryListHelpByCategory(String^ state);
		static List<Help^>^ QueryListHelpByChecked(bool checked);
		static List<Help^>^ QueryListHelpByDate(DateTime date);
		
	};
}
