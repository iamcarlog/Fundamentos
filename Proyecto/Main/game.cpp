#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <cstring>
#include <conio.h>
#include<vector>
using namespace std;
int main(){
    int opcion,len,espacios;
    vector<char> letrasAdivinadas;
    char letra;
    string palabra="perro",dif="facil",usuario="carlo";
    int aciertos=0,intentos=0,ganar=0;
    len=palabra.length();
    char frase[len];
    //cout<<"A continuacion se muestra la palabra a adivinar\n";
    for (int i = 0; i < len; i++)
    {   
        frase[i]='_';
       // cout<<frase[i]<<' ';
    }
    do{
        aciertos=0;
        cout<<"\t\tAHORCADO\t\t";
        cout<<endl<<"\t"<<usuario<<"\t"<<"Dificultad: "<<dif;
        cout<<endl<<"\t\t"<<"Intentos:"<<6-intentos<<endl<<endl<<endl;
        cout<<"letras adivinadas:";
        for (int i = 0; i < letrasAdivinadas.size(); i++)
        {
            cout<<letrasAdivinadas[i]<<',';
        }
        cout<<endl;
        //imprimir el array de guiones
        cout<<"\t\t";
        for (int i = 0; i < len; i++)
        {   
            cout<<frase[i]<<' ';
        }
        if(intentos==6){
            cout<<"\n\t\tPERDISTE\n"<<"\tINTENTALO DE NUEVO";
            cout<<"\n\tLa solucion era: "<<palabra;
            return(0);
        }
		espacios=0;
		for (int i = 0; i < len; i++){
			if (frase[i] == '_')
				espacios++;
		}
        if(espacios==0){
            cout<<"\n\t\tGANASTE\n";
            return(0);
        }
        cout<<"\nDigite una letra: ";
        cin>>letra;
        for (int i = 0; i < len; i++)
        {
            if(palabra[i]==letra)
            {
                frase[i]=letra;
                aciertos++;
            }
            

        }
        letrasAdivinadas.push_back(letra);
        intentos++;
        system("cls");
    }while(intentos!=7);

}