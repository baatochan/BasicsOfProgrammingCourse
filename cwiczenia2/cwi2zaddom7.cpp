#include <iostream>

using namespace std;

int main()
{
    int start = 0;
    int x = 0;
    do {
        cout<<start<<" ";
        start +=2;
        x++;
    }
    while(x<100);
	return 0;
}