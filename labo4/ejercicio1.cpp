//Una función que reciba un número como parámetro, 
//determine si es par o impar y muestre el resultado en un mensaje.
//Carlo Enrique Guerra Vega 00052220
#include <iostream>
using namespace std;
void par_impar(); //declarando la funcion, void para no escribr tanto codigo en el main
int main( )
{
     par_impar();
    return 0;
}
void par_impar(){
    int numero(0),residuo; //se declaran las dos variables numero es el numero que el usuario ingresa
    //residuo es para guardar el resultado y poder comparar
    cout<<"El siguiente programa es para determinar si un numero es par o impar.\n"
    <<" Ingrese un numero: ";
    cin>>numero;
    residuo=numero%2; //si el residuo de dividir entre 2 es 0 es par
    if (residuo==0)
    {
        cout<<"El numero "<<numero<<" es par.\n";
    }
    else{
        cout<<"El numero "<<numero<<" es impar";//como el residuo no es 0 quiere decir que es impar.
    }
}