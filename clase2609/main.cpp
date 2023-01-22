#include <iostream>
#include <ctime>
using namespace std;

int main()
{
     int gane(0), empate(0), pierde(0), user_data(0), pc_data(0);
     for (int i = 1; i<=10; i++)
     {
        do
        {
             cout<<"\nElije una de las siguientes opciones:\n1.)Piedra\n2.)Papel\n3.)Tijera\n";
            cin>>user_data;
            if(user_data!=1&&user_data!=2&&user_data!=3){
                cout<<"\nEligio una opcion incorrecta";
            }
        } while (user_data!=1&&user_data!=2&&user_data!=3);
         srand(time(NULL));//Generando la semilla para que cada vez el numero sea diferente 
         pc_data=rand() % 3+1 ;//Generando un numero aleatorio de 1-10
         switch (user_data)
         {
         case 1:
            if (pc_data==1)
            {
                cout<<"Empate.\n";
                empate++;
            }
            else if (pc_data==2)
            {
                cout<<"Pierde.\n";
                pierde++;
            }
            else{
                cout<<"Gana.\n";
                gane++;
            }
            
            break;
         case 2:
            if (pc_data==1)
            {
                cout<<"Gana.\n";
                gane++;
            }
            else if (pc_data==2)
            {
                cout<<"Empate.\n";
                empate++;
            }
            else{
                cout<<"Pierde.\n";
                pierde++;
            }
            break;            
         case 3:
            if (pc_data==1)
            {
                cout<<"Pierde.\n";
                pierde++;
            }
            else if (pc_data==2)
            {
                cout<<"Gana.\n";
                gane++;
            }
            else{
                cout<<"Empate.\n";
                empate++;}
            break;         

         }
     }
     cout<<"\nUsted gano: "<<gane<<" veces";
     cout<<"\nUsted perdio: "<<pierde<<" veces";
     cout<<"\nUsted empato: "<<empate<<" veces";
     return 0;
}