#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n,m;
    cin>>n>>m;
    vector<int> T(n),C(m);
    for(auto &t:T)cin>>t;
    for(auto &c:C)cin>>c;

    multiset<int > ms;
    for(auto t:T){
        ms.insert(t);
    }

    vector<int> res(m,-1);
    for(int i=0;i<m;i++){
        auto lb=ms.lower_bound(C[i]);

        if((lb!=ms.end()) and (*lb==C[i])){
            res[i]=*lb;
            ms.erase(lb);
        }

        else if(lb!=ms.begin()){
            lb--;
            res[i]=*lb;
            ms.erase(lb);
        }
        
    }
    for(auto r:res){
        cout<<r<<endl;
    }
    return 0;
}