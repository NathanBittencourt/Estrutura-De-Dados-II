// IMPLEMENTAÇÃO

#include "AviaoParticular.hpp"
#include <iostream>

using namespace std;

void AviaoParticular::definir_num_horas_manutencao(
    int pMotores, int pAvionica, int pFuselagem, string pNome, 
    int pAno_Fabricacao, int pLimiteMot, int pLimiteAvi, int pLimiteFus
    ){
    motores = pMotores;
    avionica = pAvionica;
    fuselagem = pFuselagem;
    nome = pNome;
    ano_Fabricacao = pAno_Fabricacao;
    limite_Motores = pLimiteMot;
    limite_Avionica = pLimiteAvi;
    limite_Fuselagem = pLimiteFus;
}

void AviaoParticular::inserir_num_horas_voo(){
    int horas_voo;
    while (true)
    {
        cout << "\nQual o tempo de voo? (Em horas): ";
        cin >> horas_voo;
        while(horas_voo < 0){
            cout << "Numero de horas invalido.\n";
            cout << "\nQual o tempo de voo? (Em horas): ";
            cin >> horas_voo;
        }
        if(horas_voo > limite_Motores){
            cout << "\nATENCAO! A MANUTENCAO DOS MOTORES E NECESSARIA! ATENCAO!\n";
        }
        if(horas_voo > limite_Avionica){
            cout << "\nATENCAO! A MANUTENCAO DA AVIONICA E NECESSARIA! ATENCAO!\n";
        }
        if(horas_voo > limite_Fuselagem){
            cout << "\nATENCAO! A MANUTENCAO DA FUSELAGEM E NECESSARIA! ATENCAO!\n";
        }
        if(horas_voo == 0){
            cout << "\nFIM DOS VOOS!\n";
            false;
        }
    }
}