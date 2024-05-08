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


		//Mantenimiento de las Clases
			//Mantenimiento de Client
		static void CreateProprietor(Proprietor^ c);
		static void UpdateProprietor(Proprietor^ c);
		static void DeleteProprietor(int id);
			//Mantenimiento de Vehicle
		static void CreateVehicle(Vehicle^ c);
		static void UpdateVehicle(Vehicle^ c);
		static void DeleteVehicle(int id);


		//Búsqueda de una clase mediante su atributo
			//Bússqueda de Cliente
		static List<Proprietor^>^ QueryAllProprietors();
		static Proprietor^ QueryProprietorById(int id);
		static Proprietor^ QueryProprietorByDni(int dni);
		static Proprietor^ QueryProprietorByEmail(String^ email);
		static Proprietor^ QueryProprietorByLicenseName(String^ licensename);

		static List<Proprietor^>^ QueryListProprietorByName(String^ name);
		static List<Proprietor^>^ QueryListProprietorByLastname(String^ lastname);
		static List<Proprietor^>^ QueryListProprietorByLicensetype(String^ licensetype);
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
