#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;    
        }
    
        for(int j=i;j<=n-1;j++)
        {
           cout<<"*";
        }
        for(int j=i;j<n-1;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    
}