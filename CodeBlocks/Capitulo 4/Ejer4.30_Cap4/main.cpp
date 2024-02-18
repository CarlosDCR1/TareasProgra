#include <iostream>

using namespace std;

int main()
{
    double ra,dia,circu,area;
    double pi = 3.14159;

    cout<<"Ingrese el radio: \n";
    cin>>ra;

    cout<<"\n";
    dia = ra * 2;
    cout<<"El Diametro es: "<<dia;
    cout<<"\n";

    circu = pi * dia;
    cout<<"La Circunferencia es: "<<circu;
    cout<<"\n";

    area = pi * (ra*ra);
    cout<<"El area es: "<<area;
    cout<<"\n";
}
