#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    int max;
    max=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            if(sum>max){
                max=sum;
            }
            
        }
    }
    cout<<max;
}