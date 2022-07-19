#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

template <typename T>
class Graph{
    map<T,list<T>> l;

    public:
    void addEdge(T x,T y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs(T src){
        map<T,int> visited;
        queue <T>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
           T node=q.front();
           q.pop();
           cout<<node;
           for(auto n:l[node]){
            if(!visited[n]){
                q.push(n);
                visited[n]=true;
            }
           }
        }
    }


};
int main(){
    Graph <int> g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.bfs(0);
    return 0;
}