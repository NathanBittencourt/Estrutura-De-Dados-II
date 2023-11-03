/*
Implemente um TAD Jogador de futebol.

Cada jogador possui os campos, número de jogos, gols, assistências e
chutes a gol.

Implemente as operações:
Atribuir valores para os campos citados acima
Imprimir os dados/estatísticas do jogador
Aproveitamento do jogador (chutes a gol/gols)

E através de comentários defina: O que é a aplicação, especificação e
implementação.
*/

// APLICAÇÃO

#include "Jogador.hpp"
#include <iostream>

using namespace std;

int main(){

    Jogador ronaldo;
    ronaldo.atribuirValores(10, 10, 8, 10);
    ronaldo.imprimirDados();
    cout << "Aproveitamento: " << ronaldo.aproveitamento();

    return 0;
}
