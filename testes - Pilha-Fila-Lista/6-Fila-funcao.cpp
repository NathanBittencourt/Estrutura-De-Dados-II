#include <iostream>
#include <queue>

void enfileirar(std::queue<int>& fila, int valor) {
    fila.push(valor);
}

void desenfileirar(std::queue<int>& fila) {
    if (!fila.empty()) {
        fila.pop();
    }
}

void imprimirFila(const std::queue<int>& fila) {
    std::queue<int> copia = fila;
    while (!copia.empty()) {
        std::cout << copia.front() << " ";
        copia.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::queue<int> minhaFila;
    
    enfileirar(minhaFila, 10);
    enfileirar(minhaFila, 20);
    enfileirar(minhaFila, 30);
    
    imprimirFila(minhaFila);
    
    desenfileirar(minhaFila);
    
    imprimirFila(minhaFila);
    
    return 0;
}
