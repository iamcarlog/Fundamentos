#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
void add();
int main( )
{
    int flag=1;
    do{
        add();
        cout<<"Si desea agregar mas, presione 1, para salir presione 0: ";
        cin>>flag;
    }
    while (flag==1);
    return 0;
}
void add(){
    ofstream text;
    string word;
    text.open("texto.txt",ios::app);//abrirlo para añadir
    if(text.fail())
    {
        cout<<"Error.";
        exit(1);
    }
        cout<<"ingrese la palabra: ";
        getline(cin,word);
        text<<word<<'\n';
    }
