//Calificación final materia de algoritmos
#include <iostream>
using namespace std;

int main()
{
    cout<<"Digite sus calificaciones con punto decimal, ej: 5.0"<<endl;
    
    float nota_1, nota_2, nota_3;
    cout<<"Digite su nota parcial 1: ";
    cin>> nota_1;
    cout<<"Digite su nota parcial 2: ";
    cin>> nota_2;
    cout<<"Digite su nota parcial 3: ";
    cin>> nota_3;
    
    float promedio_notas;
    promedio_notas = (nota_1 + nota_2 + nota_3)/3;
    
    float nota_examen;
    cout<<"Digite la nota de su examen final: ";
    cin>>nota_examen;
    
    float nota_trabajo;
    cout<<"Digite la nota de su trabajo final: ";
    cin>>nota_trabajo;
    
    float calificacion_final;
    calificacion_final=((promedio_notas*0.55)+(nota_examen*0.30)+(nota_trabajo*0.15));
    
    cout<<"Su calificación final es de: "<<calificacion_final<<endl;


    return 0;
}