#include <iostream>
using namespace std;

int main()
{
     int numero;
     cout<<"Ingrese un numero: ";
     cin>>numero;
     if(!(numero%3)){
        cout<<"FIS";
     }
     if(!(numero%5)){
        cout<<"FUS";
     }
     if((numero%3&&numero%5)){
        cout<<numero;
     }

     return 0;
}