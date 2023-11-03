/*
Faça um vetor que armazene 10 números distintos inseridos pelo usuário e outro vetor
com suas posições de memória, o programa deve imprimir tanto o número quanto
o lugar na memória que ele está.
*/

#include <iostream>

using namespace std;

int main(){
    int vetor[10];
    int *pvetor;

    for(int x = 0; x < 10; x++){
        cout << "Insira o " << x+1 << " numero: ";
        cin >> vetor[x]; cout << endl;
    }
    pvetor = &vetor[0];
    for(int x = 0; x < 10; x++){
        cout << "Numero " << x+1 << " do vetor: " << vetor[x] << endl;
        cout << "Lugar da memoria que ele ele esta: " << (pvetor+=1) << endl;
    }
    return 0;
}