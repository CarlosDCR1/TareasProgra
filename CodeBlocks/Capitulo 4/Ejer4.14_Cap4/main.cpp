#include <iostream>

using namespace std;

int main()
{
   //Caracter para controlar el While
   char Cont ='1';

    while (Cont =='1')
    {
    int NumC;
    double Sal,Art,CredA,LimCred,NuSal;


    cout<<"Ingrese Numero de cuenta: ";
    cin>>NumC;
    cout<<"Cual es su Saldo al Inicio del mes: ";
    cin>>Sal;
    cout<<"Total de Articulos: ";
    cin>>Art;
    cout<<"Total de Creditos aplicados: ";
    cin>>CredA;
    cout<<"Cual es su limite de Creditos: ";
    cin>>LimCred;
    cout<<"\n";

    NuSal = Sal + Art - CredA;
    cout<<"Nuevo Saldo:"<<NuSal<<endl;
    cout<<"\n";

    if  (NuSal > LimCred)
    {
        cout<<"Cuenta: "<<NumC<<endl;
        cout<<"Limite de Credito: "<<LimCred<<endl;
        cout<<"Saldo: "<<NuSal<<endl<<endl;
        cout<<"Se Excedio el Limite de su Credito \n"<<endl;
    }
    cout<<"Si Desea Continuar Ingrese 1: \n";
    cout<<"Si Desea Salir Ingrese 0: \n ";
    cin>>Cont;
    }
}
