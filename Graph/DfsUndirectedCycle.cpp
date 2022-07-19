//Chceking ubdirected graph conyains cyvle or not 

#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list <int> *l;
public:
     Graph(int V){
        this->V=V;
        l=new list<int> [V];
     }
     void addEdge(int x,int y){
        l[x].push_back(y);
        
     }
    
     bool helper(int node,bool *visited,int parent){
        visited[node]=true;
        for(auto nbr:l[node]){
        if(!visited[nbr]){
          bool cycle_exist=helper(nbr,visited,parent);
          if(cycle_exist) return true;
        }
        else if(nbr!=parent){
            return true;
        }
      }
        return false;
     }

     bool cycle(){
        bool *visited=new bool[V];
         for(int i=0;i<V;i++){
           visited[i]=false;
        }
        return helper(0,visited,-1);
     }
};

    int main(){
    Graph g(4);
    //g.addEdge(0,2);
    //g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    //g.addEdge(2,5);
    g.addEdge(3,4);
    g.addEdge(4,5);
    if(g.cycle()){
        cout<<"Yes contain  cycle";
    }
    else{
        cout<<"Not contain";
    }
    return 0;
}