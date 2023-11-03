/*
Crie 2 pilhas dinâmicas com o tamanho que você quiser, uma com nomes e outra com
números, o programa deve exibir o conteúdo da pilha que tiver mais elementos.
*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<string> nomes;
    stack<int> numeros;

    nomes.push("Nathan");
    nomes.push("Bruno");
    nomes.push("Pedro");
    nomes.push("Heryka");
    nomes.push("Fernanda");
    nomes.push("Ana Emilia");
    nomes.push("Daniel");
    nomes.push("Vinicius");
    nomes.push("Ricardo");

    numeros.push(1);
    numeros.push(2);
    numeros.push(3);
    numeros.push(4);
    numeros.push(5);

    if(nomes.size() > numeros.size()){
        while(!nomes.empty()){
            cout << nomes.top() << endl;
            nomes.pop();
        }
    }else{
        while(!numeros.empty()){
            cout << numeros.top() << endl;
            numeros.pop();
        }
    }

    return 0;
}