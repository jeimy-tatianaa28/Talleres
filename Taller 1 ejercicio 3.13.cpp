//Visualizacion de valores

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// se define el numero con los decimales que necesitemos

	double numero = 7.123456;

	cout << "Visualizacion de valores escalonados: \n" << endl;
	
	// 'fixed' asegura que la precisión aplique únicamente a los dígitos decimales
	cout << fixed;

	// Aqui la consola muestra los decimales que setprecision() le indique
	cout << setprecision(1) << numero << "\n";
	cout << setprecision(2) << numero << "\n";
	cout << setprecision(3) << numero << "\n";
	cout << setprecision(4) << numero << "\n";
	cout << setprecision(5) << numero << "\n";
	cout << setprecision(6) << numero << "\n";
	
	return 0;
}
