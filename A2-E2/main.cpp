/*
Faça um programa que pergunte ao usuário 3 endereços de Ips e os armazene em 3 arquivos de textos diferentes.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    string ip1, ip2, ip3;

    ofstream arquivoIP1;
    arquivoIP1.open("ip1.txt");
    cout << "Insira o primeiro IP: " << endl;
    cin >> ip1;
    arquivoIP1 << ip1;
    arquivoIP1.close();

    ofstream arquivoIP2;
    arquivoIP2.open("ip2.txt");
    cout << "Insira o segundo IP: " << endl;
    cin >> ip2;
    arquivoIP2 << ip2;
    arquivoIP2.close();

    ofstream arquivoIP3;
    arquivoIP3.open("ip3.txt");
    cout << "Insira o terceiro IP: " << endl;
    cin >> ip3;
    arquivoIP3 << ip3;
    arquivoIP3.close();
}