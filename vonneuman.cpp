#include <iostream>
using namespace std;

//binary to decimal conversion

int main()
{   
    int n;
    cin>>n;
    int binary;
    int decimal;
    int rem;
    int weight;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>binary;
        weight=1;
        decimal=0;
        while(binary!=0)
      {
        rem=binary%10;
        decimal=decimal+rem*weight;
        binary=binary/10;
        weight=weight*2;
      }
      cout<<decimal<<endl;
    }
}