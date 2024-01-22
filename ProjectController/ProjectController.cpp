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

List<Client^>^ ProjectController::Controller::QueryAllClients()
{
	return ProjectPersistance::Persistance::QueryAllClients();
}

Client^ ProjectController::Controller::QueryClientById(int id)
{
	return ProjectPersistance::Persistance::QueryClientById(id);
}

List<Client^>^ ProjectController::Controller::QueryListClientByName(String^ name)
{
	return ProjectPersistance::Persistance::QueryListClientByName(name);
}
