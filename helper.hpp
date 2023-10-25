#ifndef __HELPER__
#define __HELPER__

#include <bits/stdc++.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <mutex>
#include <thread>
#include <chrono>

using namespace std;

#define DEFAULT_PORT 6555
#define DEFAULT_HOSTNAME "localhost"
#define MAX_SIM_USR 2  // Maximo de usuários simultaneos

enum PktType
{
    DATA,
    CMD
};

// Funcoes
bool check_name(const string name);
string get_timestamp();


typedef struct __packet
{
    string timestamp;   // Data timestamp
    string username;    // Username
    u_int16_t seqn;     // Sequencia da mensagem
    PktType type;       // Tipo do pacote
    string dados;       // Dados da mensagem
} Packet;

typedef struct
{
    string ip;
    int port;
} Server_info;


#endif