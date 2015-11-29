#include <iostream>

using namespace std;

int main()
{
    const int aaa = 5;
    cout<<aaa<<endl;
    int x = 3;
	cout << sizeof(x)<<endl;
    int y[aaa];
    cout<<sizeof(y)<<" "<<sizeof(y[0])<<endl;
    cout<<sizeof(y)/sizeof(y[0])<<endl;
    int z[aaa][aaa];
    cout<<sizeof(z)<<" "<<sizeof(z[0])<<" "<<sizeof(z[0][0])<<endl;
    cout<<sizeof(z)/sizeof(z[0][0])<<" "<<sizeof(z[0])/sizeof(z[0][0])<<" "<<sizeof(z)/sizeof(z[0])<<endl;
    //ZROZUMIALEM KURWA SIZEOF xD
    int a[aaa][aaa][aaa];
    cout<<sizeof(a)<<" "<<sizeof(a)/sizeof(a[0][0][0]);
	return 0;
}