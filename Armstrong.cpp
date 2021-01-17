#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int no;
    cin>>no;
    int digit=0;
    int n=no;
    int check=no;
    while(n!=0)
    {
        n=n/10;
        digit++;
    }
    int re;
    int ans=0;
    while(no!=0)
    { 
        re=no%10;
        ans=ans+pow(re,digit);
        no=no/10;
    }
    cout<<ans<<endl;
    if(ans == check)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"not";
    }
    
}