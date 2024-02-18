#include <iostream>

using namespace std;

int main()
{
    double v1,v2,v3;

    cout<<"Ingresa el valor 1: ";
    cin>>v1;
    cout<<"Ingrese el valor 2: ";
    cin>>v2;
    cout<<"Ingrese el valor 3: ";
    cin>>v3;

    if (v1>0 && v2>0 && v3>0)
    {
        if (v1 + v2 > v3 && v1+v3 > v2 && v2+v3 > v1)
        {
            cout<<"Son valores de un triangulo";
        }
    }
    else
    {
        cout<<"No son valores de un triangulo deben de ser diferentes a 0";
    }
}
