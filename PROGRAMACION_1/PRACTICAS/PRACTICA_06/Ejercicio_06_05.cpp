// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 5

#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> clientesEnComun(vector<string> listaA, vector<string> listaB) 
{
    vector<string> comun;
    for (int i = 0; i < listaA.size(); i++) 
    {
        for (int j = 0; j < listaB.size(); j++) 
        {
            if (listaA[i] == listaB[j]) 
            {
                comun.push_back(listaA[i]);
                break;
            }
        }
    }
    return comun;
}
int main() 
{
    string datosA[] = {"Juan", "María", "Pedro", "Ana", "Luis"};
    string datosB[] = {"Ana", "Carlos", "Pedro", "Sofía", "Luis"};
    vector<string> listaA(datosA, datosA + 5);
    vector<string> listaB(datosB, datosB + 5);
    vector<string> comun = clientesEnComun(listaA, listaB);
    cout << "Clientes en comun: ";
    for (int i = 0; i < comun.size(); i++) 
    {
        cout << comun[i];
        if (i < comun.size() - 1) cout << ", ";
    }
    cout << endl;
    return 0;
}