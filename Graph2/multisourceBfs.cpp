//https://www.codechef.com/SNCKPB17/problems/SNSOCIAL/?tab=statement

#include <iostream>
#include <bits/stdc++.h>

using namespace std ;
// const int INF=1e9+10;
const int N=1e2;
int val[N][N];
int vis[N][N];
int lev[N][N];
int n,m;

bool isvalid(int x,int y){
    return x>=0 && y>=0 && x<n && y<m;
}
vector<pair<int,int>> movements{
    {1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}
};
int bfs(){
    int mx=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mx=max(mx,val[i][j]);
        }
     }
     queue <pair<int,int>> q;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(val[i][j]==mx){
                q.push({i,j});
                vis[i][j]=1;
                lev[i][j]=0;
            }
        }
     }
     int ans=0;
     while(!q.empty()){
     pair<int,int> v=q.front();
     int x=v.first;
     int y=v.second;
     q.pop();
     for(auto mov:movements){
        int childx=mov.first+x;
        int childy=mov.second+y;
        if(!isvalid(childx,childy))continue;
        if(!vis[childx][childy]){
            q.push({childx,childy});
            lev[childx][childy]=lev[x][y]+1;
            vis[childx][childy]=1;
            ans=max(ans,lev[childx][childy]);
        }

     }
     }return ans;

}

int main(){
   cin>>n>>m;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>val[i][j];
    }
   }
   cout<<bfs();
return 0;
}