#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace ProjectModel; // Agrega esta línea para importar el espacio de nombres que contiene 'User'

namespace ProjectPersistance { //marcelos version
    public ref class Persistance
    {
    private:                    //(2°)
        static List<User^>^ UserList = gcnew List<User^>(); //no necesitamos 
        static List<Proprietor^>^ ProprietorList = gcnew List<Proprietor^>();
        static List<Vehicle^>^ VehicleList = gcnew List<Vehicle^>();
        static List<Client^>^ ClientList = gcnew List<Client^>();
        static List<Reclamation^>^ ReclamationList = gcnew List<Reclamation^>();
        static List<Adm^>^ AdmList = gcnew List<Adm^>();
        static List<HelpPls^>^ HelpPlsList = gcnew List<HelpPls^>();
        static List<Mail^>^ MailList = gcnew List<Mail^>();
    public:                     //(1°)
        static String^ USER_FILE_BIN_NAME = "User.bin";
        static String^ PROPRIETOR_FILE_BIN_NAME = "Proprietor.bin";
        static String^ VEHICLE_FILE_BIN_NAME = "Vehicle.bin";
        static String^ CLIENT_FILE_BIN_NAME = "Client.bin";
        static String^ RECLAMATION_FILE_BIN_NAME = "Reclamation.bin";
        static String^ ADM_FILE_BIN_NAME = "Adm.bin";
        static String^ HELPPLS_FILE_BIN_NAME = "HelpPls.bin";
        static String^ MAIL_FILE_BIN_NAME = "Mail.bin";


        //Persistencia binaria
        static void PersistBinaryFile(String^ fileName, Object^ persistObject); //metodo de escritura/creación de archivos binarios
        static Object^ LoadBinaryFile(String^ fileName); //metodo de lectura/carga de archivos binarios

        //Generar Id para cada clase (comenzar 1° con esto)
        static int GenerateUserId();
        //static int GenerateProprietorId();
        static int GenerateVehicleId();
        //static int GenerateClientId();
        static int GenerateReclamationId();
        //ADMINISTRADOR SE REGISTRA A NIVEL DE CÓDIGO
        static int GenerateHelpPlsId();
        //ADMINISTRADOR SE REGISTRA A NIVEL DE CÓDIGO
        static int GenerateMailId();

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
        // Metodos de mantenimiento del Reclamation - CRUD
        static void CreateReclamation(Reclamation^ c);
        static void UpdateReclamation(Reclamation^ c);
        static void DeleteReclamation(int id);
        //Metodos de mantenimiento del Admin - CRUD  
        static void CreateAdm(Adm^ c);
        static void UpdateAdm(Adm^ c);
        static void DeleteAdm(int id);

        //Metodos de mantenimiento de HelpPls - CRUD  -------
        static void CreateHelpPls(HelpPls^ c);
        static void UpdateHelpPls(HelpPls^ c);
        static void DeleteHelpPls(int id);

        //Metodos de mantenimiento de Mail - CRUD  -------
        static void CreateMail(Mail^ c);
        //static void UpdateMail(HelpPls^ c);
        static void DeleteMail(int id);

        //Atributos que no deben repetirse
        static bool IsDniRegistered(int dni);
        static bool IsPhoneRegistered(int phone);
        static bool IsEmailRegistered(String^ email);
        static bool IsPlateRegistered(String^ plate);
        //Búsqueda de una clase mediante su atributo (2°)

        //Búsqueda de User solo por Id:
        static List<User^>^ QueryAllUsers();
        
        //Búsqueda del Administrador
        static List<Adm^>^ QueryAllAdms();

        //Búsqueda de Proprietor
        static List<Proprietor^>^ QueryAllProprietors();
        static Proprietor^ QueryProprietorById(int id);
        static Proprietor^ QueryProprietorByDni(int dni);
        static Proprietor^ QueryProprietorByEmail(String^ email);
        static Proprietor^ QueryProprietorByVehicleSelected();

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

        //Búsqueda de Reclamation 
        static List<Reclamation^>^ QueryAllReclamations();
        static Reclamation^ QueryReclamationById(int id);
        static Reclamation^ QueryReclamationByTitle(String^ title);

        static List<Reclamation^>^ QueryListReclamationByType(String^ type);
        static List<Reclamation^>^ QueryListReclamationByCategory(String^ category);
        static List<Reclamation^>^ QueryListReclamationByState(String^ state);
        static List<Reclamation^>^ QueryListReclamationByDate(DateTime systemdate);

        //Búsqueda de HelpPls 
        static List<HelpPls^>^ QueryAllHelpsPls();

        //Búsqueda de Mails 
        static List<Mail^>^ QueryAllMails();
        static Mail^ QueryMailById(int id);
        static Mail^ QueryMailBySubject(String^ subject);

        //Asignaciones de Vehículos
 //       static void Asignarvehiculo(Vehicle^ current_vehicle,Proprietor^ current_proprietor);//
    };
}

