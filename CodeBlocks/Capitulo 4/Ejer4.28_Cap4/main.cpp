#include <iostream>

using namespace std;

int main()
{

    for(int fila=1; fila<=8; ++fila)
    {
        for(int colum=1; colum<=16; ++colum)
        {
            if  ((fila + colum) % 2==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<' ';
            }
        }
        cout<<endl;
    }
}
