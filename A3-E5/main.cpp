/*
Faça um programa que some 2 números inseridos pelo usuário, 
utilize uma uma função  para fazer esse calculo e retorne o 
endereço de memória que esse resultado foi armazenado. Por fim, imprima o 
endereço de memória onde esse resultado foi armazenado, assim como o resultado em si.
*/

#include <iostream>

using namespace std;

int *somar(int num1, int num2);

int main(){
    int num1 = 0, num2 = 0;

    cout << "Insira o primeiro numero: ";
    cin >> num1;
    cout << "Insira o segundo numero: ";
    cin >> num2;
    cout << somar(num1,num2);
    return 0;
}

int *somar(int num1, int num2){
    int soma, *psoma;
    soma = num1 + num2;
    psoma = &soma;
    cout << "Endereco de memoria da soma: " << psoma << endl;
    cout << "Resultado da soma: " << *psoma << endl;
    return psoma;
}