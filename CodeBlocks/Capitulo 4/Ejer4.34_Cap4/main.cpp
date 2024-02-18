#include <iostream>

using namespace std;

//utilizamos una funcion para calcular el factorial de n
long CalcuFacfor (int n)
   {
       if (n==0)
         return 1;
       else
       {
           long factorial = 1;
           for (int i = 1; i <= n; ++i)
           {
               factorial = factorial * i;
           }
           return factorial;
       }

   }
int main()
{
    int n;

    cout<<"Ingrese un numero positivo: ";
    cin>>n;

//Mandamos a llamar a la funcion para imprimir el resultado
   cout<<"El facorial es: "<<CalcuFacfor(n)<<"\n";
}


