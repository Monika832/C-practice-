#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<j;
       }
       for(int j=i;j<n;j++)
       {
           cout<<"*";
       }
    cout<<endl;
   }

}
       
