

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--){
    ll x,y; 
    cin>>y>>x;
    ll MAX=max(y,x);
    ll MIN=min(y,x);
    if((MAX%2==0) and (MAX==y)){
        cout<<(MAX*MAX)-MIN+1;
    }
    else if((MAX%2==1) and  (MAX==x)){
        cout<<(MAX*MAX)-MIN+1;
    }
    else if((MAX%2==1) and  (MAX==y)){
        cout<<(MAX-1)*(MAX-1)+1+MIN-1;
    }
    else {
        cout<<(MAX-1)*(MAX-1)+1+MIN-1; 
     }cout<<endl;
  }
}