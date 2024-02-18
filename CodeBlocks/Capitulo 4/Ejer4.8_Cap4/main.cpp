#include <iostream>

using namespace std;

int main()
{
    unsigned int x;
    unsigned int y;
    unsigned int n = 1;
    unsigned int potencia = 1;


    cout<<"Escriba un entero: ";
    cin>>x;

    cout<<"Escriba el exponente: ";
    cin>>y;

    while (n <= y)
    {
        potencia = potencia * x;
        n = n+1;
    }
    cout<<potencia<<endl;
}
