#include <bits/stdc++.h>
using namespace std;

bool safe(int i,int j,vector<string> &v){
    int x=i,y=j;
    int flag=0;
    while(x>=0 && y>=0){
        if(v[x][y]=='Q')flag=1;
        x--;
        y--;
    }
    if(flag==1) return false;
    x=i;
    y=j;
    while(x>=0){
        if(v[x][y]=='Q')flag=1;
        x--;
    }
    if(flag) return false;
    x=i;
    y=j;
     while(x>=0 &&y<v[i].size()){
        if(v[x][y]=='Q')flag=1;
        x--;
        y++;
    }
    if(flag) return false;
    return true;
}
void help(int i,vector<string>&v){
    if(i==v.size()){
        res++; 
        return;
        //for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
        //cout<<endl<<endl;
    }
    else{
        for(int j=0;j<v[i].size();j++){
            if(safe(i,j,v)){
                v[i][j]='Q';
                help(i+1,v);
                v[i][j]='.';
            }
        }
    }
}


int main(){
   vector<string> v={".....",".....",".....",".....","....."};
   help(0,v);
}