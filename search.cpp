#include <iostream>
using namespace std;

int main(){
    int arr[50];
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int no;
    int isNot=1;
    cin>>no;
    for(i=0;i<n;i++){
        if(arr[i]==no){
            cout<<"no is there";
            isNot=0;
            break;
        }
    }
    if(isNot==1){
        cout<<"not in array";
    }
    
}
