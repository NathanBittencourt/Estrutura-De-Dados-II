/*
Faça um programa onde o usuário insira 5 números que devem ser armazenados em uma
pilha dinâmica, no final, o programa deve exibir todos os dados armazenados além do seu
somatório.
*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    int num = 0, soma = 0;
    stack<int> pilha;
    for(int x = 0; x < 5; x++){
        cout << "Insira o " << x + 1 << " numero: ";
        cin >> num;
        pilha.push(num);
        soma = soma + num;
    }
    cout << endl << "Dados armazenados na pilha:" << endl;
    for(int x = 0; x < 5; x++){
        cout << pilha.top() << endl;
        pilha.pop();
    }
   cout << endl << "Somatorio dos numeros: " << soma << endl;

    return 0;
}