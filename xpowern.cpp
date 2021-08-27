#include <iostream>
using namespace std;
int powert(int n, int x){
    if(n==0){
        return 1;
    }
    return x*powert(n-1,x);
}
int main(){
    int n;
    int x;
    cin>>n;
    cin>>x;
    cout<<powert(n,x);
}