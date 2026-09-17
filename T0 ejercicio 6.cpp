//Edad de una persona

#include <iostream>
using namespace std;

int main()
{
    int anio_actual;
    cout << "Ingrese el anio actual: ";
    cin >> anio_actual;

    int anio_nacimiento;
    cout << "Ingrese su anio de nacimiento: ";
    cin >> anio_nacimiento;

    int edad;
    edad = anio_actual - anio_nacimiento;

    cout << "Tienes " << edad << " anios" << endl;

    return 0;

}