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

    void add_account(Profile perfil) // Adiciona conta nova no servidor
    {
        accounts.push_back(perfil);
    };
    
    uint16_t get_ip(){return this->ip;}
    void set_ip(uint16_t ip){this->ip = ip;}
    
    uint16_t get_port(){return this->port;}
    void set_port(uint16_t port){this->port = port;}
    vector<Profile> Server::get_accounts(){return this->accounts;};
};
