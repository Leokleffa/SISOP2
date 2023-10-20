#include <bits/stdc++.h>
#include "server.hpp"
#include "pacote.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        cout << "O número de argumentos é menor que 3." << endl;
        return 1; // Retorna um código de erro para indicar que o programa não foi executado corretamente
    }

    string perfil = argv[1]; // O primeiro argumento é o comando
    string ip = argv[2];     // O segundo argumento é o IP
    string port = argv[3];   // O terceiro argumento é a porta
}