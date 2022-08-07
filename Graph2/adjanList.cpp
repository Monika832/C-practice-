#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
const int N=1e3+10;

vector <int> graph[N];
int main(){
    int v;
    int e;
    cin>>v>>e;
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
}
