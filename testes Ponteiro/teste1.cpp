#include <iostream>

using namespace std;

int main(){
    string veiculo = "Carro";
    string *pv;

    pv = &veiculo; // Ponteiro recebe o endereço da variável veículo
    cout << veiculo << endl;
    cout << pv << "\n" << &veiculo << endl;

    *pv = "Moto"; // No endereço apontado por *pv adicione o valor "Moto"
    cout << veiculo << "\n" << *pv;

    return 0;
}