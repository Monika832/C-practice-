#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int inc;
    cin>>a>>b;
    cin>>inc;
    int i;
    for(i=a;i<=b;i=i+inc)
    {
            float c=(5*(i-32))/9;
            cout<<i<<'\t'<<c<<endl;
    }

}