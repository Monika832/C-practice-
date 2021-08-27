#include <iostream>
using namespace std;

 bool isSorted(int *a,int n){
     if(n==1){
         return true;
     }
    bool is=isSorted(a+1,n-1);
    if((a[0]<a[1]) && (is==true)){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(isSorted(a,n)){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }

}
