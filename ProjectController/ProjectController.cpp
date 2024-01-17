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
