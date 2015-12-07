#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> s1;
    stack<char> s2;
    cout<<"Podawaj po kolei kolejne cyfry pierwszej liczby, zaczynajac od lewej strony, ktora chcesz dodac. Gdy liczba sie skonczy podaj dowolna litere."<<endl;
    char x;
    do {
        cout<<"Podaj cyfre: ";
        cin>>x;
        x -=48;
        if(x>=0 && x<=9) s1.push(x);
    }
    while (x>=0 && x<=9);
    cout<<"Podawaj po kolei kolejne cyfry drugiej liczby, zaczynajac od lewej strony, ktora chcesz dodac. Gdy liczba sie skonczy podaj dowolna litere."<<endl;
    do {
        cout<<"Podaj cyfre: ";
        cin>>x;
        x-=48;
        if(x>=0 && x<=9) s2.push(x);
    }
    while (x>=0 && x<=9);
    stack<char> s3;
    char r = 0;
    char a,b,s;
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
    x=0;
    cout<<"Suma liczb po dodaniu wynosi: ";
    if(s3.empty()) cout<<0;
    while (!s3.empty()){
        x = s3.top();
        x+=48;
        s3.pop();
        cout<<x;
    }
    cout<<endl;
    
    
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}