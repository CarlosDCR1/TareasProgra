#include <iostream>
using namespace std;

//Funcion para cifrar numero
int CifrandoN(int n){
    int dig1,dig2,dig3,dig4,cifra;
    //A cada digito se le suma 7 y se le saca el residuo
    dig1 = (n / 1000 + 7)%10;
    dig2 = ((n / 100)% 10 + 7)%10;
    dig3 = ((n / 10)% 10 + 7)%10;
    dig4 = (n % 10 +7)% 10;
    // Intercambiamos los digitos
    cifra = dig3 * 1000 + dig4 * 100 + dig1 * 10 + dig2;
    return cifra;
}
//Funcion para descifrar numero
int DesciN(int NumCifra)
{
    int dig1,dig2,dig3,dig4,Desci;
    //Invertimos el procedimineto de cifrar para poder descifrar
    dig1 = (NumCifra / 1000 - 7 + 10)%10;
    dig2 = ((NumCifra / 100)%10 -7 + 10)%10;
    dig3 = ((NumCifra / 10)%10 - 7 + 10)%10;
    dig4 = (NumCifra % 10 -7 + 10)% 10;

    Desci = dig3 * 1000 + dig4 * 100 + dig1 * 10 + dig2;
    return Desci;
}
int main()
{
    int num,NumCifra,NumDesci;
    cout<<"Ingrese un numero de 4 digito: ";
    cin>>num;

    NumCifra = CifrandoN(num);
    cout<<"Numero Cifrado: "<<NumCifra;
    cout<<"\n";
    cout<<"\n";

    NumDesci = DesciN(NumCifra);
    cout<<"Numero Descifrado: "<<NumDesci;
    cout<<"\n";
    cout<<"\n";
}
