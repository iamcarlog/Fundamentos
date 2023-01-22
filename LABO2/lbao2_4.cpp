//solicitar la edad del usuario si la edad es mayor que 18
//mostrar en pantalla lista de materias que estan inscritas y escoger la fav
//si es menor que 18 mostrar una lista de materias basicas. dependiendo de la opcion selenccionada
//mostrar un mensaje que diga su edad es x y ha escogido la opcion y
#include <iostream>
using namespace std;

int main()
{
     int edad,eleccion;
     cout<<"Ingresa tu edad:" ;
     cin>>edad;
     if (edad>=18)
     {
        cout<<"\nEscoger una de las siguientes opciones:\n1)Matematica Discreta\n2)Fundamentos de programacion"
        <<"\n3)precalculo\n4)Elementos\nEscoje tu opcion:";
        cin>>eleccion;
        switch (eleccion)
        {
        case 1:
            cout<<"\nSu edad es de "<<edad<<" y su materia favorita es Matematica discreta";
            break;
        case 2:
            cout<<"\nSu edad es de "<<edad<<" y su materia favorita es Fundamentos de programacion";
            break;
        case 3:
            cout<<"\nSu edad es de "<<edad<<" y su materia favorita es Precalculo";
            break;
        case 4:
            cout<<"\nSu edad es de "<<edad<<" y su materia favorita es Elementos";
            break;
        
        default:
        cout<<"\nSelecciono un numero incorrecto";
            break;
        }
     }
     else{
        cout<<"\nEscoger una de las siguientes opciones:\n1)Matematica \n2)Lenguaje"
        <<"\n3)Ciencia\n4)Sociales\nEscoje tu opcion:";
        cin>>eleccion;
        switch (eleccion)
        {
        case 1:
            cout<<"\nSu edad es de "<<edad<<" y su materia favorita es Matematica";
            break;
        case 2:
            cout<<"\nSu edad es de "<<edad<<" y su materia favorita es Lenguaje";
            break;
        case 3:
            cout<<"\nSu edad es de "<<edad<<" y su materia favorita es Ciencias";
            break;
        case 4:
            cout<<"\nSu edad es de "<<edad<<" y su materia favorita es Sociales";
            break;
        
        default:
        cout<<"\nSelecciono un numero incorrecto";
            break;
        }
     }
     return 0;
}