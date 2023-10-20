#include <bits/stdc++.h>
#include "notification.hpp"

using namespace std;

class Profile
{
private:
    uint32_t id;                        // Identificador do perfil
    uint16_t sessions = 0;              // Numero de conectados
    string name;                        // Nome do perfil(entre 4 e 20 caracteres)
    vector<string> followers;           // Seguidores do perfil
    vector<string> following;           // Quem o perfil segue
    vector<Notification> notifications; // Notificações para ler do perfil

public:
    Profile(string name, uint32_t id) // Construtor criando conta
    {
        this->sessions = 1;
        this->name = name;
        this->id = id;
    }

    string Profile::get_name()
    {
        return name;
    }

    bool Profile::verify_sessions()
    { // Verifica se pode logar
        if (sessions < 2)
        {
            sessions += 1;
            return true;
        }
        else
        {
            return false;
        };
    }
};