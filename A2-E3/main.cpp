/*
Agora faça um upgrade do exercício anterior, 
o programa deve ler o conteúdo dos 3 arquivos de texto e 
armazena-los em 3 variáveis. Depois essas 3 variáveis devem ser escritas na tela.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    string ip1, ip2, ip3;
    string v1, v2, v3;

    ofstream arquivoIP1;
    arquivoIP1.open("ip1.txt");
    cout << "Insira o primeiro IP: " << endl;
    cin >> ip1;
    arquivoIP1 << ip1;
    arquivoIP1.close();
    ifstream arquivoIP1entrada;
    arquivoIP1entrada.open("ip1.txt");
    getline(arquivoIP1entrada, v1);
    cout << "\nRegistro 1: " << v1 << endl;
    arquivoIP1entrada.close();
    
    ofstream arquivoIP2;
    arquivoIP2.open("ip2.txt");
    cout << "\nInsira o segundo IP: " << endl;
    cin >> ip2;
    arquivoIP2 << ip2;
    arquivoIP2.close();

    ifstream arquivoIP2entrada;
    arquivoIP2entrada.open("ip2.txt");
    getline(arquivoIP2entrada, v2);
    cout << "\nRegistro 2: " << v2 << endl;
    arquivoIP2entrada.close();

    ofstream arquivoIP3;
    arquivoIP3.open("ip3.txt");
    cout << "\nInsira o terceiro IP: " << endl;
    cin >> ip3;
    arquivoIP3 << ip3;
    arquivoIP3.close();

    ifstream arquivoIP3entrada;
    arquivoIP3entrada.open("ip3.txt");
    getline(arquivoIP3entrada, v3);
    cout << "\nRegistro 3: " << v3 << endl;
    arquivoIP3entrada.close();
}