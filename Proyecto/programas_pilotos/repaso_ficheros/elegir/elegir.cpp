#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;
string elegir();
int main( )
{

    cout<<endl<<elegir();
    return 0;
}
string elegir(){
    ifstream texto( "texto.txt");
    //se crea un vector para almacenar las palabras del archivo
    vector<string> words;
    //se crea un arreglo para almacenar momentaneamente la palabra
    string word;
    //comprobando que el archivo se abrio
    if(texto.fail()){
        cout<<"Error";
        exit(1);
    }
    //
    int current_line=0;
    string line;
    while ( !texto.eof() )
    {
        getline(texto,line);
    //se ejecutara mientras se recorre el texto, y cada palabra se agrega word
    //con push_back se agrega la palabra almacenada en word al vector words
        words.push_back ( line );
    }
    //cout<<"el tamaño es: "<<words.size();
    srand(time(NULL));//se crea la semilla
    texto.close();//se ciera el archivo
    return words[rand() % words.size()];//se escoje un numero aleatorio dependiendo del tamaño del vector
    }

