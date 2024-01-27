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

int ProjectController::Controller::GenerateClientId()
{
	return ProjectPersistance::Persistance::GenerateClientId();
}

void ProjectController::Controller::CreateClient(Client^ c)
{
	return ProjectPersistance::Persistance::CreateClient(c);
}

void ProjectController::Controller::UpdateClient(Client^ c)
{
	return ProjectPersistance::Persistance::UpdateClient(c);
}

void ProjectController::Controller::DeleteClient(int id)
{
	return ProjectPersistance::Persistance::DeleteClient(id);
}


//

List<Client^>^ ProjectController::Controller::QueryAllClients()
{
	return ProjectPersistance::Persistance::QueryAllClients();
}

//
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

List<Client^>^ ProjectController::Controller::QueryClientByLicensetype(String^ licensetype)
{
	return ProjectPersistance::Persistance::QueryClientByLicensetype(licensetype);
}

void ProjectController::Controller::CreateCar(Car^ c)
{
	return ProjectPersistance::Persistance::CreateCar(c);
}

void ProjectController::Controller::UpdateCar(Car^ c)
{
	return ProjectPersistance::Persistance::UpdateCar(c);
}

void ProjectController::Controller::DeleteCar(int id)
{
	return ProjectPersistance::Persistance::DeleteCar(id);
}
