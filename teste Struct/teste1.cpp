#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velocidade_Maxima;
};

int main(){

    Carro car1;
    Carro car2;

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.potencia = 450;
    car1.velocidade_Maxima = 350;

    car2.nome = "Luxo";
    car2.cor = "Preto ";
    car2.potencia = 250;
    car2.velocidade_Maxima = 260;

    cout << "Nome.............: " << car1.nome << "\n";
    cout << "Cor..............: " << car1.cor << "\n";
    cout << "Potencia.........: " << car1.potencia << "\n";
    cout << "Velocidade Maxima: " << car1.velocidade_Maxima << "\n";
    cout << endl << endl << endl;
    cout << "Nome.............: " << car2.nome << "\n";
    cout << "Cor..............: " << car2.cor << "\n";
    cout << "Potencia.........: " << car2.potencia << "\n";
    cout << "Velocidade Maxima: " << car2.velocidade_Maxima << "\n";

    return 0;
}