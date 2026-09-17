// Comision por ventas 

#include <iostream>
using namespace std;
int main() 
{
    
    int sueldo_base;
    cout<<"Digite su sueldo base: ";
    cin>>sueldo_base;
    
    int venta_1, venta_2, venta_3;
    cout<<"Digite el valor de la venta 1: ";
    cin>>venta_1;
    cout<<"Digite el valor de la venta 2: ";
    cin>>venta_2;
    cout<<"Digite el valor de la venta 3: ";
    cin>>venta_3;
    
    float comision;
    comision = (venta_1+venta_2+venta_3)*0.10;
    
    cout<< "Por concepto de comision, obtuvo una ganacia de: "<<comision<<endl;
    int sueldo_total;
    sueldo_total = (sueldo_base + comision);
    cout<<"Su sueldo total más comision de ventas es de: " <<sueldo_total<<endl;
    
    return 0;
    
}
    