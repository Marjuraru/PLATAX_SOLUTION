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
		static int GenerateProprietorId();
		static int GenerateVehicleId();
		static int GenerateClientId();


		//Mantenimiento de las Clases
			//Mantenimiento de Proprietor
		static void CreateProprietor(Proprietor^ c);
		static void UpdateProprietor(Proprietor^ c);
		static void DeleteProprietor(int id);
		//Mantenimiento de Client
		static void CreateClient(Client^ c);
		static void UpdateClient(Client^ c);
		static void DeleteClient(int id);
		//Mantenimiento de Vehicle
		static void CreateVehicle(Vehicle^ c);
		static void UpdateVehicle(Vehicle^ c);
		static void DeleteVehicle(int id);


		//Búsqueda de una clase mediante su atributo
			//Bússqueda de Proprietor
		static List<Proprietor^>^ QueryAllProprietors();
		static Proprietor^ QueryProprietorById(int id);
		static Proprietor^ QueryProprietorByDni(int dni);
		static Proprietor^ QueryProprietorByEmail(String^ email);

		static List<Proprietor^>^ QueryListProprietorByName(String^ name);
		static List<Proprietor^>^ QueryListProprietorByLastname(String^ lastname);
		//Bússqueda de Cliente
		static List<Client^>^ QueryAllClients();
		static Client^ QueryClientById(int id);
		static Client^ QueryClientByDni(int dni);
		static Client^ QueryClientByEmail(String^ email);
		static Client^ QueryClientByLicenseName(String^ licensename);

		static List<Client^>^ QueryListClientByName(String^ name);
		static List<Client^>^ QueryListClientByLastname(String^ lastname);
		static List<Client^>^ QueryListClientByLicensetype(String^ licensetype);
		//Búsqueda de Vehicle
		static List<Vehicle^>^ QueryAllVehicles();
		static Vehicle^ QueryVehicleById(int id);
		static Vehicle^ QueryVehicleByPlate(String^ plate);

		static List<Vehicle^>^ QueryListVehiclesByProprietorId(int Id);
		static List<Vehicle^>^ QueryListVehicleByBrand(String^ brand);
		static List<Vehicle^>^ QueryListVehicleByColor(String^ color);
		static List<Vehicle^>^ QueryListVehicleByCondition(String^ condition);
		static List<Vehicle^>^ QueryListVehicleByOperative(bool operative);


	};
}
