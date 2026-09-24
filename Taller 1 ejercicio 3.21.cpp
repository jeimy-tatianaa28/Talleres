//Codigo introducido por el teclado
#include <iostream>
using namespace std;

int main()
{
    int codigo;
    cout<< "Ingrese el codigo ASCII correspondiente (0 a 127): ";
    cin>> codigo;
    
    if ((codigo >= 65 && codigo <=90) || (codigo >= 97 && codigo <= 122))
    {
        cout<< "\nEl codigo " << codigo <<" es alfabetico.";
    }
    
    else if (codigo >= 48 && codigo <= 57)
    {
        cout<< "\nEl codigo " << codigo <<" es un digito.";
    }
    
    else if (codigo >= 32 && codigo <= 126)
    {
        cout<< "\nEl codigo " << codigo <<" es puntuacion o espacial.";
    }
    
    else if ((codigo >= 0 && codigo <= 31) || codigo == 127)
    {
        cout<< "\nEl codigo " << codigo <<" es no imprimible.";
    }
    
    else cout<< "El codigo " << codigo <<" es invalido";

    return 0;
}