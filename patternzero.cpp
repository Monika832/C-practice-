#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"1"<<endl;
    int row=2;
    while(row<=n)
    {
        cout<<row<<"\t";
        int col=0;
        while(col<row-2)
        {
            col++;
            cout<<"0\t";
        }
        cout<<row<<endl;
        row++;
    }
    return 0;
}