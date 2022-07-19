//Topological Sort Using DFS Graphs

# include <iostream> 
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    map <T,list<T>> l;
    

public:
   void addEdge(T x,T y){
    l[x].push_back(y);
   // l[y].push_back(x);
   }
   
   void  dfs_helper(T src,map<T,bool> &visited,list<T> &ordering){
      // cout<<src<<" ";
       visited[src]=true;
       for(auto n:l[src]){
       if(!visited[n]){
        dfs_helper(n,visited,ordering);
         }
       }
       ordering.push_front(src);
       return;
   }
   void dfs(){
     map<T,bool> visited;
    list<T> ordering;
     for(auto n:l){
        T node =n.first;
        visited[node]=false;
     }
     for(auto p:l){
        T node= p.first;
        int cnt=0;
        if(!visited[node]){
            //cout<<"Component="<<cnt<<"-->";
             dfs_helper(node,visited,ordering);
        }
     }

    for(auto node : ordering){
        cout<<node<<endl;
    }
   } 
};


int main(){
    Graph <string> g;
    g.addEdge("p","d");
    g.addEdge("p","py");
    g.addEdge("p","ml");
    g.addEdge("d","ml");
    g.addEdge("py","dl");
    g.addEdge("ml","dl");
    g.addEdge("dl","fa");
    g.addEdge("d","fa");
    g.dfs();
    
    return 0;
}
