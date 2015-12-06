#include <iostream>

using namespace std;

int main()
{
    string napis;
    cout<<"Podaj napis: ";
    getline(cin, napis);
    const int ilosc_liter = 12;
    char litery[ilosc_liter] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};
    int ilosc_wystapien[ilosc_liter];
    for(int i=0;i<ilosc_liter;i++) ilosc_wystapien[i]=0;
    int dlugosc = napis.length();
    for(int i=0;i<dlugosc;i++){
        char znak = napis[i];
        switch (znak){
            case 'a':
                ilosc_wystapien[0]++;
                break;
            case 'A':
                ilosc_wystapien[1]++;
                break;
            case 'e':
                ilosc_wystapien[2]++;
                break;
            case 'E':
                ilosc_wystapien[3]++;
                break;
            case 'i':
                ilosc_wystapien[4]++;
                break;
            case 'I':
                ilosc_wystapien[5]++;
                break;
            case 'o':
                ilosc_wystapien[6]++;
                break;
            case 'O':
                ilosc_wystapien[7]++;
                break;
            case 'u':
                ilosc_wystapien[8]++;
                break;
            case 'U':
                ilosc_wystapien[9]++;
                break;
            case 'y':
                ilosc_wystapien[10]++;
                break;
            case 'Y':
                ilosc_wystapien[11]++;
                break;
        }
    }
    cout<<"W napisie '"<<napis<<"' poszczegolne samogloski wystepuja tyle razy: "<<endl;
    for(int i =0; i<ilosc_liter;i++){
        cout<<"'"<<litery[i]<<"': "<<ilosc_wystapien[i]<<endl;
    }
    
    cout<<"Naciśnij kilkakrtonie ENTER, aby wyjść...";//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
    cin.ignore().get();//pisze na linuxie, wiec komenda 'system("pause");' nie dziala
	return 0;
}