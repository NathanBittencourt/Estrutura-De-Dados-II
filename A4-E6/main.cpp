/*
Faça uma lista com 3 números alocados nela, 1, 2 e 3...
O usuário deve indicar se ele quer que esses números sejam exibidos
em ordem crescente ou ordem decrescente. Uma vez que o usuário escolher
um sentido esses números devem rolar em um looping infinito.
*/

#include <iostream>
#include <list>
#include <unistd.h>

using namespace std;

int main()
{
    int escolha = 0;
    list<int> numeros;
    numeros.push_front(1);
    numeros.push_front(2);
    numeros.push_front(3);
    cout << "Voce quer os numeros em ordem crescente ou decrescente? (1 - Crescente, 2 - Decrescente)" << endl;
    cout << "Digite sua escolha: ";
    cin >> escolha;
    if (escolha == 1)
    {
        cout << endl
             << "Sua escolha foi: Crescente\n";
        while (true)
        {
            numeros.sort();
            cout << numeros.front() << "\n";
            numeros.erase(numeros.begin());
            sleep(1);
            if (numeros.empty())
            {
                numeros.push_front(1);
                numeros.push_front(2);
                numeros.push_front(3);
            }
        }
    }
    else if (escolha == 2)
    {
        cout << endl
             << "Sua escolha foi: Decrescente\n";
        while (true)
        {
            numeros.sort();
            numeros.reverse();
            cout << numeros.front() << "\n";
            numeros.erase(numeros.begin());
            sleep(1);
            if (numeros.empty())
            {
                numeros.push_front(1);
                numeros.push_front(2);
                numeros.push_front(3);
            }
        }
    }
    return 0;
}
