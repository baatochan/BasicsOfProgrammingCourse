#include <iostream>

using namespace std;

int main()
{
    double liczba;
    cout<<"Podaj liczbe (z zakresu 100-200): ";
    cin>>liczba;
    cout<<"Podana liczba jest ";
    if (liczba>=100&&liczba<150){
        cout<<"mala";
    }
    else if (liczba>=150 && liczba < 175){
        cout<<"srednia";
    }
    else if(!(liczba<175) && !(liczba>200)) {
        cout<<"duza";
    }
    else {
        cout<<"z poza zakresu";
    }
    cout<<".";
	return 0;
}