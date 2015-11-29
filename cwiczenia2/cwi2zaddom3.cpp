#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "Podaj litere lub cyfre: ";
    char znak = getch();
    cout<<endl;
    switch (znak){
        case 48 ... 57:
            cout<<"Podany znak to liczba.";
            break;
        case 65 ... 90:
            cout<<"Podany znak to duza litera.";
            break;
        case 97 ... 122:
            cout<<"Podany znak to mala litera.";
            break;
        default:
            cout<<"Podany znak to ani liczba, ani litera.";
            break;
    }
	return 0;
}