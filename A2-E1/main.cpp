/*
Faça um programa que escreva o nome completo de uma pessoa em um arquivo txt.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    ofstream arqtxt;
    arqtxt.open("exercicio1.txt");
    arqtxt << "Nathan Bittencourt de Oliveira";
    cout << "O nome foi inserido com sucesso!";
    arqtxt.close();
    return 0;
}