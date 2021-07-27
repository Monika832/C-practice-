#include <iostream>
using namespace std;

int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i< n;i++){
        cin>>a[i];
    }
    int *ptr=a;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+*(ptr+i);
    }
    cout<<sum;
}