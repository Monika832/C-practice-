#include <iostream>
using namespace std;

int main()
{
 
   int binaryNum[32];
    int n;
    int i = 0;
    cin>>n;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    int count=0;
    for (int j = i - 1; j >= 0; j--)
    {    cout << binaryNum[j];
        if(binaryNum[j]==1)
        count++;   
    }
        cout<<endl<<count;

        return 0;
}