//Visualizacion de valores

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	// se define el numero con los decimales que necesitemos

	double numero = 7.123456;

	cout<<"Visualizacion de valores escalonados: \n"<<endl;
	
	//Aqui la consola muestra los decimales que %. le indique, aunque el problema es que los aproxima
	
	printf("%.1f\n", numero);
	printf("%.2f\n", numero);
	printf("%.3f\n", numero);
	printf("%.4f\n", numero);
	printf("%.5f\n", numero);
	printf("%.6f\n", numero);
	

	return 0;
}