//crear un array con numeros aleatorios
//el usuario decide si quiere cambiar un elemento
//mostrar el array cada vez que se haga un cambio
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
    int numeros[n],random,eleccion,posicion;
    //se declararon variables para los numeros random, el numero a elegir y el contador 
    //de repetidos, a su vez se declara el array
    for (int i = 0; i < n; i++)
    {
        srand(i+time(NULL)); //se crea la semilla y se puso el i+time(null) para que
        //variara el numero
        random=rand()%10+1; //numeros del 1 al 10
        numeros[i]=random;//se guarda el valor en su respectivo lugar en el arrray
        cout<<numeros[i]<<",";//se imprimen los valores del arreglo
    }do{
        //mientras eleccion sea 1 el ciclo se repetira
        cout<<"\nDesea cambiar un numero?\nPresione 1 para continuar\nPresione 0 para salir\n";
        cin>>eleccion;
        if(eleccion==1){
            cout<<"\nElija la posicion que desea cambiar: ";
            cin>>posicion;
            cout<<"\nIngrese el nuevo numero que desea ingresar";
            cin>>numeros[posicion-1];//se usa la posicion n-1 para que el usuario no tenga
            //que saber que la posicion en un arreglo se cuenta desde 0
            for (int i = 0; i < n; i++)
            {
                cout<<numeros[i]<<",";//se imprime de nuevo el arreglo con los cambios
            }
            
        }
        cout<<"\nPresione 1 para repetir, presione 0 para salir: ";//decision para salir
        //o volver a repetir
        cin>>eleccion;

    }while(eleccion==1);
    //si no se cumple eleccion==1 se sale del bucle y termina el programa
    return 0;
}