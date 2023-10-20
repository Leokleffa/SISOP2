#include <bits/stdc++.h>
#include "profile.hpp"
#include "server.hpp"

using namespace std;

class Packet
{

private:
    uint16_t type;        // Tipo do pacote (p.ex. DATA | CMD)
    uint16_t seqn;        // Número de sequência
    uint16_t length;      // Comprimento do payload
    uint16_t timestamp;   // Timestamp do dado
    const string payload; // Dados da mensagem

public:
    void Packet::login(string name, Server servidor)
    {

        vector<Profile> perfis = servidor.get_accounts();
        bool profile_exists = false;

        for (auto &perfil : perfis)
        { // Iteração pelos perfis

            if (perfil.get_name() == name)
            { // Compara se o perfil ja existe
                profile_exists = true;

                if (perfil.verify_sessions())
                {
                    // Verifica se o login é valido
                    // Se sim, manda pacote para o servidor
                }
                else
                {
                    cout << "Limite de sessoes atingido" << endl;
                };
            };
        };

        if (profile_exists == false) // Se o perfil nao existe, cria conta
        {
            Profile novo_perfil = Profile(name, perfis.size() + 1);
            servidor.add_account(novo_perfil); // Manda pacote para o servidor
        }
    };
};