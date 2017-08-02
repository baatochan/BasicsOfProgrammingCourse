#include <iostream>

using namespace std;

int silnia (int);

int main()
{
    cout<<"Podaj n, z przedzialu [0,12]: ";
    int n;
    cin>>n;
    while ((n>12)||(n<0)){
        cout<<"Podane n jest wieksze niz 12 lub mniejsze niz 0. Podaj poprawne n: ";
        cin>>n;
    }
    n++;
    for(int i=0;i<n;i++){
        for (int j=0; j<=i;j++){
            int dwumian = silnia(i);
            dwumian /= silnia(j)*silnia(i-j);
            cout<<dwumian<<" ";
        }
        cout<<endl;
    }
    
    
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}

int silnia (int liczba){
    int sil=1;
    for(int i=1;i<=liczba;i++){
        sil *=i;
    }
    return sil;
}