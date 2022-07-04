#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int m[20][20];
void clearG(){
    memset(m,0,sizeof m);
}

void addEdge(int s,int d){
    m[s][d]=1;
    m[d][s]=1;
}

int main(){
   clearG();
   addEdge(6,4);
   addEdge(3,2);
   addEdge(4,1);
   addEdge(1,6);
   for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;



}