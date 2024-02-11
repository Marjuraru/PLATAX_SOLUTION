#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace ProjectModel; // Agrega esta línea para importar el espacio de nombres que contiene 'User'

namespace ProjectPersistance {
    public ref class Persistance
    {
    private:                    //(2°)
        static List<User^>^ UserList = gcnew List<User^>(); //no necesitamos 
        static List<Client^>^ ClientList = gcnew List<Client^>();
        static List<Car^>^ CarList = gcnew List<Car^>();
        static List<Reclamation^>^ ReclamationList = gcnew List<Reclamation^>();
        static List<Help^>^ HelpList = gcnew List<Help^>();

    public:                     //(1°)
        static String^ CLIENT_FILE_BIN_NAME = "Client.bin";
        static String^ CAR_FILE_BIN_NAME = "Car.bin";
        static String^ RECLAMATION_FILE_BIN_NAME = "Reclamation.bin";
        static String^ HELP_FILE_BIN_NAME = "Help.bin";


        //Persistencia binaria
        static void PersistBinaryFile(String^ fileName, Object^ persistObject); //metodo de escritura/creación de archivos binarios
        static Object^ LoadBinaryFile(String^ fileName); //metodo de lectura/carga de archivos binarios

        //Generar Id para cada clase (comenzar 1° con esto)
        static int GenerateClientId();
        static int GenerateCarId();
        static int GenerateReclamationId();
        static int GenerateHelpId();

        // Metodos de mantenimiento del Cliente - CRUD (2°)
            // Metodos de mantenimiento del Cliente - CRUD
        static void CreateClient(Client^ c);
        static void UpdateClient(Client^ c);
        static void DeleteClient(int id);
            // Metodos de mantenimiento del Car - CRUD
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

        //Búsqueda de una clase mediante su atributo (2°)
            //BÚsqueda de Cliente
        static List<Client^>^ QueryAllClients();
        static Client^ QueryClientById(int id);//*
        static Client^ QueryClientByDni(int dni);
        static Client^ QueryClientByEmail(String^ email);
        static Client^ QueryClientByLicenseName(String^ licensename);

        static List<Client^>^ QueryListClientByName(String^ name);//*
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
        static List<Reclamation^>^ QueryListReclamationByState(String^ status);
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
