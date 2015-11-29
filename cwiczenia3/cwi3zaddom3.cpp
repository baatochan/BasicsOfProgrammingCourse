#include <iostream>

using namespace std;

int x1, x2, x3;

int y1, y2;

bool identyczne(){
    /*bool ident = false;
    if (y1 == y2) {
        ident = true;
    }
    return ident;*/
    return y1 == y2;
}

int main()
{
	cout<<"Podaj pierwsza liczbe: ";
    cin>>x1;
	cout<<"Podaj druga liczbe: ";
    cin>>x2;
	cout<<"Podaj trzecia liczbe: ";
    cin>>x3;
    y1 = x1;
    y2 = x2;
    bool para1 = identyczne();
    y2 = x3;
    bool para2 = identyczne();
    y1 = x2;
    bool para3 = identyczne();
    if (para1){
        cout<<"Przynajmniej 2 liczby są sobie równe."<<endl;
    }
    else if (para2){
        cout<<"Przynajmniej 2 liczby są sobie równe."<<endl;
    }
    else if (para3){
        cout<<"Przynajmniej 2 liczby są sobie równe."<<endl;
    }
    else{
        cout<<"Zadna z podanych liczb nie jest rowna z inna."<<endl;
    }
	return 0;
}