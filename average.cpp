// Read five numbers and print their average

#include <iostream>
using namespace std;

int main() 
{
    float a,b,c,d,e;
    float avg;
    cout<<"Enter five numbers"<<endl;
    cin>>a>>b>>c>>d>>e;
    avg=(a+b+c+d+e)/5;
    cout<<avg;
}