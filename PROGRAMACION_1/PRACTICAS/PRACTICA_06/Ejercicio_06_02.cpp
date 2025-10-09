// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 09/10/25
// Numero de Ejercicio: 2

#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Buscando y ordenando produccion de minerales
int main()
{
    vector<string> mineral;
    vector<float> produccion;
    mineral.push_back("SN"); produccion.push_back(998000);
    mineral.push_back("SB"); produccion.push_back(876500);
    mineral.push_back("AU"); produccion.push_back(786670);
    mineral.push_back("PT"); produccion.push_back(636143);
    mineral.push_back("AG"); produccion.push_back(135567);
    mineral.push_back("CU"); produccion.push_back(109412);
    string buscar;
    cout << "Ingrese mineral a buscar: ";
    cin >> buscar;
    int encontrado = -1;
    for(int i = 0; i < mineral.size(); i++)
    {
        if(mineral[i] == buscar)
        {
            encontrado = i;
        }
    }
    if(encontrado != -1)
    {
        cout << "Produccion: " << produccion[encontrado] << endl;
    }
    else
    {
        cout << "Mineral no encontrado\n";
    }
    for(int i = 0; i < produccion.size() - 1; i++)
    {
        for(int j = i + 1; j < produccion.size(); j++)
        {
            if(produccion[i] < produccion[j])
            {
                float tempProd = produccion[i];
                produccion[i] = produccion[j];
                produccion[j] = tempProd;
                string tempMin = mineral[i];
                mineral[i] = mineral[j];
                mineral[j] = tempMin;
            }
        }
    }
    cout << "\nMinerales ordenados por produccion de mayor a menor:\n";
    for(int i = 0; i < mineral.size(); i++)
    {
        cout << mineral[i] << "  " << produccion[i] << endl;
    }
    return 0;
}

