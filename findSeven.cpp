#include <iostream>
using namespace std;
 bool contain7(int a[],int n){
    if(n==0){
      return false;
    }
    if(a[0]==7){
        return true;
    }
    return contain7(a+1,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(contain7(a,n)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

}