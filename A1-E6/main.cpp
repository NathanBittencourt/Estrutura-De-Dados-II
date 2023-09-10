/*
Escreva programa usando procedimento que recebe 3 valores reais X, Y e Z
e retornar qual o tipo de triângulo formado. O procedimento deve identificar
o tipo de triângulo formado observando as seguintes definições:
Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
Triângulo Isósceles: os comprimentos de 2 lados são iguais.
Triângulo Escaleno: os comprimentos dos 3 lados são diferentes
*/
#include <iostream>
using namespace std;

int triangulo(int x, int y, int z){
    if(x == y && y == z){
        cout << "Triangulo Equilatero!";
    }else if(x == y && y != z || x == z && z != y || y == z && z != x){
        cout << "Triangulo Isoceles!";
    }else{
        cout << "Triangulo Escaleno!";
    }
}
int main(){
    int lado1, lado2, lado3;
    cout << "Informe o primeiro lado do triangulo: " << endl;
    cin >> lado1;
    cout << "Informe o segundo lado do triangulo: " << endl;
    cin >> lado2;
    cout << "Informe o terceiro lado do triangulo: " << endl;
    cin >> lado3;
    cout << "---------------------------------" << endl;
    triangulo(lado1, lado2, lado3);
    return 0;
}