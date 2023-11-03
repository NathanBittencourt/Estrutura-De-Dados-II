/*
Escreva um programa que declare um inteiro, um real e um char, 
e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). 
Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis 
antes e após as modificações.
*/

#include <iostream>

using namespace std;

int main(){
    int var1, *pvar1;
    float var2, *pvar2;
    char var3, *pvar3;

    pvar1 = &var1;
    pvar2 = &var2;
    pvar3 = &var3;

    var1 = 1; var2 = 10.10; var3 = 'A';

    cout << "Variavel Inteira: " << var1 << endl;
    cout << "Variavel Real: " << var2 << endl;
    cout << "Variavel Char: " << var3 << endl;

    *pvar1 = 2;  *pvar2 = 20.20; *pvar3 = 'B';

    cout << "\n\n" << "VALORES ALTERADOS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << "\n\n";

    cout << "Variavel Inteira: " << var1 << endl;
    cout << "Variavel Real: " << var2 << endl;
    cout << "Variavel Char: " << var3 << endl;
    return 0;
}