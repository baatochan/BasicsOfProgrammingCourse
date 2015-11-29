#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand (time(NULL));
    cout<<"Podaj n: ";
    int n;
    cin>>n;
    int *tab;
    tab = new int[n];
    for (int *p = tab;p<tab+n;p++){
        *p = rand();
    }
    
    int tymczasowa;
    for (int *p1=tab+n;p1>tab;p1--){
        for (int*p2=tab;p2<(p1-1);p2++){
            if(*p2>*(p2+1)){
                tymczasowa = *p2;
                *p2=*(p2+1);
                *(p2+1)=tymczasowa;
            }
        }
    }
    
    cout<<"Posortowany ciag: "<<endl;
    for(int *p=tab;p<tab+n;p++){
        cout<<*p<<endl;
    }
    delete[] tab;
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}