// Longitud de una circunferencia y area de un circulo

#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.1416;
    float radio, longitud_circunferencia, Area_circulo;
    
    cout<<"Ingrese el valor del radio: ";
    cin>> radio;
    
    longitud_circunferencia = (2 * radio) * PI;
    Area_circulo = PI * (radio * radio);
    
    cout<<"\n La longitud de la circunferencia es: "<<longitud_circunferencia;
    cout<<"\n El area del circulo es: "<<Area_circulo;

    return 0;
}