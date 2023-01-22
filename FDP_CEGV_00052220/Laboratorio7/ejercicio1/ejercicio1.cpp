#include <iostream>
#include <stdio.h>
using namespace std;
//Carlo ENrique GUerra Vega 00052220
int main()
{
    FILE *archi = fopen("numeros_pos.txt", "a");
    // comprobar que archivo este abierto
    if (archi == NULL)
    {
        cout << "Error!";
        return 1;
    }
    FILE *archi_2 = fopen("numeros_neg.txt", "a");
    // comprobar que archivo este abierto
    if (archi == NULL)
    {
        cout << "Error!";
        return 1;
    }
    int num = 1;
    do
    {
        //ingresa el numero
        cout << "Ingrese un numero";
        cin >> num;
        if (num > 0)//si es positivo se guarda en un archivo
        {
            fprintf(archi, "%d", num);
            fprintf(archi, "\n");
        }
        if (num < 0)//si es negativo se guarda en el otro
        {
            fprintf(archi_2, "%d", num);
            fprintf(archi_2, "\n");
        }

    } while (num != 0);//cuando se ingrese 0 se acaba
    fclose(archi);
    fclose(archi_2);

    return 0;
}