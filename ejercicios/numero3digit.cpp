//saber si un numero ingresado tiene 3 digitios
#include <iostream>
using namespace std;

int main()
{
    int numero;
     cout<<"Ingresar un numero: ";
     cin>> numero;
     if (numero>=100)
     {
        cout<<"\nel numero "<<numero<<" es tiene 3 digitos o mas";
     }
     else{
        cout<<"\nEl numero no tiene 3 digitos.\n";
     }
     return 0;
}