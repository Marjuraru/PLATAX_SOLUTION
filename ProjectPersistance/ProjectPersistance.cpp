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

            if (fileName->Equals(CLIENT_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }          
            else if (fileName->Equals(CAR_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(RECLAMATION_FILE_BIN_NAME)) {
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
int ProjectPersistance::Persistance::GenerateClientId()
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
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

int ProjectPersistance::Persistance::GenerateCarId()
{
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME);
    int newID = 1;
    if (CarList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Car ^ car in CarList) {
            if (car->Id >= newID) {
                newID = car->Id + 1;
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

int ProjectPersistance::Persistance::GenerateHelpId()
{
    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME);
    int newID = 1;
    if (HelpList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Help ^ help in HelpList) {
            if (help->Id >= newID) {
                newID = help->Id + 1;
            }
        }
    }
    return newID;
}

///////////////////////////////////////////////////////////////////////////////////////////
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

void ProjectPersistance::Persistance::CreateCar(Car^ c)
{

    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME);
    if (CarList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        CarList = gcnew List<Car^>();
    }
    CarList->Add(c);
    PersistBinaryFile(CAR_FILE_BIN_NAME, CarList);
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

void ProjectPersistance::Persistance::CreateHelp(Help^ c)
{

    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME);
    if (HelpList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        HelpList = gcnew List<Help^>();
    }
    HelpList->Add(c);
    PersistBinaryFile(HELP_FILE_BIN_NAME, HelpList);

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
    PersistBinaryFile(CLIENT_FILE_BIN_NAME, ClientList);
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

void ProjectPersistance::Persistance::UpdateCar(Car^ c)
{
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME);
    if (CarList != nullptr) {
        for (int i = 0; i < CarList->Count; i++) {
            if (c->Id == CarList[i]->Id) {
                CarList[i] = c;
            }
        }
    }
    PersistBinaryFile(CAR_FILE_BIN_NAME, CarList);
}

void ProjectPersistance::Persistance::UpdateHelp(Help^ c)
{
    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME);
    if (HelpList != nullptr) {
        for (int i = 0; i < HelpList->Count; i++) {
            if (c->Id == CarList[i]->Id) {
                HelpList[i] = c;
            }
        }
    }
    PersistBinaryFile(HELP_FILE_BIN_NAME, HelpList);
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

void ProjectPersistance::Persistance::DeleteCar(int id)
{
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME);
    if (CarList != nullptr) {
        for (int i = CarList->Count - 1; i >= 0; i--) {
            if (id == CarList[i]->Id) {
                CarList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(CAR_FILE_BIN_NAME, CarList);
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

void ProjectPersistance::Persistance::DeleteHelp(int id)
{
    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME);
    if (HelpList != nullptr) {
        for (int i = HelpList->Count - 1; i >= 0; i--) {
            if (id == HelpList[i]->Id) {
                HelpList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(HELP_FILE_BIN_NAME, HelpList);
    }
}
///////////////////////////////////////////////////////////////////////////////////////////
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
    if (ClientList -> Count != 0) {
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
    if (ClientList -> Count != 0) {
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
    if (ClientList -> Count != 0) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Email == email) {
                return ClientList[i];
            }
        }
    }
    return nullptr;
}

Client^ ProjectPersistance::Persistance::QueryClientByLicenseName(String^ licensename)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    if (ClientList -> Count != 0) {
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

    if (ClientList -> Count != 0) {
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
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME); //lista de almacenamiento total

    List<Client^>^ Clients = gcnew List<Client^>();
    Clients = nullptr;

    if (ClientList -> Count != 0) {
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

    if (ClientList  -> Count != 0) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Licensetype == licensetype) {
                Clients->Add(ClientList[i]);
            }
        }
    }
    return Clients;
}
//
List<Car^>^ ProjectPersistance::Persistance::QueryAllCars()
{
    return CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME);
}

Car^ ProjectPersistance::Persistance::QueryCarById(int id)
{
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME);
    if (CarList -> Count != 0) {
        for (int i = 0; i < CarList->Count; i++) {
            if (CarList[i]->Id == id) {
                return CarList[i];
            }
        }
    }
    return nullptr;
}

Car^ ProjectPersistance::Persistance::QueryCarByPlate(String^ plate)
{   
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME);
    if (CarList -> Count != 0) {  //Count < 1 (para List)= nullptr (para no List)
        for (int i = 0; i < CarList->Count; i++) {
            if (CarList[i]->Plate == plate) {
                return CarList[i];
            }
        }
    }
    return nullptr;
}

List<Car^>^ ProjectPersistance::Persistance::QueryListCarByBrand(String^ brand)
{
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME); //lista de almacenamiento total

    List<Car^>^ Cars = gcnew List<Car^>(); 
    /*Cars = nullptr; */

    if (CarList -> Count != 0) {
        for (int i = 0; i < CarList->Count; i++) {
            if (CarList[i]->Brand == brand) {
                Cars->Add(CarList[i]);
            }
        }
    }
    return Cars;
}

List<Car^>^ ProjectPersistance::Persistance::QueryListCarByColor(String^ color)
{
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME); //lista de almacenamiento total

    List<Car^>^ Cars = gcnew List<Car^>();
    //Cars = nullptr;
     
    if (CarList -> Count != 0) {
        for (int i = 0; i < CarList->Count; i++) {
            if (CarList[i]->Color == color) {
                Cars->Add(CarList[i]);
            }
        }
    }
    return Cars;
}

List<Car^>^ ProjectPersistance::Persistance::QueryListCarByCondition(String^ condition)
{
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME); //lista de almacenamiento total

    List<Car^>^ Cars = gcnew List<Car^>(); 
    //Cars = nullptr;

    if (CarList -> Count != 0) {
        for (int i = 0; i < CarList->Count; i++) {
            if (CarList[i]->Condition == condition) {
                Cars->Add(CarList[i]);
            }
        }
    }
    return Cars;
}

List<Car^>^ ProjectPersistance::Persistance::QueryListCarByOperative(bool operative)
{
    CarList = (List<Car^>^)Persistance::LoadBinaryFile(CAR_FILE_BIN_NAME); //lista de almacenamiento total

    List<Car^>^ Cars = gcnew List<Car^>(); 
    //Cars = nullptr;

    if (CarList -> Count != 0) {
        for (int i = 0; i < CarList->Count; i++) {
            if (CarList[i]->Operative == operative) {
                Cars->Add(CarList[i]);
            }
        }
    }
    return Cars;
}
//
List<Reclamation^>^ ProjectPersistance::Persistance::QueryAllReclamations()
{
    return ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
}

Reclamation^ ProjectPersistance::Persistance::QueryReclamationById(int id)
{
    ReclamationList = (List<Reclamation^>^)Persistance::LoadBinaryFile(RECLAMATION_FILE_BIN_NAME);
    if (ReclamationList -> Count != 0) {
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
    if (ReclamationList -> Count != 0) {
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

    if (ReclamationList -> Count != 0) {
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

    if (ReclamationList -> Count != 0) {
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

    if (ReclamationList -> Count != 0) {
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

    if (ReclamationList -> Count != 0) {
        for (int i = 0; i < CarList->Count; i++) {
            if (ReclamationList[i]->SystemDate == systemdate) {
                Reclamations->Add(ReclamationList[i]);
            }
        }
    }
    return Reclamations;
}
//
List<Help^>^ ProjectPersistance::Persistance::QueryAllHelps()
{
    return HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME);
}

Help^ ProjectPersistance::Persistance::QueryHelpById(int id)
{
    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME);
    if (HelpList -> Count != 0) {
        for (int i = 0; i < HelpList->Count; i++) {
            if (HelpList[i]->Id == id) {
                return HelpList[i];
            }
        }
    }
    return nullptr;
}

List<Help^>^ ProjectPersistance::Persistance::QueryListHelpByType(String^ type)
{
    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME); //lista de almacenamiento total

    List<Help^>^ Helps = gcnew List<Help^>();
    Helps = nullptr;

    if (HelpList-> Count != 0) {
        for (int i = 0; i < HelpList->Count; i++) {
            if (HelpList[i]->Type == type) {
                Helps->Add(HelpList[i]);
            }
        }
    }
    return Helps;
}

List<Help^>^ ProjectPersistance::Persistance::QueryListHelpByCategory(String^ status)
{
    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME); //lista de almacenamiento total

    List<Help^>^ Helps = gcnew List<Help^>();
    Helps = nullptr;

    if (HelpList -> Count != 0) {
        for (int i = 0; i < HelpList->Count; i++) {
            if (HelpList[i]->Status == status) {
                Helps->Add(HelpList[i]);
            }
        }
    }
    return HelpList;
}

List<Help^>^ ProjectPersistance::Persistance::QueryListHelpByChecked(bool checked)
{
    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME); //lista de almacenamiento total

    List<Help^>^ Helps = gcnew List<Help^>();
    Helps = nullptr;

    if (HelpList -> Count != 0) {
        for (int i = 0; i < HelpList->Count; i++) {
            if (HelpList[i]->Checked == checked) {
                Helps->Add(HelpList[i]);
            }
        }
    }
    return Helps;
}

List<Help^>^ ProjectPersistance::Persistance::QueryListHelpByDate(DateTime date)
{
    HelpList = (List<Help^>^)Persistance::LoadBinaryFile(HELP_FILE_BIN_NAME); //lista de almacenamiento total

    List<Help^>^ Helps = gcnew List<Help^>();
    Helps = nullptr;

    if (HelpList -> Count != 0) {
        for (int i = 0; i < HelpList->Count; i++) {
            if (HelpList[i]->RequestDate == date) {
                Helps->Add(HelpList[i]);
            }
        }
    }
    return Helps;
}
//


