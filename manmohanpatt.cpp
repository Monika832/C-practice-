#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"1"<<endl;
    int row=1;
    while(row<=n-1)
    {
        cout<<row<<"\t";
        int col=0;
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