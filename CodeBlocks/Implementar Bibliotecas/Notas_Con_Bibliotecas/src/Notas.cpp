#include "Notas.h" // Se incluye el archivo de Notas.h para usar los atributos y que funcione el codigo.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

using namespace std;

//Funcion principal del programa.
void llamaCiclo() {


    //Declaramos variables.
    float matriz_facultad_1[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matriz_facultad_2[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matriz_facultad_3[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    char opcion;
    bool repetir = true;
    float promedio_facultad_1;
    float promedio_facultad_2;
    float promedio_facultad_3;
    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Carlos","Isa","Juan","Pedro","Daniel"};

    do {
        //Limpia la pantalla.
        system("cls");
        promedio_facultad_1 = 0;
        promedio_facultad_2 = 0;
        promedio_facultad_3 = 0;

         //Muestra el nombre y llena las matrices para cada facultad.
        cout << "*** Comparativo de Facultades ***" << endl << endl;
        llenarMatriz(matriz_facultad_1);
        promedio_facultad_1 = imprimirMatriz(matriz_facultad_1, alumnos, "Facultad de Ingenieria");
        llenarMatriz(matriz_facultad_2);
        promedio_facultad_2 = imprimirMatriz(matriz_facultad_2, alumnos, "Facultad de Arquitectura");
        llenarMatriz(matriz_facultad_3);
        promedio_facultad_3 = imprimirMatriz(matriz_facultad_3, alumnos, "Facultad de Administracion");

        //Compara promedios y muestra resultados.
        if (promedio_facultad_1 > promedio_facultad_2 && promedio_facultad_1 > promedio_facultad_3) {
            cout << " La facultad con el mejor promedio es : " << "Ingenieria" << " con un promedio de: " << promedio_facultad_1 << endl;
        } else if (promedio_facultad_2 > promedio_facultad_1 && promedio_facultad_2 > promedio_facultad_3) {
            cout << " La facultad con el mejor promedio es : " << "Arquitectura" << " con un Promedio de: " << promedio_facultad_2 << endl;
        } else if (promedio_facultad_3 > promedio_facultad_2 && promedio_facultad_3 > promedio_facultad_1) {
            cout << " La facultad con el mejor promedio es : " << "Administracion" << " con un Promedio de: " << promedio_facultad_3 << endl;
        } else {
            cout << " Algunas facultades tienen el mismo promedio " << endl << endl;
        }
        //Pregunta si se desea realizar otro calculo.
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n') {
            repetir = false;
        }
    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
//Funcion para llenar las calificaciones con datos aleatorios y calcula el promedio de cada alumno.
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]) {
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS; y++) {
        float suma = 0;
        int calificacion = 0;
        for (x = 0; x < NUMERO_NOTAS; x++) {
//Genera las calificaciones aleatorias.
            if (x == 0 || x == 3)
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 20);
            else if (x == 1)
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 25);
            else if (x == 2)
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 35);
            //Suma todas las notas para calcular el promedio.
            suma += (float)calificacion;
            //Almacena las calificaciones en la matriz.
            matriz[y][x] = calificacion;
            calificacion = 0;
        }
        //Calcula el promedio al final de la fila de calificaciones.
        matriz[y][NUMERO_NOTAS] = suma / NUMERO_NOTAS;
    }
}

//Funcion de diseño de la matriz
void imprimirMatrizLinea() {
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_NOTAS + 1; x++) {
        cout << "+---------";
    }
    cout << "+\n";
}

//Funcion para imprimir todos los datos de la matriz.
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad)
{
    int y, x;
//Declaracion de variables para el promedio.
    float promedioMayor = matriz[0][NUMERO_NOTAS];
    float promedioMenor = matriz[0][NUMERO_NOTAS];
    float totalGeneral = 0;
    float promedioGeneral = 0;
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);

    //Imprimir Facultad
    cout << nombreFacultad << endl;
    imprimirMatrizLinea();
    //Imprime las encabezados de las columnas.
    cout << setw(9) << "Alumno";
    for (x = 0; x < NUMERO_NOTAS; x++) {
        cout << setw(9) << "Nota" << x + 1;
    }
    cout << setw(10) << "Promedio" << endl;
    imprimirMatrizLinea();

    //Imprime los datos de la matriz de calificaciones y calcula los promedios.
    for (y = 0; y < NUMERO_ALUMNOS; y++) {
        cout << "|" << setw(8) << alumnos[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_NOTAS; x++) {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "|";
            suma += calificacion;
        }
        float promedio = suma / NUMERO_NOTAS;
        totalGeneral += promedio;

//Actualiza los promedios y los nombres correspondientes
        if (promedio > promedioMayor) {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor) {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }

//Imprime el promedio de cada alumno.
        cout << setw(9) << fixed << setprecision(2) << promedio << "|" << endl;
        imprimirMatrizLinea();
    }
//Calcula el promedio general de la facultad.
    promedioGeneral = totalGeneral / NUMERO_ALUMNOS;
    cout << "Nota mayor: " << setw(10) << alumnoPromedioMayor << setw(10) << promedioMayor << endl;
    cout << "Nota menor: " << setw(10) << alumnoPromedioMenor << setw(10) << promedioMenor << endl;
    cout << "Nota prom Gene: " << setw(16) << promedioGeneral << endl << endl;
    //Devuelve el promedio general de la facultad.
    return promedioGeneral;
}
