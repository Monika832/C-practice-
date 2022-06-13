#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int fibo(int n,vector<int> &dpi){
  if(n==0) return 0;
  if(n==1) return 1;
  if (dpi[n]!=-1) return dpi[n];
  int ans=fibo(n-1,dpi)+fibo(n-2,dpi);
  dpi[n]=ans;
  return ans;
}

int main(){
   int n;
   cin>>n;
   vector<int> dpi(100,-1);
   cout<<fibo(n,dpi);
}

