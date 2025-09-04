// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingeneria de Sistemas
// Fecha de Creacion: 04/08/25
// Numero de Ejercicio: 25

#include <iostream>
using namespace std;
int main()
{
    int numero;
    char continuar;
    do 
    {
        cout << "Ingrese el numero del que quiere generar su tabla" << endl;
        cin >> numero;
        for(int i = 1; i <= 10; i++)
        {
            int res = numero * i;
            cout << numero << " x " << i << " = " << res << endl;
        }
        cout << endl;
        cout << "Desea generar otra tabla? (s/n)" << endl;
        cin >> continuar;
    } while (continuar == 's');
    return 0;
}
