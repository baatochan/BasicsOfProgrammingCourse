#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double x[999];
    int i = 0;
    char znak;
    do {
        cout<<"Podaj liczbę: ";
        cin>>x[i];
        i++;
        cout<<"Czy to juz koniec [t/n]: ";
        cin>>znak;
    }
    while (znak != 't');
    cout << "Najmniejszy element wynosi: " << *min_element(x,x+i) << endl;
    cout << "Najwiekszy element wynosi: " << *max_element(x,x+i) << endl;
	return 0;
}