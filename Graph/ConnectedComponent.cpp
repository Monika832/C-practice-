# include <iostream> 
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    map <T,list<T>> l;
    

public:
   void addEdge(int x,int y){
    l[x].push_back(y);
    l[y].push_back(x);
   }
   
   void  dfs_helper(T src,map<T,bool> &visited){
       cout<<src<<" ";
       visited[src]=true;
       for(auto n:l[src]){
       if(!visited[n]){
        dfs_helper(n,visited);
         }
       }
   }
   void dfs(){
     map<T,bool> visited;
     for(auto n:l){
        T node =n.first;
        visited[node]=false;
     }
     for(auto p:l){
        T node= p.first;
        int cnt=0;
        if(!visited[node]){
            cout<<"Component="<<cnt<<"-->";
             dfs_helper(node,visited);
        }
     }
    
   } 
};


int main(){
    Graph <int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(0,3);
    g.addEdge(0,4);
    g.addEdge(5,6);
    g.addEdge(6,7);
    g.dfs();
    
    return 0;
}
