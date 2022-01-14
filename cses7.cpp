//https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector <int> t(m),c(m);
    for (auto &s:t){
        cin>>s;
    }
    for(auto &h:c){
        cin>>h;
    }
    multiset <int>ms;
    for(auto g:t){
        ms.insert(g);
    }
    vector<int> res(m,-1);
    for(int i=0;i<m;i++){
        auto lb=ms.lower_bound(c[i]);

        if((lb!=ms.end()) and (*lb==c[i])){
             res[i]=*lb;
             ms.erase(lb);
        }
        else if ((lb!=ms.begin())){
            lb--;
            res[i]=*lb;
            ms.erase(lb);
        }
    }
    for(auto j:res){
        cout<<j<<endl;
    }
   return 0;
}