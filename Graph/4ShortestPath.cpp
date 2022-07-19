
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
   

   void bfs(T src){
     map<T,int> dis;
     queue <T> q;

     for(auto node_pair:l){
        T node =node_pair.first;
        dis[node]=INT_MAX;
     }
     q.push(src);
     dis[src]=0;
     

    while(!q.empty()){
        T node=q.front();
        q.pop();
        //cout<<" "<<node<<" ";

        for(int n:l[node]){
            if(dis[n]==INT_MAX){
                q.push(n);
                dis[n]=dis[node]+1;
            }
        }
    }
   

    
        for(auto mnode:l){
        T node = mnode.first;
        int d=dis[node];
        cout<<"Node "<<node<<"Dist from src"<<" "<<d<<endl;
        }
    
   }
   
};


int main(){
    Graph <int> g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.bfs(0);
    
    return 0;
}