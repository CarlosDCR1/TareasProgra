#include <iostream>
using namespace std;

class Cuenta//creamos la clase
{
private:
    double saldo;//Almacen para el saldo

public:
    Cuenta(double SalIni)//creamos costructor
    {
       if (SalIni >= 0)//Validamos salario inicial
       {
           saldo = SalIni;
       }
       else
       {
           cout<<"Error Su saldo debe ser mayor a 0 ";
       }
    }

void abonoSaldo(double montoAbo)
{
    if (montoAbo > 0)
    {
        saldo = saldo + montoAbo;
        cout<<"Se abono el monto de: "<<montoAbo<<" Saldo actual es de: "<<saldo<<endl;
    }

    else
    {
        cout<<"Error el monto a abonar debe ser mayor a 0 ";
    }
}

void SaldoA_Reti (double montoAbo)
{
    if (montoAbo <= saldo)
    {
        saldo = saldo - montoAbo;
        cout<<"Retirando el monto de: "<<montoAbo <<" Saldo actual es de: "<<saldo<<endl;
    }
    else
    {
        cout<<"El monto a cargar es mayor al saldo actual";
    }
}

void SaldoTo()
{
    cout<<" $"<<saldo<<endl;
}

};


int main()
{
 double SalIni1, SalIni2;
 double Sal_Abo1, Sal_Abo2;
 double Sal_Re1, Sal_Re2;

 cout<<"Ingrese el Saldo inicial de la primera cuenta: ";
 cin>>SalIni1;
 cout<<"Ingrese el Saldo inicial de la segunda cuenta: ";
 cin>>SalIni2;

 Cuenta cuenta1(SalIni1);
 Cuenta cuenta2(SalIni2);

 cout<<"Ingrese el monto a abonar a la primera cuenta: ";
 cin>>Sal_Abo1;
 cuenta1.abonoSaldo(Sal_Abo1);

 cout<<"Ingrese el monto a retirar a la primera cuenta: ";
 cin>>Sal_Re1;

 cuenta1.SaldoA_Reti(Sal_Re1);


 //84555
 cout<<"Ingrese el monto a abonar a la segunda cuenta: ";
 cin>>Sal_Abo2;
 cuenta2.abonoSaldo(Sal_Abo2);

 cout<<"Ingrese el monto a retirar a la segunda cuenta: ";
 cin>>Sal_Re2;

 cuenta2.SaldoA_Reti(Sal_Re2);

 cout<<"El Saldo Total de la primera cuenta es de:"; cuenta1.SaldoTo();
 cout<<"El Saldo Total de la segunda cuenta es de:"; cuenta2.SaldoTo();


}
