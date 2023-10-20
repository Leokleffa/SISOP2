#include <bits/stdc++.h>
#include "profile.hpp"

using namespace std;

class Server
{
private:
    vector<Profile> accounts; // Vetor de contas mantidas pelo servidor
    uint16_t ip;
    uint16_t port;

public:
    Server(uint16_t ip, uint16_t port) // Construtor que faz a criação da classe Server
    {
        this->ip = ip;
        this->port = port;
    };

    vector<Profile> Server::get_accounts() // Obtenção de contas
    {
        return accounts;
    };

    void add_account(Profile perfil) // Adiciona conta nova no servidor
    {
        accounts.push_back(perfil);
    };
};
