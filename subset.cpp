#include <bits/stdc++.h>
using namespace std;

void subset_(vector<int> &v,int i,vector<vector<int>> &ans,vector<int> &temp){
    if(i==v.size()){
        ans.push_back(temp);
    }
    else{
        subset_(v,i+1,ans,temp);
        temp.push_back(v[i]);
        subset_(v,i+1,ans,temp);
        temp.pop_back();
    }
}
int main(){
    vector<int> v={1,2,3},temp;
    vector<vector<int>> ans;
    subset_(v,0,ans,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}