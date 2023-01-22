#include <iostream>
#include <cstring>
#define MAX_NAME 52
#define NUM_TEMP 5
typedef struct {
    char name[MAX_NAME];
    float temp[5];
    int id;
    
}Person;//si tienen mayusucula es objeto(estructura)
using namespace std;
int getNumber(string message);
void readPeopleData(Person*,int);
void showResume(Person *people, int len);
int main()
{
    int numberOfPeople=getNumber("Ingrese la cantidad de personas: ");
    Person people[numberOfPeople];
    //readPeopleData(people);
    
    return 0;
}
int getNumber(string *message){
    int number=0;
    cout<<message;
    do{
        cin>>number;
        if (number<0)
        {
            cout<<"ingrese un numero positivo";
        }
        
    }while(number<=0);
    return(number);
}
void readPeopleData(Person *people, int len){
    for (int i = 0; i < len; i++)
    {
        //get ID
        cout<<"Informacion estudiante "<<i+1<<": ";
        people[i].id=getNumber("\nIngrese el ID: ");
        //get name
        cout<<"Ingrese el nombre del estudiante:\n";
        scanf("%s",people[i].name);
        //get Temps
        for (int j = 0; j < TMP_MAX; i++)
        {
            cout<<"\nIngrese la temperaura "<<j+1<<": ";
            cin>>people[i].temp[j];
        }
        
    }
}
void showResume(Person *people, int len){
    float meanColumn[NUM_TEMP];
    float sumTemp;
    float sumColumn[NUM_TEMP];
    for (size_t i = 0; i < len; i++)
    {
        //mostrar persona
        int id=people[i].id;
        
        int initSum=1;
        cout<<id<<','<<people[i].name<<endl;
        //calcular promedio persona
        for (int j = 0; j < NUM_TEMP; j++)
        {
            int temp=people[i].temp[j];
            sumTemp+=temp;
            cout<<temp;
            if(initSum==1)sumColumn[j]=0;
            sumColumn[j]+=temp;
        }
        
        //agregar temps a sumColumn;
        
    }
    
}
