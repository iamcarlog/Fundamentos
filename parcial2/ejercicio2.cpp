#include <iostream>
using namespace std;

int main( )
{
     cout<<"Carlo Enrique Guerra Vega\n00052220\n";
     int numeros[10],contador_pos=0,contador_neg=0;
     //declarando las variables a usar
     //realizando el for para ingresar los datos al arreglo
     for (int i = 0; i < 10; i++)
     {
        cout<<"Ingrese el elemento "<<i+1<<": ";//se imprime elemento i+1 para que el usuario sepa la posicion relativa del elemento
        cin>>numeros[i];
        //si el numero es mayor a cero aumenta su respectivo contador
        if (numeros[i]>0)
        {
            contador_pos++;
        }
        //si el numero es menor de 0 aumenta su respectivo contador
        else if(numeros[i]<0)
        {
            contador_neg++;
        }
        
     }
     cout<<"El numero de positivos es: "<<contador_pos;
     cout<<"\nEl numero de negativos: "<<contador_neg;
     cout<<"\nCarlo Enrique Guerra Vega 00052220";
    return 0;
}
