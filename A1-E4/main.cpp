/*
Escreva um algoritmo usando procedimento que recebe as 3 notas de um aluno. 
Então o programa deve dar a média dessas notas e dependendo das notas dar uma nota A caso 
a nota do aluno seja maior que 8, B se o aluno tirar entre 7,9 e 6, C se o aluno tirar de 
5,9 até 4 e nota D se o aluno tirar menos de 3,9 de média.
*/

#include <iostream>

using namespace std;
float nota1, nota2, nota3;
float tresNotas(){
    cout << "Indira a primeira nota: ";
    cin >> nota1;
    cout << "Indira a segunda nota: ";
    cin >> nota2;
    cout << "Indira a terceira nota: ";
    cin >> nota3;
    float media = (nota1 + nota2 + nota3)/3;
    cout << "\nA media do aluno e: " << media << endl;
    if(media > 8){
        cout << "Nota A!!!";
    }else if (media >= 6 && media <= 7.9)
    {
        cout << "Nota B!";
    }else if (media >= 4 && media <= 5.9)
    {
        cout << "Nota C.";
    }else{
        cout << "Nota D...";
    }
    
}

int main(){
    tresNotas();
    return 0;
}