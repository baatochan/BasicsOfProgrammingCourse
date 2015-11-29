#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double fkwadratowa[3];
	cout<<"Funkcja kwadratowa: Ax^2+Bx+C=0"<<endl<<"Podaj A: ";
    cin>>fkwadratowa[0];
    cout<<"Podaj B: ";
    cin>>fkwadratowa[1];
    cout<<"Podaj C: ";
    cin>>fkwadratowa[2];
    
    double pierwiastki[2];
    
    double delta = fkwadratowa[1]*fkwadratowa[1];
    delta -= 4*fkwadratowa[0]*fkwadratowa[2];
    
    if (delta<0){
        cout<<"Delta ujemna, pierwiastki nie istnieja w zbiorze liczb rzeczywistych.";
    }
    else if (delta==0){
        cout<<"Delta rowna 0, istnieje jeden pierwiastek rzeczywisty. ";
        pierwiastki[0] = -fkwadratowa[1];
        pierwiastki[0] /= 2*fkwadratowa[0];
        cout<<"Wynosi on: "<<pierwiastki[0];
    }
    else {
        cout<<"Delta dodatnia. ";
        pierwiastki[0] = -fkwadratowa[1];
        pierwiastki[1] = -fkwadratowa[1];
        pierwiastki[0] -= sqrt(delta);
        pierwiastki[1] += sqrt(delta);
        pierwiastki[0] /= 2*fkwadratowa[0];
        pierwiastki[1] /= 2*fkwadratowa[0];
        cout<<"Pierwiastki wynosza: "<<pierwiastki[0]<<" i "<<pierwiastki[1];
    }
    
	return 0;
}