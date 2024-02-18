#include <iostream>

using namespace std;

int main()
{
    int aprobados = 0;
    int reprobados = 0;
    int contadorEstudi = 1;


    while(contadorEstudi <=10)
{
    cout<<"Escribe el resultado (1 = aprobado, 2 = reprobado)";
    int resultado = 0;
    cin>>resultado;
    if  (resultado==1 || resultado==2)
    {
        if  (resultado==1)
            aprobados = aprobados +1;
        if (resultado==2)
            reprobados = reprobados +1;
        contadorEstudi = contadorEstudi + 1;

    }
        else
        {
         cout<<"Ingrese un numero valido \n";
        }
}
cout<<"Aprobados "<<aprobados<<"\nReprobados "<<reprobados<<endl;

if  (aprobados > 8)
    cout<<"Bono para el instructor"<<endl;
}
