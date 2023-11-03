#include <iostream>
#include <list>

void inserirNaLista(std::list<int>& lista, int valor) {
    lista.push_back(valor);
}

void removerDaLista(std::list<int>& lista, int valor) {
    lista.remove(valor);
}

void imprimirLista(const std::list<int>& lista) {
    for (const auto& elemento : lista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::list<int> minhaLista;
    
    inserirNaLista(minhaLista, 10);
    inserirNaLista(minhaLista, 20);
    inserirNaLista(minhaLista, 30);
    
    imprimirLista(minhaLista);
    
    removerDaLista(minhaLista, 20);
    
    imprimirLista(minhaLista);
    
    return 0;
}
