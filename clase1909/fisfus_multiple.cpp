#include <iostream>
using namespace std;

int main()
{
     int numero;
    cout<<"Ingrese un numero:";
    cin>>numero;
    if (!(numero%3||numero%5))
    {
        cout<<"FISFUS";
    }
    else if(!(numero%5)){
        cout<<"FUS";
    }
    else if(!(numero%3)){
        cout<<"FIS";
    }
    else{
        cout<<numero;
    }
     return 0;
}