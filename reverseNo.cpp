# include <iostream>
using namespace std;

int main(){
    int arr[20];
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    for(i=(n-1);i>=0;i--){
        cout<<arr[i]<<" ";
    }
}