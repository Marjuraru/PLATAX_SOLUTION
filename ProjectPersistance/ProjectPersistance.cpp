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
    finally { //Es el m s importante
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

void ProjectPersistance::Persistance::CreateClient(Client^ c)
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    if (ClientList == nullptr) {
        // Si la lista no se carg� correctamente, crea una nueva lista
        ClientList = gcnew List<Client^>();
    }
    ClientList->Add(c);
    PersistBinaryFile(CLIENT_FILE_BIN_NAME, ClientList);
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
    if (ClientList != nullptr) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Id == id) {
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

    if (ClientList != nullptr) {
        for (int i = 0; i < ClientList->Count; i++) {
            if (ClientList[i]->Name == name) {
                Clients->Add(ClientList[i]);
            }
        }
    }
    return Clients;
}

int ProjectPersistance::Persistance::GenerateClientId()
{
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    int newID = 1;
    if (ClientList != nullptr) {
        // Busca el �ltimo ID utilizado y elige un nuevo ID que sea �nico
        for each (Client ^ client in ClientList) {
            if (client->Id >= newID) {
                newID = client->Id + 1;
            }
        }
    }
    return newID;
}


