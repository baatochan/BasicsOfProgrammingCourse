#include <iostream>

using namespace std;

int main()
{
	double xxx[10];
    for(double *p=xxx; p<xxx+10; p++){
        cout<<"Podaj kolejna liczbe do tablicy: ";
        cin>>*p;
    }
    cout<<"Zawartosc tablicy to: ";
    for(double *p=xxx; p<xxx+10; p++){
        cout<<*p<<" ";
    }
	return 0;
}