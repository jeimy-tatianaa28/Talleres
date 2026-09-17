
#include <iostream>
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
    
    // Utilizo %.4f\n para formatear la salida:
   // %  = es aquel que indica dónde va la variable
  // .4 = fuerza al programa a mostrar exactamente 4 decimales
 // f  = indica que el tipo de dato es decimal
    
    printf("La superficie es: %.4f\n", superficie);
    
    return 0;

}