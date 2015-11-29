#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Podaj liczbe calk. a: ";
    cin>>a;
    cout<<"Podaj liczbe calk. b: ";
    cin>>b;
    int suma = a+b;
    int iloczyn = a*b;
    long long int potega = pow(a,b);
    double pierwiastek = sqrt(a);
    cout<<"Suma tych liczb to: "<<suma<<endl<<"Iloczyn tych liczb to: "<<iloczyn<<endl<<"Liczba a do potegi b to: "<<potega<<endl<<"Pierwiastek kwadratowy z a to: "<<pierwiastek<<endl;
	return 0;
}