#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int count;
    while(n>0){
        count=count+(n&1);
        n=n>>1;
    }
    cout<<count<<" ";
    }
    return 0;
}
