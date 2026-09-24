//Suma ajustada a la derecha con numeros decimales

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    
    cout<<"El numero se debe escribir con punto decimal y no con coma. \n";
    float num1, num2, suma;
    cout<<"Ingrese el primer numero decimal:";
    cin>> num1;
    cout<<"Ingrese el segundo numero decimal:";
    cin>>num2;
    
    suma = num1 + num2;                        //los \n hacen que el resultado en la consola no se vea desorganizado
    
    cout<<"\nEl resultado de la suma es:\n"<<endl;
    
    printf("%10.2f\n", num1);
    printf("%10.2f\n", num2);
    printf("    -------\n");
    printf("%10.2f\n", suma);

    return 0;
}