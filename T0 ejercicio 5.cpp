//Porcentaje de hombres y mujeres
#include <iostream>
using namespace std;

int main()
{
    int numero_hombres, numero_mujeres;
    cout<<"Digite el numero de hombres: ";
    cin>>numero_hombres;
    cout<<"Digite el numero de mujeres: ";
    cin>>numero_mujeres;
    
    int total_estudiantes;
    total_estudiantes = (numero_hombres + numero_mujeres);
    
    double porcentaje_hombres;
    porcentaje_hombres = (numero_hombres*100.0)/total_estudiantes; //El .0 hace que el programa trabaje con decimales y no solo con la parte entera
    double porcentaje_mujeres;
    porcentaje_mujeres = (numero_mujeres*100.0)/total_estudiantes;
    
    cout<< "El porcentaje de hombres es: "<< porcentaje_hombres << "%" << endl;
    cout<< "El porcentaje de mujeres es: "<< porcentaje_mujeres << "%" << endl;

    return 0;
}