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

    //getters and setters
    uint32_t get_id(){return this->id;}
    void set_id(uint32_t id){this->id = id;}

    uint16_t get_sessions(){return this->sessions;}
    void set_sessions(uint16_t sessions){this->sessions = sessions;}
    
    string get_name(){return this->name;}
    void set_name(string name){this->name = name;}

    vector<string> get_followers(){return this->followers;}
    vector<string> get_following(){return this->following;}
    vector<Notification> get_notifications(){return this->notifications;}
};