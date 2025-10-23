// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 23/10/25
// Numero de Ejercicio: 4

#include <iostream>
using namespace std;
int mcd(int numa, int numb) 
{
    if (numb == 0)
    {
        return numa;
    }
    return mcd(numb, numa % numb);
}
int main() 
{
    int numa, numb;
    cout << "Ingrese el 1er numero: ";
    cin >> numa ;
    cout << "Ingrese el 2do numero: ";
    cin >> numb ;
    cout << "El MCD es: " << mcd(numa, numb) << endl;
    return 0;
}