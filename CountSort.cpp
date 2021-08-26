#include <iostream>
#include <algorithm>
using namespace std;


void CountSort(int a[50],int n,int k){
    int count[50];
    int b[50];
    for(int i=0;i<=k;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
    for(int i=0;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=0;i<n;i++){
       b[--count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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
    k=*max_element(a,a+n);
    cout<<k<<endl;
    cout<<"After sorting"<<" ";
    CountSort(a,n,k);
}

