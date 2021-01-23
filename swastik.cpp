#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    if(n%2==0 || n<5 || n>100)
    {
        cout<<"Invalid input";
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==(n+1)/2) || (j==(n+1)/2) || (j==1 && i<(n+1)/2) ||  (i==1 && j>(n+1)/2) || (i==n && j<(n+1)/2) || (j==n && i>(n+1)/2))
            {
                cout<<"*";
            }
            
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    }

}


