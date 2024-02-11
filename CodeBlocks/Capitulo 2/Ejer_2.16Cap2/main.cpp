#include <iostream>

using namespace std;

int main()
{
    //Declaramos variables
    int n1,n2,suma,resta,multi,divi;

    //Pedimos al usuario que ingrese 2 numeros
    cout <<"Ingrese un numero:\n";
    cin >> n1;
    cout <<"Ingrese otro numero:\n";
    cin >>n2;

    //Suma de los dos numeros
    suma = n1 + n2;
    cout <<"La suma de los dos numeros es:       "<<suma<<"\n";

    //Resta de los numeros
    resta = n1 - n2;
    cout <<"La Diferencia de los dos numeros es: "<<resta<<"\n";

    //Multiplicacion de los numeros
    multi = n1 * n2;
    cout <<"El producto de los dos numeros es:   "<<multi<<"\n";

    //Division de los numeros
    divi = n1 / n2 ;
    cout <<"El cociente de los dos numero es:    "<<divi<<"\n";
    return 0;
}
