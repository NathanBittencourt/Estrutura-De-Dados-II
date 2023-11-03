#include <iostream>
#include <stack>

void empilhar(std::stack<int>& pilha, int valor) {
    pilha.push(valor);
}

void desempilhar(std::stack<int>& pilha) {
    if (!pilha.empty()) {
        pilha.pop();
    }
}

void imprimirPilha(const std::stack<int>& pilha) {
    std::stack<int> copia = pilha;
    while (!copia.empty()) {
        std::cout << copia.top() << " ";
        copia.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::stack<int> minhaPilha;
    
    empilhar(minhaPilha, 10);
    empilhar(minhaPilha, 20);
    empilhar(minhaPilha, 30);
    
    imprimirPilha(minhaPilha);
    
    desempilhar(minhaPilha);
    
    imprimirPilha(minhaPilha);
    
    return 0;
}