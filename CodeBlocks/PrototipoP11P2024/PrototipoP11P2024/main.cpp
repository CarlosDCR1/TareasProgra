#include <stdio.h>      // Librería estándar de entrada y salida en C
#include <stdlib.h>     // Librería estándar de funciones de utilidad en C
#include <unistd.h>     // Librería estándar de funciones de sistema en POSIX (en este caso, getpid())
#include <string.h>     // Librería estándar de manipulación de cadenas en C
#include <iostream>     // Librería estándar de entrada y salida en C++
#include <iomanip>
 #include <iomanip> //sirve para formatos de salida

 using namespace std;
#define MAX_EMPLEADOS 50
#define NUM_COLUMNAS 4
#define CADENA_TEXTO 100
#define MAXI 1000000
//declaramos un prototipo de una funcion llamada imprimir matriz que tenga la matriz con las filas de MAXEMPLEADo
//y columnas de NUM COLUMNAS
void imprimirMatriz(float matriz[MAX_EMPLEADOS][NUM_COLUMNAS+1]);
int busquedaAleatorios(int minimo, int maximo);

//ahora defino la estructura de la matriz llamada Empleados1---------------------------------------
// esta controla la planilla de la primera empresa
struct empleados1{
    string nombre1;
    float Venta15;
    float Venta16;
    float Venta17;
    float Venta18;
    float VentaTot;

};
//ahora defino la estructura de la matriz llamada Empleados2---------------------------------------
// esta controla la planilla de la segunda empresa
struct empleados2{
    string nombre2;
    float Venta15_2;
    float Venta16_2;
    float Venta17_2;
    float Venta18_2;
    float VentaTot_2;
};
//ahora defino la estructura de la matriz llamada Empleados2---------------------------------------
// esta controla la planilla de la segunda empresa
struct empleados3{
    string nombre3;
    float Venta15_3;
    float Venta16_3;
    float Venta17_3;
    float Venta18_3;
    float VentaTot_3;
};
//comienza el codigo principal del programa
int main()
{
 float matriz[MAX_EMPLEADOS][NUM_COLUMNAS+1]; //declaro la matriz
 imprimirMatriz(matriz); //Llama a la función imprimirMatriz(matriz), pasando la matriz recién declarada como argumento.
    return 0;
}
//funcion para generar los datos aleatorios
int busquedaAleatorios(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void imprimirMatriz(float matriz[MAX_EMPLEADOS][NUM_COLUMNAS+1] ){
    int n_empleados1=0;
    bool repetir=true;
    char opcion;
    string nom_empresa1;
    empleados1 empl1[MAX_EMPLEADOS];
    empleados2 empl2[MAX_EMPLEADOS];
    empleados3 empl3[MAX_EMPLEADOS];
    do {
        cout<<"Ingrese el nombre de la primer Industria: ";
        cin>>nom_empresa1;
        cout<<"Cuantas empresas desea ingresar : "<<endl;
        cin>>n_empleados1;
        //lleno la matriz de la primera empresa--------------------

        for (int i=0;i<n_empleados1;i++){

            cout<<"Ingrese el nombre del la empresa "<<i+1<<": ";
            cin>>empl1[i].nombre1;
            empl1[i].Venta15=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2015: Q."<<empl1[i].Venta15;
            empl1[i].Venta16=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2016: Q."<<empl1[i].Venta16;
            empl1[i].Venta17=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2017: Q."<<empl1[i].Venta17;
            empl1[i].Venta18=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2018: Q."<<empl1[i].Venta18;


            //calculo el total
            empl1[i].VentaTot=empl1[i].Venta15+empl1[i].Venta16+empl1[i].Venta17+empl1[i].Venta18;

        }
        system("cls");

        //for para ver cual es la persona con mayor sueldo

        float sueldo=0;
        string empleado_Mayor;

        for(int i=0;i< n_empleados1;i++){
            if(empl1[i].VentaTot>sueldo){
                sueldo=empl1[i].VentaTot;
                empleado_Mayor=empl1[i].nombre1;
                }
        }


//trabajamos con la empresa 2----------------------------------------------------------------------------------
    int n_empleados2=0;
    string nom_empresa2;

        cout<<"Ingrese el nombre de la Segunda Industria: ";
        cin>>nom_empresa2;
        cout<<"Cuantas empresas desea ingresar : "<<endl;
        cin>>n_empleados2;
        //lleno la matriz de la primera empresa--------------------

        for (int i=0;i<n_empleados2;i++){

            cout<<"Ingrese el nombre del la empresa "<<i+1<<": ";
            cin>>empl2[i].nombre2;
            empl2[i].Venta15_2=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2015: Q."<<empl2[i].Venta15_2;
            empl2[i].Venta16_2=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2016: Q."<<empl2[i].Venta16_2;
            empl2[i].Venta17_2=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2017: Q."<<empl2[i].Venta17_2;
            empl2[i].Venta18_2=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2018: Q."<<empl2[i].Venta18_2;


            //calculo el total
            empl2[i].VentaTot_2=empl2[i].Venta15_2+empl2[i].Venta16_2+empl2[i].Venta17_2+empl2[i].Venta18_2;

        }
        system("cls");

        //for para ver cual es la persona con mayor sueldo

        float sueldo2=0;
        string empleado_Mayor2;

        for(int i=0;i< n_empleados2;i++){
            if(empl2[i].VentaTot_2>sueldo2){
                sueldo2=empl2[i].VentaTot_2;
                empleado_Mayor2=empl2[i].nombre2;
            }

    //trabajamos con la industria 3----------------------------------------------------------------------------------
    int n_empleados3=0;
    string nom_empresa3;

        cout<<"Ingrese el nombre de la Tercera Industria: ";
        cin>>nom_empresa3;
        cout<<"Cuantas empresas desea ingresar : "<<endl;
        cin>>n_empleados3;
        //lleno la matriz de la primera empresa--------------------

        for (int i=0;i<n_empleados3;i++){

            cout<<"Ingrese el nombre del la empresa "<<i+1<<": ";
            cin>>empl3[i].nombre3;
            empl3[i].Venta15_3=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2015: Q."<<empl3[i].Venta15_3;
            empl3[i].Venta16_3=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2016: Q."<<empl3[i].Venta16_3;
            empl3[i].Venta17_3=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2017: Q."<<empl3[i].Venta17_3;
            empl3[i].Venta18_3=busquedaAleatorios(0,MAXI);
            cout<<"Ventas del año 2018: Q."<<empl3[i].Venta18_3;


            //calculo el total
            empl3[i].VentaTot_3=empl3[i].Venta15_3+empl3[i].Venta16_3+empl3[i].Venta17_3+empl3[i].Venta18_3;

        }
        system("cls");

        //for para ver cual es la persona con mayor sueldo

        float sueldo3=0;
        string empleado_Mayor3;

        for(int i=0;i< n_empleados3;i++){
            if(empl3[i].VentaTot_3>sueldo3){
                sueldo3=empl3[i].VentaTot_3;
                empleado_Mayor3=empl3[i].nombre3;
            }
}

//cerramos for y empezamos a imprimir la matriz 1-----------------------------------------------------------------
        cout<<"---------Bienvenido----------------"<<endl;
        cout<<"Empresa: "<<nom_empresa1<<endl;
        cout<<setw(9)<<"Nombre "<<setw(10)<<"2015"<<setw(9)<<" 2016 "<<setw(15)<<"2017 "<< setw(9) << "2018 " << setw(15) << "TOTAL"<< endl;
        for(int i=0;i<n_empleados1;i++){
            cout<<setw(9)<<empl1[i].nombre1<<setw(9)<<empl1[i].Venta15<<setw(9)<<empl1[i].Venta16<<setw(9)<<empl1[i].Venta17<<setw(15)<<empl1[i].Venta18<<setw(15)<<empl1[i].VentaTot<<endl<<endl;
            }
        cout<<"La empresa con mayor ventas es "<<empleado_Mayor <<" con "<<sueldo<<endl<<endl;

//Imprimimos la matriz 2--------------------------------------------------
cout<<"---------Bienvenido----------------"<<endl;
        cout<<"Empresa: "<<nom_empresa2<<endl;
        cout<<setw(9)<<"Nombre "<<setw(10)<<"2015"<<setw(9)<<" 2016 "<<setw(15)<<"2017 "<< setw(9) << "2018 " << setw(15) << "TOTAL"<< endl;
        for(int i=0;i<n_empleados2;i++){
            cout<<setw(9)<<empl2[i].nombre2<<setw(9)<<empl2[i].Venta15_2<<setw(9)<<empl2[i].Venta16_2<<setw(9)<<empl2[i].Venta17_2<<setw(15)<<empl2[i].Venta18_2<<setw(15)<<empl2[i].VentaTot_2<<endl<<endl;
            }
        cout<<"La empresa con mayor ventas es "<<empleado_Mayor2 <<" con "<<sueldo2<<endl<<endl;

//Imprimimos la matriz 3--------------------------------------------------
cout<<"---------Bienvenido----------------"<<endl;
        cout<<"Empresa: "<<nom_empresa3<<endl;
        cout<<setw(9)<<"Nombre "<<setw(10)<<"2015"<<setw(9)<<" 2016 "<<setw(15)<<"2017 "<< setw(9) << "2018 " << setw(15) << "TOTAL"<< endl;
        for(int i=0;i<n_empleados3;i++){
            cout<<setw(9)<<empl3[i].nombre3<<setw(9)<<empl3[i].Venta15_3<<setw(9)<<empl3[i].Venta16_3<<setw(9)<<empl3[i].Venta17_3<<setw(15)<<empl3[i].Venta18_3<<setw(15)<<empl3[i].VentaTot_3<<endl<<endl;
            }
        cout<<"La empresa con mayor ventas es "<<empleado_Mayor3 <<" con "<<sueldo3<<endl<<endl;



if (sueldo>sueldo2 & sueldo>sueldo3){
    cout<<"El empresa con mas Ventas es: "<< empleado_Mayor<<" con un total de ventas de Q. "<<sueldo<<endl;
}else{
    cout<<"El empresa con mas Ventas es: "<< empleado_Mayor2<<" Con un total de ventas de Q. "<<sueldo2<<endl;
}
cout << "Desea otro calculo (s/n)? ";
cin >> opcion;
system("cls");
    if (opcion == 'n') {
            repetir = false;    // Si la opción es 'n', se termina el bucle
        }
    }
        }while (repetir);
}


