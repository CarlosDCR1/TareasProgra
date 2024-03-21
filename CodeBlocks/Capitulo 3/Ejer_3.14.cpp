#include <iostream>
#include <string>
using namespace std;

class Empleado
{
private:
    string Nombre1;
    string Apellido1;
    int SalarioMensual;

public:
    Empleado(string nombre,string apellido, int salario)
    {
        Nombre1=nombre;
        Apellido1=apellido;

        SalarioMensual=(salario>0)? salario:0;
    }
    void PrimerNom(string nombre)
    {
        Nombre1=nombre;
    }
    string Obt_N1()const
    {
        return Nombre1;
    }
    void PrimerApe(string apellido)
    {
        Apellido1=apellido;
    }
    string Obt_Ape()const
    {
        return Apellido1;
    }
    void SalarioMen(int salario)
    {
        SalarioMensual=(salario>0)? salario:0;
    }
    int Obt_salM()const
    {
        return SalarioMensual;
    }
    int Calcu_SalA()const
    {
        return SalarioMensual * 12;
    }
    void Aume_sal(float aumentoP)
    {
        SalarioMensual= SalarioMensual + static_cast<int>(SalarioMensual*(aumentoP/100));
    }

};

int main()
{
    Empleado empleado1("Carlos"," Calderon",5000);
    Empleado empleado2("Pablo"," Chacon",7000);

    cout<<"El salario anual de "<<empleado1.Obt_N1()<<""<<empleado1.Obt_Ape()<<" es de: Q"<<empleado1.Calcu_SalA()<<endl;
    cout<<"El salario anual de "<<empleado2.Obt_N1()<<""<<empleado2.Obt_Ape()<<" es de: Q"<<empleado2.Calcu_SalA()<<endl;

    empleado1.Aume_sal(10);
    empleado2.Aume_sal(10);

    cout<<"\n";
    cout<<"El salario anual con aumento de "<<empleado1.Obt_N1()<<" "<<empleado1.Obt_Ape()<<" es de: Q"<<empleado1.Calcu_SalA()<<endl;
    cout<<"El salario anual con aumento de "<<empleado2.Obt_N1()<<" "<<empleado2.Obt_Ape()<<" es de: Q"<<empleado2.Calcu_SalA()<<endl;

    return 0;

}
