#include <iostream>

using namespace std;

int main(){
    int *p;
    int vetor[10];

    p = &vetor[0]; // p = vetor;
    *p = 10; // vetor[0] = 10;
    cout << "\n" << vetor[0] << "\n";

    *(p+=1); // incrementa a posição do ponteiro
    *p = 20; // vetor[1] = 20;
    cout << "\n" << vetor[1] << "\n";

    *(p+=1);
    *p = 30; // vetor[2] = 30
    cout << "\n" << vetor[2] << "\n";

    for(int x = 0; x < 5; x++){
        p = &vetor[x];
        cout << p << endl;
    }

    return 0;
}