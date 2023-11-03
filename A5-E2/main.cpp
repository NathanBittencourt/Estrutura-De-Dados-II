/*
Imagine que você está criando um jogo de videogame do gênero RPG e
precisa de um programa para armazenar os dados de 5 inimigos
diferentes, cada inimigo possui 6 atributos diferentes.

A grandeza desses atributos é definida por um valor que vai 1 até 10. Os
atributos são os seguintes: força, destreza, constituição, inteligência,
sabedoria e carisma. O nome do inimigo também deve ser armazenado.

Faça um programa que o usuário entre com todos esses valores e após
adicionados a uma estrutura de dados do tipo struct, o valor de todos
os inimigos devem ser exibidos na tela.
*/

#include <iostream>

using namespace std;

struct Inimigo{
    string nome;
    int forca;
    int destreza;
    int constituicao;
    int inteligencia;
    int sabedoria;
    int carisma;
};

int main(){
    
    Inimigo vilao[5];
    
    for(int x = 0; x < 5; x++){
        cout << "\nInsira o nome do Inimigo " << x+1 << ": ";
        cin >> vilao[x].nome;
        cout << "\nInsira a forca do Inimigo (1 a 10) " << x+1 << ": ";
        cin >> vilao[x].forca;
        cout << "\nInsira a destreza do Inimigo (1 a 10) " << x+1 << ": ";
        cin >> vilao[x].destreza;
        cout << "\nInsira a constituicao do Inimigo (1 a 10) " << x+1 << ": ";
        cin >> vilao[x].constituicao;
        cout << "\nInsira a inteligencia do Inimigo (1 a 10) " << x+1 << ": ";
        cin >> vilao[x].inteligencia;
        cout << "\nInsira a sabedoria do Inimigo (1 a 10) " << x+1 << ": ";
        cin >> vilao[x].sabedoria;
        cout << "\nInsira o carisma do Inimigo (1 a 10) " << x+1 << ": ";
        cin >> vilao[x].carisma;
        cout << "----------------------------------------------------" << endl;
    }
    
    cout << "Informacoes dos inimigos!" << endl;
    
    for (int x = 0; x < 5; x++){
        cout << "Inimigo numero " << x+1 << endl;
        cout << "Nome: " << vilao[x].nome << endl;
        cout << "Forca: " << vilao[x].forca << endl;
        cout << "Destreza: " << vilao[x].destreza << endl;
        cout << "Constituicao: " << vilao[x].constituicao << endl;
        cout << "Inteligencia: " << vilao[x].inteligencia << endl;
        cout << "Sabedoria: " << vilao[x].sabedoria << endl;
        cout << "Carisma: " << vilao[x].carisma << endl;
        cout << "-------------------------------------------" << endl;
    }

    return 0;
}