#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    int arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<=n-2;i++){
        for(j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
                int tem;
                tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
                cnt++;
            }
        }
        if(cnt==0){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


}


