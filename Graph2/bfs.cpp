#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int  N=1e3+10;
vector<int> graph[N];
bool visited[N];
int level[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    visited[source]=true;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto child:graph[curr]){
            if(!visited[child]){
                q.push(child);
                visited[child]=1;
                level[child]=level[curr]+1;
            }
        }
    }cout<<endl;
}

int main(){
   int n;
   cin>>n;
   for (int  i = 0; i < n-1; i++){
    int x,y;
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
   }
   int source;
   cin>>source;
   bfs(source);  
   for(int i=1;i<=n;i++){
    cout<<i<<":"<<level[i]<<endl;
   } 
}