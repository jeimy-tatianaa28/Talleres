//Visualizacion de numero mayor

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    cout<<"Ingrese el numero 1: ";
    cin>> num1;
    cout<<"Ingrese el numero 2: ";
    cin>> num2;
    
    if (num1 > num2){
        cout<< "\nEl numero 1 es mayor: "<< num1 << endl;
    }
    
    else if (num1 < num2){
        cout<< "\nEl numero 2 es mayor: "<< num2 << endl;
    }
    
    else cout<<"\nLos numeros son iguales";

    return 0;
}