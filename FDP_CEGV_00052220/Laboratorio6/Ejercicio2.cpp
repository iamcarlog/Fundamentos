#include <iostream>
#include <cstring>
using namespace std;
// Carlo Enrique Guerra Vega 00052220

int main()
{
    char palabra[20], palabra_alrevez[20]; // se inicializan las cadenas de caracteres
    int largo;                             // se usara para guardar el largo de la cadena
    cout << "Ingrese la palabra: ";
    cin >> palabra;
    largo = strlen(palabra); // encontrar el largo de la cadena
    int k = largo - 1;       // para usar como posicionamiento en la cadena;
    for (int i = 0; i < largo; i++)
    {
        palabra_alrevez[i] = palabra[k]; // se usara para crear el palindromo
        k--;
    }
    palabra_alrevez[largo] = '\0'; // poner un caracter nulo donde finaliza la cadena
    palabra[largo] = '\0';
    int contador = 0;
    for (int i = 0; i < largo; i++)
    {
        if (palabra[i] == palabra_alrevez[i])
        {
            contador++; // si los caracteres son iguales el contador aumentara
        }
    }
    if (contador == largo)
    {
        // si el contador es del mismo tamano que de largo la palabra es un palindromo
        cout << "Es palindromo";
    }
    else
    {
        cout << "No es palindromo";
    }

    return 0;
}