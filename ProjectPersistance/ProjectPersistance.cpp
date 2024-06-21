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

            if (fileName->Equals(USER_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(PROPRIETOR_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(CLIENT_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(VEHICLE_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }

            else if (fileName->Equals(RECLAMATION_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(ADM_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(HELPPLS_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(MAIL_FILE_BIN_NAME)) {
                result = formatter->Deserialize(file);
            }
            else if (fileName->Equals(MEASUREMENT_FILE_BIN_NAME)) {
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

// PERSISTENCIA TEXTUAL
void ProjectPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    writer = gcnew StreamWriter(file);
    if (persistObject->GetType() == List<Measurement^>::typeid) {
        List<Measurement^>^ measurements = (List<Measurement^>^)persistObject;
        for (int i = 0; i < measurements->Count; i++) {
            Measurement^ measurement = measurements[i];
            writer->WriteLine(measurement->Id + "," + measurement->ValueMeasure + "," + measurement->TypeOfMeasure + "," + measurement->MadeDate);
        }
    }

    if (writer != nullptr) writer->Close();
    if (file != nullptr) file->Close();
}

Object^ ProjectPersistance::Persistance::LoadTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        int i = 1;
        if (fileName->Equals(MEASUREMENT_FILE_TXT_NAME)) {
            result = gcnew List<Measurement^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                Measurement^ measurement = gcnew Measurement();
                measurement->Id = Convert::ToInt32(record[0]);
                measurement->ValueMeasure = Convert::ToDouble(record[1]);
                measurement->TypeOfMeasure = record[2];
                measurement->MadeDate = Convert::ToDateTime(record[3]);
                ((List<Measurement^>^)result)->Add(measurement);
            }
        }

        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}


// PERSISTENCIA EN CSV
void ProjectPersistance::Persistance::PersistCSVFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        if (persistObject->GetType() == List<Measurement^>::typeid) {
            List<Measurement^>^ measurements = (List<Measurement^>^)persistObject;
            for (int i = 0; i < measurements->Count; i++) {
                Measurement^ measurement = measurements[i];
                writer->WriteLine(measurement->Id + "," + measurement->ValueMeasure + "," + measurement->TypeOfMeasure + "," + measurement->MadeDate);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}

Object^ ProjectPersistance::Persistance::LoadCSVFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result = nullptr;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            reader = gcnew StreamReader(file);
            int i = 1;
            if (fileName->Equals(MEASUREMENT_FILE_CSV_NAME)) {
                result = gcnew List<Measurement^>();
                while (true) {
                    String^ line = reader->ReadLine();
                    if (line == nullptr) break;
                    array<String^>^ record = line->Split(',');
                    Measurement^ measurement = gcnew Measurement();
                    measurement->Id = Convert::ToInt32(record[0]);
                    measurement->ValueMeasure = Convert::ToDouble(record[1]);
                    measurement->TypeOfMeasure = record[2];
                    measurement->MadeDate = Convert::ToDateTime(record[3]);

                    ((List<Measurement^>^)result)->Add(measurement);
                }
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

// PERSISTENCIA EN XML
void ProjectPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Measurement^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Measurement^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ ProjectPersistance::Persistance::LoadXMLFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result;
    XmlSerializer^ xmlSerializer;
    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            if (fileName->Equals(MEASUREMENT_FILE_XML_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<Measurement^>::typeid);
                result = xmlSerializer->Deserialize(reader);
            }
            //if (fileName->Equals(XML_BRAND_FILE_NAME)) {
            //    xmlSerializer = gcnew XmlSerializer(List<String^>::typeid);
            //    result = xmlSerializer->Deserialize(reader);
            //}

        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }

    return result;
}




bool ProjectPersistance::Persistance::IsDniRegistered(int dni)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    // Verificar en la lista de propietarios y clientes

    if (ProprietorList != nullptr) {
        for each (Proprietor ^ proprietor in ProprietorList) {
            if (proprietor->Dni == dni) {
                return true;
            }
        }
    }
    if (ClientList != nullptr) {
        for each (Client ^ client in ClientList) {
            if (client->Dni == dni) {
                return true;
            }
        }
    }
    return false;
}

bool ProjectPersistance::Persistance::IsPhoneRegistered(int phone)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    // Verificar en la lista de propietarios y clientes

    if (ProprietorList != nullptr) {
        for each (Proprietor ^ proprietor in ProprietorList) {
            if (proprietor->Phone == phone) {
                return true;
            }
        }
    }
    if (ClientList != nullptr) {
        for each (Client ^ client in ClientList) {
            if (client->Phone == phone) {
                return true;
            }
        }
    }
    return false;
}

bool ProjectPersistance::Persistance::IsEmailRegistered(String^ email)
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    // Verificar en la lista de propietarios y clientes

    if (ProprietorList != nullptr) {
        for each (Proprietor ^ proprietor in ProprietorList) {
            if (proprietor->Email == email) {
                return true;
            }
        }
    }
    if (ClientList != nullptr) {
        for each (Client ^ client in ClientList) {
            if (client->Email == email) {
                return true;
            }
        }
    }
    return false;
}

bool ProjectPersistance::Persistance::IsPlateRegistered(String^ plate)
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
    // Verificar en la lista de Vehículos

    if (VehicleList != nullptr) {
        for each (Vehicle ^ vehicle in VehicleList) {
            if (vehicle->Plate == plate) {
                return true;
            }
        }
    }
    return false;
}

///////////////////////////////////////////////////////////////////////////////////////////
int ProjectPersistance::Persistance::GenerateUserId()
{
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
    int newID = 1;
    // Verificar la lista de clientes y encontrar el ID más alto
    if (ClientList != nullptr) {
        for each (Client ^ client in ClientList) {
            if (client->Id >= newID) {
                newID = client->Id + 1;
            }
        }
    }

    // Verificar la lista de propietarios y encontrar el ID más alto
    if (ProprietorList != nullptr) {
        for each (Proprietor ^ proprietor in ProprietorList) {
            if (proprietor->Id >= newID) {
                newID = proprietor->Id + 1;
            }
        }
    }
    return newID;
}

//int ProjectPersistance::Persistance::GenerateProprietorId()
//{
//    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
//    int newID = 1;
//    if (ProprietorList != nullptr) {
//        // Busca el último ID utilizado y elige un nuevo ID que sea único
//        for each (Proprietor ^ Proprietor in ProprietorList) {
//            if (Proprietor->Id >= newID) {
//                newID = Proprietor->Id + 1;
//            }
//        }
//    }
//    return newID;
//}

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

//int ProjectPersistance::Persistance::GenerateClientId()
//{
//    ClientList = (List<Client^>^)Persistance::LoadBinaryFile(CLIENT_FILE_BIN_NAME);
//    int newID = 1;
//    if (ClientList != nullptr) {
//        // Busca el último ID utilizado y elige un nuevo ID que sea único
//        for each (Client ^ client in ClientList) {
//            if (client->Id >= newID) {
//                newID = client->Id + 1;
//            }
//        }
//    }
//    return newID;
//}

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

int ProjectPersistance::Persistance::GenerateHelpPlsId()
{
    HelpPlsList = (List< HelpPls^>^)Persistance::LoadBinaryFile(HELPPLS_FILE_BIN_NAME);
    int newID = 1;
    if (HelpPlsList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (HelpPls ^ helpPls in HelpPlsList) {
            if (helpPls->Id >= newID) {
                newID = helpPls->Id + 1;
            }
        }
    }
    return newID;
}

int ProjectPersistance::Persistance::GenerateMailId() {
    MailList = (List<Mail^>^)Persistance::LoadBinaryFile(MAIL_FILE_BIN_NAME);
    int newID = 1;
    if (MailList != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Mail ^ mail in MailList) {
            if (mail->Id >= newID) {
                newID = mail->Id + 1;
            }
        }
    }
    return newID;
}


int ProjectPersistance::Persistance::BINGenerateMeasurementId()
{


    MeasurementListBIN = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_BIN_NAME);
    
    

    int newID = 1;
    if (MeasurementListBIN != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Measurement ^ measurementBIN in MeasurementListBIN) {
            if (measurementBIN->Id >= newID) {
                newID = measurementBIN->Id + 1;
            }
        }
    }

    return newID;
}

int ProjectPersistance::Persistance::TXTGenerateMeasurementId()
{
    MeasurementListTXT = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_TXT_NAME);

    int newID = 1;
    if (MeasurementListTXT != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Measurement ^ measurementTXT in MeasurementListTXT) {
            if (measurementTXT->Id >= newID) {
                newID = measurementTXT->Id + 1;
            }
        }
    }

    return newID;

}

int ProjectPersistance::Persistance::CSVGenerateMeasurementId()
{
    MeasurementListCSV = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_CSV_NAME);

    int newID = 1;
    if (MeasurementListCSV != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Measurement ^ measurementCSV in MeasurementListCSV) {
            if (measurementCSV->Id >= newID) {
                newID = measurementCSV->Id + 1;
            }
        }
    }

    return newID;

}

int ProjectPersistance::Persistance::XMLGenerateMeasurementId()
{
    MeasurementListXML = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_XML_NAME);

    int newID = 1;
    if (MeasurementListXML != nullptr) {
        // Busca el último ID utilizado y elige un nuevo ID que sea único
        for each (Measurement ^ measurementXML in MeasurementListXML) {
            if (measurementXML->Id >= newID) {
                newID = measurementXML->Id + 1;
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

void ProjectPersistance::Persistance::CreateHelpPls(HelpPls^ c)
{
    HelpPlsList = (List<HelpPls^>^)Persistance::LoadBinaryFile(HELPPLS_FILE_BIN_NAME);
    if (HelpPlsList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        HelpPlsList = gcnew List<HelpPls^>();
    }
    HelpPlsList->Add(c);
    PersistBinaryFile(HELPPLS_FILE_BIN_NAME, HelpPlsList);
}

void ProjectPersistance::Persistance::CreateMail(Mail^ c)
{
    MailList = (List<Mail^>^)Persistance::LoadBinaryFile(MAIL_FILE_BIN_NAME);
    if (MailList == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        MailList = gcnew List<Mail^>();
    }
    MailList->Add(c);
    PersistBinaryFile(MAIL_FILE_BIN_NAME, MailList);
}


void ProjectPersistance::Persistance::BINCreateMeasurement(Measurement^ c)
{


    MeasurementListBIN = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_BIN_NAME);


    if (MeasurementListBIN == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        MeasurementListBIN = gcnew List<Measurement^>();
    }
    MeasurementListBIN->Add(c);
    PersistBinaryFile(MEASUREMENT_FILE_BIN_NAME, MeasurementListBIN);
}

void ProjectPersistance::Persistance::TXTCreateMeasurement(Measurement^ c)
{

    MeasurementListTXT = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_TXT_NAME);


    if (MeasurementListTXT == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        MeasurementListTXT = gcnew List<Measurement^>();
    }
    MeasurementListTXT->Add(c);
    PersistBinaryFile(MEASUREMENT_FILE_TXT_NAME, MeasurementListTXT);
}

void ProjectPersistance::Persistance::CSVCreateMeasurement(Measurement^ c)
{
    MeasurementListCSV = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_CSV_NAME);


    if (MeasurementListCSV == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        MeasurementListCSV = gcnew List<Measurement^>();
    }
    MeasurementListCSV->Add(c);
    PersistBinaryFile(MEASUREMENT_FILE_CSV_NAME, MeasurementListCSV);
}

void ProjectPersistance::Persistance::XMLCreateMeasurement(Measurement^ c)
{
    MeasurementListXML = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_XML_NAME);


    if (MeasurementListXML == nullptr) {
        // Si la lista no se cargó correctamente, crea una nueva lista
        MeasurementListXML = gcnew List<Measurement^>();
    }
    MeasurementListXML->Add(c);
    PersistBinaryFile(MEASUREMENT_FILE_XML_NAME, MeasurementListXML);
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
    PersistBinaryFile(ADM_FILE_BIN_NAME, AdmList);
}

void ProjectPersistance::Persistance::UpdateHelpPls(HelpPls^ c)
{
    HelpPlsList = (List<HelpPls^>^)Persistance::LoadBinaryFile(HELPPLS_FILE_BIN_NAME);
    if (HelpPlsList != nullptr) {
        for (int i = 0; i < HelpPlsList->Count; i++) {
            if (c->Id == HelpPlsList[i]->Id) {
                HelpPlsList[i] = c;
            }
        }
    }
    PersistBinaryFile(HELPPLS_FILE_BIN_NAME, ReclamationList);
}

void ProjectPersistance::Persistance::UpdateMail(Mail^ c)
{
    MailList = (List<Mail^>^)Persistance::LoadBinaryFile(MAIL_FILE_BIN_NAME);
    if (MailList != nullptr) {
        for (int i = 0; i < MailList->Count; i++) {
            if (c->Id == MailList[i]->Id) {
                MailList[i] = c;
            }
        }
    }
    PersistBinaryFile(MAIL_FILE_BIN_NAME, MailList);
}

void ProjectPersistance::Persistance::BINUpdateMeasurement(Measurement^ c)
{
    MeasurementListBIN = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_BIN_NAME);
    if (MeasurementListBIN != nullptr) {
        for (int i = 0; i < MeasurementListBIN->Count; i++) {
            if (c->Id == MeasurementListBIN[i]->Id) {
                MeasurementListBIN[i] = c;
            }
        }
    }
    PersistBinaryFile(MEASUREMENT_FILE_BIN_NAME, MeasurementListBIN);
}

void ProjectPersistance::Persistance::TXTUpdateMeasurement(Measurement^ c)
{
    MeasurementListTXT = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_TXT_NAME);
    if (MeasurementListTXT != nullptr) {
        for (int i = 0; i < MeasurementListTXT->Count; i++) {
            if (c->Id == MeasurementListTXT[i]->Id) {
                MeasurementListTXT[i] = c;
            }
        }
    }
    PersistBinaryFile(MEASUREMENT_FILE_TXT_NAME, MeasurementListTXT);
}

void ProjectPersistance::Persistance::CSVUpdateMeasurement(Measurement^ c)
{
    MeasurementListCSV = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_CSV_NAME);
    if (MeasurementListCSV != nullptr) {
        for (int i = 0; i < MeasurementListCSV->Count; i++) {
            if (c->Id == MeasurementListCSV[i]->Id) {
                MeasurementListCSV[i] = c;
            }
        }
    }
    PersistBinaryFile(MEASUREMENT_FILE_CSV_NAME, MeasurementListCSV);
}

void ProjectPersistance::Persistance::XMLUpdateMeasurement(Measurement^ c)
{
    MeasurementListXML = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_XML_NAME);
    if (MeasurementListXML != nullptr) {
        for (int i = 0; i < MeasurementListXML->Count; i++) {
            if (c->Id == MeasurementListXML[i]->Id) {
                MeasurementListXML[i] = c;
            }
        }
    }
    PersistBinaryFile(MEASUREMENT_FILE_XML_NAME, MeasurementListXML);
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

void ProjectPersistance::Persistance::DeleteHelpPls(int id)
{
    HelpPlsList = (List<HelpPls^>^)Persistance::LoadBinaryFile(HELPPLS_FILE_BIN_NAME);
    if (HelpPlsList != nullptr) {
        for (int i = HelpPlsList->Count - 1; i >= 0; i--) {
            if (id == HelpPlsList[i]->Id) {
                HelpPlsList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(HELPPLS_FILE_BIN_NAME, ReclamationList);
    }
}

void ProjectPersistance::Persistance::DeleteMail(int id)
{
    MailList = (List<Mail^>^)Persistance::LoadBinaryFile(MAIL_FILE_BIN_NAME);
    if (MailList != nullptr) {
        for (int i = MailList->Count - 1; i >= 0; i--) {
            if (id == MailList[i]->Id) {
                MailList->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(MAIL_FILE_BIN_NAME, MailList);
    }
}


void ProjectPersistance::Persistance::BINDeleteMeasurement(int id)
{
    MeasurementListBIN = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_BIN_NAME);
    if (MeasurementListBIN != nullptr) {
        for (int i = MeasurementListBIN->Count - 1; i >= 0; i--) {
            if (id == MeasurementListBIN[i]->Id) {
                MeasurementListBIN->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(MEASUREMENT_FILE_BIN_NAME, MeasurementListBIN);
    }
}

void ProjectPersistance::Persistance::TXTDeleteMeasurement(int id)
{
    MeasurementListTXT = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_TXT_NAME);
    if (MeasurementListTXT != nullptr) {
        for (int i = MeasurementListTXT->Count - 1; i >= 0; i--) {
            if (id == MeasurementListTXT[i]->Id) {
                MeasurementListTXT->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistBinaryFile(MEASUREMENT_FILE_TXT_NAME, MeasurementListTXT);
    }
}

void ProjectPersistance::Persistance::CSVDeleteMeasurement(int id)
{
    MeasurementListCSV = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_CSV_NAME);
    if (MeasurementListCSV != nullptr) {
        for (int i = MeasurementListCSV->Count - 1; i >= 0; i--) {
            if (id == MeasurementListCSV[i]->Id) {
                MeasurementListCSV->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo cSV
        PersistBinaryFile(MEASUREMENT_FILE_CSV_NAME, MeasurementListCSV);
    }
}

void ProjectPersistance::Persistance::XMLDeleteMeasurement(int id)
{
    MeasurementListXML = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_XML_NAME);
    if (MeasurementListXML != nullptr) {
        for (int i = MeasurementListXML->Count - 1; i >= 0; i--) {
            if (id == MeasurementListXML[i]->Id) {
                MeasurementListXML->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo XML
        PersistBinaryFile(MEASUREMENT_FILE_XML_NAME, MeasurementListXML);

    }
}


///////////////////////////////////////////////////////////////////////////////////////////
List<User^>^ ProjectPersistance::Persistance::QueryAllUsers()
{
    return UserList = (List<User^>^)Persistance::LoadBinaryFile(USER_FILE_BIN_NAME);
    // TODO: Insertar una instrucción "return" aquí
}

List<Adm^>^ ProjectPersistance::Persistance::QueryAllAdms()
{
    return AdmList = (List<Adm^>^)Persistance::LoadBinaryFile(ADM_FILE_BIN_NAME);
    // TODO: Insertar una instrucción "return" aquí
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

Proprietor^ ProjectPersistance::Persistance::QueryProprietorByVehicleSelected() {
    ProprietorList = (List<Proprietor^>^)Persistance::LoadBinaryFile(PROPRIETOR_FILE_BIN_NAME);
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME);
    Proprietor^ vehicleowner = gcnew Proprietor();

    for each (Proprietor ^ proprietor in ProprietorList) {
        for each (Vehicle ^ vehicle in proprietor->ListVehicleProprietor) {
            if (vehicle->Selected) {
                vehicleowner = proprietor;
                return vehicleowner;
            }
        }
    }
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

Mail^ ProjectPersistance::Persistance::QueryMailById(int id)
{
    MailList = (List<Mail^>^)Persistance::LoadBinaryFile(MAIL_FILE_BIN_NAME);
    if (MailList->Count != 0) {
        for (int i = 0; i < MailList->Count; i++) {
            if (MailList[i]->Id == id) {
                return MailList[i];
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

List<Vehicle^>^ ProjectPersistance::Persistance::QueryListVehiclesByProprietorId(int Id)//id de proprietor
{
    VehicleList = (List<Vehicle^>^)Persistance::LoadBinaryFile(VEHICLE_FILE_BIN_NAME); //lista de almacenamiento total

    List<Vehicle^>^ Vehicles = gcnew List<Vehicle^>();
    /*Vehicles = nullptr; */

    if ((VehicleList->Count != 0) && (ProprietorList->Count != 0)) {
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

List<HelpPls^>^ ProjectPersistance::Persistance::QueryAllHelpsPls()
{
    return HelpPlsList = (List<HelpPls^>^)Persistance::LoadBinaryFile(HELPPLS_FILE_BIN_NAME);
}

List<Mail^>^ ProjectPersistance::Persistance::QueryAllMails()
{
    return MailList = (List<Mail^>^)Persistance::LoadBinaryFile(MAIL_FILE_BIN_NAME);
}

Mail^ ProjectPersistance::Persistance::QueryMailBySubject(String^ subject)
{
    MailList = (List<Mail^>^)Persistance::LoadBinaryFile(MAIL_FILE_BIN_NAME);
    if (MailList->Count != 0) {  //Count < 1 (para List)= nullptr (para no List)
        for (int i = 0; i < MailList->Count; i++) {
            if (MailList[i]->Subject == subject) {
                return MailList[i];
            }
        }
    }
    return nullptr;
}


List<Measurement^>^ ProjectPersistance::Persistance::QueryAllMeasurementsBIN()
{
    return MeasurementListBIN = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_BIN_NAME);
}

List<Measurement^>^ ProjectPersistance::Persistance::QueryAllMeasurementsTXT()
{
    return MeasurementListTXT = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_TXT_NAME);
}

List<Measurement^>^ ProjectPersistance::Persistance::QueryAllMeasurementsCSV()
{
    return MeasurementListCSV = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_CSV_NAME);
}

List<Measurement^>^ ProjectPersistance::Persistance::QueryAllMeasurementsXML()
{
    return MeasurementListXML = (List<Measurement^>^)Persistance::LoadBinaryFile(MEASUREMENT_FILE_XML_NAME);

}



//void ProjectPersistance::Persistance::Asignarvehiculo(Vehicle^ current_vehicle, Proprietor^ current_proprietor) {
//    current_proprietor->List = current_vehicle;
//}

//cambio