//https://cses.fi/problemset/task/1090


#include <bits/stdc++.h>
using namespace std;
int main(){
     int n,w;
     cin>>n;
     cin>>w;
     vector<int> a(n);
      for (auto &l:a){
          cin>>l;
      }
      sort(a.begin(),a.end());

      int p1=0,p2=n-1;
      int ans=0;
      while(p1<=p2){
          if((p2 != p1) and (a[p2]+a[p1]<=w)){
              p1++;
              p2--;
          }
          else{
              p2--;
          }
          ans++;

      }
      cout<<ans<<endl;


}