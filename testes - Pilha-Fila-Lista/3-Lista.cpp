#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> aula;
    int tam;
    list<int>:: iterator it;

   aula.push_front(9);
   aula.push_front(0);
   aula.push_front(5);
   aula.push_front(3);
   aula.push_front(7);
   aula.push_front(2);
   aula.push_front(8);
   aula.push_front(1);
   aula.push_front(4);
   aula.push_front(6);

    it = aula.begin();
    advance(it,7);

    aula.insert(it,0);

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    aula.sort();
    aula.reverse();

    tam = aula.size();
    for(int x = 0; x < tam; x++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}