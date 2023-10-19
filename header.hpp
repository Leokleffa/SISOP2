#include <bits/stdc++.h>

using namespace std;



class Notification{

    private:
        uint32_t id; //Identificador da notificação (sugere-se um identificador único)
        uint32_t timestamp; //Timestamp da notificação
        uint16_t length; //Tamanho da mensagem
        uint16_t pending; //Quantidade de leitores pendentes
        bool is_read; //Verificar se foi lida
        const string message; //Mensagem

    public:
        //void set_is_read();
        //void get_is_read();
};

