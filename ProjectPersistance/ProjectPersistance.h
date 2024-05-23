#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace ProjectModel; // Agrega esta línea para importar el espacio de nombres que contiene 'User'

namespace ProjectPersistance {
    public ref class Persistance
    {
    private:                    //(2°)
        static List<User^>^ UserList = gcnew List<User^>(); //no necesitamos 
        static List<Proprietor^>^ ProprietorList = gcnew List<Proprietor^>();
        static List<Vehicle^>^ VehicleList = gcnew List<Vehicle^>();
        static List<Client^>^ ClientList = gcnew List<Client^>();

    public:                     //(1°)
        static String^ PROPRIETOR_FILE_BIN_NAME = "Proprietor.bin";
        static String^ VEHICLE_FILE_BIN_NAME = "Vehicle.bin";
        static String^ CLIENT_FILE_BIN_NAME = "Client.bin";


        //Persistencia binaria
        static void PersistBinaryFile(String^ fileName, Object^ persistObject); //metodo de escritura/creación de archivos binarios
        static Object^ LoadBinaryFile(String^ fileName); //metodo de lectura/carga de archivos binarios

        //Generar Id para cada clase (comenzar 1° con esto)
        static int GenerateProprietorId();
        static int GenerateVehicleId();
        static int GenerateClientId();

        // Metodos de mantenimiento del Proprietario - CRUD
        static void CreateProprietor(Proprietor^ c);
        static void UpdateProprietor(Proprietor^ c);
        static void DeleteProprietor(int id);
        // Metodos de mantenimiento del Cliente - CRUD
        static void CreateClient(Client^ c);
        static void UpdateClient(Client^ c);
        static void DeleteClient(int id);
        // Metodos de mantenimiento del Car - CRUD
        static void CreateVehicle(Vehicle^ c);
        static void UpdateVehicle(Vehicle^ c);
        static void DeleteVehicle(int id);


        //Búsqueda de una clase mediante su atributo (2°)
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
        //Búsqueda de Car
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

