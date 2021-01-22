#include <iostream>
using namespace std;

int main()
{
    int totalRow;
    cin>>totalRow;
    int row=1;
    while(row<=totalRow)
    {
        int space=1;
        while(space<=totalRow-row)
        {
            cout<<" \t";
            space++;
        }
        space=row;
        while(space<=2*row-1)
        {
            cout<<space<<"\t";
            space++;
        }
        space=2*row-2;
        while(space>=row){
            cout<<space<<"\t";
            space--;
        }
        cout<<endl;
        row++;
        
    }
}