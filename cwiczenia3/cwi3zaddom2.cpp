#include <iostream>

using namespace std;

int x1, x2, x3, x4, x5;

int minimum(){
    int min = x1;
    if (min > x2) min = x2;
    if (min > x3) min = x3;
    if (min > x4) min = x4;
    if (min > x5) min = x5;
    return min;
}

int maksimum(){
    int max = x1;
    if (max < x2) max = x2;
    if (max < x3) max = x3;
    if (max < x4) max = x4;
    if (max < x5) max = x5;
    return max;
}

int main()
{
	cout<<"Podaj pierwsza liczbe: ";
    cin>>x1;
	cout<<"Podaj druga liczbe: ";
    cin>>x2;
	cout<<"Podaj trzecia liczbe: ";
    cin>>x3;
	cout<<"Podaj czwarta liczbe: ";
    cin>>x4;
	cout<<"Podaj piata liczbe: ";
    cin>>x5;
    int min = minimum();
    int max = maksimum();
    cout<<"Najmniejsza z odanych liczb wynosi "<<min<<", a najwieksza "<<max<<"."<<endl;
	return 0;
}