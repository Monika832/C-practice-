#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int game(int s,int e,vector <int> &piles,vector<vector<int>> &dp){
    if (s>e) return 0;
    if(dp[s][e] !=-1) return dp[s][e];
    int op1=piles[s]+game(s+1,e,piles,dp);
    int op2=piles[e]+game(s,e-1,piles,dp);
    dp[s][e]= max(op1,op2);
    return dp[s][e];
}

int main(){
    vector <int> piles={1,10,11,5};
    vector<vector<int>> dp(10,vector<int> (10,-1));
    int n=piles.size();
    int ans=game(0,n-1,piles,dp);
    if(ans>0) cout<<"Alice";
    else cout<<"Bob";
}