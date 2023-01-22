#include <iostream>
using namespace std;

int main()
{
    int numeros[10], i = 0;//se creal el array con 10 elementos
    for (i = 0; i < 10; i++)
    {
        //se hace uso del for para ir rellenando el arreglo
        cout << "Ingrese el numero en la posicion " << (i + 1) << ": ";
        cin >> numeros[i];//se almacena el numero;
    }
    int contador1, contador2, contador3;
    contador1 = contador2 = contador3 = 0;
    for (i = 0; i < 10; i++)
    //se hace uso del for para ir recorriendo el arreglo para verificar el valor del elemento
    {
        if (numeros[i] < 10)//si el elemento es menor de 10 contador1 autoincrementa
        {
            contador1++;
        }
        else if (numeros[i] > 60)//si el elemento es mayor a 60 contador 3 autincrementa
        {
            contador3++;
        }
        else if (numeros[i] > 20 && numeros[i] < 40)//si el elemento esta entre 20 y 40 el contador 2 autoincrementa
        {
            contador2++;
        }
    }
    //se imprime los contadores
    cout << "Los numeros menores a 10 son:" << contador1 << " numeros.\n";
    cout << "Los numeros mayores a 20 y menores a 40 son:" << contador2 << " numeros.\n";
    cout << "Los numeros mayores a 60 son:" << contador3 << " numeros.\n";

    return 0;
}