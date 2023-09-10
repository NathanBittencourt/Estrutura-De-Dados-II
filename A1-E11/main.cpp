/*
Faça um programa que receba um número que corresponda a um mês no primeiro semestre
(de 1 a 6) e chame uma função que escreva o nome do mês correspondente.
Caso o usuário digite um número fora do intervalo permitido,
(através de um parâmetro verificador) deverá aparecer uma mensagem de erro.
*/

#include <iostream>
using namespace std;
void meses(int &mes)
{
    cout << "Insira o numero de um mes do primeiro semestre!" << endl;
    cout << "1 - Janeiro" << endl;
    cout << "2 - Fevereio" << endl;
    cout << "3 - Marco" << endl;
    cout << "4 - Abril" << endl;
    cout << "5 - Maio" << endl;
    cout << "6 - Junho" << endl;
    cout << "Digite aqui: ";
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout << "Mes escolhido: JANEIRO"; break;
    case 2:
        cout << "Mes escolhido: FEVEREIRO"; break;
    case 3:
        cout << "Mes escolhido: MARCO"; break;
    case 4:
        cout << "Mes escolhido: ABRIL"; break;
    case 5:
        cout << "Mes escolhido: MAIO"; break;
    case 6:
        cout << "Mes escolhido: JUNHO"; break;
    default:
        cout << "Mes invalido, meu chapa"; break;
    }
}
int main()
{
    int mes;
    meses(mes);
    return 0;
}