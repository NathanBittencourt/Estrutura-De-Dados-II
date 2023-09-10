#include <iostream>

using namespace std;
int n1, n2;
int somar(int n1, int n2){
    int soma = n1 + n2;
    cout<<endl<<"Resultado: "<<soma<<endl;
    return soma;
}
int main()
{
    cout<<"Digite o primeiro numero: "<<endl;
    cin>>n1;
    cout<<"Digite o segundo numero: "<<endl;
    cin>>n2;
    somar(n1,n2);
    return 0;
}
