//Crear un programa que acepte una letra e indique 
//si es una vocal o una consonante (preferiblemente 
//implementar un switch).
#include <iostream>
using namespace std;

int main()
{
    char caracter;
    cout<<"Ingrese un caracter:";
    cin>>caracter;
    switch (caracter)
    {
    case 97:
        cout<<"\nEs una vocal";
        break;
    case 101:
        cout<<"\nEs una vocal";
        break;
    case 105:
        cout<<"\nEs una vocal";
        break;
    case 111:
       cout<<"\nEs una vocal";
        break;
    case 117:
        cout<<"\nEs una vocal";
        break;
    case 65:
        cout<<"\nEs una vocal";
        break;
    case 69:
        cout<<"\nEs una vocal";
        break;
    case 73:
        cout<<"\nEs una vocal";
        break;
    case 79:
       cout<<"\nEs una vocal";
        break;
    case 85:
        cout<<"\nEs una vocal";
        break;
    
    default:
    cout<<"\nEs una consonante";
        break;
    }
     
     return 0;
}