#include <iostream>

using namespace std;

int main()
{
    float ra,dia,circu,area;
    float pi = 3.14159;

    cout <<"Ingrese el radio del Circulo: \n";
    cin >>ra;

    cout<<"\n";
    dia = ra * 2;
    cout <<"El Diametro del Circulo es: "<<dia;
    cout<<"\n";

    circu = pi * dia;
    cout <<"La Circunferencia del Circulo es: "<<circu;
    cout<<"\n";

    area = pi*(ra*ra);
    cout<<"El Area del Circulo es: "<<area;
    cout<<"\n";


    return 0;
}
