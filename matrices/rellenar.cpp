#include <iostream>
using namespace std;

int main()
{
    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    int numeros[filas][columnas];
    // Rellenando la matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }
    // mostrando matriz
    cout << "\nMostrando matriz\n\n";

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j];
        }
        cout << "\n";
    }

    return 0;
}