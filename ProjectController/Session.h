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
        //para los demás
        /*
        static property Owner^ CurrentOwner {
            Owner^ get() {
                return currentOwner;
            }
            void set(Owner^ owner) {
                currentOwner = owner;
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