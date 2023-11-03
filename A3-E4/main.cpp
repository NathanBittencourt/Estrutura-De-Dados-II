/*
Crie um programa que contenha um vetor de inteiros contendo 5 elementos. 
Utilizando apenas aritmética de ponteiros, leia esse vetor e imprima o
dobro de cada valor lido.
*/

#include <iostream>

using namespace std;

int main(){
    
    int vetor[5], *pvetor;
    for(int x = 0; x < 5; x++){
        vetor[x] = x + 10;
    }

    pvetor = &vetor[0];

    for(int x = 0; x < 5; x++){
        *(pvetor) = vetor[x] * 2;
        cout << "Valor dobrado: " << vetor[x] << endl;
        *(pvetor+=1);
    }
    return 0;
}