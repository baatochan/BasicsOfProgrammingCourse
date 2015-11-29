#include <iostream>

using namespace std;

int main()
{
    double liczba;
    cout<<"Podaj liczbe (z zakresu 100-200): ";
    cin>>liczba;
    cout<<"Podana liczba jest ";
    if (liczba<150){
        cout<<"mala";
    }
    else if (liczba < 175){
        cout<<"srednia";
    }
    else {
        cout<<"duza";
    }
    cout<<".";
	return 0;
}