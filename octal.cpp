#include <iostream>
using namespace std;

//decimal to octal

int main()
{
    int decimal;
    cin>>decimal;
    int octal=0;
    int rev_oct=0;
    while(decimal!=0)
    {
        octal=octal+(decimal%8);
        octal=octal*10;
        decimal=decimal/8;
    }

    while(octal!=0)
    {
        rev_oct=rev_oct*10;
        rev_oct=rev_oct+(octal%10);
        octal=octal/10;
    }
    cout<<rev_oct;
}