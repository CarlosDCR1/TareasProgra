#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int Num_Equipos = 6;
const int Max_Goles = 10;

struct Equipo
{
    string nombre;
    int Partidos_Juga;
    int Partidos_Gana;
    int Partidos_Emp;
    int Partidos_Perd;
};

void IniciarEquipos(vector<Equipo>& equipos){
    for (int i = 0; i < Num_Equipos; ++i)
    {
        cout<<"Ingrese el nombre del equipo: "<<i + 1 <<": ";
        cin >> equipos[i].nombre;
        equipos[i].Partidos_Juga = 0;
        equipos[i].Partidos_Gana = 0;
        equipos[i].Partidos_Emp = 0;
        equipos[i].Partidos_Perd = 0;
    }
}
int GeneraMarcador()
{
    return rand() % (Max_Goles + 1);
}

void PartidosRegistrados(vector<Equipo>& equipos,int equipo1Lo, int equipo2Vis)
{
    int golesLo = GeneraMarcador();
    int golesVis = GeneraMarcador();

    equipos[equipo1Lo].Partidos_Juga++;
    equipos[equipo2Vis].Partidos_Juga++;

    if (golesLo > golesVis)
    {
        equipos[equipo1Lo].Partidos_Gana++;
        equipos[equipo2Vis].Partidos_Perd++;
    }
    else if (golesLo < golesVis)
    {
        equipos[equipo1Lo].Partidos_Emp++;
        equipos[equipo2Vis].Partidos_Gana++;
    }
    else
    {
        equipos[equipo1Lo].Partidos_Emp++;
        equipos[equipo2Vis].Partidos_Emp++;
    }
}

void Tabla (const vector<Equipo>& equipos)
{
    cout<<"\n";
    cout<<"Tabla de posiciones: \n";
    cout<<"Equipo\tPJ\tPG\tPE\tPP\n";
    for (const Equipo & equipo : equipos)
    {
        cout<<equipo.nombre<<"\t"<<equipo.Partidos_Juga<<"\t"
            <<equipo.Partidos_Gana<<"\t"<<equipo.Partidos_Emp<<"\t"
            <<equipo.Partidos_Perd<<endl;
    }

}


string CalcuGanador(const vector<Equipo>& equipos)
{
    int maxPuntos = 0;
    string Ganador;
    for (const Equipo & equipo: equipos)
    {
        int puntos = equipo.Partidos_Gana * 3 + equipo.Partidos_Emp;

        if  (puntos>maxPuntos)
        {
            maxPuntos = puntos;
            Ganador = equipo.nombre;
        }
    }
    return Ganador;
}
string CalcuPerdedor (const vector<Equipo>& equipos)
{
    int minPuntos = INT_MAX;
    string Perdedor;
    for (const Equipo & equipo : equipos)
    {
        int puntos = equipo.Partidos_Gana * 3 + equipo.Partidos_Emp;
        if (puntos < minPuntos)
        {
            minPuntos = puntos;
            Perdedor = equipo.nombre;
        }
    }
    return Perdedor;
}

int main()
{
    srand((getpid)());

    vector<Equipo> equipos(Num_Equipos);
    IniciarEquipos(equipos);

    for(int i = 0; i < Num_Equipos; ++i)
    {
        for (int j = i + 1; j < Num_Equipos; ++j)
        {
            PartidosRegistrados(equipos, i, j);
        }
    }
    Tabla(equipos);
    string Ganador = CalcuGanador(equipos);
    string Perdedor = CalcuPerdedor(equipos);

    cout<<"\nEl equipo ganador es: "<<Ganador<<endl;
    cout<<"El equipo Perdedor es: "<<Perdedor<<endl;


    return 0;
}
