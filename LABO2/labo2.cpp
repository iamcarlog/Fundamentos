//Crear un programa que acepte un número 
//(puede ser entero o con decimales) y compruebe si 
//se trata de un número positivo, negativo o cero.
#include <iostream>
using namespace std;

int main()
{
    double numero;
    cout<<"ingrese un numero: ";
    cin>>numero;
    if (numero>0)
    {
        cout<<"\nEl numero es positivo";
    }
    else if(numero<0){
        cout<<"El numero es negativo";
    }
    else{
        cout<<"El numero es 0";
    }
     
     return 0;
}