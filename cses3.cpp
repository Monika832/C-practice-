//https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if((n%4==1) || (n%4==2)){
        cout<<"NO"<<endl;
    }
    else{
        vector <int> set1;
        vector <int> set2;
        int start=1;
        if(n%4==3){
           set1.push_back(1);
           set1.push_back(2);
           set2.push_back(3);
           start+=3;
           n-=3;
        }
        for(int i=0;i<(n/4);i++){
            set1.push_back(start);
            set1.push_back(start+3);
            set2.push_back(start+1);
            set2.push_back(start+2);

            start+=4;
        }

        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(auto &s : set1){
            cout<<s<<" ";
        }cout<<endl;

        cout<<set2.size()<<endl;
        for(auto &s : set2){
            cout<<s<<" ";
        }cout<<endl;

    }
}