#include <iostream>
using namespace std;

int main()
{
    int cumpleanos[2];
    cout << "ingrese el dia de su cumpleanos: ";
    cin >> cumpleanos[0];
    cout << "ingrese el mes de su cumpleanos: ";
    cin >> cumpleanos[1];
    if (cumpleanos[0] > 0 && cumpleanos[0] <= 31)
    {
        switch (cumpleanos[1])
        {
        case 1:
            if (cumpleanos[0] <= 19)
            {
                cout << "Es capricornio.";
            }
            else
            {
                cout << "Es Acuario.";
            }

            break;
        case 2:
            if (cumpleanos[0] <= 18)
            {
                cout << "Es Acuario.";
            }
            else
            {
                cout << "Es Piscis.";
            }
            break;
        case 3:
            if (cumpleanos[0] <= 20)
            {
                cout << "Es Piscis.";
            }
            else
            {
                cout << "Es Aries.";
            }
            break;
        case 4:
            if (cumpleanos[0] <= 19)
            {
                cout << "Es Aries.";
            }
            else
            {
                cout << "Es Tauro.";
            }
            break;
        case 5:
            if (cumpleanos[0] <= 20)
            {
                cout << "Es Tauro.";
            }
            else
            {
                cout << "Es Geminis.";
            }
            break;
        case 6:
            if (cumpleanos[0] <= 21)
            {
                cout << "Es Geminis.";
            }
            else
            {
                cout << "Es Cancer.";
            }
            break;
        case 7:
            if (cumpleanos[0] <= 22)
            {
                cout << "Es Cancer.";
            }
            else
            {
                cout << "Es Leo.";
            }
            break;
        case 8:
            if (cumpleanos[0] <= 22)
            {
                cout << "Es Leo.";
            }
            else
            {
                cout << "Es Virgo.";
            }
            break;
        case 9:
            if (cumpleanos[0] <= 22)
            {
                cout << "Es Virgo.";
            }
            else
            {
                cout << "Es Libra.";
            }
            break;
        case 10:
            if (cumpleanos[0] <= 22)
            {
                cout << "Es Libra.";
            }
            else
            {
                cout << "Es Escorpio.";
            }
            break;
        case 11:
            if (cumpleanos[0] <= 21)
            {
                cout << "Es Escorpio.";
            }
            else
            {
                cout << "Es Sagitario.";
            }
            break;
        case 12:
            if (cumpleanos[0] <= 21)
            {
                cout << "Es Sagitario.";
            }
            else
            {
                cout << "Es Capricornio.";
            }
            break;
        default:
            cout << "Ingrese un mes valido";
            break;
        }
    }
    return (0);
}