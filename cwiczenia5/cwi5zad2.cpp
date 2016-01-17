#include <iostream>

using namespace std;

float a,b,c,d,e;
float minimum(float,float,float,float,float);
float maksimum(float,float,float,float,float);

int main()
{
    cout<<"Podaj a,b,c,d,e: ";
    cin>>a>>b>>c>>d>>e;
    cout<<"Maksimum: "<<maksimum(a,b,c,d,e)<<endl<<"Minimum: "<<minimum(a,b,c,d,e)<<endl;
    
    
    
    
    
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}

float minimum(float a, float b, float c, float d, float e){
    float min=a;
    if (min>b) min=b;
    if (min>c) min=c;
    if (min>d) min=d;
    if (min>e) min=e;
    return min;
}

float maksimum(float a, float b, float c, float d, float e){
    float max=a;
    if (max<b) max=b;
    if (max<c) max=c;
    if (max<d) max=d;
    if (max<e) max=e;
    return max;
}