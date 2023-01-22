#include <iostream>
#include <cstring>
#include <vector>
#include <ctime>
#include <fstream>
using namespace std;
void elegir();
int main( )
{
    elegir();
    return 0;
}
void elegir(){
    ifstream texto( "texto.txt");
    vector<string> words;
    string word;
    if(texto.fail()){
        cout<<"Error";
        exit(1);
    }
    while ( texto>> word )
    {
        cout<<word<<endl;
        words.push_back ( word );
    }
    //cout<<"el tamaño es: "<<words.size();
    srand(time(NULL));
    texto.close();
    //return words[rand() % words.size()];
    }