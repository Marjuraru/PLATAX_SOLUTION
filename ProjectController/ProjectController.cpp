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


///////////////////////////////////////////////////////////////////////////////////////////
int ProjectController::Controller::GenerateClientId()
{
	return ProjectPersistance::Persistance::GenerateClientId();
}

int ProjectController::Controller::GenerateReclamationId()
{
		return ProjectPersistance::Persistance::GenerateReclamationId();
}

int ProjectController::Controller::GenerateCarId()
{
	return ProjectPersistance::Persistance::GenerateCarId();
}

int ProjectController::Controller::GenerateHelpId()
{
	return ProjectPersistance::Persistance::GenerateHelpId();
}

///////////////////////////////////////////////////////////////////////////////////////////
void ProjectController::Controller::CreateClient(Client^ c)
{
	return ProjectPersistance::Persistance::CreateClient(c);
}

void ProjectController::Controller::CreateCar(Car^ c)
{
	return ProjectPersistance::Persistance::CreateCar(c);
}

void ProjectController::Controller::CreateReclamation(Reclamation^ c)
{
	return ProjectPersistance::Persistance::CreateReclamation(c);
}

void ProjectController::Controller::CreateHelp(Help^ c)
{
	return ProjectPersistance::Persistance::CreateHelp(c);
}


void ProjectController::Controller::UpdateClient(Client^ c)
{
	return ProjectPersistance::Persistance::UpdateClient(c);
}

void ProjectController::Controller::UpdateCar(Car^ c)
{
	return ProjectPersistance::Persistance::UpdateCar(c);
}

void ProjectController::Controller::UpdateReclamation(Reclamation^ c)
{
	return ProjectPersistance::Persistance::UpdateReclamation(c);
}

void ProjectController::Controller::UpdateHelp(Help^ c)
{
	return ProjectPersistance::Persistance::UpdateHelp(c);
}


void ProjectController::Controller::DeleteClient(int id)
{
	return ProjectPersistance::Persistance::DeleteClient(id);
}

void ProjectController::Controller::DeleteCar(int id)
{
	return ProjectPersistance::Persistance::DeleteCar(id);
}

void ProjectController::Controller::DeleteReclamation(int id)
{
	return ProjectPersistance::Persistance::DeleteReclamation(id);
}

void ProjectController::Controller::DeleteHelp(int id)
{
	return ProjectPersistance::Persistance::DeleteHelp(id);

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


//*//
List<Car^>^ ProjectController::Controller::QueryAllCars()
{
	return ProjectPersistance::Persistance::QueryAllCars();
}
//
Car^ ProjectController::Controller::QueryCarById(int id)
{
	return ProjectPersistance::Persistance::QueryCarById(id);
}

Car^ ProjectController::Controller::QueryCarByPlate(String^ plate)
{
	return ProjectPersistance::Persistance::QueryCarByPlate(plate);
}

//

List<Car^>^ ProjectController::Controller::QueryListCarByBrand(String^ brand)
{
	return ProjectPersistance::Persistance::QueryListCarByBrand(brand);
}

List<Car^>^ ProjectController::Controller::QueryListCarByColor(String^ color)
{
	return ProjectPersistance::Persistance::QueryListCarByColor(color);
}

List<Car^>^ ProjectController::Controller::QueryListCarByCondition(String^ condition)
{
	return ProjectPersistance::Persistance::QueryListCarByCondition(condition);
}

List<Car^>^ ProjectController::Controller::QueryListCarByOperative(bool operative)
{
	return ProjectPersistance::Persistance::QueryListCarByOperative(operative);
}

//*//
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

List<Reclamation^>^ ProjectController::Controller::QueryListReclamationByDate(DateTime date)
{
	return ProjectPersistance::Persistance::QueryListReclamationByDate(date);
}

//*//
List<Help^>^ ProjectController::Controller::QueryAllHelps()
{
	return ProjectPersistance::Persistance::QueryAllHelps();

}
//
Help^ ProjectController::Controller::QueryHelpById(int id)
{
	return ProjectPersistance::Persistance::QueryHelpById(id);
}

List<Help^>^ ProjectController::Controller::QueryListHelpByType(String^ type)
{
	return ProjectPersistance::Persistance::QueryListHelpByType(type);
}

List<Help^>^ ProjectController::Controller::QueryListHelpByCategory(String^ state)
{
	return ProjectPersistance::Persistance::QueryListHelpByCategory(state);
}

List<Help^>^ ProjectController::Controller::QueryListHelpByChecked(bool checked)
{
	return ProjectPersistance::Persistance::QueryListHelpByChecked(checked);
}

List<Help^>^ ProjectController::Controller::QueryListHelpByDate(DateTime date)
{
	return ProjectPersistance::Persistance::QueryListHelpByDate(date);
}











