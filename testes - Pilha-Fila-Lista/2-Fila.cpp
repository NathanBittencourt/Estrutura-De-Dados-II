#include <iostream> 
#include <queue>

using namespace std;

int main(){

    queue <string> cartas;
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeira carta: " << cartas.front() << endl; // front mostra o primeiro item da fila
    cout << "Ultima carta: " << cartas.back() << "\n\n"; // back mostra o último
    cout << "Método empty\n";
    while (!cartas.empty()){
        cout << "Pimeira carta: " << cartas.front() << endl;
        cartas.pop();
        cout << "Método pop utilizado.\n\n";
    }

    return 0;
}