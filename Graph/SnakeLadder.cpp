#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

template <typename T>

class Graph{
     map <T,list<T>> l;
public:
   void addEdge(T x,T y){
       l[x].push_back(y);
   }
 
   int bfs(T src, T dest){
    map<T,int>dis;
    map<T,T>parent;
    queue <T>q;
    for(auto node_pair:l){
        T node=node_pair.first;
        dis[node]=INT_MAX;
    }
    q.push(src);
    dis[src]=0;
    parent[src]=src;
    
    while(!q.empty()){
        T node=q.front();
        q.pop();
       

        for(int n:l[node]){
            if(dis[n]==INT_MAX){
                q.push(n);
                dis[n]=dis[node]+1;
                parent[n]=node;
            }
        }
    }

    T temp=dest;
    while(temp!=src){
        cout<<temp<<"<--";
        temp=parent[temp];
    }
    cout<<src<<endl;
    return dis[dest];

   }
};


int main(){
    int board[50]={0};

    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=10;
    board[32]=-2;
    board[34]=-22;
    


    Graph <int>g;
    for(int i=0;i<=36;i++){
        for(int dice=0;dice<=6;dice++){
            int j=i+dice;
            j+=board[j];
            if(j<=36){
                g.addEdge(i,j);
            }
        }
    }
    g.addEdge(36,36);
    cout<< g.bfs(0,36);
    return 0;
}