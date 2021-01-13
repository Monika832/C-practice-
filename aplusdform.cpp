//Read a and d,print 10 numbers to form a+d,a+2d,a+3d,.....

#include <iostream>
using namespace std;

int main()
{
    int a,d;
    cout<<"Enter value for a and d";
    cin>>a>>d;
    int i=1;
    while(i<=10)
    {
        cout<<(a+i*d)<<'\t';
        i++;
    }
}

