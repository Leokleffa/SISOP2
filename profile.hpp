#include "header.hpp"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Profile{
    private:
        uint32_t id; //Identificador do perfil
        uint16_t sessions; //Numero de conectados
        string name; //Nome do perfil(entre 4 e 20 caracteres)
        vector<string> followers; //Seguidores do perfil
        vector<string> following; //Quem o perfil segue
        vector<Notification> notifications; //Notificações para ler do perfil
 
    public:

        string Profile:: get_name(){
            return name;
        }

        bool Profile::verify_sessions(){ //Verifica se pode logar
            if(sessions < 2){
                sessions += 1;
                return true;
            }
            else{
                return false;
            };
        }

        void Profile::create_profile(string name, u_int32_t id){
            
            this->name = name;
            this->id = id;
            
        }
};