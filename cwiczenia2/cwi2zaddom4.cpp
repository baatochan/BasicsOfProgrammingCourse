#include <iostream>

using namespace std;

int main()
{
    int dlugosc;
	cout << "Podaj dlugosc linii: ";
    cin>>dlugosc;
    for (int i = 0; i<dlugosc; i++){
        cout<<"-";
    }
	return 0;
}