#include <iostream>
using namespace std;
int fact(int n);
int ncr(int n,int r);
int fact(int x){
        int ans=1;
        for(int i=x;i>0;i--){
        ans=ans*i;
    }
    return ans;
}
int ncr(int n, int r){
    int final;
    final=fact(n)/fact(r)*fact(n-r);
    return final;

}
 int main(){
    int n,r;
    cin>>n;
    cin>>r;
    ncr(n,r);
    cout<<ncr(n,r);
 }