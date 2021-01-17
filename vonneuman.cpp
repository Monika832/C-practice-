#include <iostream>
using namespace std;

//binary to decimal conversion

int main()
{   
    int n;
    cin>>n;
    int binary;
    int decimal=0;
    int rem;
    int weight=1;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>binary;
        while(binary!=0)
      {
        rem=binary%10;
        decimal=decimal+rem*weight;
        binary=binary/10;
        weight=weight*2;
      }
      cout<<decimal;
    }
    
        
    
}