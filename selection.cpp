#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    int arr[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min;
    for(int i=0;i<=n-2;i++){
        min=i;
        for(j=i+1;j<=n-1;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


}


