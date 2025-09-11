// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 11/09/25
// Numero de Ejercicio: 6

#include <iostream>
using namespace std;
int diasDelMes(int mes, int anio);  
int dias; 
int main() 
{
    int mess, anioo;
    cout << "Ingrese el numero del mes entre (1-12): ";
    cin >> mess;
    cout << "Ingrese el anio: ";
    cin >> anioo;
    dias = diasDelMes(mess, anioo);
    cout << "El mes tiene " << dias << " dias\n";
    return 0;
}

int diasDelMes(int mes, int anio) 
{
    int dia;
    if (mes == 2) 
    {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
            dia = 29;
        else
            dia = 28;
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        dia = 30;
    else
        dia = 31;
    return dia;
}
