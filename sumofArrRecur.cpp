#include <iostream>
using namespace std;
int sumOfArray(int a[50],int n){
    if(n==0){
        return 0;
    }
    int sum=a[0]+sumOfArray(a+1,n-1);
    return sum;
}
int main(){
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sumOfArray(a,n);


}