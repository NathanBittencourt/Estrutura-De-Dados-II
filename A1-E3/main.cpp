/*
Faca um programa com duas funcoes. Antes de tudo o programa deve perguntar quantos
alunos fizeram as duas provas entao, na primeira funcao o usuario deve entrar com
duas notas inteiras de um aluno e retornar a sua media em float. Na segunda funcao
o programa deve dizer se o aluno foi aprovado ou reprovado (considere aprovado se
sua media for maior que 6).
*/
#include <iostream>
using namespace std;

float calcularMedia(int nota1, int nota2){
    float media = (nota1 + nota2)/2;
    return media;
}

void resultado(int aprovacao){
    if(aprovacao > 6){
        cout << "\nAluno aprovado!\n";
    }else{
        cout << "\nAluno reprovado...\n";
    }
}

int main()
{
    int numAlunos, nota1, nota2, cont = 0;
    float media = 0;
    cout << "Quantos alunos fizeram as duas provas?" << endl;
    cin >> numAlunos;

        if (numAlunos > 0){
            while (cont < numAlunos){
                cout << "---------------------------------\n";
                cout << "Digite a primeira nota do aluno: " << endl;
                cin >> nota1;
                cout << "Digite a segunda nota do aluno: " << endl;
                cin >> nota2;
                media = calcularMedia(nota1,nota2);
                resultado(media);
                cont = cont + 1;
            }
        }else{
            cout << "Caraca, nenhum aluno fez isso, mano.";
        }
    return 0;
}