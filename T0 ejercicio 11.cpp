//Inversion

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    float inversion_persona1, inversion_persona2, inversion_persona3;
    cout<<"Ingrese el valor de la inversion de la persona 1: ";
    cin>> inversion_persona1;
    cout<<"Ingrese el valor de la inversion de la persona 2: ";
    cin>>inversion_persona2;
    cout<<"Ingrese el valor de la inversion de la persona 3: ";
    cin>>inversion_persona3;
    
    float inversion_total;
    inversion_total = (inversion_persona1 + inversion_persona2 + inversion_persona3);
    
    float porcentaje_persona1, porcentaje_persona2, porcentaje_persona3;
    porcentaje_persona1 = (inversion_persona1 * 100.0)/inversion_total;
    porcentaje_persona2 = (inversion_persona2 * 100.0)/inversion_total;
    porcentaje_persona3 = (inversion_persona3 * 100.0)/inversion_total;
    
    cout<<"El porcentaje de inversion de la persona 1 es de: "<<setprecision(30) << porcentaje_persona1<< " %"<<endl;
    cout<<"El porcentaje de inversion de la persona 2 es de: "<<setprecision(30) << porcentaje_persona2<< " %"<<endl;
    cout<<"El porcentaje de inversion de la persona 3 es de: "<<setprecision(30) << porcentaje_persona3<< " %"<<endl;

    return 0;
}