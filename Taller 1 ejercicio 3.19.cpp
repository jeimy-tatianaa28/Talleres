//Fechas de domingos de Pascua
#include <iostream>
using namespace std;

int main()
{
    int anyo, A, B, C, D, E, N;
    cout<<"\nIngresa el anyo: ";
    cin>> anyo;
    
    //calculo de variables
    A = anyo % 19;
    B = anyo % 4;
    C = anyo % 7;
    D = (19 * A + 24) % 30;
    E = (2 * B + 4 * C + 6 * D + 5) % 7;
    N = (22 + D + E);
    
    if (N <= 31){
        cout<< "\nEl domingo de Pascua es el " << N <<" de Marzo.";
    }
    
    else cout<< "\nEl domingo de Pascua es el " << (N - 31) << " de Abril.";

    return 0;
}