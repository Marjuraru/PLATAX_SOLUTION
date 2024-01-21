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
        // Si la lista no se cargó correctamente, crea una nueva lista
        ClientList = gcnew List<Client^>();
    }
    ClientList->Add(c);
    PersistBinaryFile(CLIENT_FILE_BIN_NAME, ClientList);
}

