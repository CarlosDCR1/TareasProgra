#include <iostream>

using namespace std;

int main()
{
    int n;
    int i=1;

    cout << "Cuantos numero desea ingresar: ";
    cin>>n;
    cout<<"N\t10*N \t100*N \t1000*N \n";
    cout<<"\n";
    while (i<=n)
    {
        int tot0,tot1,tot2,tot3;
        tot0 = i;
        tot1 = i * 10;
        tot2 = i * 100;
        tot3 = i * 1000;

        cout<<tot0;
        cout<<"\t";
        cout<<tot1;
        cout<<"\t";
        cout<<tot2;
        cout<<"\t";
        cout<<tot3;
        cout<<"\n";
        i++;
    }

    return 0;
}
