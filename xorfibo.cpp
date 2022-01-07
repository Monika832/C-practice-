#include <iostream>
using namespace std;

int fibo(int n,int a,int b){
        if(n==0) return a;
        if(n==1) return b;
        if(n==2) return a^b;
        
        return fibo(n%3,a,b);
}
int main(){
    
    int n;
    int a;
    int b;
    cin>>n;
    cin>>a;
    cin>>b;
    fibo(n,a,b);
}