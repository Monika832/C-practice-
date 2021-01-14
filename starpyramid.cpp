#include <iostream>
using namespace std;

int main()
{
   int totalRow,space,row,symbol;
   cout<<"Enter total Row";
   cin>>totalRow;
   row=1;
   while(row<=totalRow)
   {
       space=1;
       while(space<=totalRow-row)
       {
           cout<<" ";
           space++;
       }
       symbol=1;
       while(symbol<=((2*row)-1))
       {
           cout<<"*";
           symbol++;
       }
       cout<<'\n';
       row++;

   }
}