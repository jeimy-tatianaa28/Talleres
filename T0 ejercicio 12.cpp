//Promedio general

#include <iostream>
using namespace std;

int main()
{
    cout<<"Debe ingresar sus notas con punto decimal, ej: 5.0"<<endl;
    
    //matematicas
    float examen_matematicas;
    cout<<"Ingrese la nota que obtuvo en su examen de matematicas: ";
    cin>>examen_matematicas;
    
    float t1_matematicas, t2_matematicas, t3_matematicas;
    cout<<"Ingrese la nota que obtuvo en su tarea 1 de matematicas: ";
    cin>> t1_matematicas;
    cout<<"Ingrese la nota que obtuvo en su tarea 2 de matematicas: ";
    cin>> t2_matematicas;
    cout<<"Ingrese la nota que obtuvo en su tarea 3 de matematicas: ";
    cin>> t3_matematicas;
    
    float promedio_mate = (t1_matematicas + t2_matematicas + t3_matematicas)/3.0;
    double nota_finalmat;
    nota_finalmat = (examen_matematicas * 0.90 + promedio_mate * 0.10);
    
    //Fisica
    float examen_fisica;
    cout<<"Ingrese la nota que obtuvo en su examen de fisica: ";
    cin>>examen_fisica;
    
    float t1_fisica, t2_fisica, t3_fisica;
    cout<<"Ingrese la nota que obtuvo en su tarea 1 de fisica: ";
    cin>> t1_fisica;
    cout<<"Ingrese la nota que obtuvo en su tarea 2 de fisica: ";
    cin>> t2_fisica;
    
    float promedio_fisica = (t1_fisica + t2_fisica)/2.0;
    double nota_finalfisica = (examen_fisica*0.80) + (promedio_fisica*0.20);
    
    //Quimica
    float examen_quimica;
    cout<<"Ingrese la nota que obtuvo en su examen de quimica: ";
    cin>>examen_quimica;
    
    float t1_quimica, t2_quimica, t3_quimica;
    cout<<"Ingrese la nota que obtuvo en su tarea 1 de quimica: ";
    cin>> t1_quimica;
    cout<<"Ingrese la nota que obtuvo en su tarea 2 de quimica: ";
    cin>> t2_quimica;
    cout<<"Ingrese la nota que obtuvo en su tarea 3 de quimica: ";
    cin>> t3_quimica;
    
    float promedio_quimica = (t1_quimica + t2_quimica + t3_quimica)/3.0;
    double nota_finalquimica = (examen_quimica*0.85) + (promedio_quimica*0.15);
    
    //Promedio general
    double promedio_general = (nota_finalmat + nota_finalfisica + nota_finalquimica)/3.0;
    
    cout<<"Su nota final en el area de Matematicas es de: " <<nota_finalmat<<endl;
    cout<<"Su nota final en el area de Fisica es de: " <<nota_finalfisica<<endl;
    cout<<"Su nota final en el area de Quimica es de: " <<nota_finalquimica<<endl;
    cout<<"Su promedio general es de: " <<promedio_general;
    
    

    return 0;
}