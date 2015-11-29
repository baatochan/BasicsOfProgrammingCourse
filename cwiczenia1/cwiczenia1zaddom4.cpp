#include <iostream>

using namespace std;

int main()
{
	cout<<"Podaj slowo: ";
    string slowo;
    getline(cin, slowo);
    cout<<"Podaj liczbe calkowita: ";
    int liczba;
    cin>>liczba;
    cout<<"Podaj ulamek: ";
    double ulamek;
    cin>>ulamek;
    cout<<"Podane przez Ciebie dane to: "<<slowo<<" "<<liczba<<" "<<ulamek<<endl;
	return 0;
}