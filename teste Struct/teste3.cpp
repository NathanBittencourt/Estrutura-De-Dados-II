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

    Carro *carros = new Carro;
    Carro car1, car2, car3, car4, car5;

    carros[0] = car1; 
    carros[1] = car2; 
    carros[2] = car3; 
    carros[3] = car4; 
    carros[4] = car5;

    carros[0].insere("Tornado", "Vermelho", 450, 350);
    carros[1].insere("Luxo", "Preto", 250, 260);
    carros[2].insere("Familia", "Prata", 150, 180);
    carros[3].insere("Trabalho", "Azul", 80, 120);
    carros[4].insere("Padrao", "Cinza", 100, 150);

    for(int x = 0; x < 5; x++){
        carros[x].mostra();
    }

    return 0;
}