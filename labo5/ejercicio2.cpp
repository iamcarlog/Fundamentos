//Crear un array de tamano n y se llene con numeros aleatorios
//al final se debe mostrar un mensaje para ingresar un numero y buscar cuantas veces
//se repite
//Carlo Enrique Guerra Vega 00052220
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main( )
{
    int n;//declarar la variable que almacenara el tamano del arreglo
    cout<<"Ingrese el tamano que desea que el arreglo tenga: ";
    cin>>n;
    int numeros[n],random,eleccion,contador;
    //se declararon variables para los numeros random, el numero a elegir y el contador 
    //de repetidos, a su vez se declara el array
    contador=0;
    for (int i = 0; i < n; i++)
    {
        srand(i+time(NULL)); //se crea la semilla y se puso el i+time(null) para que
        //variara el numero
        random=rand()%10+1; //numeros del 1 al 10
        numeros[i]=random;//se guarda el valor en su respectivo lugar en el arrray
        cout<<numeros[i]<<",";//se imprimen los valores del arreglo

    }
    cout<<"\nQue numero desea saber cuantas veces se repiten: ";
    cin>>eleccion;//se guarda el numero el cual se quiere buscar cuantas veces se repiten
    for (int i = 0; i < n; i++)
    {
        if(numeros[i]==eleccion){
            contador++;//si el numero en el arreglo es el mismo el cual se busca
            //el contador se incrementa en 1
        }
    }
    cout<<"El numero "<<eleccion<<" se repite "<<contador<<" veces.";
    
     
    return 0;
}