#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
void escribir_palabra();
int main( )
{
    
    return 0;
}
void escribir_palabra(){
    ofstream archivo;
    //ios::out el modo en el que se tratara el archivo
    archivo.open("palabras.txt",ios::out);//abre archivo
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
        //si todo falla salimos
    }
}