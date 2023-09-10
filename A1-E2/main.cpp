#include <iostream>
/*
Faça um algoritmo com uma função onde o usuário digite
um número e então diga se esse número é par ou impar.
*/
using namespace std;

int ParOuImpar(int num);

int ParOuImpar(int num){
    if (num % 2 == 0){
        cout<< num << " eh par!";
    }else{
        cout<< num << " eh impar!";
    }
}

int main()
{
    int numero;
    cout << "Digite um numero: " << endl;
    cin >> numero;
    ParOuImpar(numero);
    return 0;
}
