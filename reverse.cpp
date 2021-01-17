#include <iostream>
using namespace std;

int main()
{
    int no;
    cin>>no;
    int reverse=0;
    if(no<=1000000000000)
    {
        while(no!=0)
        {
            reverse=reverse*10;
            reverse=reverse+(no%10);
            no=no/10;
        }

        cout<<reverse;

    }

}