/*
Faça um programa com uma fila que simule um sistema operacional preemptivo... 
Esse sistema deve ter 5 programas. Em um loop infinito, o programa deve mostrar qual programa 
está em execução no momento bem como mostrar o programa que está em espera (ou seja, o próximo a entrar em execução).
*/

#include <iostream>
#include <queue>
#include <string>
#include <unistd.h>

using namespace std;

int main(){
    queue<string> sistemas;
    string programaExecucao, programaEspera;
    sistemas.push("Word");
    sistemas.push("Excel");
    sistemas.push("Canva");
    sistemas.push("Adobe");
    sistemas.push("VSCode");
    while(true){
        if(!sistemas.empty()){
            programaExecucao = sistemas.front();
            cout << "Sistema em execução: " << programaExecucao << endl;
            sistemas.pop();
            sistemas.push(programaExecucao);
            sleep(2);
        }
        if(!sistemas.empty()){
            programaEspera = sistemas.front();
            cout << "Sistema em espera: " << programaEspera << endl;
            cout << "executando..." << endl;
            sleep(2);
        }
    }
    return 0;
}