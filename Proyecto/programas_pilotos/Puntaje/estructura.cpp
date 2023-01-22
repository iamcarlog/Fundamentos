#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <stdlib.h>
using namespace std;
struct score
{
    int puntaje;
    string usuario;
    string palabra_jugada;
};
void burbuja(vector<score>vectorOrdenar, int len);
int main( )
{
    int puntajeTemporal=0;
    string usuarioTemporal, palabraTemporal;
    vector<score> scores;
    ifstream archivo("scores.txt"); 
    while(archivo>>puntajeTemporal>>usuarioTemporal>>palabraTemporal){
        scores.push_back(score{puntajeTemporal,usuarioTemporal,palabraTemporal});
    }
    int len=scores.size(),len2=len;
    score aux;
    //cout<<(scores[1].puntaje);
    
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if(scores[j].puntaje>scores[j+1].puntaje)
        {
            aux=scores[j];
            scores[j]=scores[j+1];
            scores[j+1]=aux;
        }
        }
        
    }
    for (int i = scores.size()-1; i >=0; i--)
    {
        cout<<' '<<scores[i].usuario<<' '<<scores[i].puntaje<<' '<<scores[i].palabra_jugada<<endl;
    }
    

} 