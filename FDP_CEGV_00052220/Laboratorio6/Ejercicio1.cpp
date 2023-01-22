#include <iostream>
#include <cstring>
using namespace std;
// Carlo Enrique Guerra Vega 00052220
int main()
{
    char texto[200], subtexto[200]; // se declaran las variables
    char *busqueda;                 // se declara puntero
    cout << "Ingrese un texto: ";
    cin >> texto;
    cout << "ingrese la palabra a buscar: ";
    cin >> subtexto;
    busqueda = strstr(texto, subtexto); // se usa la siguiente funcion para encontrar
    // la palabra dentro del texto
    // si el valor da NULL la palabra no se encuentra en el texto
    // se usa el puntero para que le de el valor de la cadena que encuentre
    // si no la encuentra se da el valor NULL
    if (busqueda == NULL)
    {
        cout << "La palabra no existe dentro del texto.";
    }
    else
    {
        cout << "La palabra se encuentra dentro del texto.";
    }

    return 0;
}