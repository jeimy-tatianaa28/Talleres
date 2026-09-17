//Cantidad de dinero que recibira cada area

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float presupuesto_anual;
    cout<< "Ingrese el valor del presupuesto anual: ";
    cin>>presupuesto_anual;
    
    float dinero_ginecologia;
    dinero_ginecologia = (presupuesto_anual*0.40);
    
    float dinero_traumatologia;
    dinero_traumatologia = (presupuesto_anual*0.30);
    
    float dinero_pediatria;
    dinero_pediatria = (presupuesto_anual*0.30);
    
    cout<<"El area de Ginecologia recibira un monto de: "<<setprecision (30) << dinero_ginecologia<< " pesos"<<endl;
    cout<<"El area de Traumatologia recibira un monto de: "<<setprecision(30) << dinero_traumatologia<< " pesos"<<endl;
    cout<<"El area de Pediatria recibira un monto de: "<<setprecision(30) << dinero_pediatria<< " pesos"<<endl;
    
    return 0;
}