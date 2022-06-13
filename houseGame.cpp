#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int game(int i,vector<int> &house,vector<int> &dp){
    if(i>=house.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    int chori=house[i]+game(i+2,house,dp);
    int notchori=0+game(i+1,house,dp);
    dp[i]=max(chori,notchori);
    return dp[i];
}

int main(){
  int n,a;
  cin>>n;
  vector<int> house;
  for(int i=0;i<n;i++){
      cin>>a;
      house.push_back(a);
  }
  
  vector<int> dp(10,-1);
  cout<<game(0,house,dp);

}