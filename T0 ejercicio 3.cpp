// Descuento del 15%

#include <iostream>

using namespace std;

int main()
{
    int valor_compra;
    cout<<"Digite el valor de su compra: ";
    cin>>valor_compra;
    
    float Descuento;
    Descuento = (valor_compra*0.15);
    
    float valor_total;
    valor_total = (valor_compra-Descuento);
    
    cout<<"Su descuento es: " <<Descuento<< endl;
    
    cout<<"El valor total de su compra es de: "<<valor_total<<endl;

    return 0;
}