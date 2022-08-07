#include <iostream>
#include <bits/stdc++.h>

using namespace std;
const int N=1e3+10;
vector <int> graph[N];
bool visited[N];
void dfs(int vertex){ 
   if(visited[vertex]) return;
   visited[vertex]=true;
   for(auto child:graph[vertex]){
    dfs(child);
   }
}

int main(){
    int v;
    cin>>v;
    int e;
    cin>>e;
     for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=0;i<v;i++){
        cout<<i<<"-->";
         for (auto x : graph[i])
            cout << x;

        cout<<endl;
    }
    dfs(0);
}