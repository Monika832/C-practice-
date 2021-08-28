#include <iostream>
using namespace std;
int firstseven(int a[50],int n,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==7){
       return i;
      // cout<<i<<" "; // for all 7
    }
    return firstseven(a,n,i+1);
    
}
int main(){
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   cout<< firstseven(a,n,0);
}