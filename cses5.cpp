//https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> A(n),B(m);
    for(auto &a:A){
        cin>>a;
    }
    for(auto &b:B){
        cin>>b;
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    int ans=0,p1=0,p2=0;

    while(p1<n and p2<m){
        if((B[p2]<=(A[p1]+k)) and  (B[p2]>=(A[p1]-k))){
            ans++;
            p1++;
            p2++;
        }
        else if(B[p2]<(A[p1]-k)){
            p2++;
        }
        else{
            p1++;
        }
    }
    cout<<ans<<endl;


}