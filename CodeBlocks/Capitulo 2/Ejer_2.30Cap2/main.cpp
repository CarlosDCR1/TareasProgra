#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double peso, altura,bmi;
    char opcion;

    cout<<"Ingrese su peso en Kilogramos: ";
    cin>>peso;
    cout<<"Ingrese su altura en metros: ";
    cin>>altura;

    bmi = peso / pow(altura,2);
    cout <<"\n";
    cout <<"Su BMI es: "<<bmi;
    cout <<"\n";

    cout << "\nInformacion del BMI segun el Departamento de Salud y Servicios Humanos/Instituto Nacional de Salud:\n";
    cout << "\n";
    cout << "BMI                Clasificacion\n";
    cout << "\n";
    cout << "Menos de 18.5      Bajo peso\n";
    cout << "18.5 - 24.9        Peso normal\n";
    cout << "25.0 - 29.9        Sobrepeso\n";
    cout << "30.0 o mas         Obesidad\n";

}




