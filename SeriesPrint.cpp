//write a function which ptint first n1 terms of series 3n+2 which are not multiple of n2.
 #include <iostream>
using namespace std;
 int main()
 {
     int n1,n2;
     cin>>n1>>n2;
     int count=0;
     int i=0;
     while(count<=n1)
     {
         if(((3*i)+2)%n2!=0)
         {
             cout<<((3*i)+2)<<endl;
             count++;
         }
         i++;
     }
 }