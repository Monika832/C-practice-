#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float d=(b*b)-4*a*c;
    if(d==0)
    {
        cout<<"Real and equal"<<endl;
    }
    else if (d>0)
    {
        cout<<"Real and distinct"<<endl;
    }
    else
    {
        cout<<"Real and imaginary"<<endl;
    }

    float x1 = (-b + sqrt(pow(b,2) - 4*a*c))/2*a ;
    float x2 = (-b - sqrt(pow(b,2) - 4*a*c))/2*a;
    cout<<x1<<'\t'<<x2;
}