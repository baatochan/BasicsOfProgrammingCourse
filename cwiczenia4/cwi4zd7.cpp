#include <iostream>

using namespace std;

double suma(double*);
double srednia(double);

const int rozmiar = 10;

int main()
{
	double xxx[rozmiar];
    for(double* p=xxx; p<xxx+rozmiar; p++){
        cout<<"Podaj kolejna liczbe do tablicy: ";
        cin>>*p;
    }
    cout<<"Suma elementow tablicy: "<<suma(xxx)<<endl<<"Srednia: "<<srednia(suma(xxx))<<endl;
	return 0;
}

double suma(double *tab){
    double sum=0;
    for(double* p=tab;p<tab+rozmiar;p++) sum += *p;
    return sum;
}

double srednia(double sum){
    return sum/rozmiar;
}