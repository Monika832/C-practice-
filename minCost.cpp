#include <bits/stdc++.h>
using namespace std;


int steps(int i,int n,vector<int>&cost){
    if(i==n-1) return cost[n-1];
    int op=steps(i+1,n,cost);
    if(i+2<=n-1){
        op=min(op,steps(i+2,n,cost));
    }
    return op+cost[i];
}

int main(){
    vector<int> cost={10,20,100,50,10};
    cout<<"minimum cost"<<min(steps(0,5,cost),steps(1,5,cost));
    return 0;
}