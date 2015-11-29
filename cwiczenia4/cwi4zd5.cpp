#include <iostream>
#include <iomanip>
//#include <stdio.h>

using namespace std;

int main()
{
    char x;
    int y;
    double z;
    char *x1=&x;
    int *y1=&y;
    double *z1=&z;
    cout<<"Podaj znak, liczbe calkowita i liczbe naturalna:"<<endl;
    cin>>*x1>>*y1>>*z1;
    //printf("Podany znak: '%c' %p, liczba calk.: '%d' %p i rzecz.: '%f' %p.\n", *x1, x1, *y1, y1, *z1, z1);
    cout<<"Podany znak: '"<<*x1<<"' "<<(int*)x1<<", liczba calk.: '"<<*y1<<"' "<<y1<<" i rzecz.: '"<<setprecision(12)<<z<<"' "<<z1<<"."<<endl;
	return 0;
}