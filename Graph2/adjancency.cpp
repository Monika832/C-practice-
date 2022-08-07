#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int graph[N][N];
void add_edge(int v1,int v2,int weight){
    graph[v1][v2]=weight;
    graph[v2][v1]=weight;
}
int main(){
    int vertex;
    int edge;
    cin>>vertex>>edge;
    for(int i=0;i<edge;i++){
        int v1,v2,weight;
        cin>>v1>>v2>>weight;
        add_edge(v1,v2,weight);
    }
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
   
}

