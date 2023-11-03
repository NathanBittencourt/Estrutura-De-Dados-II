/*
Faça um programa onde o usuário insira 10 números que tem que ser menor que 100 
(caso seja maior ou igual a 100 deverá ser exibida uma mensagem de erro), 
esses números devem ser armazenados em um vetor e em um arquivo de texto.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int vetor[10], num;

    cout << "Insira 10 numeros menores que 100!" << endl;
    for( int x = 0; x < 10; x++){

        fstream dezNumeros;
        dezNumeros.open("DezNumeros.txt", ios::out | ios::app);

        cout << "Insira o " << x+1 << "º numero: ";
        cin >> num;
        if (num < 100){
            vetor[x] = num;
            dezNumeros << num << endl;
        }else{
            cout << "Numero invalido! EU DISSE MENOR QUE 100! Informe outro!" << endl;
            cin >> num;
            while (num >= 100)
            {
                cout << "Vai fazer enquanto nao digitar um numero menor que 100." << endl;
                cin >> num;
            }
            vetor[x] = num;
            dezNumeros << num << endl;
        }
        dezNumeros.close();
    }
    return 0;
}