#include "header.hpp"
#include "profile.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Server{
    private:
        vector<Profile> accounts;           // Vetor de contas mantidas pelo servidor

    public:
        vector<Profile> Server::get_accounts(){ // Obtenção de contas
            return accounts;
        }   

};


