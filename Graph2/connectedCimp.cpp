#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> graph[N];
bool visited[N];
vector <int> cur_cc;
vector <vector<int>> cc;

void dfs(int vertex){
    if(visited[vertex]) return ;
    visited[vertex]=true;
    cur_cc.push_back(vertex);
    for(auto child:graph[vertex]){
        dfs(child);
    }
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
    for(int i=0;i<v;i++){
        cout<<i<<"-->";
         for (auto x : graph[i])
            cout << x;

        cout<<endl;
    }
    for(int i=0;i<v;i++){
        if(visited[i]) continue;
        cur_cc.clear();
        dfs(i);
        cc.push_back(cur_cc);
        count++;
    }
    cout<<count<<endl;
    for(auto ccc:cc){
        for(auto vertex:ccc){
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
}

