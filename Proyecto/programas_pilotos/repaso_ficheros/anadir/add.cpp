#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main( )
{
    string newWord;
    ofstream texto;
    texto.open("text.txt",ios::app);
    int flag=1;
    cout<<"Ingrese la palabra: ";
    while (cin>>newWord)
    {
        texto<<newWord<<endl;
        cout<<"Ingrese otra palabra o presione ctrl+z para salir: ";
    }
    texto.close();
    return 0;
} 