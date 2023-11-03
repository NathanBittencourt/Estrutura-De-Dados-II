#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> aula, teste;
    int tam;
    list<int>:: iterator it;

    teste.push_front(10);
    teste.push_front(10);
    teste.push_front(10);
    teste.push_front(10);
    
    tam = 10;
    for(int x = 0; x < tam; x++){
        aula.push_back(x);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);
    
    aula.erase(--it);

    //aula.clear();
    //aula.empty();
    aula.merge(teste);

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for(int x = 0; x < tam; x++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}