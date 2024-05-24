#include "pch.h"

#include "ProjectPersistance.h"


using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization; //por si acaso
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace ProjectModel;
using namespace ProjectPersistance;


// PERSISTENCIA BINARIA
void ProjectPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject) {
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally { //Es el más importante
        if (file != nullptr) file->Close();
    }
}

Object^ ProjectPersistance::Persistance::LoadBinaryFile(String^ fileName) {
    Object^ result;
    FileStream^ file;
    BinaryFormatter^ formatter;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();

            if (fileName->Equals(PROPRIETOR_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(VEHICLE_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(CLIENT_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(RECLAMATION_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(ADM_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
    return result;
}
///////////////////////////////////////////////////////////////////////////////////////////
int ProjectPersistance::Persistance::GenerateProprietorId()
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    int newID = 1;
    if (ProprietorList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Proprietor ^ Proprietor in ProprietorList) {
            if (Proprietor->Id >= newID) {
                newID = Proprietor->Id + 1;
            }
        }
    }
    return newID;
}

int ProjectPersistance::Persistance::GenerateVehicleId()
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
    int newID = 1;
    if (VehicleList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Vehicle ^ vehicle in VehicleList) {
            if (vehicle->Id >= newID) {
                newID = vehicle->Id + 1;
            }
        }
    }
    return newID;
}

int ProjectPersistance::Persistance::GenerateClientId()
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    int newID = 1;
    if (ClientList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Client ^ client in ClientList) {
            if (client->Id >= newID) {
                newID = client->Id + 1;
            }
        }
    }
    return newID;
}

int ProjectPersistance::Persistance::GenerateReclamationId()
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
    int newID = 1;
    if (ReclamationList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Reclamation ^ reclamation in ReclamationList) {
            if (reclamation->Id >= newID) {
                newID = reclamation->Id + 1;
            }
        }
    }
    return newID;
}

int ProjectPersistance::Persistance::GenerateAdmId()
{
    AdmList = (List< Adm^>^)Persistance::LoadBinaryFile(ADM_FILE_BIN_NAME);
    int newID = 1;
    if (AdmList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Adm ^ adm in AdmList) {
            if (adm->Id >= newID) {
                newID = adm->Id + 1;
            }
        }
    }
    return newID;
}

///////////////////////////////////////////////////////////////////////////////////////////
void ProjectPersistance::Persistance::CreateProprietor(Proprietor^ c)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    if (ProprietorList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        ProprietorList = gcnew List<Proprietor^>();
    }
    ProprietorList->Add(c);
    PersistBinaryFile(PROPRIETOR_FILE_BIN_NAME, ProprietorList);
}

void ProjectPersistance::Persistance::CreateVehicle(Vehicle^ c)
{

    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
    if (VehicleList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        VehicleList = gcnew List<Vehicle^>();
    }
    VehicleList->Add(c);
    PersistBinaryFile(VEHICLE_FILE_BIN_NAME, VehicleList);
}

void ProjectPersistance::Persistance::CreateClient(Client^ c)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    if (ClientList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        ClientList = gcnew List<Client^>();
    }
    ClientList->Add(c);
    PersistBinaryFile(CLIENT_FILE_BIN_NAME, ClientList);
}

void ProjectPersistance::Persistance::CreateReclamation(Reclamation^ c)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
    if (ReclamationList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        ReclamationList = gcnew List<Reclamation^>();
    }
    ReclamationList->Add(c);
    PersistBinaryFile(RECLAMATION_FILE_BIN_NAME, ReclamationList);
}

void ProjectPersistance::Persistance::CreateAdm(Adm^ c)
{
    AdmList = (List<Adm^>^)Persistance::LoadBinaryFile(ADM_FILE_BIN_NAME);
    if (AdmList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        AdmList = gcnew List<Adm^>();
    }
    AdmList->Add(c);
    PersistBinaryFile(ADM_FILE_BIN_NAME, AdmList);
}
///////////////////////////////////////////////////////////////////////////////////////////////

void ProjectPersistance::Persistance::UpdateProprietor(Proprietor^ c)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    if (ProprietorList != nullptr) {
        for (int i = 0; i < ProprietorList->Count; i++) {
            if (c->Id == ProprietorList[i]->Id) {
                ProprietorList[i] = c;
            }
        }
        /*
        for each (Client^ client in ClientList){
            if (c->Id == ClientList[i]->Id) {
                ClientList[i] = c;
            }
        }
        */
    }
    PersistBinaryFile(PROPRIETOR_FILE_BIN_NAME, ProprietorList);
}

void ProjectPersistance::Persistance::UpdateVehicle(Vehicle^ c)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
    if (VehicleList != nullptr) {
        for (int i = 0; i < VehicleList->Count; i++) {
            if (c->Id == VehicleList[i]->Id) {
                VehicleList[i] = c;
            }
        }
    }
    PersistBinaryFile(VEHICLE_FILE_BIN_NAME, VehicleList);
}

void ProjectPersistance::Persistance::UpdateClient(Client^ c)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    if (ClientList != nullptr) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (c->Id == ClientList[i]->Id) {
                ClientList[i] = c;
            }
        }
        /*
        for each (Client^ client in ClientList){
            if (c->Id == ClientList[i]->Id) {
                ClientList[i] = c;
            }
        }
        */
    }
    PersistBinaryFile(PROPRIETOR_FILE_BIN_NAME, ProprietorList);
}

void ProjectPersistance::Persistance::UpdateReclamation(Reclamation^ c)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
    if (ReclamationList != nullptr) {
        for (int i = 0; i < ReclamationList->Count; i++) {
            if (c->Id == ReclamationList[i]->Id) {
                ReclamationList[i] = c;
            }
        }
    }
    PersistBinaryFile(RECLAMATION_FILE_BIN_NAME, ReclamationList);
}

void ProjectPersistance::Persistance::UpdateAdm(Adm^ c)
{
    AdmList = (List<Adm^>^)Persistance::LoadBinaryFile(ADM_FILE_BIN_NAME);
    if (AdmList != nullptr) {
        for (int i = 0; i < AdmList->Count; i++) {
            if (c->Id == AdmList[i]->Id) {
                AdmList[i] = c;
            }
        }
        /*
        for each (Client^ client in ClientList){
            if (c->Id == ClientList[i]->Id) {
                ClientList[i] = c;
            }
        }
        */
    }
    PersistBinaryFile(PROPRIETOR_FILE_BIN_NAME, ProprietorList);
}

/// ///////////////////////////////////////////////////////////////////////////////////////////////////////
void ProjectPersistance::Persistance::DeleteProprietor(int id)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    if (ProprietorList != nullptr) {
        for (int i = ProprietorList->Count - 1; i >= 0; i--) {
            if (id == ProprietorList[i]->Id) {
                ProprietorList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(PROPRIETOR_FILE_BIN_NAME, ProprietorList);
    }
}

void ProjectPersistance::Persistance::DeleteVehicle(int id)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
    if (VehicleList != nullptr) {
        for (int i = VehicleList->Count - 1; i >= 0; i--) {
            if (id == VehicleList[i]->Id) {
                VehicleList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(VEHICLE_FILE_BIN_NAME, VehicleList);
    }
}

void ProjectPersistance::Persistance::DeleteClient(int id)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    if (ClientList != nullptr) {
        for (int i = ClientList->Count - 1; i >= 0; i--) {
            if (id == ClientList[i]->Id) {
                ClientList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(CLIENT_FILE_BIN_NAME, ClientList);
    }
}

void ProjectPersistance::Persistance::DeleteReclamation(int id)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
    if (ReclamationList != nullptr) {
        for (int i = ReclamationList->Count - 1; i >= 0; i--) {
            if (id == ReclamationList[i]->Id) {
                ReclamationList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(RECLAMATION_FILE_BIN_NAME, ReclamationList);
    }
}

void ProjectPersistance::Persistance::DeleteAdm(int id)
{
    AdmList = (List<Adm^>^)Persistance::LoadBinaryFile(ADM_FILE_BIN_NAME);
    if (AdmList != nullptr) {
        for (int i = AdmList->Count - 1; i >= 0; i--) {
            if (id == AdmList[i]->Id) {
                AdmList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(ADM_FILE_BIN_NAME, AdmList);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
List<Proprietor^>^ ProjectPersistance::Persistance::QueryAllProprietors()
{
    return ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    /*
    if (ClientList != nullptr) {
        return ClientList;
    }
    return nullptr;
   */
}

Proprietor^ ProjectPersistance::Persistance::QueryProprietorById(int id)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    if (ProprietorList->Count != 0) {
        for (int i = 0; i < ProprietorList->Count; i++) {
            if (ProprietorList[i]->Id == id) {
                return ProprietorList[i];
            }
        }
    }
    return nullptr;
}

Proprietor^ ProjectPersistance::Persistance::QueryProprietorByDni(int dni)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    if (ProprietorList->Count != 0) {
        for (int i = 0; i < ProprietorList->Count; i++) {
            if (ProprietorList[i]->Dni == dni) {
                return ProprietorList[i];
            }
        }
    }
    return nullptr;
}

Proprietor^ ProjectPersistance::Persistance::QueryProprietorByEmail(String^ email)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);

    try {
        if (ProprietorList->Count != 0) {
            for (int i = 0; i < ProprietorList->Count; i++) {
                if (ProprietorList[i]->Email == email) {
                    return ProprietorList[i];
                }
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    return nullptr;

}

List<Proprietor^>^ ProjectPersistance::Persistance::QueryListProprietorByName(String^ name)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME); //lista de almacenamiento total

    List<Proprietor^>^ Proprietors = gcnew List<Proprietor^>(); //lista de clientes nueva
    Proprietors = nullptr;

    if (ProprietorList->Count != 0) {
        for (int i = 0; i < ProprietorList->Count; i++) {
            if (ProprietorList[i]->Name == name) {
                Proprietors->Add(ProprietorList[i]);
            }
        }
    }
    return Proprietors;
}


List<Proprietor^>^ ProjectPersistance::Persistance::QueryListProprietorByLastname(String^ lastname)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME); //lista de almacenamiento total

    List<Proprietor^>^ Proprietors = gcnew List<Proprietor^>();
    Proprietors = nullptr;

    if (ProprietorList->Count != 0) {
        for (int i = 0; i < ProprietorList->Count; i++) {
            if (ProprietorList[i]->Lastname == lastname) {
                Proprietors->Add(ProprietorList[i]);
            }
        }
    }
    return Proprietors;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
List<Client^>^ ProjectPersistance::Persistance::QueryAllClients()
{
    return ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    /*
    if (ClientList != nullptr) {
        return ClientList;
    }
    return nullptr;
   */
}

Client^ ProjectPersistance::Persistance::QueryClientById(int id)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    if (ClientList->Count != 0) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Id == id) {
                return ClientList[i];
            }
        }
    }
    return nullptr;
}

Client^ ProjectPersistance::Persistance::QueryClientByDni(int dni)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    if (ClientList->Count != 0) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Dni == dni) {
                return ClientList[i];
            }
        }
    }
    return nullptr;
}

Client^ ProjectPersistance::Persistance::QueryClientByEmail(String^ email)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);

    try {
        if (ClientList->Count != 0) {
            for (int i = 0; i < ClientList->Count; i++) {
                if (ClientList[i]->Email == email) {
                    return ClientList[i];
                }
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    return nullptr;

}

Client^ ProjectPersistance::Persistance::QueryClientByLicenseName(String^ licensename)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    if (ClientList->Count != 0) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Licensename == licensename) {
                return ClientList[i];
            }
        }
    }
    return nullptr;
}

List<Client^>^ ProjectPersistance::Persistance::QueryListClientByName(String^ name)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME); //lista de almacenamiento total

    List<Client^>^ Clients = gcnew List<Client^>(); //lista de clientes nueva
    Clients = nullptr;

    if (ClientList->Count != 0) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Name == name) {
                Clients->Add(ClientList[i]);
            }
        }
    }
    return Clients;
}


List<Client^>^ ProjectPersistance::Persistance::QueryListClientByLastname(String^ lastname)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME); //lista de almacenamiento total

    List<Client^>^ Clients = gcnew List<Client^>();
    Clients = nullptr;

    if (ClientList->Count != 0) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Lastname == lastname) {
                Clients->Add(ClientList[i]);
            }
        }
    }
    return Clients;
}

List<Client^>^ ProjectPersistance::Persistance::QueryListClientByLicensetype(String^ licensetype)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME); //lista de almacenamiento total

    List<Client^>^ Clients = gcnew List<Client^>();
    Clients = nullptr;

    if (ClientList->Count != 0) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Licensetype == licensetype) {
                Clients->Add(ClientList[i]);
            }
        }
    }
    return Clients;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
List<Vehicle^>^ ProjectPersistance::Persistance::QueryAllVehicles()
{
    return VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
}

Vehicle^ ProjectPersistance::Persistance::QueryVehicleById(int id)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
    if (VehicleList->Count != 0) {
        for (int i = 0; i < VehicleList->Count; i++) {
            if (VehicleList[i]->Id == id) {
                return VehicleList[i];
            }
        }
    }
    return nullptr;
}

Vehicle^ ProjectPersistance::Persistance::QueryVehicleByPlate(String^ plate)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
    if (VehicleList->Count != 0) {  //Count < 1 (para List)= nullptr (para no List)
        for (int i = 0; i < VehicleList->Count; i++) {
            if (VehicleList[i]->Plate == plate) {
                return VehicleList[i];
            }
        }
    }
    return nullptr;
}

List<Vehicle^>^ ProjectPersistance::Persistance::QueryListVehiclesByProprietorId(int Id)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME); //lista de almacenamiento total

    List<Vehicle^>^ Vehicles = gcnew List<Vehicle^>();
    /*Vehicles = nullptr; */

    if (VehicleList->Count != 0) {
        for (int i = 0; i < VehicleList->Count; i++) {
            if (VehicleList[i]->Id == Id) {
                Vehicles->Add(VehicleList[i]);
            }
        }
    }
    return Vehicles;
}

List<Vehicle^>^ ProjectPersistance::Persistance::QueryListVehicleByBrand(String^ brand)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME); //lista de almacenamiento total

    List<Vehicle^>^ Vehicles = gcnew List<Vehicle^>();
    /*Vehicles = nullptr; */

    if (VehicleList->Count != 0) {
        for (int i = 0; i < VehicleList->Count; i++) {
            if (VehicleList[i]->Brand == brand) {
                Vehicles->Add(VehicleList[i]);
            }
        }
    }
    return Vehicles;
}

List<Vehicle^>^ ProjectPersistance::Persistance::QueryListVehicleByColor(String^ color)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME); //lista de almacenamiento total

    List<Vehicle^>^ Vehicles = gcnew List<Vehicle^>();
    //Vehicles = nullptr;

    if (VehicleList->Count != 0) {
        for (int i = 0; i < VehicleList->Count; i++) {
            if (VehicleList[i]->Color == color) {
                Vehicles->Add(VehicleList[i]);
            }
        }
    }
    return Vehicles;
}

List<Vehicle^>^ ProjectPersistance::Persistance::QueryListVehicleByCondition(String^ condition)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME); //lista de almacenamiento total

    List<Vehicle^>^ Vehicles = gcnew List<Vehicle^>();
    //Vehicles = nullptr;

    if (VehicleList->Count != 0) {
        for (int i = 0; i < VehicleList->Count; i++) {
            if (VehicleList[i]->Condition == condition) {
                Vehicles->Add(VehicleList[i]);
            }
        }
    }
    return Vehicles;
}

List<Vehicle^>^ ProjectPersistance::Persistance::QueryListVehicleByOperative(bool operative)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME); //lista de almacenamiento total

    List<Vehicle^>^ Vehicles = gcnew List<Vehicle^>();
    //Vehicles = nullptr;

    if (VehicleList->Count != 0) {
        for (int i = 0; i < VehicleList->Count; i++) {
            if (VehicleList[i]->Operative == operative) {
                Vehicles->Add(VehicleList[i]);
            }
        }
    }
    return Vehicles;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

List<Reclamation^>^ ProjectPersistance::Persistance::QueryAllReclamations()
{
    return ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
}

Reclamation^ ProjectPersistance::Persistance::QueryReclamationById(int id)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
    if (ReclamationList->Count != 0) {
        for (int i = 0; i < ReclamationList->Count; i++) {
            if (ReclamationList[i]->Id == id) {
                return ReclamationList[i];
            }
        }
    }
    return nullptr;
}

Reclamation^ ProjectPersistance::Persistance::QueryReclamationByTitle(String^ title)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
    if (ReclamationList->Count != 0) {
        for (int i = 0; i < ReclamationList->Count; i++) {
            if (ReclamationList[i]->Title == title) {
                return ReclamationList[i];
            }
        }
    }
    return nullptr;
}

List<Reclamation^>^ ProjectPersistance::Persistance::QueryListReclamationByType(String^ type)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME); //lista de almacenamiento total

    List<Reclamation^>^ Reclamations = gcnew List<Reclamation^>();
    //Reclamations = nullptr;

    if (ReclamationList->Count != 0) {
        for (int i = 0; i < ReclamationList->Count; i++) {
            if (ReclamationList[i]->Type == type) {
                Reclamations->Add(ReclamationList[i]);
            }
        }
    }
    return Reclamations;
}


List<Reclamation^>^ ProjectPersistance::Persistance::QueryListReclamationByCategory(String^ category)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME); //lista de almacenamiento total

    List<Reclamation^>^ Reclamations = gcnew List<Reclamation^>();
    //Reclamations = nullptr;

    if (ReclamationList->Count != 0) {
        for (int i = 0; i < ReclamationList->Count; i++) {
            if (ReclamationList[i]->Category == category) {
                Reclamations->Add(ReclamationList[i]);
            }
        }
    }
    return Reclamations;
}

List<Reclamation^>^ ProjectPersistance::Persistance::QueryListReclamationByState(String^ state)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME); //lista de almacenamiento total

    List<Reclamation^>^ Reclamations = gcnew List<Reclamation^>();
    //Reclamations = nullptr;

    if (ReclamationList->Count != 0) {
        for (int i = 0; i < ReclamationList->Count; i++) {
            if (ReclamationList[i]->State == state) {
                Reclamations->Add(ReclamationList[i]);
            }
        }
    }
    return Reclamations;
}

List<Reclamation^>^ ProjectPersistance::Persistance::QueryListReclamationByDate(DateTime systemdate)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME); //lista de almacenamiento total

    List<Reclamation^>^ Reclamations = gcnew List<Reclamation^>();
    //Reclamations = nullptr;

    if (ReclamationList->Count != 0) {
        for (int i = 0; i < ReclamationList->Count; i++) {
            if (ReclamationList[i]->SystemDate.Date == systemdate.Date) {
                Reclamations->Add(ReclamationList[i]);
            }
        }
    }
    return Reclamations;
}

//cambio