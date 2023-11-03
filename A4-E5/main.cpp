/*
Faça um algoritmo com duas listas de 5 elementos, após essa lista ser impressa na tela, a
segunda deve ser uma cópia idêntica da primeira e também ser impressa na tela.
*/

#include <iostream>
#include <list>

using namespace std;

int main(){
    list<string> lista1, lista2;
    lista1.push_front("A");
    lista1.push_back("B");
    lista1.push_back("C");
    lista1.push_back("D");
    lista1.push_back("E");
    lista2 = lista1;
    cout << "Elementos da lista 1" << "\n\n";
    for(int x = 0;  x < 5; x++){
        cout << lista1.front() << "\n\n";
        lista1.pop_front();
    }
    cout << "-----------------------------------" << endl;
    cout << "Elementos da lista 2" << "\n\n";
    for(int x = 0;  x < 5; x++){
        cout << lista2.front() << "\n\n";
        lista2.pop_front();
    }
    return 0;
}