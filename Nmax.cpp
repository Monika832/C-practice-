#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no.";
    cin>>n;
    int no;
    int count=1;
    int large;
    large=INT_MIN;
    while(count<=n)
    {
        cout<<"Enter the number";
        cin>>no;
        if(large<=no)
        {
            large=no;
        }
        count=count+1;
    }
    cout<<"Largest"<<large;
}