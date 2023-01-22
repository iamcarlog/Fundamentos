//Un arreglo de enteros que contenga 20 multiplos de un número 
//ingresado por el usuario y luego mostrarlo en pantalla. Por ejemplo, 
//si el número ingresado es 3, se debe mostrar: 3, 6, 9, 12,..., hasta llegar a 60.
//Carlo Enrique Guerra Vega 00052220
#include <iostream>
using namespace std;

int main( )
{
    //declaramos un arreglo de 20 elementos y una variable donde se guardara
    //el numero del cual deseamos saber los multiplos
     int numeros[20],eleccion;
     cout<<"Ingrese el numero del cual desea saber sus multiplos: ";
     cin>>eleccion;//se guarda el numero que el usuario se digite
     for (int i = 0; i < 20; i++)
     {
        //el bucle ira aumentando en 1 empezando de 0, para multiplicarlo se usa
        //i+1 para que no empieze en 0 la multiplicacion
        numeros[i]=eleccion*(i+1);
        cout<<numeros[i]<<","; //se imprimen los valores 

     }
     
    return 0;
}