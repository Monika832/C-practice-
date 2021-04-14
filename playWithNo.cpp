#include <iostream>
using namespace std;

int main()
{
    int quer;
    cin>>quer;
    for(int k=1;k<=quer;k++){
    int binaryNum[32];
    int a,b;
    int i = 0;
    cin>>a>>b;
    int count=0;
    for(int n=a;n<=b;n++)
{
    int temp=n;
    while (temp> 0) {
        binaryNum[i] = temp % 2;
        if(binaryNum[i]==1){
        count++; }
        temp=temp/2;
    }

}
    
    cout<<endl<<count;
}
        return 0;
}