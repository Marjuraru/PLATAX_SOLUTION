#pragma once

using namespace System;
using namespace ProjectModel;
using namespace ProjectPersistance;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace System::IO::Ports;//<<-- 1.-         //using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;


namespace ProjectController { //marcelos version
	public ref class Controller
	{
	public:
//
		static SerialPort^ ArduinoPuerto; // <<--


		static bool validateAccess(String^ email, String^ password);

		//Generar Id para Cada clase
		static int GenerateUserId();
		//static int GenerateProprietorId();
		static int GenerateVehicleId();
		//static int GenerateClientId();
		static int GenerateReclamationId();
		//ADMINISTRADOR SE REGISTRA A NIVEL DE CÓDIGO
		static int GenerateHelpPlsId();//--

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
		// Metodos de mantenimiento del Reclamation - CRUD
		static void CreateReclamation(Reclamation^ c);
		static void UpdateReclamation(Reclamation^ c);
		static void DeleteReclamation(int id);
		//Mantenimiento de Adm
		static void CreateAdm(Adm^ c);
		static void UpdateAdm(Adm^ c);
		static void DeleteAdm(int id);

		//Metodos de mantenimiento de Help - CRUD  -------
		static void CreateHelpPls(HelpPls^ c);
		static void UpdateHelpPls(HelpPls^ c);
		static void DeleteHelpPls(int id);

		//Atributos que no deben repetirse
		static bool IsDniRegistered(int dni);
		static bool IsPhoneRegistered(int phone);
		static bool IsEmailRegistered(String^ email);
		static bool IsPlateRegistered(String^ plate);

		//Búsqueda de una clase mediante su atributo
			//Búsqueda de User solo por Id:
		static List<User^>^ QueryAllUsers();

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

		//Búsqueda de Reclamation
		static List<Reclamation^>^ QueryAllReclamations();
		static Reclamation^ QueryReclamationById(int id);
		static Reclamation^ QueryReclamationByTitle(String^ title);

		static List<Reclamation^>^ QueryListReclamationByType(String^ type);
		static List<Reclamation^>^ QueryListReclamationByCategory(String^ category);
		static List<Reclamation^>^ QueryListReclamationByState(String^ state);
		static List<Reclamation^>^ QueryListReclamationByDate(DateTime date);

		//Búsqueda de Help 

		static List<HelpPls^>^ QueryAllHelpsPls();

		//Sensor


////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*********************************** Arduino y Visual *****************************************************/
		
// 1.- using namespace System::IO::Ports;  -->>
// 2.- static SerialPort^ ArduinoPuerto;  -->>
// 3.- codificar con la otra pagina para que le llame(ventana...)/ conexion entre madre e hija en
//

		static String^ EnviarRobotALaMesa(int robotId, int mesanum);
		static void AbrirPuerto();
		static void CerrarPuerto();

									/*Ir al cpp de este*/

	};
}
