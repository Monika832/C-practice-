#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ffn=0;
    int sfn=1;
    if(n==ffn || n==sfn)
    {
        cout<<"Yes it is part of fibo series";
        return 0;
    }
    int c;
    c=ffn+sfn;
    while(c<=n)
    {
        if(c==n)
        {
            cout<<"Yes exist on fibo series";
            return 0;
        }
        ffn=sfn;
        sfn=c;
        c=ffn+sfn;
    }
    cout<<"Not in series";
}