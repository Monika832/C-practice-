#include <iostream>
using namespace std;

int main(){
    int count=0;
    char ch;
    ch=cin.get();
    while(ch!='$')
    {
        count++;
        ch=cin.get();
    }
    cout<<count;
}