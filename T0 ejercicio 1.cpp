#include <iostream>
using namespace std;
int main()
{
    //Variables de entrada
    float capital;
    int tiempo;
    float tasa;
    //Variables de salida
    float ganancia;

    cout<<"Ingresa el valor del capital: ";
    cin>>capital;
    cout<<"Ingrese la cantidad de meses: ";
    cin>> tiempo;
    cout<<"Ingrese la tasa de interes: "; //(ej: 0.02 para 2%)
    cin>> tasa;

    ganancia = (capital*tasa)*tiempo; // es igual que esto capital*1.02 - capital;
    cout<<"La ganancia obtenida fue: "<<ganancia<<" pesos en "<<tiempo<<" meses"<<endl;

    return 0;
    
}
    


