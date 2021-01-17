#include <iostream>
using namespace std;

int main()
{
   int no;
   cout<<"Enter number";
   cin>>no;
   int sum=0;
   int last=0;
   while(no!=0)
   {
       last=no%10;
       sum=sum+last;
       no= no/10;
   } 
   cout<<"The sum of digits="<<sum;
}