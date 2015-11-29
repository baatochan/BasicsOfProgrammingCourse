#include <iostream>

using namespace std;

int main()
{
    double x[4];
	cout<<"Podaj pierwsza liczbe: ";
    cin>>x[0];
	cout<<"Podaj druga liczbe: ";
    cin>>x[1];
	cout<<"Podaj trzecia liczbe: ";
    cin>>x[2];
	cout<<"Podaj czwarta liczbe: ";
    cin>>x[3];
    
    double maks;
    
    maks = x[0]>x[1] ? (x[0]>x[2] ? (x[0]>x[3]?x[0]:x[3]) : (x[2]>x[3]?x[2]:x[3])) : (x[1]>x[2] ? (x[1]>x[3]?x[1]:x[3]) : (x[2]>x[3]?x[2]:x[3]));
    cout<<endl<<"Najwieksza liczba wynosi: "<<maks<<endl;
    
    bool rowna_para = false;
    
    for (int i = 0; i<4; i++){
        int il_rownych_liczb=0;
        for (int j = 0; j<4; j++){
            if (x[i] == x[j]){
                il_rownych_liczb++;
            }
        }
        if (il_rownych_liczb>1){
            rowna_para = true;
            break;
        }
    }
    
    if (rowna_para) {
        cout<<"W zestawie sa conajmniej 2 liczby sobie rowne."<<endl;
    }
    else {
        cout<<"Wszystkie liczby w zestawie sa rozne"<<endl;
    }
    
    
    
	return 0;
}