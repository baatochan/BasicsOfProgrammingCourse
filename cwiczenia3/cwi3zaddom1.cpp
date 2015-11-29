#include <iostream>

using namespace std;

int x1, x2, x3;

double srednia(){
    int s = x1 + x2 + x3;
    s /= 3;
    return s;
}

int main()
{
	cout<<"Podaj pierwsza liczbe: ";
    cin>>x1;
	cout<<"Podaj druga liczbe: ";
    cin>>x2;
	cout<<"Podaj trzecia liczbe: ";
    cin>>x3;
    double s = srednia();
    cout<<"Srednia aryt. tych liczb to: "<<s<<endl;
	return 0;
}