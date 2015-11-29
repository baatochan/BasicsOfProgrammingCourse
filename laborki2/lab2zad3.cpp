#include <iostream>

using namespace std;

int main()
{
    string zdanie;
	cout<<"Podaj slowo/zdanie: ";
    getline(cin, zdanie);
    int ilosc_znakow = zdanie.length();
    for (int i=0; i<ilosc_znakow; i++){
        if (i%2==0){
            cout<<zdanie[i];
        }
    }
	return 0;
}