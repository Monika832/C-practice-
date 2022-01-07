#include <bits/stdc++.h>
using namespace std;


int steps(int x,int n){
    if(x==n){
        return 1;
    }
    if(x>n){
        return 0;
    }
    int ways1=steps(x+1,n);
    int way2=steps(x+2,n);
    int ans=ways1+way2;
    return ans;
}

int main(){
    int x;
    int n;
    cout<<"Enter on which stepu are"<<endl;
    cin>>x;
    cout<<"Enter on which step u want to go"<<endl;
    cin>>n;
    cout<<"No of ways"<<steps(x,n);
}
