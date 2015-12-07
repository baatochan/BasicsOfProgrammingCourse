#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    cout<<"Podawaj po kolei kolejne cyfry pierwszej liczby, zaczynajac od lewej strony, ktora chcesz dodac. Gdy liczba sie skonczy podaj dowolna liczbe wieksza od 9 lub mniejsza od 0."<<endl;
    int x;
    do {
        cout<<"Podaj cyfre: ";
        cin>>x;
        if(x>=0 && x<=9) s1.push(x);
    }
    while (x>=0 && x<=9);
    cout<<"Podawaj po kolei kolejne cyfry drugiej liczby, zaczynajac od lewej strony, ktora chcesz dodac. Gdy liczba sie skonczy podaj dowolna liczbe wieksza od 9 lub mniejsza od 0."<<endl;
    do {
        cout<<"Podaj cyfre: ";
        cin>>x;
        if(x>=0 && x<=9) s2.push(x);
    }
    while (x>=0 && x<=9);
    stack<int> s3;
    int rozmiar1 = s1.size();
    int rozmiar2 = s2.size();
    int rozmiar = (rozmiar1>rozmiar2)?rozmiar1:rozmiar2;
    //cout<<rozmiar1<<endl<<rozmiar2<<endl<<rozmiar<<endl;
    int r = 0;
    int a,b,s;
    while (!s1.empty()||!s2.empty()||r==1){
        if(!s1.empty()) a = s1.top();
        else a = 0;
        if(!s2.empty()) b = s2.top();
        else b = 0;
        s = a+b+r;
        r=0;
        if (s>9){
            r=1;
            s -= 10;
        }
        s3.push(s);
        if(!s1.empty()) s1.pop();
        if(!s2.empty()) s2.pop();
    }
    //stack<int> s4;
    x=0;
    /*while (!s3.empty()){
        x = s3.top();
        s4.push(x);
        s3.pop();
    }*/
    x=0;
    cout<<"Suma liczb po dodaniu wynosi: ";
    while (!s3.empty()){
        x = s3.top();
        s3.pop();
        cout<<x;
    }
    cout<<endl;
    
    
    
    
    
    
    
    
    
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}