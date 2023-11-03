#include <iostream>
#include <stack>
// stack é pilha
using namespace std;

int main()
{

    stack<string> cartas;

    cartas.push("Rei de Copas"); // push adiciona na pilha
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: " << cartas.size() << endl;
    cout << "Carta do topo: " << cartas.top() << endl;
    cartas.pop(); // carta do topo removida
    cout << "Nova carta do topo: " << cartas.top() << endl;
    // empty verifica se a pilha está vazia
    while (!cartas.empty())
    {
        cartas.pop();
        cout << "Método pop utilizado.\n";
        if (!cartas.empty())
        {
            cout << "Nova carta do topo: " << cartas.top() << endl;
        }
        else
        {
            cout << "Pilha vazia";
        }
    }

    // Resumo
    // push(); Adiciona conteúdo na pilha
    // pop(); Remove conteúdo na pilha
    // size(); Mostra o tamanho da pilha
    // empty(); Verifica se a pilha está vazia

    return 0;
}