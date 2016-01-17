#include <iostream>

using namespace std;

float a,b,c;
float srednia(float,float,float);

int main()
{
    cout<<"Podaj a, b i c: ";
    cin>>a>>b>>c;
    cout<<"Srednia: "<<srednia(a,b,c)<<endl;
    
    
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}

float srednia (float a, float b, float c){
    float s = (a+b+c)/3;
    return s;
}