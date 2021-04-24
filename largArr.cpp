#include <iostream>
using namespace std;

int main(){
    int large=0;
    int arr[30];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]>large)
        {
            large=arr[i];
        }
        
    }
    cout<<large;
}