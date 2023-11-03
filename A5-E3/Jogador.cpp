// IMPLEMENTAÇÃO

#include "Jogador.hpp"
#include <iostream>

using namespace std;

    void Jogador::atribuirValores(int numJogos, int numGols, int numAss, int numChutes){
        num_Jogos = numJogos;
        num_Gols = numGols;
        num_Assistencias = numAss;
        chutes_a_gol = numChutes;
        pGols = &num_Gols;
        pChutes = &chutes_a_gol;
    }

    void Jogador::imprimirDados(){
        cout << "\nDados do Jogador!\n";
        cout << "Numero de Jogos: " << num_Jogos << endl;
        cout << "Numero de Gols: " << num_Gols << endl;
        cout << "Numero de Assistencias: " << num_Assistencias << endl;
        cout << "Chutes a Gol: " << chutes_a_gol << endl;
    }

    int Jogador::aproveitamento(){
        if(num_Gols > chutes_a_gol || num_Gols < 0 || chutes_a_gol < 0){
            cout << "\nNao foi possivel calcular o aproveitamento.\n";
            return 0;
        }else{
            return (*pGols * 100) / *pChutes;   
        }
    }
