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
        int col=1;
        while(col<row-1)
        {
            col++;
            cout<<"0\t";
        }
        cout<<row<<endl;
        row++;
    }
    return 0;
}