#include <iostream>
#include <string>
using namespace std;

class FrecuenciaCardiaca {
private:
    string mNombre;
    string mApellido;
    int mMesNacimiento;
    int mDiaNacimiento;
    int mAnioNacimiento;
    int mMesActual;
    int mDiaActual;
    int mAnioActual;

public:
    FrecuenciaCardiaca(string nombre, string apellido, int mesNaci, int diaNaci, int anioNaci, int mesActual, int diaActual, int anioActual)
        : mNombre(nombre), mApellido(apellido), mMesNacimiento(mesNaci), mDiaNacimiento(diaNaci), mAnioNacimiento(anioNaci), mMesActual(mesActual), mDiaActual(diaActual), mAnioActual(anioActual) {}

    int obtenerEdad() {
        int edad = mAnioActual - mAnioNacimiento;
        if (mMesActual < mMesNacimiento || (mMesActual == mMesNacimiento && mDiaActual < mDiaNacimiento)) {
            edad--;
        }
        return edad;
    }

    int Ob_FrecuenciaCardiacaMaxi() {
        return 220 - obtenerEdad();
    }

    int Ob_FrecuenciaMinEspe() {
        return Ob_FrecuenciaCardiacaMaxi() * 0.5;
    }

    int Ob_FrecuenciaMaxiEspe() {
        return Ob_FrecuenciaCardiacaMaxi() * 0.85;
    }


};

int main() {
    string nombre, apellido;
    int mesNaci, diaNaci, anioNaci;
    int mesActual, diaActual, anioActual;

    cout << "Ingrese el primer nombre: ";
    cin >> nombre;
    cout << "Ingrese el apellido: ";
    cin >> apellido;
    cout << "Ingrese el mes de nacimiento (1-12): ";
    cin >> mesNaci;
    cout << "Ingrese el dia de nacimiento: ";
    cin >> diaNaci;
    cout << "Ingrese el anio de nacimiento: ";
    cin >> anioNaci;

    cout << "Ingrese el mes actual: ";
    cin >> mesActual;
    cout << "Ingrese el dia actual: ";
    cin >> diaActual;
    cout << "Ingrese el anio actual: ";
    cin >> anioActual;

    FrecuenciaCardiaca persona(nombre, apellido, mesNaci, diaNaci, anioNaci, mesActual, diaActual, anioActual);

    cout << "\n";
    cout << "Informacion de la persona:" << endl;
    cout << "Nombre: " << nombre << " " << apellido << endl;
    cout << "Fecha de nacimiento: " << mesNaci << "/" << diaNaci << "/" << anioNaci << endl;

    int edad = persona.obtenerEdad();
    cout << "Edad: " << edad << " anios" << endl;

    int frecuenciaMaxima = persona.Ob_FrecuenciaCardiacaMaxi();
    cout << "Frecuencia cardiaca maxima: " << frecuenciaMaxima << " pulsos por minuto" << endl;

    int frecuenciaMin = persona.Ob_FrecuenciaMinEspe();
    int frecuenciaMaxiEsp = persona.Ob_FrecuenciaMaxiEspe();
    cout << "Rango de frecuencia cardiaca esperada: " << frecuenciaMin << " - " << frecuenciaMaxiEsp << " pulsos por minuto" << endl;

    return 0;
}
