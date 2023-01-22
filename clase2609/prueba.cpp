#include <iostream>
using namespace std;

int main()
{
    int user_data(0),pc_data(0);
             do
        {
             cout<<"Elije una de las siguientes opciones:\n1.)Piedra\n2.)Papel\n3.)Tijera\n";
            cin>>user_data;
        } while (user_data!=1&&user_data!=2&&user_data!=3);
     return 0;
}