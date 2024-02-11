#include <iostream>


using namespace std;
int main()
{

    int n,n1,n2,n3,n4,n5;
    cout<<"Escriba un numero de 5 digitos: ";
    cin>>n;

    n1 = n/10000;
    n2 = (n/1000)%10;
    n3 = (n/100)%10;
    n4 = (n/10)%10;
    n5 = n%10;

    cout<<n1<<"   "<<n2<<"   "<<n3<<"   "<<n4<<"   "<<n5;
    cout<<"\n";


}
