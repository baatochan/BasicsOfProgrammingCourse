#include <iostream>
#include <cstdlib> //Pause Command for Windows Terminal

using namespace std;

int main()
{
	cout << "Podaj swoje imię: ";
    string imie;
    cin>>imie;
    cout<<"Witaj w laboratorium, "<<imie<<endl;
    //system("pause"); //Pause Command for Windows Terminal
    //cout<<"Press ENTER to continue..."; //Pause Command for Linux Terminal
    cout<<"Naciśnij ENTER, aby kontynuować..."; //Pause Command for Linux Terminal
    cin.ignore().get(); //Pause Command for Linux Terminal
    return 0;
}