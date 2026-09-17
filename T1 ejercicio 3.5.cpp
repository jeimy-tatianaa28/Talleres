//Intercambio de contenido de dos variables

#include <iostream>
using namespace std;

int main()
{
    
    string x, y, help;
    cout<<"No puedes dejar espacios en los nombres de las variables, para hacerlo debes poner un _"<<endl;
    cout<<"\nIngrese el valor de x: "; 
    cin>> x;
    cout<<"Ingrese el valor de y: "; 
    cin>> y;
    
    help = x; //se utiliza una variable adicional porque permite que el valor de x no se pierda entonces ese valor queda almacenado en la variable que en este caso llame help
    x = y;
    y = help;
    
    cout<<"x: " << x <<endl;
    cout<<"y: " << y <<endl;

    return 0;
}