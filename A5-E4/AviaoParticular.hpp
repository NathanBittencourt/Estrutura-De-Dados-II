// ESPECIFICAÇÃO

#include <iostream>

using namespace std;

struct AviaoParticular{
    int motores;
    int avionica;
    int fuselagem;
    string nome;
    int ano_Fabricacao;
    
    int limite_Motores;
    int limite_Avionica;
    int limite_Fuselagem;

    void definir_num_horas_manutencao(int pMotores, int pAvionica, int pFuselagem, string pNome, int pAno_Fabricacao, int pLimiteMot, int pLimiteAvi, int pLimiteFus);

    void inserir_num_horas_voo();
};