#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int n1,n2;

    //Ingresen 2 Numeros
    cout<<"Ingrese Primer Valor:\n";
    cin>>n1;
    cout<<"Ingrese Segundo Valor:\n";
    cin>>n2;
    cout<<"\n";
    //Condiciones
    if (n1>n2)
        cout<<n1<<" es mas grande";
    if (n2>n1)
        cout<<n2<<" es mas grande";
    if (n1==n2)
        cout<<"Estos numeros son Iguales.";

}
