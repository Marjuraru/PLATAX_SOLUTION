#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace ProjectModel; // Agrega esta línea para importar el espacio de nombres que contiene 'User'

namespace ProjectPersistance {
    public ref class Persistance
    {
    private:
        static List<User^>^ UserList = gcnew List<User^>(); //no necesitamos 
        static List<Client^>^ ClientList = gcnew List<Client^>(); 

    public:
        static String^ CLIENT_FILE_BIN_NAME = "Client.bin";

        //Persistencia binaria
        static void PersistBinaryFile(String^ fileName, Object^ persistObject); //metodo de escritura/creación de archivos binarios
        static Object^ LoadBinaryFile(String^ fileName); //metodo de lectura/carga de archivos binarios


        // Metodos de mantenimiento del Cliente - CRUD
        static void CreateClient(Client^ c);
        //static void UpdateClient(Client^ c);
        //static void DeleteClient(int id);

    };
}
