#pragma once 

using namespace System;
using namespace ProjectModel;

namespace ProjectModel {
    public ref class Session
    {
    public:
        static property Client^ CurrentClient {
            Client^ get() {
                return currentClient;
            }
            void set(Client^ user) {
                currentClient = user;
            }
        }
        /*
        static property Receptor^ CurrentReceptor {
            Receptor^ get() {
                return currentReceptor;
            }
            void set(Receptor^ receptor) {
                currentReceptor = receptor;
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
        static Client^ currentClient;
        /*
        static Receptor^ currentReceptor;
        static Administrator^ currentAdministrator;
        */
    };
}