#include <iostream>

using namespace std;

int main()
{
    char emple='1';

    while (emple=='1')
    {
        double ht,tarifaH,sal,horaex;
        const double cuotaM = 1.5;

        cout<<"Introduzca las horas Trabajadas: ";
        cin>>ht;
        cout<<"Introduzca la Tarifa por horas del Empleado: ";
        cin>>tarifaH;
        cout<<"\n";

        if (ht<=40)
        {
            sal = ht * tarifaH;
            cout<<"El Salario es: "<<sal;
        }
        else
        {
            horaex = ht - 40;
            sal = (40 * tarifaH) + (horaex * tarifaH * cuotaM);
            cout<<"El salario es: "<<sal;
        }
        cout<<"\n";
        cout<<"\n";
        cout<<"Si desea salir ingrese 0 \n";
        cout<<"Si desea continuar ingrese 1 \n";
        cin>>emple;
    }
    return 0;
}
