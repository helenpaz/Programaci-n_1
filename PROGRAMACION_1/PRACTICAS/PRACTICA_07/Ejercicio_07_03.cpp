// Materia: Programacion 1, Paralelo 4
// Autor: Helen Mayra Paz Pariguana
// Carnet: 12608230 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 14/10/25
// Numero de Ejercicio: 3

#include <iostream>
#include <vector>
#include <string>
using namespace std;
const int FILAS = 3;
const int COLUMNAS = 4;
void mostrarMatriz(const vector< vector<char> > &matriz) 
{
    for (int i = 0; i < FILAS; i++) 
    {
        for (int j = 0; j < COLUMNAS; j++) 
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int contarFilasSinZombies(const vector< vector<char> > &matriz)
 {
    int contador = 0;
    for (int i = 0; i < FILAS; i++) 
    {
        bool sinZombie = true;
        for (int j = 0; j < COLUMNAS; j++) 
        {
            if (matriz[i][j] == 'x') 
            {
                sinZombie = false;
                break;
            }
        }
        if (sinZombie) 
        {
            contador++;
        }
    }
    return contador;
}
int contarColumnasSinZombies(const vector< vector<char> > &matriz) 
{
    int contador = 0;
    for (int j = 0; j < COLUMNAS; j++) 
    {
        bool sinZombie = true;
        for (int i = 0; i < FILAS; i++) 
        {
            if (matriz[i][j] == 'x') 
            {
                sinZombie = false;
                break;
            }
        }
        if (sinZombie) 
        {
            contador++;
        }
    }
    return contador;
}
void obtenerPosicionesZombies(const vector< vector<char> > &matriz,vector<int> &filasZ,vector<int> &columnasZ) 
{
    for (int i = 0; i < FILAS; i++) 
    {
        for (int j = 0; j < COLUMNAS; j++) 
        {
            if (matriz[i][j] == 'x') 
            {
                filasZ.push_back(i);
                columnasZ.push_back(j);
            }
        }
    }
}
int contarZombies(const vector<int> &filasZ) 
{
    return filasZ.size();
}
int contarEspaciosLibres(const vector< vector<char> > &matriz) 
{
    int libres = 0;
    for (int i = 0; i < FILAS; i++) 
    {
        for (int j = 0; j < COLUMNAS; j++) 
        {
            if (matriz[i][j] == 'o') 
            {
                libres++;
            }
        }
    }
    return libres;
}
int main() 
{
    vector< vector<char> > MATRIZ(FILAS, vector<char>(COLUMNAS));
    MATRIZ[0][0] = 'x'; MATRIZ[0][1] = 'o'; MATRIZ[0][2] = 'x'; MATRIZ[0][3] = 'o';
    MATRIZ[1][0] = 'o'; MATRIZ[1][1] = 'o'; MATRIZ[1][2] = 'o'; MATRIZ[1][3] = 'o';
    MATRIZ[2][0] = 'o'; MATRIZ[2][1] = 'o'; MATRIZ[2][2] = 'x'; MATRIZ[2][3] = 'o';
    cout << "Mapa de zonas (x = muerto viviente, o = zona segura):\n";
    mostrarMatriz(MATRIZ);
    cout << "\nFilas sin muertos vivientes: " << contarFilasSinZombies(MATRIZ) << endl;
    cout << "Columnas sin muertos vivientes: " << contarColumnasSinZombies(MATRIZ) << endl;
    vector<int> filasZ, columnasZ;
    obtenerPosicionesZombies(MATRIZ, filasZ, columnasZ);
    cout << "\nCoordenadas de muertos vivientes:\n";
    for (int i = 0; i < filasZ.size(); i++) 
    {
        cout << "Zombie en [" << filasZ[i] + 1 << "][" << columnasZ[i] + 1 << "]" << endl;
    }
    cout << "\nCantidad total de muertos vivientes: " << contarZombies(filasZ) << endl;
    int contadorCol1 = 0;
    for (int i = 0; i < FILAS; i++) 
    {
        if (MATRIZ[i][0] == 'x') 
        {
            contadorCol1++;
        }
    }
    if (contadorCol1 >= 2)
    {   
        cout << "\nNo es posible entrar al complejo\n";
    }
    else
    {
        cout << "\nEs posible entrar al complejo\n";
    }
    cout << "\nEspacio libre: " << contarEspaciosLibres(MATRIZ) << endl;
    return 0;
}
