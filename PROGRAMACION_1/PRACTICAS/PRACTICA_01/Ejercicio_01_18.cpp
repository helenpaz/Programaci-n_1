// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 18

#include <iostream>
using namespace std;
int main() 
{
    int num = 2, cont = 0;
    while (cont < 100) 
    {
        int c = 0;
        for (int i = 1; i <= num; i++) 
        {
            if (num % i == 0)
            {
                c++;
            }
        }
        if (c == 2) 
        {
            cout << num << " ";
            cont++;
        }
        num++;
    }
    return 0;
}
