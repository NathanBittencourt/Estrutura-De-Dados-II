#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velocidade_Maxima;
    int velocidade_Atual;

    void insere(string pNome, string pCor, int pPotencia, int pVelocidade_Maxima){
        nome = pNome;
        cor = pCor;
        potencia = pPotencia;
        velocidade_Maxima = pVelocidade_Maxima;
        velocidade_Atual = 0;
    }

    void mostra(){
        cout << "\nNome.............: " << nome << "\n";
        cout << "Cor..............: " << cor << "\n";
        cout << "Potencia.........: " << potencia << "\n";
        cout << "Velocidade Atual.: " << velocidade_Atual << "\n";
        cout << "Velocidade Maxima: " << velocidade_Maxima << "\n"; 
    }

    void muda_Velocidade(int mv){
        velocidade_Atual = mv;
        if(velocidade_Atual > velocidade_Maxima){
            velocidade_Atual = velocidade_Maxima;
        }
        if(velocidade_Atual < 0){
            velocidade_Atual = 0;
        }
    }
};

int main(){

    Carro car1;

    car1.insere("Tornado", "Vermelho",450,350);
    car1.mostra();
    car1.muda_Velocidade(700);
    car1.mostra();

    return 0;
}