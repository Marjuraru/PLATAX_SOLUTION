#pragma once 

using namespace System;
using namespace ProjectModel;

namespace ProjectModel {
    public ref class Session
    {
    public:
        static property Proprietor^ CurrentProprietor {
            Proprietor^ get() {
                return currentProprietor;
            }
            void set(Proprietor^ user) {
                currentProprietor = user;
            }
        }
        //para los dem�s
        /*
        static property Client^ CurrentClient {
            Client^ get() {
                return currentClient;
            }
            void set(Client^ client) {
                currentClient = client;
            }
        }

        static property Administrator^ CurrentAdministrator {
            Administrator^ get() {
                return currentAdministrator;
            }
            void set(Administrator^ administrator) {
                currentAdministrator = administrator;
            }
        }*/
    private:
        static Proprietor^ currentProprietor;
        /*
        static Owner^ currentOwner;
        static Administrator^ currentAdministrator;
        */
    };
}