//Meses y dias

#include <iostream>
using namespace std;

int main()
{
    int mes, dias;
    cout<<"Ingrese el numero del mes de 1 a 12: ";
    cin>> mes;
    
    //Meses con 31 dias
    
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
    cout<< "\nEl mes "<< mes << " tiene 31 dias." << endl;
    }
    
    // meses con 30 dias                                                              //Antes y despues de las llaves no se pone ;

    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        cout<< "\nEl mes " <<mes <<" tiene 30 dias." << endl;
    }
    
    // mes de febrero
    else if (mes == 2) {
        cout<< "\nEl mes " << mes << " tiene 28 o 29 dias, dependiendo si el año es bisiesto o no." << endl;
    }
    
    //Numeros menores que 1 y mayores que 12
    else {
        cout<< "El numero ingresado es invalido. Debe ser entre 1 y 12.\n"<< endl;
    }
    

    return 0;
}