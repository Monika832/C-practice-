#include <iostream>
using namespace std;

int main(){
    int cs=0,ms=0;
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ms=max(ms,cs);
   
    }
    cout<<ms;
    
}