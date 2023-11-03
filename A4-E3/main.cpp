/*
Faça um algoritmo com uma fila que armazene quantos números inteiros que que o usuário
quiser, esses números também serão inseridos pelo usuário. O programa deve armazenar os
números menores que 5 que foram inseridos em uma segunda fila, no final o programa deve
falar qual é o tamanho da primeira fila com todos os números inseridos bem como o
tamanho da segunda fila onde só foram armazenados os números menores que 5.
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int num;
    char resp;
    queue<int> numeros, menoresQue5;
    cout << "Adicione um numero na fila: ";
    cin >> num;
    if(num < 5){
        menoresQue5.push(num);
    }else{
        numeros.push(num);
    }
    cout << endl << "Quer adicionar mais numeros? (S/N)" << endl;
    cin >> resp;
    while (resp == 's' or resp == 'S')
    {
        cout << endl << "Adicione um numero na fila: ";
        cin >> num;
        if(num < 5){
            menoresQue5.push(num);
        }else{
            numeros.push(num);
        }
        cout << endl << "Quer adicionar mais numeros? (S/N)" << endl;
        cin >> resp;
    }
    cout << "Tamanho da primeira fila: " << numeros.size() << endl;
    cout << "Tamanho da segunda fila: " << menoresQue5.size(); 
    return 0;
}