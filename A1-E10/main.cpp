/*
Utilizando procedimentos, faça um programa onde o usuário insira 2 números 
e qual a operação aritmética (quatro operações fundamentais) o usuário quer 
fazer, a ideia aqui é criar uma calculadora rudimentar.
*/

#include <iostream>
using namespace std;
void numeros(int &num1, int &num2){
    cout << "Insira o primeiro numerito: ";
    cin >> num1;
    cout << "Insira o segundo numerito: ";
    cin >> num2;
}
void escolherOperacao(string &operacao){
    cout << "Escolha a operacao que deseja (+, -, *, /): ";
    cin >> operacao;
}
int main(){
    int num1, num2, resultado;
    string operacao;
    numeros(num1, num2);
    escolherOperacao(operacao);
    if(operacao == "+"){
        resultado = num1 + num2;
        cout << "O resultado da soma eh: " << resultado;
    }else if(operacao == "-"){
        resultado = num1 - num2;
        cout << "O resultado da subtracao eh: " << resultado;
    }else if(operacao == "*"){
        resultado = num1 * num2;
        cout << "O resultado da multiplicacao eh: " << resultado;
    }else if(operacao == "/"){
        if(num2 != 0){
            resultado = num1 / num2;
            cout << "O resultado da divisao eh: " << resultado;
        }else{
            cout << "Nao e possivel dividir por zero...";
        }
    }
    return 0;
}