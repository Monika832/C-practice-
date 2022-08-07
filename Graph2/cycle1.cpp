#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> graph[N];
bool visited[N];


bool dfs(int vertex,int parent){
    
    visited[vertex]=true;
    bool isloopExist =false;
    for(auto child:graph[vertex]){
        if(visited[child] && child==parent) continue;
        if(visited[child]) return true;
        isloopExist |= dfs(child,vertex);
    }
    return isloopExist ;
}
int main(){
     int v;
    cin>>v;
    int e;
    cin>>e;
    int count=0;
     for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    // for(int i=0;i<v;i++){
    //     cout<<i<<"-->";
    //      for (auto x : graph[i])
    //         cout << x;

    //     cout<<endl;
    // }
    bool isloopExist =false;
    for(int i=0;i<v;i++){
        if(visited[i]) continue;
        if(dfs(i,0)){
            isloopExist =true;
            break;
        }
    
    }
    cout<<isloopExist;
   return 0; 
    
}

