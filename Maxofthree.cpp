//Largest of three number


#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three number"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"a is large";
    }
    else if(b>a&&b>c)
    {
        cout<<"b is large";
    }
    else
    {
        cout<<"c is greater";
    }
    
}