#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter row";
    cin>>n;
    int row=1;
    int col;
    while(row<=n)
    {
        col=1;
        while(col<=row)
        {
            cout<<"*";
            col=col+1;
        }
        row=row+1;
        cout<<'\n';
    }
}
