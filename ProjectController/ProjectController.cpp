#include "pch.h"

#include "ProjectController.h" 

bool ProjectController::Controller::validateAccess(String^ email, String^ password)
{
	if (email == "hola" && password == "mundo") {
		return true;
	}
	else {
		return false;
	}
}

bool ProjectController::Controller::IsDniRegistered(int dni)
{
	return ProjectPersistance::Persistance::IsDniRegistered(dni);
}
bool ProjectController::Controller::IsPhoneRegistered(int phone)
{
	return ProjectPersistance::Persistance::IsPhoneRegistered(phone);
}
bool ProjectController::Controller::IsEmailRegistered(String^ email)
{
	return ProjectPersistance::Persistance::IsEmailRegistered(email);
}

///////////////////////////////////////////////////////////////////////////////////////////
int ProjectController::Controller::GenerateUserId()
{
	return ProjectPersistance::Persistance::GenerateUserId();
}

//int ProjectController::Controller::GenerateProprietorId()
//{
//	return ProjectPersistance::Persistance::GenerateProprietorId();
//}

//int ProjectController::Controller::GenerateClientId()
//{
//	return ProjectPersistance::Persistance::GenerateClientId();
//}

int ProjectController::Controller::GenerateVehicleId()
{
	return ProjectPersistance::Persistance::GenerateVehicleId();
}

int ProjectController::Controller::GenerateReclamationId()
{
	return ProjectPersistance::Persistance::GenerateReclamationId();
}

int ProjectController::Controller::GenerateHelpPlsId()
{
	return ProjectPersistance::Persistance::GenerateHelpPlsId();
}

///////////////////////////////////////////////////////////////////////////////////////////
void ProjectController::Controller::CreateProprietor(Proprietor^ c)
{
	return ProjectPersistance::Persistance::CreateProprietor(c);
}

void ProjectController::Controller::CreateClient(Client^ c)
{
	return ProjectPersistance::Persistance::CreateClient(c);
}

void ProjectController::Controller::CreateVehicle(Vehicle^ c)
{
	return ProjectPersistance::Persistance::CreateVehicle(c);
}

void ProjectController::Controller::CreateReclamation(Reclamation^ c)
{
	return ProjectPersistance::Persistance::CreateReclamation(c);
}

void ProjectController::Controller::CreateAdm(Adm^ c)
{
	return ProjectPersistance::Persistance::CreateAdm(c);
}

void ProjectController::Controller::CreateHelpPls(HelpPls^ c)
{
	return ProjectPersistance::Persistance::CreateHelpPls(c);
}

///////////////////////////////////////////////////////////////////////////////////////////

void ProjectController::Controller::UpdateProprietor(Proprietor^ c)
{
	return ProjectPersistance::Persistance::UpdateProprietor(c);
}

void ProjectController::Controller::UpdateClient(Client^ c)
{
	return ProjectPersistance::Persistance::UpdateClient(c);
}

void ProjectController::Controller::UpdateVehicle(Vehicle^ c)
{
	return ProjectPersistance::Persistance::UpdateVehicle(c);
}

void ProjectController::Controller::UpdateReclamation(Reclamation^ c)
{
	return ProjectPersistance::Persistance::UpdateReclamation(c);
}

void ProjectController::Controller::UpdateAdm(Adm^ c)
{
	return ProjectPersistance::Persistance::UpdateAdm(c);
}

void ProjectController::Controller::UpdateHelpPls(HelpPls^ c)
{
	return ProjectPersistance::Persistance::UpdateHelpPls(c);
}


///////////////////////////////////////////////////////////////////////////////////////////

void ProjectController::Controller::DeleteProprietor(int id)
{
	return ProjectPersistance::Persistance::DeleteProprietor(id);
}

void ProjectController::Controller::DeleteVehicle(int id)
{
	return ProjectPersistance::Persistance::DeleteVehicle(id);
}

void ProjectController::Controller::DeleteClient(int id)
{
	return ProjectPersistance::Persistance::DeleteClient(id);
}

void ProjectController::Controller::DeleteReclamation(int id)
{
	return ProjectPersistance::Persistance::DeleteReclamation(id);
}

void ProjectController::Controller::DeleteAdm(int id)
{
	return ProjectPersistance::Persistance::DeleteAdm(id);
}

void ProjectController::Controller::DeleteHelpPls(int id)
{
	return ProjectPersistance::Persistance::DeleteHelpPls(id);
}

///////////////////////////////////////////////////////////////////////////////////////////
List<User^>^ ProjectController::Controller::QueryAllUsers()
{
	return ProjectPersistance::Persistance::QueryAllUsers();
}
///////////////////////////////////////////////////////////////////////////////////////////
List<Proprietor^>^ ProjectController::Controller::QueryAllProprietors()
{
	return ProjectPersistance::Persistance::QueryAllProprietors();
}
//*
Proprietor^ ProjectController::Controller::QueryProprietorById(int id)
{
	return ProjectPersistance::Persistance::QueryProprietorById(id);
}

Proprietor^ ProjectController::Controller::QueryProprietorByDni(int dni)
{
	return ProjectPersistance::Persistance::QueryProprietorByDni(dni);
}

Proprietor^ ProjectController::Controller::QueryProprietorByEmail(String^ email)
{
	return ProjectPersistance::Persistance::QueryProprietorByEmail(email);
}

List<Proprietor^>^ ProjectController::Controller::QueryListProprietorByName(String^ name)
{
	return ProjectPersistance::Persistance::QueryListProprietorByName(name);
}

List<Proprietor^>^ ProjectController::Controller::QueryListProprietorByLastname(String^ lastname)
{
	return ProjectPersistance::Persistance::QueryListProprietorByLastname(lastname);
}

///////////////////////////////////////////////////////////////////////////////////////////

List<Client^>^ ProjectController::Controller::QueryAllClients()
{
	return ProjectPersistance::Persistance::QueryAllClients();
}
//*
Client^ ProjectController::Controller::QueryClientById(int id)
{
	return ProjectPersistance::Persistance::QueryClientById(id);
}

Client^ ProjectController::Controller::QueryClientByDni(int dni)
{
	return ProjectPersistance::Persistance::QueryClientByDni(dni);
}

Client^ ProjectController::Controller::QueryClientByEmail(String^ email)
{
	return ProjectPersistance::Persistance::QueryClientByEmail(email);
}

Client^ ProjectController::Controller::QueryClientByLicenseName(String^ licensename)
{
	return ProjectPersistance::Persistance::QueryClientByLicenseName(licensename);
}

//

List<Client^>^ ProjectController::Controller::QueryListClientByName(String^ name)
{
	return ProjectPersistance::Persistance::QueryListClientByName(name);
}

List<Client^>^ ProjectController::Controller::QueryListClientByLastname(String^ lastname)
{
	return ProjectPersistance::Persistance::QueryListClientByLastname(lastname);
}

List<Client^>^ ProjectController::Controller::QueryListClientByLicensetype(String^ licensetype)
{
	return ProjectPersistance::Persistance::QueryListClientByLicensetype(licensetype);
}

///////////////////////////////////////////////////////////////////////////////////////////
List<Vehicle^>^ ProjectController::Controller::QueryAllVehicles()
{
	return ProjectPersistance::Persistance::QueryAllVehicles();
}
//
Vehicle^ ProjectController::Controller::QueryVehicleById(int id)
{
	return ProjectPersistance::Persistance::QueryVehicleById(id);
}

Vehicle^ ProjectController::Controller::QueryVehicleByPlate(String^ plate)
{
	return ProjectPersistance::Persistance::QueryVehicleByPlate(plate);
}

//

List<Vehicle^>^ ProjectController::Controller::QueryListVehiclesByProprietorId(int Id)
{
	return ProjectPersistance::Persistance::QueryListVehiclesByProprietorId(Id);
}

List<Vehicle^>^ ProjectController::Controller::QueryListVehicleByBrand(String^ brand)
{
	return ProjectPersistance::Persistance::QueryListVehicleByBrand(brand);
}

List<Vehicle^>^ ProjectController::Controller::QueryListVehicleByColor(String^ color)
{
	return ProjectPersistance::Persistance::QueryListVehicleByColor(color);
}

List<Vehicle^>^ ProjectController::Controller::QueryListVehicleByCondition(String^ condition)
{
	return ProjectPersistance::Persistance::QueryListVehicleByCondition(condition);
}

List<Vehicle^>^ ProjectController::Controller::QueryListVehicleByOperative(bool operative)
{
	return ProjectPersistance::Persistance::QueryListVehicleByOperative(operative);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
List<Reclamation^>^ ProjectController::Controller::QueryAllReclamations()
{
	return ProjectPersistance::Persistance::QueryAllReclamations();

}
//
Reclamation^ ProjectController::Controller::QueryReclamationById(int id)
{
	return ProjectPersistance::Persistance::QueryReclamationById(id);
}

Reclamation^ ProjectController::Controller::QueryReclamationByTitle(String^ title)
{
	return ProjectPersistance::Persistance::QueryReclamationByTitle(title);
}

List<Reclamation^>^ ProjectController::Controller::QueryListReclamationByType(String^ type)
{
	return ProjectPersistance::Persistance::QueryListReclamationByType(type);
}

List<Reclamation^>^ ProjectController::Controller::QueryListReclamationByCategory(String^ category)
{
	return ProjectPersistance::Persistance::QueryListReclamationByCategory(category);
}

List<Reclamation^>^ ProjectController::Controller::QueryListReclamationByState(String^ state)
{
	return ProjectPersistance::Persistance::QueryListReclamationByState(state);
}

List<Reclamation^>^ ProjectController::Controller::QueryListReclamationByDate(DateTime systemdate)
{
	return ProjectPersistance::Persistance::QueryListReclamationByDate(systemdate);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

List<HelpPls^>^ ProjectController::Controller::QueryAllHelpsPls()
{
	return ProjectPersistance::Persistance::QueryAllHelpsPls();
}









