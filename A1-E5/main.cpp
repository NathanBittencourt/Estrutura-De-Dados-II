/*
Faça uma função para saber a respeito do consumo de combustível de um
automóvel. Considere que esse carro faz 14km/L com gasolina e 10km/L com
álcool.
Primeiramente o usuário deve inserir quantos litros de combustível ele quer
colocar.
Em seguida perguntar qual é o preço da gasolina e qual é o preço do álcool.
Através de duas funções (uma para cada combustível).
O programa deve dizer a autonomia do carro e se compensa abastecer mais
com gasolina ou mais com álcool.
*/

#include <iostream>
using namespace std;

int precoGas(){
    int precoGas;
    cout << "Qual o preco da gasolina?" << endl;
    cin >> precoGas;
    return precoGas;
}
int precoAlc(){
    int precoAlc;
    cout << "Qual o preco do alcool?" << endl;
    cin >> precoAlc;
    return precoAlc;
}

int main(){
    int litros = 0, autonomiaGas = 0, autonomiaAlc = 0, gas = 14, alc = 10;
    cout << "Quantos litros de combustivel quer colocar?" << endl;
    cin >> litros;
    int precoGasolina = precoGas(), precoAlcool = precoAlc(), custoGas = 0, custoAlc;
    autonomiaGas = litros * gas;
    autonomiaAlc = litros * alc;
    cout << "\nAutonomia com gasolina (Km): " << autonomiaGas << endl;
    cout << "\nAutonomia com alcool (Km): " << autonomiaAlc << endl;
    
    custoGas = litros * precoGasolina;
    custoAlc = litros * precoAlcool;

    if (custoGas > custoAlc){
        cout <<endl<< "Eh melhor abastecer com alcool, meu caro!";
    }else{
        cout <<endl<< "Eh melhor abastecer com gasolina, meu caro!";
    }

    return 0;
}