#include <iostream>

using namespace std;

int main()
{
    int n,dig1,dig2,dig3,dig4,dig5;

    cout<<"Ingrese un numero de 5 digitos: ";
    cin>>n;

    //separamos digitos
    dig1= n / 10000;
    dig2=(n / 1000)%10;
    dig3=(n / 100)%10;
    dig4=(n / 10)%10;
    dig5= n % 10;

    if  (dig1==dig5 && dig2==dig4)
    {
        cout<<"Es un Palindromo ";
    }
    else
    {
        cout<<"No es un Palindromo";
    }





}
