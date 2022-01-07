#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n;
    cin>>n;
    ll k;
    for(k=1;k<=n;k++){
       ll ways=((k*k)*((k*k)-1)/2)-(4*(k-1)*(k-2));
       cout<<ways<<endl;
    }

}