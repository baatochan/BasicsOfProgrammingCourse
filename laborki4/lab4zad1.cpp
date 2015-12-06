#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Podaj stopien wielomianu: ";
    cin>>n;
    float* wspolczynniki = new float[n+1];
    int i = 0;
    for(float*p=wspolczynniki; p<wspolczynniki+n+1; p++){
        cout<<"Podaj wspolczynnik stopnia "<<i<<": ";
        cin>>*p;
        i++;
    }
    float x;
    cout<<"Podaj wartość x: ";
    cin>>x;
    float* p = wspolczynniki+n;
    float wartosc = *p;
    p--;
    for (p;p>=wspolczynniki;p--){
        wartosc *= x;
        wartosc += *p;
    }
    cout<<"Wartość podanego wielomianu w punkcie '"<<x<<"' wynosi: "<<wartosc<<endl;
    
    
    delete[] wspolczynniki;
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}