#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int climb(int i,int n,vector<int> &dpi){
    if(i==n) return 1;
    if(i>n) return 0;
    if(dpi[i]!=-1) return dpi[i];
    int op1=climb(i+1,n,dpi);
    int op2=climb(i+2,n,dpi);
    return dpi[i]=op1+op2;
   
}

int main(){
   int n;
   cin>>n;
   vector <int> dpi(100,-1);
   cout<<climb(0,n,dpi);
}