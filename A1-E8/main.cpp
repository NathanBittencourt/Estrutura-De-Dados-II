/*
Faça uma função que leia um número não determinado de valores
positivos e retorna a média aritmética dos mesmos.
(Faça um looping infinito e a cada número inserido, deverá ser impressa uma nova média).
*/

#include <iostream>
using namespace std;
int valor = 1, somaValor = 0, cont = 0, media = 0;

int valores()
{
    while (valor > 0)
    {
        cout << "Insira um valor: ";
        cin >> valor;
        somaValor += valor;
        cont++;
        media = (somaValor / cont);
        cout << "Média: " << media << endl;
    }
}

int main()
{
    valores();
    return 0;
}