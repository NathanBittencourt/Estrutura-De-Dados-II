/*
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes,
coletando dados sobre o salário e número de filhos. Faça uma função que
leia esses dados para um número não determinado de pessoas (looping infinito)
e retorne a cada rodada:
A média de salário da população,
A média do número de filhos,
O maior salário
E o percentual de pessoas com salário até R$1000,00.
*/

#include <iostream>
using namespace std;
int somaNumFilho = 0, contAte1000 = 0, qtdPessoas = 0, mediaNumfilhos = 0, percAte1000 = 0;
float somaSalario = 0, maiorSalario = 0, mediaSalario = 0;

void prefeitura()
{
    bool x = true;
    float salario;
    int numFilhos;
    while (x == true)
    {
        cout << "Informe o salario: " << endl;
        cin >> salario;
        cout << "Informe o numero de filhos: " << endl;
        cin >> numFilhos;
        cout << "Deseja continuar inserindo dados? (S/N)" << endl;
        string resp;
        cin >> resp;
        if (resp == "N" or resp == "n")
        {
            x = false;
        }

        somaSalario += salario;
        somaNumFilho += numFilhos;
        qtdPessoas++;
        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
        if (salario <= 1000)
        {
            contAte1000++;
        }
    }
    mediaSalario = somaSalario / qtdPessoas;
    mediaNumfilhos = somaNumFilho / qtdPessoas;
    percAte1000 = (contAte1000 * 100) / qtdPessoas;
}

int main()
{
    prefeitura();
    cout << "A média de salário da população: " << mediaSalario << endl;
    cout << "A média do número de filhos: " << mediaNumfilhos << endl;
    cout << "O maior salário: " << maiorSalario << endl;
    cout << "O percentual de pessoas com salário até R$1000,00: " << percAte1000 << endl;
    return 0;
}