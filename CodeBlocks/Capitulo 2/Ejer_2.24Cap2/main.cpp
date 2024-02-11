#include <iostream>

using namespace std;

int main()
{
    int n1,p;

    cout<<"Ingrese un valor:\n ";
    cin>>n1;

    p = n1 % 2;

    if (p==0)
        cout<<"Es PAR";
    else
        cout<<"Es IMPAR";


}
