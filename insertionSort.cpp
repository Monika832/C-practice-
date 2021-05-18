#include <iostream>
using namespace std;

int main(){
    int arr[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr;
    int j;
    for(int i=1;i<=n-1;i++){
        curr=arr[i];
        for( j=i-1;j>=0 && arr[j]>curr;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}