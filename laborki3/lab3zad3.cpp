#include <iostream>

using namespace std;

int main()
{
    float xc,yc,zc,r,x,y,z;
    cout<<"Podaj wspolrzedna x srodka kuli: ";
    cin>>xc;
    cout<<"Podaj wspolrzedna y srodka kuli: ";
    cin>>yc;
    cout<<"Podaj wspolrzedna z srodka kuli: ";
    cin>>zc;
    cout<<"Podaj promien kuli: ";
    cin>>r;
    cout<<"Podaj wspolrzedna x punktu: ";
    cin>>x;
    cout<<"Podaj wspolrzedna y punktu: ";
    cin>>y;
    cout<<"Podaj wspolrzedna z punktu: ";
    cin>>z;
    float rownanie = (x-xc)*(x-xc);
    rownanie = (y-yc)*(y-yc);
    rownanie = (z-zc)*(z-zc);
    if (rownanie < r*r)
        cout<<"Punkt lezy wewnatrz kuli."<<endl;
    else if(rownanie == r*r)
        cout<<"Punkt lezy na powierzchni kuli."<<endl;
    else 
        cout<<"Punkt lezy na zewnatrz kuli."<<endl;
    
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}