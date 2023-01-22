#include <iostream> 
#include <ctime>
using namespace std;
//Carlo Enrique Guerra Vega 00052000

int main()
{
    srand(time(NULL));//Generando la semilla para que cada vez el numero sea diferente 
    int random=rand() % 10+1 ;//Generando un numero aleatorio de 1-10
    int numero(0);//variable que se usara para almacenar el dato ingresado por el usuario
cout<<"Intente adivinar un numero generado por la computadora";
while (numero!=random)//mientras el numero no sea igual al generado el while se repetira
{
   cout<<"\nIngrese el numero: ";
   cin>>numero;
   cout<<"\nFallaste, intenta de nuevo.\n";
}
cout<<"\nGanaste, Felicidades!.";//cuando el numero sea igual el while termina y imprime que ganaste
     
     return 0;
}