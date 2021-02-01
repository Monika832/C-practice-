#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row=1,val;
    while(row<=n)
    {
        if(row%2!=0)
        {
            val=0;
        }
        else
        {
            val=1;
        }
        int col=1;
        while(col<=row)
        {
            cout<<val;
            val=1-val;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}