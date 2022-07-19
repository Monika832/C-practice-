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
     
    bool helper(int node,bool *visited,bool *stack){
        stack[node]=true;
        visited[node]=true;

        for(int nbr:l[node]){
            if(stack[nbr]==true){
                return true;
            }
            else if(visited[nbr]==false){
                bool exist_cycle=helper(nbr,visited,stack);
                if ( exist_cycle =true){
                    return true;
                }
            }
        }stack[node]=false;
        return false;
    } 
     bool contain_edge(){
        bool *visited=new bool[V];
        bool *stack=new bool[V];
        for(int i=0;i<V;i++){
            stack[i]=visited[i]=false;
        }
        return helper(0,visited,stack);
     }
};

int main(){
    Graph g(6);
    g.addEdge(0,2);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,5);
    g.addEdge(4,5);
    g.addEdge(3,5);
    if(g.contain_edge()){
        cout<<"Yes contain  cycle";
    }
    else{
        cout<<"Not contain";
    }
    return 0;
}

