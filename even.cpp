//Given N , find sum of even numbers from 1 to N.

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the Number";
    cin>>N;
    int i=0;
    int sum=0;
    while(i<=N)
    {
       sum=sum+i;
       i=i+2;
    }
    cout<<"The sum  "<<sum;
}