// Suma ajustada a la derecha con numeros decimales

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "El numero se debe escribir con punto decimal y no con coma. \n";
    float num1, num2, suma;
    cout << "Ingrese el primer numero decimal: ";
    cin >> num1;
    cout << "Ingrese el segundo numero decimal: ";
    cin >> num2;
    
    suma = num1 + num2;
    
    cout << "\nEl resultado de la suma es:\n" << endl;
    
    // 'fixed' fuerza la notación decimal fija
    
    // 'setprecision(2)' establece 2 decimales
    cout << fixed << setprecision(2);

    // 'setw(10)' ajusta el ancho de campo a 10 caracteres (alineado a la derecha)
    cout << setw(10) << num1 << "\n";
    cout << setw(10) << num2 << "\n";
    cout << setw(10) << "-------" << "\n";
    cout << setw(10) << suma << "\n";

    return 0;
}