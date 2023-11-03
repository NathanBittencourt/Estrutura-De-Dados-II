/*
Escreva um programa que contenha duas variáveis inteiras. 
Compare seus endereços e exiba o maior endereço de memória.
*/

#include <iostream>

using namespace std;

int main(){
    int a = 0, b = 0, *pa, *pb;
    pa = &a;
    pb = &b;
    if(pa > pb){
        printf("Ponteiro de A e maior: %p", pa);
    }else{
        printf("Ponteiro de B e maior: %p", pb);
    }
    return 0;
}