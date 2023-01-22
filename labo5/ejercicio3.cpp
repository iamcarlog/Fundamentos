//Se debe crear un array de tamaño N (el ususario debe introducir el tamaño) 
//y llenarlo con números aleatorios. Utilice una función que reciba el array; 
//la función debe mostrar el array original y el array al revés. Por ejemplo, 
//si tenemos el array: 1,3,6,9,0,9,2,4; se debe mostrar en pantalla
//1,3,6,9,0,9,2,4 y 4,2,9,0,9,6,3,1 (que es el mismo array pero al revés). 
//Es obligatorio el uso de la función.
//Carlo Enrique Guerra Vega 00052220
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void mostrar_arrays(int n,int arreglo[]);//es una funcion void para que permita hacer
//las impresiones 
int main( )
{
    int n;//declarar la variable que almacenara el tamano del arreglo
    cout<<"Ingrese el tamano que desea que el arreglo tenga: ";
    cin>>n;
    int numeros[n],random;
    //se declararon variables para los numeros random, el numero a elegir y el contador 
    //de repetidos, a su vez se declara el array
    for (int i = 0; i < n; i++)
    {
        srand(i+time(NULL)); //se crea la semilla y se puso el i+time(null) para que
        //variara el numero
        random=rand()%10+1; //numeros del 1 al 10
        numeros[i]=random;//se guarda el valor en su respectivo lugar en el arrray
       
    }
    mostrar_arrays(n,numeros);//se llama a la funcion
     
    return 0;
}
void mostrar_arrays(int n,int arreglo[]){
    cout<<"Se mostrara el arreglo:\n";
for (int i = 0; i < n; i++)
{
    cout<<arreglo[i]<<",";//se muestra el primer arreglo en el orden correcto
}
cout<<"\nSe mostrara el arreglo en orden inverso:"<<endl;
//hacerlo en reversa
for (int i = (n-1); i >= 0; i--)
{
    cout<<arreglo[i]<<",";//se imprimen en orden contrario;
}
}