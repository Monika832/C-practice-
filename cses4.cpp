//https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>
using namespace std;
 void makepal(string s){
    unordered_map<char,int> h;
    for(int i=0;i<s.length();i++){
        h[s[i]]++;
    }

    int odd=0;
    char odd_c;
    for(auto it=h.begin();it!=h.end();it++){
        if((it->second)%2 !=0){
            odd++;
            odd_c=it->first;
        }
    }

    if(odd>1){
        cout<<"NO SOLUTION";
    }
   else{
    string firsts="";
    string seconds="";
    for(auto s:h){
        string str(s.second/2,s.first);
        firsts=firsts+str;
        seconds=str+seconds;
    }
    if(odd==1){
        cout<< firsts+odd_c+seconds<<endl;
    }
    else{
        cout<< firsts+seconds<<endl;
    }
   } 

}
int main(){
    string s;
    cin>>s;
    makepal(s);
}