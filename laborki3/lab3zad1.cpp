#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float xp, xk, dx;
    cout<<"Podaj x poczatkowe: ";
    cin>>xp;
    cout<<"Podaj x koncowe: ";
    cin>>xk;
    cout<<"Podaj delte: ";
    cin>>dx;
    float odleglosc = xk-xp;
    int ilosc_delt = odleglosc/dx;
    float odleglosc_rzeczywista = ilosc_delt*dx;
    xk = xp + odleglosc_rzeczywista;
    cout<<fixed<<setw(5)<<left<<"   x"<<setw(17)<<"  1-sin(x)*sin(x)"<<setw(11)<<"  1/(x*x+1)"<<setw(9)<<"  exp(-x)"<<setw(10)<<"  1/exp(x)"<<endl;
    for(int i = 0; i<=ilosc_delt; i++){
        float x_teraz = xp+i*dx;
        cout<<setprecision(2)<<setw(5)<<right;
        cout<<x_teraz;
        cout<<setprecision(3)<<setw(7)<<""<<left;
        cout<<setw(10)<<1-sin(x_teraz)*sin(x_teraz);
        cout<<setw(4)<<"";
        cout<<setw(7)<<1/((x_teraz*x_teraz)+1);
        cout<<setw(2
                  
                  )<<"";
        cout<<setprecision(4);
        cout<<setw(6)<<exp(-1*x_teraz);
        cout<<setw(4)<<"";
        cout<<setw(6)<<1/exp(x_teraz);
        
        cout<<endl;
    }
    
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}