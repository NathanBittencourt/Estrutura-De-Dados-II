#include <iostream>
/*
Fa�a um algoritmo com uma fun��o onde o usu�rio digite
um n�mero e ent�o diga se esse n�mero � par ou impar.
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
