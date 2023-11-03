/*
Faça um programa que tenha uma calculadora de somar, todos os números, 
inclusive os sinais de + e = e o resultados devem ser armazenados em um arquivo de log.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    int num1, num2, resultado;
    string soma = "+", igual = "=", log;

    cout << "Informe o primeiro numero: ";
    cin >> num1;
    cout << "Informe o segundo numero: ";
    cin >> num2;
    resultado = num1 + num2;
    cout << endl << "Resultado da soma: " << resultado;

    fstream adicao;
    adicao.open("Adicao.txt", ios::out | ios::app);
    adicao << num1;
    adicao << soma;
    adicao << num2;
    adicao << igual;
    adicao << resultado << endl;
    adicao.close();

    fstream adicaoEntrada;
    adicaoEntrada.open("Adicao.txt");
    cout << "Log da(s) soma(s):" << endl;
    while(getline(adicaoEntrada, log)){
        cout << log << endl;
    }
    adicaoEntrada.close();
    return 0;
}