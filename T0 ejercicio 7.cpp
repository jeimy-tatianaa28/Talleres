//Cambio de pesos a dolares

#include <iostream>
using namespace std;

int main()
{
    float cantidad_pesos;
    cout<<"Digite la cantidad de pesos: ";
    cin>> cantidad_pesos;
    
    float tasa_cambio; // cuanto vale 1 dolar en pesos
    cout<<"Digite el precio del dolar en pesos: ";
    cin>> tasa_cambio;
    
    float dolares;
    dolares = (cantidad_pesos / tasa_cambio);
    
    cout<<"La equivalencia en dolares es de: "<<dolares<< " dolares"<<endl;

    return 0;
}