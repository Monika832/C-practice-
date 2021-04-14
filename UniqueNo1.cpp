#include <iostream>
using namespace std;

int main(){
    int n,no;
    cin>>n;
    int xorr=0;
    for(int i=1;i<=n;i++){
        cin>>no;
        xorr=xorr^no;
    }
     cout<<xorr;
}