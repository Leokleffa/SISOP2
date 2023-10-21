#include <bits/stdc++.h>

using namespace std;



class Notification{

    private:
        uint32_t        id; //Identificador da notificação (sugere-se um identificador único)
        uint32_t        timestamp; //Timestamp da notificação
        uint16_t        length; //Tamanho da mensagem
        uint16_t        pending; //Quantidade de leitores pendentes
        bool            is_read; //Verificar se foi lida
        const string    message; //Mensagem

    public:

        //getters and setters
        uint32_t get_id(){return this->id;}
        void set_id(uint32_t id){this->id = id;}

        uint32_t get_timestamp(){return this->timestamp;}
        void set_timestamp(uint32_t timestamp){this->timestamp = timestamp;}

        uint16_t get_length(){return this->length;}
        void set_length(uint16_t length){this->length = length;}

        uint16_t get_pending(){return this->pending;}
        void set_pending(uint16_t pending){this->pending = pending;}

        bool     get_is_read(){return this->is_read;}    
        void set_is_read(bool is_read){this->is_read = is_read;}

        string get_message(){return this->message;}
};