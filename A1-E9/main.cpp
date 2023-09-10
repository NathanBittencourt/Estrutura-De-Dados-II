#include <iostream>
using namespace std;
int vetor[10];
void ordemCrescente(int novoVetor[])
{
    for (int y = 0; y < 10 - 1; y++)
    {
        for (int z = 0; z < 10 - 1; z++)
        {
            if (novoVetor[z] > novoVetor[z + 1])
            {
                int variavelDeTroca = novoVetor[z];
                novoVetor[z] = novoVetor[z + 1];
                novoVetor[z + 1] = variavelDeTroca;
            }
        }
    }
}
void ordemDecrescente(int novoVetor[])
{
    for (int y = 0; y < 10 / 2; y++)
    {
        int variavelDeTroca = novoVetor[y];
        novoVetor[y] = novoVetor[10 - y - 1];
        novoVetor[10 - y - 1] = variavelDeTroca;
    }
}
void imprimirVetor(int novoVetor[])
{
    ordemCrescente(vetor);
    cout << endl << "Aqui esta o seu vetor em ordem crescente: " << endl;
    for (int x = 0; x < 10; x++)
    {
        cout << vetor[x] << " ";
    }
    cout << endl << "----------------------------------------------------" << endl;
    ordemDecrescente(vetor);
    cout << "Aqui esta o seu vetor em ordem decrescente: " << endl;
    for (int x = 0; x < 10; x++)
    {
        cout << vetor[x] << " ";
    }
}
int main()
{
    for (int x = 0; x < 10; x++)
    {
        cout << "---------------------------------------------" << endl;
        cout << "Digite o " << x + 1 << "º valor do vetor: ";
        cin >> vetor[x];
    }
    imprimirVetor(vetor);
    return 0;
}