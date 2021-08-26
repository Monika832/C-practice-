#include <iostream>
#include <algorithm>
using namespace std;


void CountSort(int a[50],int n,int pos){
    int count[50];
    int b[50];
    for(int i=0;i<=9;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        ++count[(a[i]/pos)%10];
    }
    for(int i=1;i<=9;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
       b[--count[(a[i]/pos)%10]]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
    
    
}
void RadixSort(int a[50],int n){
    int mx=*max_element(a,a+n);
    for(int pos=1;mx/pos>0;pos*=10){
        CountSort(a,n,pos);
    }
}
int main(){
    int n;
    cin>>n;
    int k;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      
    }
    cout<<endl;
    cout<<"After sorting"<<" ";
    RadixSort(a,n);
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
}

