#include <iostream>
using namespace std;
 int main()
 {
     int n;
     cout<<"Enter the no u want to check";
     cin>>n;
     int i=2;
     int isPrime=1;
     while(i<=n-1)
     {
         if(n%i==0)
         {
             cout<<"NOT PRIME";
             isPrime=0;
             break;
         }
         i=i+1;                  
     }
     if(isPrime==1)
     {
         cout<<"Prime";
     }


 }