#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
void write();
int main( )
{
    write();
    return 0;
}
void write(){
    ofstream text;
    string word;
    text.open("texto.txt",ios::out);//abriendo archivo
    if(text.fail()){
        cout<<"no se pudo abrir el archivo";
        exit(1);
    }
    else{
        cout<<"enter a word: ";
        getline(cin,word);
        text<<word<<'\n';
    }
}