#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int game(int n,vector<int> &dpi){
    if(n==1) return 0;
    if(dpi[n]!=-1) return dpi[n];
    for(int i=1;i<n;i++){
        if(n%i==0){
            if(game(n-i,dpi)==0) return dpi[n]=1;
        }

    }return dpi[n]=0;
}
int main(){
    vector<int> dpi(100,-1);
    cout<<game(18,dpi);
}