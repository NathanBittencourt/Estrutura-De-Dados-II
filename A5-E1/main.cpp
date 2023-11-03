/*
Armazene em uma estrutura de dados struct dados a respeito de um prédio de 4 apartamentos. 
É preciso armazenar os seguintes dados do apartamento: número de portas, números de janelas 
e metragem quadrada. No final o programa deve dar o valor em real dos 4 apartamentos individualmente 
que são calculados de acordo com as seguintes diretrizes: 1 porta = +R$ 200,00, 1 janela = +R$ 100,00, 
metro quadrado construído = +R$ 4500,00 o metro quadrado.
*/

#include <iostream>

using namespace std;

struct Apartamento{
    int num_Portas;
    int num_Janelas;
    int metragem_Quadrada;

    void insere(int numPortas, int numJanelas, int metragemQuadrada){
        num_Portas = numPortas;
        num_Janelas = numJanelas;
        metragem_Quadrada = metragemQuadrada;
    }

    void calcular(int ap){
        int total =  ((num_Portas * 200) + (num_Janelas * 100) + (metragem_Quadrada * 4500));
        cout << "Valor total do apartamento " << ap << ": R$" << total << endl;
    }
};

int main(){

    Apartamento ap1, ap2, ap3, ap4;
    ap1.insere(1,2,3);
    ap1.calcular(1);
    ap2.insere(2,4,6);
    ap2.calcular(2);
    ap3.insere(4,8,12);
    ap3.calcular(3);
    ap4.insere(8,16,24);
    ap4.calcular(4);

    return 0;
}