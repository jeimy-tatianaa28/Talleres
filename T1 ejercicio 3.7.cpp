
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"Ingrese los valores con punto para indicar decimal. ej: 5.6"<<endl;
    double longitud, ancho, superficie;
    cout<<"\nIngrese el valor de la longitud de la habitacion: ";
    cin>> longitud;
    cout<<"Ingrese el valor del ancho de la habitacion: ";
    cin>> ancho;
    
    superficie = (longitud * ancho);
    
    cout<< setprecision (4) << superficie;
    
    return 0;

}
