//Ganancia y venta de un producto
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float precio_compra;
    cout<<"Digite el valor de compra del articulo: ";
    cin>>precio_compra;
    
    float ganancia; 
    ganancia = (precio_compra*0.30);
    
    float precio_venta;
    precio_venta = (precio_compra + ganancia);
    
    cout<<"El precio en que debe vender el articulo es: " <<setprecision(30) << precio_venta<< " pesos"<<endl;

    return 0;
}