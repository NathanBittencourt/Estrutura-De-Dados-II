/*
Implemente um TAD avião particular
Devem ser levadas em consideração dados do avião em relação a sua manutenção,
considere motores, aviônica, fuselagem (número de horas que uma peça irá precisar de
manutenção) além do seu nome e do seu ano de fabricação.
Implemente as operações:
Definir número de horas de vôo para a manutenção dos motores, da aviônica e da
fuselagem.
Inserir em um looping infinito o número de horas de voo do avião (vôo após vôo).
Se determinada peça atingir o número de horas de vôo limite para a sua manutenção,
deve ser impresso um alarme na tela falando para o avião fazer a sua manutenção
E através de comentários defina: O que é a aplicação, especificação e implementação.
*/

// APLICAÇÃO

#include "AviaoParticular.hpp"
#include <iostream>

using namespace std;

int main(){

    AviaoParticular topgun;
    topgun.definir_num_horas_manutencao(50, 20, 30, "Topgun", 2015, 100, 40, 60);
    topgun.inserir_num_horas_voo();

    return 0;
}